using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Constructors
{
    class Person
    {
        public string name;
        public int age;
        public Person() { name = "Undifined"; age = 18; } //1 constructor
        public Person(string n) { name = n; age = 18; } //2 constructor
        public Person(string n, int a) { name = n; age = a; } //3 constructor

        public void Print()
        {
            Console.WriteLine($"Name: {name} Age: {age}");
        }
    }
}
