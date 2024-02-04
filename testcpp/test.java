public class test {
    public static void main(String[] args){
        int[][] array = {{3,4,3},{3,4,5,3}};
        
        for(int i =0; i<array.length; i++){
            System.out.println();
            for(int j=0; j<array[i].length; j++){
                System.out.print(array[i][j]);
            }
        }
     }
}
