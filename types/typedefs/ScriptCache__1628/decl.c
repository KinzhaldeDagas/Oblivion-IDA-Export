struct ScriptCache
{
list entry;
DWORD refcount;
LOGFONTW lf;
TEXTMETRICW tm;
OUTLINETEXTMETRICW *otm;
SCRIPT_FONTPROPERTIES sfp;
BOOL sfnt;
CacheGlyphPage *page[17];
ABC *widths[256];
void *GSUB_Table;
void *GDEF_Table;
void *CMAP_Table;
void *CMAP_format12_Table;
void *GPOS_Table;
BOOL scripts_initialized;
LoadedScript *scripts;
SIZE_T scripts_size;
SIZE_T script_count;
OPENTYPE_TAG userScript;
OPENTYPE_TAG userLang;
};
