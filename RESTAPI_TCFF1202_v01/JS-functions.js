//
// To view/edit the script, click the Develop Script button
//
// This file defines the data and functions that will be used by EvalJavaScript
// steps in the script


function login_get(){
	//
}

function login_callback(){
	// document.getElementById("txtName").value = xhReqs["Name"];
}

function xhReq_synchronous_call(){
  var xhReq;
  var serverResponse;
  
  xhReq = new XMLHttpRequest();

  xhReq.open("GET", "http://ajaxify.com/run/xmlHtttpRequestCall/sumGet.phtml?figure1=5&figure2=10", false);
//  xhReq.open("GET", "sumGet.phtml?figure1=5&figure2=10", false);
  xhReq.setRequestHeader("X-Requested-With", "XMLHttpRequest");

  xhReq.send(null);
  serverResponse = xhReq.responseText; // false = sychronous.
  
  console.log( "VALID:" + xhRef.serverResponse ); // Shows "15"
  // TODO: parse response to split into LR parameters.
}
 
function xhReq_async_call() {

  var xhReq = null;
  if (window.XMLHttpRequest) {      // FireFox, Safari, etc.
    xhReq = new XMLHttpRequest();

    if (typeof xmlhttp.overrideMimeType != 'undefined') {
      xhReq.overrideMimeType('text/xml');
      xhReq.onreadystatechange = function(){

       if(xhReq.readyState==XMLHhttpRequest.DO
       && xhReq.status=200
       ){
      		console.log(xhRef.responseText);
      		// document.getElementById('???').innerHTML = xhReq.responseText;
      	}else
      		console.log( "ERROR:" + xhRef.responseText);
      }

      xhReq.open('GET','api/login',true);
      xhReq.send();
    }
  }else 
  if (window.ActiveXObject) {  // MSIE 5 & 6:
     xhReq = new ActiveXObject("Microsoft.XMLHTTP");
  }else{
    // No known mechanism -- consider aborting the application.
  }

  return xhReq;
}

// NOTE: http://chimera.labs.oreilly.com/books/1234000001655/ch01.html#what_to_doquestion_mark
// is not applicable to TruClient which avoids libraries that take memory.