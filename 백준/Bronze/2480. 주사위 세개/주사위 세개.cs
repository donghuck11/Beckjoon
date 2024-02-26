using System;
namespace dice
{
    class Program
    {
        private static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            int a = int.Parse(s[0]);
            int b = int.Parse(s[1]);
            int c = int.Parse(s[2]);
            if (a == b && b == c)
            {
                Console.WriteLine((1000 * a) + 10000);
            }
            else if (a == b) 
            {
                Console.WriteLine((a * 100) + 1000);
            }
            else if (b == c)
            {
                Console.WriteLine((b * 100) + 1000);
            }
            else if (a == c)
            {
                Console.WriteLine((a * 100) + 1000);
            }
            else
            {
                if(a > b && a > c)
                {
                    Console.WriteLine(a * 100);
                }
                else if(b > c &&  b > a)
                {
                    Console.WriteLine(b * 100);
                }
                else
                {
                    Console.WriteLine(c * 100);
                }
            }
        }
    }
}
