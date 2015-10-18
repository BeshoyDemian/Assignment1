Name: beshoy demian basily
Bench no. : 33733

1. A class is a definition of a user-defined type. A class declaration specifies how data is
to be stored, and it specifies the methods (class member functions) that can be used
to access and manipulate that data.
2. A class represents the operations you can perform on a class object with a public
interface of class methods; this is abstraction.The class can use private visibility (the
default) for data members, meaning that the data can be accessed only through the
member functions; this is data hiding. Details of the implementation, such as data
representation and method code, are hidden; this is encapsulation.
3. A class defines a type, including how it can be used.An object is a variable or
another data object, such as that produced by new, which is created and used
according to the class definition.The relationship between a class and an object is
the same as that between a standard type and a variable of that type.
4. If you create several objects of a given class, each object comes with storage for its
own set of data. But all the objects use the one set of member functions. (Typically,
methods are public and data members are private, but that’s a matter of policy, not
of class requirements.)

6. A class constructor is called when you create an object of that class or when you
explicitly call the constructor. A class destructor is called when the object expires.



8. A default constructor either has no arguments or has defaults for all the arguments.
Having a default constructor enables you to declare objects without initializing
them, even if you’ve already defined an initializing constructor. It also allows you to
declare arrays.



10. The this pointer is available to class methods. It points to the object used to
invoke the method.Thus, this is the address of the object, and *this represents the
object itself.
