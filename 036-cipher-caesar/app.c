#include <stdio.h>

#define ENCRYPTED_MESAGE "SVVRZSPRLFVBOHJRLKTL"
#define ALPHABET_SIZE 26
#define CIPHER_KEY 1
// End of line
#define EOL ""

int main(void)
{
    char alphabet_encrypted[ALPHABET_SIZE] = {'\0'};
    char alphabet[ALPHABET_SIZE] = {
        'A', 'B', 'C', 'D', 'E', 'F',
        'G', 'H', 'I', 'J', 'K', 'L',
        'M', 'N', 'O', 'P', 'Q', 'R',
        'S', 'T', 'U', 'V', 'W', 'X',
        'Y', 'Z'
    };

    // "ABC" -> 1 -> "BCD" смещение на 1 литеру
    // "ABC" -> 3 -> "DEF" пример кодировки Цезаря смещение на 3 литеры

    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        printf("[%c]", alphabet[i]);
    }

    puts(EOL);

    for (int i = 0; i < ALPHABET_SIZE; i++)
    {
        /** Когда мы доходим до последней итерации 26 буквы Z дальше букв нет,
         * то чтобы не выйти за границы массива, берем смещение по модулю %, и
         * в этом случае мы с последней 26 буквы возвращаемся к 1 A(если смещение = 1)
         */
        int offset = (i + CIPHER_KEY) % ALPHABET_SIZE;
        alphabet_encrypted[i] = alphabet[offset];
        printf("[%c]", alphabet_encrypted[i]);
    }

    puts(EOL); // строка не смотря на то, что она пустая, раскрывается в '\0' конец строки как и все строки

    return 0;
}