struct LoadedFeature
{
OPENTYPE_TAG tag;
CHAR tableType;
const void *feature;
INT lookup_count;
WORD *lookups;
};
