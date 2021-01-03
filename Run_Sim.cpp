#include <iostream>

using namespace std;

class Nand {

	public:
	auto gate(bool a, bool b)
	{
		return !(a and b);
	}

	auto gate(bool a)
	{
		return !a;
	}
};

class Knot{

	public:
	Nand nand;

};

struct Wire
{
	bool a;
	bool b;
	bool c;
};

class Memory{

	public:
	auto set(bool set, bool bit)
	{
		wire.a = nand[1].gate(set, bit);	
		wire.b = nand[2].gate(set, wire.a);
		wire.c = nand[4].gate(wire.b,o);
		o = nand[3].gate(wire.c, wire.a);

		return o;
	}

	private:
		Nand nand[5];
		bool mem = 0, o = 0;
		Wire wire;
};

class Byte{

	public:
	void byte(bool set, bool bit)
	{
		for(auto i = 0; i <= 7; i++)
		{
			cout << m[i].set(1,0) << " ";
		}

		cout << "\n";
	}

	private:
	Memory m[8];
};

int main()
{
	
	Byte b;

	b.byte(1,0);
	
	
	
	return 0;
}
