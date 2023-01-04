using Constructors;

Person tom = new Person(); //Вызов первого консруктора без параметров
Person bob = new Person("Bob");//Вызоа второго конструктора с одним параметром
Person sam = new Person("Sam", 25);//Вызов третьего конструктора с двумя параметрами

tom.Print();
bob.Print();
sam.Print();