char __thiscall sub_484700(int *this)
{
  int i; // esi
  ExtraDataList *v2; // edi

  for ( i = *this; i; i = *(_DWORD *)(i + 4) ) /*0x484701*/
  {
    v2 = *(ExtraDataList **)i; /*0x484708*/
    if ( !*(_DWORD *)i ) /*0x484708*/
      break; /*0x484708*/
    if ( ExtraDataList_GetOwner(*(ExtraDataList **)i) && ExtraDataList_HasWorn(v2, 0) ) /*0x48471d*/
      return 1; /*0x484733*/
  }
  return 0; /*0x48472d*/
}
