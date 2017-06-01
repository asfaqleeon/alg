using System.IO;
using System;

class Program
{
    static void Main()
    {
        int f0=0,f1=1,fn=0;
        for(int i=0;i<3;i++){
            fn=f0+f1;
            f0=f1;
            f1=fn;
        }
        Console.WriteLine(fn);
    }
}
