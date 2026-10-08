char __thiscall TESModelList_ContainsModelPath(char **this, char *Str2)
{
  char **v2; // esi

  v2 = this + 1; /*0x46dd25*/
  if ( !*(this + 2) && !*v2 || !Str2 || this == (char **)0xFFFFFFFC ) /*0x46dd3a*/
    return 0; /*0x46dd5b*/
  while ( !*v2 || CRT_StricmpLocaleDispatch((unsigned __int8 *)*v2, (unsigned __int8 *)Str2) ) /*0x46dd52*/
  {
    v2 = (char **)v2[1]; /*0x46dd54*/
    if ( !v2 ) /*0x46dd59*/
      return 0; /*0x46dd59*/
  }
  return 1; /*0x46dd5b*/
}
