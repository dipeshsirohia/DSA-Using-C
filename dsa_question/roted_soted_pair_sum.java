// import java.io.*;
public class roted_soted_pair_sum {

  static  boolean pairFound(int arr[],int n, int X){
        int i;
        for(i=0;i<n;i++){
            if(arr[i]>arr[i+1]){
                break;
            }
        }
        int r=i;
        int l=(i+1)%n;

        while(r!=l){
            if(arr[r]+arr[l]==X){
                return true;
            }

            else if(arr[r]+arr[l]<X){
                l=(l+1)%n;
            }

            else {
                r=(n+r-1)%n;
            }
        }
        return false;
    }

    public static void main(String[] args) {
        int arr[] = { 11, 15, 6, 8, 9, 10 };
        int X = 30;
        int N = arr.length;
        
        if(pairFound(arr, N, X)){
           System.err.println("true");
        }
        else{
            System.out.println("false");
        }
    }
}