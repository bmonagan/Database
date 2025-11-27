#include <stdio.h>
#include <string.h>

#include "hash_map.h"


int main(){
    while (1);{
        char buff[30];
        if (fgets(buff, sizeof(buff), stdin) == NULL) {
            return 1;
        }
        /* strip trailing newline from fgets */
        size_t len = strlen(buff);
        if (len > 0 && buff[len-1] == '\n') buff[len-1] = '\0';

        if (strcmp(buff, "add_node") == 0) {
            // Code to add a node
        } else if (strcmp(buff, "remove_node") == 0) {
            // Code to remove a node
        } else {
            printf("Unknown command: %s\n", buff);
        }}

    return 0;
}