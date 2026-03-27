void __thiscall sub_484F20(int *this)
{
  int i; // esi
  ExtraDataList *v2; // edi

  for ( i = *this; i; i = *(_DWORD *)(i + 4) )
  {
    v2 = *(ExtraDataList **)i;
    if ( !*(_DWORD *)i )
      break;
    if ( ExtraDataList_GetExtraScript(*(ExtraDataList **)i) )
    {
      ExtraDataList_GetExtraScript(v2);
      return;
    }
  }
}
