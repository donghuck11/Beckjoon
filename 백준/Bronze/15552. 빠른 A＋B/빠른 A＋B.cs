using System;
using System.Text;

namespace std
{
    class Program
    {
        static void Main(string[] args)
        {
            StringBuilder sb = new StringBuilder();
            int t = int.Parse(Console.ReadLine());
            for(int i = 1; i <= t; i++)
            {
                string[] s = Console.ReadLine().Split();
                sb.Append(int.Parse(s[0]) + int.Parse(s[1]) + "\n");
            }
            Console.WriteLine(sb.ToString());
        }
    }
}
 