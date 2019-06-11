#include<iostream>
#include<ctime>
//我的时间测量函数

	clock_t t_start, t_stop;
	double duration;
	void start()
	{
		t_start = clock();
	}
	void display()
	{
		std::cout << "Runtime:" << ((double)(t_stop - t_start)) / CLK_TCK << std::endl;
	}
	void stop()
	{
		t_stop = clock();
		display();
	}
