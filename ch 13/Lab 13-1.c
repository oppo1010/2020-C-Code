#include <stdio.h>
#include <string.h>

struct position {
	double latitube;
	double longitube;
};

int main(void)
{
	struct city {
		char* name;
		struct position place;
	};
	struct city seoul, newyork;
	seoul.name = "����";
	seoul.place.latitube = 37.33;
	seoul.place.longitube = 126.58;
	newyork.name = "����";
	newyork.place.latitube = 40.8;
	newyork.place.longitube = 73.9;

	printf("[%s] ���� = %.1f �浵 %.1f\n", seoul.name, seoul.place.latitube, seoul.place.longitube);
	printf("[%s] ���� = %.1f �浵 %.1f\n", newyork.name, newyork.place.latitube, newyork.place.longitube);
	
	return 0;
}