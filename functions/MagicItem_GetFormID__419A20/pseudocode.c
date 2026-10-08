int __thiscall MagicItem_GetFormID(void *this)
{
  _DWORD *v2; // edi
  void *v3; // eax

  v2 = OblivionDynamicCast( /*0x419a47*/
         this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &MagicItemForm `RTTI Type Descriptor',
         0);
  v3 = OblivionDynamicCast( /*0x419a49*/
         this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &MagicItemObject `RTTI Type Descriptor',
         0);
  if ( v2 ) /*0x419a53*/
    return v2[3]; /*0x419a55*/
  else
    return MagicItem_GetFormID_::NotAForm((int)v3); /*0x419a53*/
}
