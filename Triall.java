/*input
8
1
2
3
4
5
6
7
8
*/
import java.util.*;
class Triall{

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int a=sc.nextInt();
		int arr[]=new int[a];
		int x=0;
		for(int i=0;i<a;i++){

			arr[i]=sc.nextInt();
		    x=x+arr[i];
		}
		System.out.println(a+"  "+x+"  "+arr);
	}
}
