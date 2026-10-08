struct locale_search_t
{
char search_language[64];
char search_country[64];
DWORD found_codepage;
unsigned int match_flags;
LANGID found_lang_id;
BOOL allow_sname;
};
