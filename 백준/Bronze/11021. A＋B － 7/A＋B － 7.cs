using System;
using System.Text;
namespace std
{
    class Program
    {
        static void Main(string[] args)
        {
            StringBuilder sb = new StringBuilder();
            int a = int.Parse(Console.ReadLine());
            for(int i=1; i<=a; i++)
            {
                string[] s = Console.ReadLine().Split();
                int b = int.Parse(s[0]);
                int c = int.Parse(s[1]);
                sb.AppendLine("Case #" + (i) + ": " + (b+c));
            }
            Console.WriteLine(sb.ToString());
        }
    }
}
