<html>
<head>
<script src="http://code.jquery.com/jquery-latest.js"></script>
</head>
<body>


<div id="reload"></div>

<script>

$(document).ready(function() {
      var refreshId =  setInterval( function(){
    $('#reload').load('includes/outputsetup.php');
  }, 1000 );
});

</script>
</body>

</html>
<?php
$conectar = mysqli_connect("localhost", "root", "", "ianseo");

$sqlend = "SELECT output, oldout FROM tvoutput";
$resultend = mysqli_query($conectar,$sqlend);

while($mostrar=mysqli_fetch_array($resultend)){
$out1 = $mostrar['output'];
$out2 = $mostrar['oldout'];
}


if ($out1==1) {
  include '../finales/scoreboard.php';
}
if ($out1==2) {
  include '../finales/parquero1.php';
}
if ($out1==3) {
  include '../finales/parquero2.php';
}
if ($out1==4) {
  include '../finales/brackets.php';
}
?>
