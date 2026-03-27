int __thiscall sub_484620(int *this)
{
  int v1; // esi
  int i; // ebx
  ExtraDataList *v3; // edi

  v1 = *this;
  for ( i = 0; v1; v1 = *(_DWORD *)(v1 + 4) )
  {
    v3 = *(ExtraDataList **)v1;
    if ( !*(_DWORD *)v1 )
      break;
    if ( ExtraDataList_IsExtraDefaultForContainer(v3, 0) )
      i += ExtraDataList_GetExtraCount(v3);
  }
  return i;
}
