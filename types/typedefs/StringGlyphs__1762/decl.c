struct StringGlyphs
{
ScriptCache *sc;
int numGlyphs;
WORD *glyphs;
WORD *pwLogClust;
int *piAdvance;
SCRIPT_VISATTR *psva;
GOFFSET *pGoffset;
ABC abc;
int iMaxPosX;
HFONT fallbackFont;
};
