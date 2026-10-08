int __cdecl MagicItem_LookupByFormID(UInt32 a1)
{
  TESForm *v1; // eax
  TESForm *v2; // esi
  void *v3; // edi
  void *v4; // eax

  v1 = TESForm_LookupByFormID(a1); /*0x4199c7*/
  v2 = v1; /*0x4199cc*/
  if ( !v1 ) /*0x4199d3*/
    return MagicItem_LookupByFormID_::Return_0(); /*0x4199d3*/
  v3 = OblivionDynamicCast( /*0x4199f8*/
         v1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &MagicItemForm `RTTI Type Descriptor',
         0);
  v4 = OblivionDynamicCast( /*0x4199fa*/
         v2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &MagicItemObject `RTTI Type Descriptor',
         0);
  if ( v3 ) /*0x419a04*/
    return (int)v3 + 0x18; /*0x419a0b*/
  if ( v4 ) /*0x419a0e*/
    return (int)v4 + 0x24; /*0x419a11*/
  else
    return MagicItem_LookupByFormID_::Return_0(); /*0x4199d3*/
}
