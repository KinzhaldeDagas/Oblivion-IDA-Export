int __thiscall sub_4845D0(int *this)
{
  int v1; // edi
  int i; // ebx
  ExtraDataList *v3; // esi

  v1 = *this;
  for ( i = 0; v1; v1 = *(_DWORD *)(v1 + 4) )
  {
    v3 = *(ExtraDataList **)v1;
    if ( !*(_DWORD *)v1 )
      break;
    if ( !ExtraDataList_IsExtraDefaultForContainer(v3, 0) && !ExtraDataList_HasWorn(v3, 0) )
      i += ExtraDataList_GetExtraCount(v3);
  }
  return i;
}
