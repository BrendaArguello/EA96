import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<Boolean> kidsWithCandies(List<Integer> candies, int extraCandies) {

        List<Boolean>result=newArrayList();
        int greatest=0;
        for(int  i=0; i < candies.size(); i++){
            if(greatest<=candies.get(i)){
                greatest=candies.get(i);
            }
        }

        for(int i=0; i< candies.size(); i++){
            result.add(candies.get(i)+extraCandies>=greatest);
        }
        return result;
    }
}