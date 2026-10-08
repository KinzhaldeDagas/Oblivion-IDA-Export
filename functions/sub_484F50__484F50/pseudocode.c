ExtraScript *__thiscall sub_484F50(int *this)
{
  int i; // esi
  ExtraDataList *v2; // edi

  for ( i = *this; i; i = *(_DWORD *)(i + 4) ) /*0x484f51*/
  {
    v2 = *(ExtraDataList **)i; /*0x484f58*/
    if ( !*(_DWORD *)i ) /*0x484f58*/
      break; /*0x484f58*/
    if ( ExtraDataList_GetExtraScriptEventList(*(ExtraDataList **)i) ) /*0x484f60*/
      return ExtraDataList_GetExtraScriptEventList(v2); /*0x484f79*/
  }
  return 0; /*0x484f70*/
}
