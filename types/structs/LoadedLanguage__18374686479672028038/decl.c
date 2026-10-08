struct LoadedLanguage
{
OPENTYPE_TAG tag;
const void *table[2];
BOOL features_initialized;
LoadedFeature *features;
SIZE_T features_size;
SIZE_T feature_count;
};
