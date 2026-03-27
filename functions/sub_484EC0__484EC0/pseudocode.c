bool __thiscall sub_484EC0(int *this, char a2)
{
  int i; // esi
  ExtraDataList *v3; // edi

  for ( i = *this; i; i = *(_DWORD *)(i + 4) )
  {
    v3 = *(ExtraDataList **)i;
    if ( !*(_DWORD *)i )
      break;
    if ( ExtraDataList_HasWorn(v3, a2) )
      return ExtraDataList_IsExtraDefaultForContainer(v3, 0) && !ExtraDataList_GetOwner(v3);
  }
  return 1;
}
