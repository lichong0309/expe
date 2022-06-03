package app;


public class App {
    public static void main(String[] args){
        Son s1 = new Son("jun");
        // System.out.println(s1);
        s1.age = 10;
        Son s2 = new Son("jun");
        s2.age = 10;
        String str1 = "jun";
        String str2 = new String("jun");
        int i1 = 10;
        Integer i2 = 10;
        Integer i3 = Integer.valueOf(10);
        System.out.println("s1的name地址为：" + System.identityHashCode(s1.name));
        System.out.println("s2的name地址为：" + System.identityHashCode(s2.name));
        System.out.println("str1的地址为：" + System.identityHashCode(str1));
        System.out.println("str2的地址为：" + System.identityHashCode(str2));

        System.out.println("s1的age地址为：" + System.identityHashCode(s1.age));
        System.out.println("s2的age地址为：" + System.identityHashCode(s2.age));
        System.out.println("i1的地址为：" + System.identityHashCode(i1));
        System.out.println("i2的地址为：" + System.identityHashCode(i2));
        System.out.println("i3的地址为：" + System.identityHashCode(i3));

        System.out.println("Hello world test!");
    }
    
}
