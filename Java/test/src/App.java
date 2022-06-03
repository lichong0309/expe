
public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("Hello, World!");
        int[] a1 = {1,2,3,4,5};
		int[] a2;		
		a2 = a1;
		for(int i = 0; i < a2.length; i++)
			a2[i] = a2[i] + 1;
		for(int i = 0; i < a1.length; i++)
		    System.out.println("a1[" + i + "] = " + a1[i]);
        System.out.println("a1和a2指向的地址是否相同：" + (a1 == a2));
        int[] a3 = {1,2,3,4,5};
        System.out.println("a1和a3指向的地址是否相同：" + (a1 == a3));
        int num_1 = 1;
        int num_2 = 1;
        System.out.println("num_1的内存地址是：" + System.identityHashCode(num_1));
        System.out.println("num_2的内存地址是：" + System.identityHashCode(num_2));
        String str1 = "hello";
        String str4 = "hello";
        String str2 = new String("hello");
        String str3 = new String("hello");
        System.out.print("str1 print:" + str1);
        System.out.print("str2 print:" + str2);

        System.out.println("str1的内存地址是：" + System.identityHashCode(str1));
        System.out.println("str2的内存地址是：" + System.identityHashCode(str2));
        // System.out.println("对象的内存地址是：" + System.identityHashCode(new String("hello")));
        System.out.println("str3的内存地址是：" + System.identityHashCode(str3));
        System.out.println("str3的内存地址是：" + System.identityHashCode(str4));


        System.out.println(str1==str4);
        System.out.println(str1.equals(str4));




    }
}

