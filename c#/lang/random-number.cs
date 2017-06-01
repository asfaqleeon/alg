using System.IO;
using System;

class Program
{
    static void Main()
    {
        Random rnd = new Random();
        
        int month = rnd.Next(1, 13);  // 1 <= month < 13
        int dice = rnd.Next(1, 7);    // 1 <= dice < 7
        int card = rnd.Next(52);      // 0 <= card < 52
        
        Console.WriteLine(month+"\n"+dice+"\n"+card);
    }
}
