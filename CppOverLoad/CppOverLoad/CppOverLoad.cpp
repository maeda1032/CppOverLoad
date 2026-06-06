
#include <iostream>

class keisan
{
public:
	keisan();
	~keisan();
	
	int add(int i1,int i2)
	{
		std::cout << "呼ばれた数値は" << i1 << "," << i2 << std::endl;
		return i1 + i2;
	}
	float add(float f,float f1)
	{
		std::cout << "呼ばれた数値は" << f << "," << f1 <<std::endl;
		return f + f1;
	}
	double add(double d,double d1)
	{
		std::cout << "呼ばれた数値は" << d << "," << d1 << std::endl;
		return d + d1;
	}
	int add(int i1,int i2,int i3)
	{
		std::cout << "呼ばれた数値は" << i1 << "," << i2 << "," << i3 << std::endl;
		return i1 + i2 + i3;
	}
private:

};

keisan::keisan()
{
}

keisan::~keisan()
{
}



int main()
{
	int i = 5;
	int i1 = 2;
	int i2 = 3;
	int i3 = 6;
	float f = 1.2f;
	float f1 = 5.3f;
	double d = 10;
	double d1 = 15;


	keisan keisan1;
	int addI = keisan1.add(i,i1);
	float addF = keisan1.add(f,f1);
	double addD = keisan1.add(d,d1);
	int addIP = keisan1.add(i1,i2,i3);

	std::cout << "intの計算結果" << addI << std::endl;
	std::cout << "floatの計算結果" << addF << std::endl;
	std::cout << "doubleの計算結果" << addD << std::endl;
	std::cout << "複数のintの計算結果" << addIP << std::endl;
}
