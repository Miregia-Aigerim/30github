class Solution {

    /**
     * @param String[] $names
     * @param Integer[] $heights
     * @return String[]
     */
    function sortPeople($names, $heights) {
        $size=count($names);
        $result=array();
        for($i=0; $i<$size; $i++){
            $max=$heights[0];
            $index=0;
            for($j=0;$j<$size; $j++){
                if($max<$heights[$j]){
                    $max=$heights[$j];
                    $index=$j;
                }
            }
            $heights[$index]=-1;
            array_push($result, $names[$index]);
        }
      return $result;
    }
}