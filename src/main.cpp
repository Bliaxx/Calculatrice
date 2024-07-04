#include <iostream>
#include "Calculator.h"

int main()
{
	Calculator _calculator;
	std::string _expression;

	std::cout << "Entrez une expression mathematique (ou 'exit' pour quitter):" << std::endl;

	while (true)
	{
		std::cout << " > ";
		std::getline(std::cin, _expression);

		if (_expression == "exit")
			break;

		try
		{
			double _result = _calculator.Calculate(_expression);
			std::cout << "Le resultat de l'expression " << _expression << " est " << _result << std::endl;
		}
		catch (const std::exception& _e)
		{
			std::cerr << "Error : " << _e.what() << std::endl;
		}
	}

	return 0;
}
