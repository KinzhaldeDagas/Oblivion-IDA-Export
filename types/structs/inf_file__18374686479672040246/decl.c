struct inf_file
{
inf_file *next;
WCHAR_0 *strings;
WCHAR_0 *string_pos;
unsigned int nb_sections;
unsigned int alloc_sections;
section **sections;
unsigned int nb_fields;
unsigned int alloc_fields;
field *fields;
int strings_section;
WCHAR_0 *filename;
};
