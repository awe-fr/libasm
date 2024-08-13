#include "libasm.h"
#include <string.h>
#include <stdio.h>

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
}
