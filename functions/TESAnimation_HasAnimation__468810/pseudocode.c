// TESAnimation has exact animation string: linear strcmp over BSSimpleList, used for dedupe before append.
char __thiscall TESAnimation_HasAnimation(char **this, char *Str2)
{
  char **v2; // esi

  v2 = this + 1; /*0x468815*/
  if ( !*(this + 2) && !*v2 ) /*0x46881a*/
    return 0; /*0x46881f*/
  if ( this == (char **)0xFFFFFFFC ) /*0x468828*/
    return 0; /*0x468847*/
  while ( CRT_StricmpLocaleDispatch(*v2, Str2) ) /*0x46883e*/
  {
    v2 = (char **)v2[1]; /*0x468840*/
    if ( !v2 ) /*0x468845*/
      return 0; /*0x468845*/
  }
  return 1; /*0x468821*/
}
