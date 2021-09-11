#include <time.h>
#include <stdio.h>
#include <sys/time.h>


void printnow(time_t now)
{
        time(&now);
        printf("Now is : %s \n", ctime(&now));
        tm = localtime(&now);
        printf("year = %d, month = %d, day = %d, hour = %d\n",
                tm->tm_year + 1900, tm->tm_mon +1, tm->tm_mday, tm->tm_hour);

}

int main()
{
        time_t now;
	struct tm *tm;
        time(&now);
	printnow(now);

	//struct timeval tv;
	
	//gettime
}

