void __thiscall sub_484E20(ExtraDataList ***this, BSExtraDataVtbl *a2)
{
  ExtraDataList **v6; // eax
  ExtraDataList *v7; // esi

  v6 = *this; /*0x484e20*/
  if ( *this ) /*0x484e20*/
  {
    v7 = *v6; /*0x484e27*/
    if ( *v6 ) /*0x484e27*/
    {
      if ( !ExtraDataList_GetPoison(*v6) ) /*0x484e2f*/
      {
        ExtraDataList_SetPoison(v7, a2); /*0x484e3f*/
        sub_57B230(); /*0x484e44*/
      }
    }
  }
}
