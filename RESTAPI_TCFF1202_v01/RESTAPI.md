This script presents an example of how to code a simple web service call, from the ground up, within TruClient.

## Calling JavaScript Functions

To call a JavaSceipt function from within TruClient:

 1. Create a new TruClient Firefox script.
 2. Click **Develop Script** for the Firefox window.
 3. Click on Toolbox and its **Miscellaneous** tab.
 4. Drag **Evaluate JavaScript** and drop on the steps pane.
 5. Click on **[Code]** to open the dialog.
 6. In the Arguments: Code text field, type a function name including the quotes,
    and without the () parentheses usually specificed in calls of JavaScript functions.
  For example:
  
  `"xhReq_synchronous_call"`

 7. Click the Run icon, knowing that a "is not defined" exception is issued if the function is not defined.

 In TruClient scripts, JavaScript functions are coded within the **JS-functions.js** file 
 automatically created in every TruClient script.

 8. Click the Save icon (diskette) to save the code.
 9. Exit the browser to return to VuGen.


## <a name="NoJQuery"> No jQuery</a>

Even though most front-end developers today code web service using 
a **$.query** function from the <a target="_blank" href="http://api.jquery.com/jQuery.ajax/">
jQuery xhr API library</a>, 
with TruClient we instead use native objects which require no additional memory to hold the library.
Having less code to execute within TruClient means scripts execute faster.

Ironically, Microsoft was the first to have its internet browser send async code, in IE 5,
in a Microsoft-specific ActivX component:

```
 if (window.ActiveXObject) {  // MSIE 5 & 6:
   xhReq = new ActiveXObject("Microsoft.XMLHTTP");
```

However, other browsers came to use a different object natively recognized by browsers processing HTML4 and 5:

```
if (window.XMLHttpRequest) {      // FireFox, Safari, etc.
  var xhReq = new XMLHttpRequest();
```

As of IE7 Microsoft relented and recognize this "industry standard" for instantiating the AJAX object. 


## Instantiate as xhReq vs. xmlhttp

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
xhReq.readyState == 4, instead use built-in constant **XMLHhttpRequest.DONE**.

### <a name="CallingFunc">The Synchronous Calling Function</a>




### Other Examples

If you want a self-contained example:
http://www.w3schools.com/ajax/tryit.asp?filename=tryajax_callback provides a complete example
calling a file (named ajax_info.txt).

  // Cross-browser native JavaScript to call REST API:
  // From http://rest.elkstein.org/2008/02/using-rest-in-javascript.html

A more complete real-life example is
http://geoserver.geo-solutions.it/edu/en/rest/js_rest_examples.html#
