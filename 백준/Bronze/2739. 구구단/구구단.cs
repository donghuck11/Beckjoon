using System;
namespace 구구단
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] s = Console.ReadLine().Split();
            int a = int.Parse(s[0]);
            for(int i = 1; i <= 9; i++)
            {
                Console.WriteLine($"{a} * {i} = {a * i}");
            }
        }
    }
}