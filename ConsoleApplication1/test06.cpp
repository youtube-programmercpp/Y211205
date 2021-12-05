#include <iostream>
struct sample {
	int n;
	bool succeeded;
	explicit operator bool() const
	{
		return succeeded;
	}
};

sample& f(sample& x)
{
	x.succeeded = (std::cin >> x.n).good();
	return x;
}
int main()
{
	sample x;
	if (f(x))
		std::cout << x.n << '\n';
	else
		std::cout << "“ü—ÍƒGƒ‰[\n";
}
