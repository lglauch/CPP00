#include <iostream>

int	main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		int i = 1;
		while (argv[i] != 0)
		{
			for (int j = 0; argv[i][j] != 0; j++)
				argv[i][j] = toupper(argv[i][j]);
			std::cout << argv[i];
			i++;
		}
		std::cout << std::endl;
	}
}