#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    int ret = 0;
    char arr[]= "Marvellous Infosyustems";

    fd = open("Marvellous.txt",O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file");
    }
    else{
        printf("File gets opened with fd: %d\n",fd);

        ret = write(fd,arr,10);

        printf("%d bytes gets written into the file \n",ret);
    }

    close(fd);

    return 0;
}