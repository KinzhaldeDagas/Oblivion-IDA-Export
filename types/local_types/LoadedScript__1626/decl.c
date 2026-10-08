struct LoadedScript
{
OPENTYPE_TAG tag;
const void *table[2];
LoadedLanguage default_language;
BOOL languages_initialized;
LoadedLanguage *languages;
SIZE_T languages_size;
SIZE_T language_count;
};
