#include <stdio.h>

#include "xmalloc.h"
#include "string_buffer.h"

int main(void) {
    struct string_buffer *buff = string_buffer_new();
    string_buffer_append_string(buff, "Hello World");
    string_buffer_add_char(buff, '!');
    string_buffer_add_char(buff, '!');
    string_buffer_add_char(buff, '!');

    char *tmp = string_buffer_extract_string(buff);
    printf("%s\n", tmp);

    free(tmp);

    return 0;
}
