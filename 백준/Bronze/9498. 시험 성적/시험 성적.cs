using System;
namespace 조건문
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            int a = int.Parse(s[0]);

            if(a >= 90 && a <= 100)
            {
                Console.WriteLine("A");
            }
            else if(a >= 80 && a <= 89)
            {
                Console.WriteLine("B");
            }
            else if(a >= 70 && a <= 79)
            {
                Console.WriteLine("C");
            }
            else if (a >= 60 && a <= 69)
            {
                Console.WriteLine("D");
            }
            else
            {
                Console.WriteLine("F");            }
        }
    }
}
