#include <stdio.h>

#define min_t(type, x, y) ({type _x = (x); type _y = (y); _x < _y ? _x : _y;})
#define min(x, y)  ({ \
		const typeof(x) _x = (x); \
		const typeof(y) _y = (y); \
		(void) (&_x == &_y);      \
		_x < _y ? _x : _y;})

int main(void)
{

	int a = 5, b = 6, min_val = 0;
	float min_val1 = 0;

	min_val = min_t(char, 6, 7);
	min_val1 = min(10.991,9.88);


	printf("a= %d, b = %d, min = %d; min_val1 = %f\r\n", a, b, min_val, min_val1);
	printf("%s:%s:%d\r\n",__FILE__,__FUNCTION__, __LINE__);
	return 0;
}
