function factorial ( $n : Integer) -> $return : Integer

If ($n<1)
  return 1+0
Else
  return $n*factorial($n-1)
End if
