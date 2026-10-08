int __thiscall EnchantmentMenu_SoulGemInfo_GetSoulLevel(ExtraDataList ***this)
{
  ExtraDataList **v2; // eax
  int v3; // ebx
  ExtraDataList *v4; // edi
  _BYTE *v6; // eax
  unsigned __int8 v7; // al

  v2 = *this; /*0x484bf4*/
  v3 = 0; /*0x484bf6*/
  if ( *this ) /*0x484bf4*/
  {
    v4 = *v2; /*0x484bfd*/
    if ( *v2 ) /*0x484bfd*/
    {
      if ( ExtraDataList_GetExtraSoul(*v2) ) /*0x484c05*/
        return ExtraDataList_GetExtraSoul(v4); /*0x484c13*/
    }
  }
  v6 = OblivionDynamicCast( /*0x484c2a*/
         *(this + 2),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESSoulGem `RTTI Type Descriptor',
         0);
  if ( v6 ) /*0x484c34*/
  {
    v7 = v6[0x70]; /*0x484c36*/
    if ( v7 ) /*0x484c3b*/
      return v7; /*0x484c3d*/
  }
  return v3; /*0x484c10*/
}
