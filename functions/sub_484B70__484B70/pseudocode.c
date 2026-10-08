void __thiscall sub_484B70(ExtraDataList ***this)
{
  ExtraDataList **v1; // eax
  ExtraDataList *v2; // esi

  v1 = *this; /*0x484b70*/
  if ( *this ) /*0x484b70*/
  {
    v2 = *v1; /*0x484b77*/
    if ( *v1 ) /*0x484b77*/
    {
      if ( ExtraDataList_GetOwner(*v1) ) /*0x484b7f*/
        ExtraDataList_GetOwner(v2); /*0x484b8b*/
    }
  }
}
