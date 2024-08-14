#include "./header/libasm.h"
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <fcntl.h>

int main(void) {
    printf("----------------ft_strlen----------------\n\n");

    char len1[10] = "coucou !\n\0";
    printf("string : %s\n", len1);
    printf("real   : %ld\n", strlen(len1));
    printf("libasm : %ld\n", ft_strlen(len1));
    printf("\n");

    char len2[2] = "\0";
    printf("string : %s\n", len2);
    printf("real   : %ld\n", strlen(len2));
    printf("libasm : %ld\n", ft_strlen(len2));
    printf("\n");

    char len3[1034] = "AsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwEarTyUid\0";
    printf("string : %s\n", len3);
    printf("real   : %ld\n", strlen(len3));
    printf("libasm : %ld\n", ft_strlen(len3));
    printf("\n");

    printf("----------------ft_strcpy----------------\n\n");

    char cpy1[10] = "coucou !\0";
    char *res1 = malloc(sizeof(char) * 10);
    printf("string : %s\n", cpy1);
    printf("real   : %s\n", strcpy(res1, cpy1));
    printf("libasm : %s\n", ft_strcpy(res1, cpy1));
    printf("\n");
    free(res1);

    char cpy2[1] = "\0";
    char *res2 = malloc(sizeof(char) * 1);
    printf("string : %s\n", cpy2);
    printf("real   : %s\n", strcpy(res2, cpy2));
    printf("libasm : %s\n", ft_strcpy(res2, cpy2));
    printf("\n");
    free(res2);

    char cpy3[1034] = "AsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwEarTyUid\0";
    char *res3 = malloc(sizeof(char) * 1034);
    printf("string : %s\n", cpy3);
    printf("real   : %s\n", strcpy(res3, cpy3));
    printf("libasm : %s\n", ft_strcpy(res3, cpy3));
    printf("\n");
    free(res3);

    printf("----------------ft_strcmp----------------\n\n");

    char cmp1[10] = "coucou !\0";
    char cmp1bis[10] = "coucou !\0";
    printf("string : %s, %s\n", cmp1, cmp1bis);
    printf("real   : %d\n", strcmp(cmp1, cmp1bis));
    printf("libasm : %d\n", ft_strcmp(cmp1, cmp1bis));
    printf("\n");

    char cmp2[10] = "coucou !\0";
    char cmp2bis[10] = "coucou\0";
    printf("string : %s, %s\n", cmp2, cmp2bis);
    printf("real   : %d\n", strcmp(cmp2, cmp2bis));
    printf("libasm : %d\n", ft_strcmp(cmp2, cmp2bis));
    printf("\n");

    char cmp3[10] = "couca\0";
    char cmp3bis[10] = "coucou !\0";
    printf("string : %s, %s\n", cmp3, cmp3bis);
    printf("real   : %d\n", strcmp(cmp3, cmp3bis));
    printf("libasm : %d\n", ft_strcmp(cmp3, cmp3bis));
    printf("\n");

    printf("----------------ft_write----------------\n\n");

    char wr1[10] = "coucou !\0";
    printf("string : %s\n", wr1);
    printf(" : real   : %ld\n", write(1, wr1, strlen(wr1)));
    perror("errno value is ");
    errno = 0;
    printf(" : libasm : %ld\n", ft_write(1, wr1, ft_strlen(wr1)));
    perror("errno value is ");
    errno = 0;
    printf("\n");

    char wr2[10] = "coucou !\0";
    printf("string : %s\n", wr2);
    printf(" : real   : %ld\n", write(45, wr2, strlen(wr2)));
    perror("errno value is ");
    errno = 0;
    printf(" : libasm : %ld\n", ft_write(45, wr2, ft_strlen(wr2)));
    perror("errno value is ");
    errno = 0;
    printf("\n");

    char wr3[10] = "coucou !\0";
    printf("string : %s\n", wr3);
    printf(" : real   : %ld\n", write(1, wr3, 3));
    perror("errno value is ");
    errno = 0;
    printf(" : libasm : %ld\n", ft_write(1, wr3, 3));
    perror("errno value is ");
    errno = 0;
    printf("\n");

    printf("-----------------ft_read-----------------\n\n");

    int file1 = open("./testforread.txt", O_RDONLY);
    char *rd1 = malloc(sizeof(char) * 1000);
    printf("real   : %ld\n", read(file1, rd1, 10));
    perror("errno value is ");
    errno = 0;
    printf("libasm : %ld\n", ft_read(file1, rd1, 10));
    perror("errno value is ");
    errno = 0;
    printf("\n");

    printf("real   : %ld\n", read(file1, rd1, 150));
    perror("errno value is ");
    errno = 0;
    printf("libasm : %ld\n", ft_read(file1, rd1, 150));
    perror("errno value is ");
    errno = 0;
    printf("\n");

    printf("real   : %ld\n", read(file1, rd1, 1000));
    perror("errno value is ");
    errno = 0;
    printf("libasm : %ld\n", ft_read(file1, rd1, 1000));
    perror("errno value is ");
    errno = 0;
    printf("\n");
    close(file1);

    int file2 = open("./nan", O_RDONLY);
    printf("real   : %ld\n", read(file2, rd1, 1000));
    perror("errno value is ");
    errno = 0;
    printf("libasm : %ld\n", ft_read(file2, rd1, 1000));
    perror("errno value is ");
    errno = 0;
    printf("\n");

    int file3 = open("Sources", O_RDONLY);
    printf("real   : %ld\n", read(file3, rd1, 1000));
    perror("errno value is ");
    errno = 0;
    printf("libasm : %ld\n", ft_read(file3, rd1, 1000));
    perror("errno value is ");
    errno = 0;
    printf("\n");
    rd1[150] = '\0';
    printf("last read : \"%s\"\n\n", rd1);
    close(file3);
    free(rd1);

    printf("----------------ft_strdup----------------\n\n");

    char dup1[10] = "coucou !\0";
    printf("string : %s\n", dup1);
    char *dup1res1 = strdup(dup1);
    printf(" : real   : %s\n", dup1res1);
    perror("errno value is ");
    errno = 0;
    free(dup1res1);
    char *dup1res2 = ft_strdup(dup1);
    printf(" : libasm : %s\n", dup1res2);
    perror("errno value is ");
    errno = 0;
    free(dup1res2);
    printf("\n");

}
