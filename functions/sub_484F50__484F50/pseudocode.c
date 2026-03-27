ExtraScript *__thiscall sub_484F50(int *this)
{
  int i; // esi
  ExtraDataList *v2; // edi

  for ( i = *this; i; i = *(_DWORD *)(i + 4) )
  {
    v2 = *(ExtraDataList **)i;
    if ( !*(_DWORD *)i )
      break;
    if ( ExtraDataList_GetExtraScriptEventList(*(ExtraDataList **)i) )
      return ExtraDataList_GetExtraScriptEventList(v2);
  }
  return 0;
}
