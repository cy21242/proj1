#include <fcntl.h>

int main()
{
	char buff[10];
	int fd;
	fd = open("test.txt", O_RDONLY);
	val = open("test.txt", O_RDONLY);
	if(val < 0){
	perror("open:");
	exit(1);
	}
	read(fd, buff, 10);
	val = read(fd, buff, 10);
	if(val < 0){
	perror("read:");
	exit(1);
	}
	write(1, buff, 10);
	val = write(1, buff, 10);
	if(val < 0){
	perror("write:");
	exit(1);
	}
	close(fd);
	val = close(fd);
	if(val < 0){
	perror("close:");
	exit(1);
	}
}
