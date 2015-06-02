This is an example of how to create a web service call within TruClient, 
using the **window.XMLHttpReques**t object natively recognized by all browsers.

```
var xhReq = new XMLHttpRequest();
```

This is used instead of calls to the **$.query** function in the jQuery library 
which most front-end JavaScript developers "blindly" adopt today.

Using the native object requires no additional memory to hold jQuery.
Having less code to execute within TruClient means scripts execute faster.

Other examples may use a different instatiated object (instance) name than "xhReq":
* "result" is used in http://rest.elkstein.org/2008/02/using-rest-in-javascript.html
* http://stackoverflow.com/questions/8567114/how-to-make-an-ajax-call-without-jquery
* http://blog.garstasio.com/you-dont-need-jquery/ajax/  by Ray Nicols who explains it all to someone who only knows jQuery.
* http://www.w3schools.com/ajax/tryit.asp?filename=tryajax_first


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

The **open** method specifies the action portion of the full URI to
the website which responds to sample REST API calls:

```
  http://ajaxify.com/run/xmlHtttpRequestCall/sumGet.php?figure1=5&figure2=10
```

You can change the numbers 5 and 10 specified to the right of figure1= and figure2=
to see the response of the two numbers addeded together.
(The 3rd-party website may be down when you get to it)

### send

The send method places the request into the network.
null is the default value so it doesn't need to be specified.

### xhReq.responseText

xhReq.responseText is the built-in attribute the browser populates with the response to the request sent.

The value can be saved to a custom variable that is poped up in an alert for the developer to dismiss.


## <a name="CallingFunc">The Calling Function</a>


## <a name="IEVariant">Variant code for Microsoft IE 5 and 6</a>

Ironically, Microsoft was the first to have its internet browser send async code, in IE 5,
in an ActivX component

However, other browsers came to use a different function.

So as of IE7 Microsoft relented and switched to the "industry standard".

### Other Examples

If you want a self-contained example:
http://www.w3schools.com/ajax/tryit.asp?filename=tryajax_callback provides a complete example

  // Cross-browser native JavaScript to call REST API:
  // From http://rest.elkstein.org/2008/02/using-rest-in-javascript.html
