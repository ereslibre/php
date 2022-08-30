<?php

  function myInverse($x) {
    if (!$x) {
      throw new Exception("division by zero");
    }
    return 1 / $x;
  }

  try {
    echo myInverse(5) . "\n";
    echo myInverse(0) . "\n";
  } catch (Exception $e) {
    echo "Exception caught: ", $e->getMessage(), "\n";
  }
?>