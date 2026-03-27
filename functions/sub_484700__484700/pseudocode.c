char __thiscall sub_484700(int *this)
{
  int i; // esi
  ExtraDataList *v2; // edi

  for ( i = *this; i; i = *(_DWORD *)(i + 4) )
  {
    v2 = *(ExtraDataList **)i;
    if ( !*(_DWORD *)i )
      break;
    if ( ExtraDataList_GetOwner(*(ExtraDataList **)i) && ExtraDataList_HasWorn(v2, 0) )
      return 1;
  }
  return 0;
}
