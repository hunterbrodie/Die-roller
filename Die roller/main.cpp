#include "Header.h"

int main()
{
	while (true)
	{
		int die;
		int amount;
		std::string d = "d";
		std::string xinput;
		std::cin >> xinput;
		if (xinput == "stop")
		{
			break;
		}
		std::string str(xinput);
		std::size_t found = str.find(d);
		std::string stramount = xinput.substr(0, found);
		std::size_t found1 = str.rfind(d);
		std::string strdie = xinput.substr(found1+1);
		std::stringstream temp(stramount);
		temp >> amount;
		std::stringstream temp1(strdie);
		temp1 >> die;
		diceroller(amount, die);
	}
	return 0;
}