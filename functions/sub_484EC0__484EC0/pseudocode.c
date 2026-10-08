bool __thiscall sub_484EC0(int *this, char a2)
{
  int i; // esi
  ExtraDataList *v3; // edi

  for ( i = *this; i; i = *(_DWORD *)(i + 4) ) /*0x484ec2*/
  {
    v3 = *(ExtraDataList **)i; /*0x484ed0*/
    if ( !*(_DWORD *)i ) /*0x484ed0*/
      break; /*0x484ed0*/
    if ( ExtraDataList_HasWorn(v3, a2) ) /*0x484ed9*/
      return ExtraDataList_IsExtraDefaultForContainer(v3, 0) && !ExtraDataList_GetOwner(v3); /*0x484f00*/
  }
  return 1; /*0x484ee9*/
}
