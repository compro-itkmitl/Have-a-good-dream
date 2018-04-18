firebase.auth().onAuthStateChanged(function(user) {
  if (user) {
    // User is signed in.

    document.getElementById("user_div").style.display = "block";
    document.getElementById("login_div").style.display = "none";

    var user = firebase.auth().currentUser;

    if(user != null){

      var email_id = user.email;

    }

  } else {
    // No user is signed in.

    document.getElementById("user_div").style.display = "none";
    document.getElementById("login_div").style.display = "block";

  }
});

var provider = new firebase.auth.FacebookAuthProvider();
function login(){
  firebase.auth().signInWithPopup(provider).then(function(result) {
    var token = result.credential.accessToken;
    var user = result.user;
  }).catch(function(error) {
    var errorCode = error.code;
    var errorMessage = error.message;
    var email = error.email;
    var credential = error.credential;
  });
}

function logout(){
  firebase.auth().signOut();
}

document.addEventListener('DOMContentLoaded', function () {
  var checkbox = document.querySelector('input[type="checkbox"]');

  checkbox.addEventListener('change', function OnOff() {
    if (checkbox.checked) {
      firebase.database().ref('pc/data').set(0);
      firebase.database().ref('pc/cradle_id').set(document.getElementById("cradle_id").value);
      console.log('Checked');
    } else {
      firebase.database().ref('pc/data').set(1);
      firebase.database().ref('pc/cradle_id').set(document.getElementById("cradle_id").value);
      console.log('Not checked');
    }
  });
});
