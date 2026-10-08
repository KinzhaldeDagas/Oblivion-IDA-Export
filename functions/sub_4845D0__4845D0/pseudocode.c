int __thiscall sub_4845D0(int *this)
{
  int v1; // edi
  int i; // ebx
  ExtraDataList *v3; // esi

  v1 = *this; /*0x4845d2*/
  for ( i = 0; v1; v1 = *(_DWORD *)(v1 + 4) ) /*0x4845d2*/
  {
    v3 = *(ExtraDataList **)v1; /*0x4845e0*/
    if ( !*(_DWORD *)v1 ) /*0x4845e0*/
      break; /*0x4845e4*/
    if ( !ExtraDataList_IsExtraDefaultForContainer(v3, 0) && !ExtraDataList_HasWorn(v3, 0) ) /*0x4845f7*/
      i += ExtraDataList_GetExtraCount(v3); /*0x48460a*/
  }
  return i; /*0x484614*/
}
