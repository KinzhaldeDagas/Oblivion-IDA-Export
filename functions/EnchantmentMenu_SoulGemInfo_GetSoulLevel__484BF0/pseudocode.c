int __thiscall EnchantmentMenu_SoulGemInfo_GetSoulLevel(ExtraDataList ***this)
{
  ExtraDataList **v2; // eax
  int v3; // ebx
  ExtraDataList *v4; // edi
  _BYTE *v6; // eax
  unsigned __int8 v7; // al

  v2 = *this;
  v3 = 0;
  if ( *this )
  {
    v4 = *v2;
    if ( *v2 )
    {
      if ( ExtraDataList_GetExtraSoul(*v2) )
        return ExtraDataList_GetExtraSoul(v4);
    }
  }
  v6 = OblivionDynamicCast(
         *(this + 2),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
         &TESSoulGem `RTTI Type Descriptor',
         0);
  if ( v6 )
  {
    v7 = v6[0x70];
    if ( v7 )
      return v7;
  }
  return v3;
}
