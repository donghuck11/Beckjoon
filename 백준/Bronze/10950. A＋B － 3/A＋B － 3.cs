using System;
namespace 반복문
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            int a = int.Parse(s[0]);
            for(int i=1; i<=a; i++)
            {
                string[] t = Console.ReadLine().Split();
                int b = int.Parse(t[0]);
                int c = int.Parse(t[1]);
                Console.WriteLine($"{b+c}");
            }
        }
    }
}
