This is an example of how to create a web service call within TruClient, 
using the **window.XMLHttpReques**t object natively recognized by all browsers.

```
var xhReq = new XMLHttpRequest();
```

This is used instead of calls to the **$.query** functions in the jQuery library 
(which most front-end JavaScript developers blindly adopt today) 
in order to minimize memory use and for quicker execution within TruClient.

Other examples use a different name than xhReq.
* http://stackoverflow.com/questions/8567114/how-to-make-an-ajax-call-without-jquery
* http://blog.garstasio.com/you-dont-need-jquery/ajax/  by Ray Nicols who explains it all to someone who only knows jQuery.
* http://www.w3schools.com/ajax/tryit.asp?filename=tryajax_first

A public website that responds to sample REST API calls is:
http://ajaxify.com/run/xmlHtttpRequestCall/sumGet.php?figure1=5&figure2=10

You can change the numbers 5 and 10 specified to the right of figure1= and figure2=
to see the response of the two numbers addeded together.
(The 3rd-party website may be down when you get to it)

If you want a self-contained example:
http://www.w3schools.com/ajax/tryit.asp?filename=tryajax_callback provides a complete example
