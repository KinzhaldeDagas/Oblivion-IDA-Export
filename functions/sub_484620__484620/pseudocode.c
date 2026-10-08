int __thiscall sub_484620(int *this)
{
  int v1; // esi
  int i; // ebx
  ExtraDataList *v3; // edi

  v1 = *this; /*0x484622*/
  for ( i = 0; v1; v1 = *(_DWORD *)(v1 + 4) ) /*0x484622*/
  {
    v3 = *(ExtraDataList **)v1; /*0x484630*/
    if ( !*(_DWORD *)v1 ) /*0x484630*/
      break; /*0x484634*/
    if ( ExtraDataList_IsExtraDefaultForContainer(v3, 0) ) /*0x48463a*/
      i += ExtraDataList_GetExtraCount(v3); /*0x48464d*/
  }
  return i; /*0x484657*/
}
