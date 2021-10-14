exposed Function getXliffs($resnames : Object)->$labels : Object
	$labels:=New object:C1471()
	For each ($attribut; $resnames)
		$labels[$attribut]:=This:C1470.readXliff($resnames[$attribut]; $attribut)
	End for each 
