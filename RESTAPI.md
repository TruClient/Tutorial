This script presents an example of how to create a simple web service, from the ground up, within TruClient, 

Before we begin, note that most front-end developers today would code web service using 
a **$.query** function from the jQuery library. 

However, here we instead use the **window.XMLHttpReques**t object natively recognized by browsers processing HTML4 and 5:

```
var xhReq = new XMLHttpRequest();
```

Using this native object requires no additional memory to hold jQuery.
Having less code to execute within TruClient means scripts execute faster.


**xhReq** is "hungarian notation" for XML HTTP Request.
Other examples may use a different instatiated object (instance) name than "xhReq":
* "result." is used in http://rest.elkstein.org/2008/02/using-rest-in-javascript.html
* "xmlhttp." ins http://www.w3schools.com/ajax/tryit.asp?filename=tryajax_first
* http://stackoverflow.com/questions/8567114/how-to-make-an-ajax-call-without-jquery
* http://blog.garstasio.com/you-dont-need-jquery/ajax/  by Ray Nicols who explains it all to someone who only knows jQuery.


Native JavaScript code [from this website](http://ajaxpatterns.org/XMLHttpRequest_Call)
to make a **sychronous** call is:

```
 var xhReq = new XMLHttpRequest();
 xhReq.open("GET", "sumGet.phtml?figure1=5&figure2=10", false);
 xhReq.send(null);
 
 var serverResponse = xhReq.responseText;
 alert(serverResponse); // Shows "15"
 ```

In a TruClient script the code above is within the **JS-functions.js** file 
automatically created in every TruClient script.
The code above is also within

```
function xhReq_add(){
```

### open URL

The **open** method has 3 parameters.

* The "GET" action is used because the whole request is in the URL,
  rather than a "POST" action which provides additional data in the request.
  

* The middle parameter specifies the action portion of the full URI to
the website which responds to sample REST API calls:

```
  http://ajaxify.com/run/xmlHtttpRequestCall/sumGet.php?figure1=5&figure2=10
```

You can change the numbers 5 and 10 specified to the right of figure1= and figure2=
to see the response of the two numbers addeded together.
(The 3rd-party website may be down when you get to it)

In [another example](http://www.w3schools.com/ajax/ajax_xmlhttprequest_send.asp),
an additional parameter is added to generate a random number to ensure that data is not cached:

```
xhReq.open("GET","demo_get.asp?t=" + Math.random(),true);
```

* The 3rd parameter has a value of "true" for asychronouse (requiring a callback)
 or "false" for sychronous (requiring user to wait until response is returned from server).

### setTimeout

In case the server is stuck in a loop, [this website](http://ajaxpatterns.org/XMLHttpRequest_Call#Detecting_Errors)
recommends this code to know when to abort the call so processing can continue:

```
   var requestTimer = setTimeout(function() {
     xhReq.abort();
     // Handle timeout situation, e.g. Retry or inform user.
   }, MAXIMUM_WAITING_TIME);
 ```



### setRequestHeader

An additional line of code is added:

```
xhReq.setRequestHeader("Content-type","application/x-www-form-urlencoded");
```

### send

The send method places the request into the network.

"null" is specified for GETs and replaced text for POST requests.


### xhReq.responseText

xhReq.responseText is the built-in attribute the browser populates with the response to the request sent.

The value can be saved to a custom variable that is poped up in an alert for the developer to dismiss.

## <a name="AsyncCallingFunc">The Asynchronous Calling Function</a>

If it's true that an asynchronous call is specified, the responseText is received after
an **onreadystatechange** event occurs with an OK (200) response code:

```
xmlhttp.onreadystatechange=function()
  {
  if (xmlhttp.readyState==4 && xmlhttp.status==200)
    {
    document.getElementById("myDiv").innerHTML=xmlhttp.responseText;
    }
  }
```

For those who are uncomfortable with the number 4 (as a bad luck word) in
xmlhttp.readyState==4, instead use xmlhttp.readyState.DONE.

### <a name="CallingFunc">The Synchronous Calling Function</a>



### <a name="IEVariant">Variant code for Microsoft IE 5 and 6</a>

Ironically, Microsoft was the first to have its internet browser send async code, in IE 5,
in an ActivX component

However, other browsers came to use a different function.

So as of IE7 Microsoft relented and switched to the "industry standard".

### Other Examples

If you want a self-contained example:
http://www.w3schools.com/ajax/tryit.asp?filename=tryajax_callback provides a complete example

  // Cross-browser native JavaScript to call REST API:
  // From http://rest.elkstein.org/2008/02/using-rest-in-javascript.html

A more complete real-life example is
http://geoserver.geo-solutions.it/edu/en/rest/js_rest_examples.html#
