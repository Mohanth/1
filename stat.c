#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<string.h>
#include<time.h>
main()
{
struct stat buf;
int i;
i=stat("frst.txt",&buf);
printf("st_dev=%ld\n",buf.st_dev);
printf("st_ino=%ld\n",buf.st_ino);
printf("st_mode=%o\n",buf.st_mode);
printf("st_nlink=%ld\n",buf.st_nlink);
printf("st_atime=%s\n",ctime(&buf.st_atime));
printf("st_size=%ld\n",buf.st_size);
printf("st_uid=%d\n",buf.st_uid);
printf("st_gid=%d\n",buf.st_gid);
printf("st_mtime=%s\n",ctime(&buf.st_mtime));
printf("st_ctime=%s\n",ctime(&buf.st_ctime));
printf("st_blksize=%ld\n",buf.st_blksize);
printf("st_blocks=%ld\n",buf.st_blocks);
}

