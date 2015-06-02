Regular Expressions within TruClient uses the same format as other JavaScript RegEx uses.

To use regular expressions, there are two options:

Use the '/' notation: Replace the quotation marks of a string with a slash.

For example:

/LoadRunner/ is a regular expression that will match any string that contains the word "LoadRunner" in it.

If you need to dynamically create a regular expression (e.g. using a parameter), you can use the regular expression constructor and specify the string. For example, the equivalent of the above example is RegExp("LoadRunner").

The full list of supported regular expressions can be found here:

https://developer.mozilla.org/en/JavaScript/Reference/Global_Objects/RegExp
