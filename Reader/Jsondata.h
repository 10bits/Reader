#ifndef __JSON_DATA_H__
#define __JSON_DATA_H__

#include "types.h"

char* create_json(header_t* data);
void create_json_free(char* json);
bool parser_json(const char* json, header_t* default, void **data, int *size);

bool import_book_source(const char *json, book_source_t *bs, int *count);
bool export_book_source(const book_source_t *bs, int count, char **json);
void export_book_source_free(char* json);

#endif