
           <script language="javascript" type="text/javascript">
// initialize with parameters
var flashvars = {
    // indicate the parser, aspx / csharp /
    //       javascript / css / vbscript / html / xml
    parser: "aspx",
    
    // set the editor to read-only mode
    readOnly: false,    

    // the editor detects client installed fonts
    // and use preferred fonts if installed.
    // NOTE: the charactor '|' is required at the begin and end of the list
    preferredFonts : 
      "|Fixedsys|Fixedsys Excelsior 3.01|Fixedsys 
       Excelsior 3.00|Courier New|Courier|",

    // indicate the callback function so that we
    // can load the content into editor once it is initialized.
    onload : function() {
        // call setText to load content into editor
        document.getElementById('ctlFlash').setText( 
                 document.getElementById('content').value );
        document.getElementById('content').style.display = 'none';
    }
};

// flash player parameters, you can find more information
// at: http://code.google.com/p/swfobject/wiki/documentation
var params = { menu: "false", 
    wmode : "transparent", allowscriptaccess : "always" };

// define the id of the flash control, we need the id in javascript interaction 
var attributes = { id: "ctlFlash", name: "ctlFlash" };

// embed the flash with size, more information can be
// found at: http://code.google.com/p/swfobject/wiki/documentation
swfobject.embedSWF("CodeHighlightEditor.swf", 
  "flashContent", "800", "600", 
  "10.0.0", null, flashvars, params, attributes);
</script> 

     
