class Solution {
    public int maximumWealth(int[][] accounts) {
        int customerWealth=0,maxWealth = 0;
        
        for ( int i=0; i<accounts.length; i++){
            for(int j=0; j<accounts[0].length; j++){
                customerWealth += accounts[i][j];
                if(customerWealth > maxWealth)
                    maxWealth = customerWealth;
            }
            customerWealth = 0;
        }
        return maxWealth;
    }
}