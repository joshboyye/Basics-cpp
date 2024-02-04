
public class starts {
	public static void main (String[] args) {
		printStars(10);
		System.out.println((int)(Math.random()*1)+10);

    }
	
	public static void printStars(int a) {
		for(int i =0; i<a;i++) {
			for(int j =0; j<a-i; j++) {
				System.out.print("");
			}
			for(int k =0; k< i; k++) {
				System.out.print("*");
			}
			for(int v =0; v< i+1; v++)
				System.out.print("*");
			System.out.println();
		}
		/*for(int i =a; i>=0;i--) {
			for(int j =0; j<a-i; j++) {
				System.out.print(" ");
			}
			for(int k =0; k< i; k++) {
				System.out.print("*");
			}
			for(int v =0; v< i+1; v++)
				System.out.print("*");
			System.out.println();
		}*/
	}
}
