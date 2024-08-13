#include "./header/libasm.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("----------------ft_strlen----------------\n\n");

    char len1[10] = "coucou !\n\0";
    printf("string :%s\n", len1);
    printf("real   :%ld\n", strlen(len1));
    printf("libasm :%ld\n", ft_strlen(len1));
    printf("\n");

    char len2[2] = "\0";
    printf("string :%s\n", len2);
    printf("real   :%ld\n", strlen(len2));
    printf("libasm :%ld\n", ft_strlen(len2));
    printf("\n");

    char len3[1034] = "AsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwEarTyUid\0";
    printf("string :%s\n", len3);
    printf("real   :%ld\n", strlen(len3));
    printf("libasm :%ld\n", ft_strlen(len3));
    printf("\n");

    printf("----------------ft_strcpy----------------\n\n");

    char cpy1[10] = "coucou !\0";
    char *res1 = malloc(sizeof(char) * 10);
    printf("string :%s\n", cpy1);
    printf("real   :%s\n", strcpy(res1, cpy1));
    printf("libasm :%s\n", ft_strcpy(res1, cpy1));
    printf("\n");
    free(res1);

    char cpy2[1] = "\0";
    char *res2 = malloc(sizeof(char) * 1);
    printf("string :%s\n", cpy2);
    printf("real   :%s\n", strcpy(res2, cpy2));
    printf("libasm :%s\n", ft_strcpy(res2, cpy2));
    printf("\n");
    free(res2);

    char cpy3[1034] = "AsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwErTyUiOpZxCvBnMAsdFgHjKlQwErTyUiOpAaSxDcVbNmQwErTyUiOpLkjHgfDsaQwEarTyUid\0";
    char *res3 = malloc(sizeof(char) * 1034);
    printf("string :%s\n", cpy3);
    printf("real   :%s\n", strcpy(res3, cpy3));
    printf("libasm :%s\n", ft_strcpy(res3, cpy3));
    printf("\n");
    free(res3);

    printf("----------------ft_strcmp----------------\n\n");

    char cmp1[10] = "coucou !\0";
    char cmp1bis[10] = "coucou !\0";
    printf("string :%s, %s\n", cmp1, cmp1bis);
    printf("real   :%d\n", strcmp(cmp1, cmp1bis));
    printf("libasm :%d\n", ft_strcmp(cmp1, cmp1bis));
    printf("\n");

    char cmp2[10] = "coucou !\0";
    char cmp2bis[10] = "coucou\0";
    printf("string :%s, %s\n", cmp2, cmp2bis);
    printf("real   :%d\n", strcmp(cmp2, cmp2bis));
    printf("libasm :%d\n", ft_strcmp(cmp2, cmp2bis));
    printf("\n");
}
