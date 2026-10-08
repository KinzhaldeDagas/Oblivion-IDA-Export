char __thiscall EntryData_HasDefaultContainerExtraList(int *this)
{
  int v1; // esi

  v1 = *this; /*0x4847c1*/
  if ( *this ) /*0x4847c1*/
  {
    while ( *(_DWORD *)v1 ) /*0x4847cb*/
    {
      if ( ExtraDataList_IsExtraDefaultForContainer_all(*(_DWORD **)v1) ) /*0x4847cd*/
        return 1; /*0x4847e1*/
      v1 = *(_DWORD *)(v1 + 4); /*0x4847d6*/
      if ( !v1 ) /*0x4847db*/
        return 0; /*0x4847db*/
    }
  }
  return 0; /*0x4847df*/
}
