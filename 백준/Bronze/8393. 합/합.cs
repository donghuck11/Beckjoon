using System;
using System.Diagnostics.CodeAnalysis;
namespace sum
{
    class Program
    {
        static void Main(string[] args)
        {
            String[] s = Console.ReadLine().Split();
            int a = int.Parse(s[0]);
            int sum = 0;
            for(int i=1; i<=a; i++)
            {
                sum += i;
            }
            Console.WriteLine(sum);
        }
    }
}
