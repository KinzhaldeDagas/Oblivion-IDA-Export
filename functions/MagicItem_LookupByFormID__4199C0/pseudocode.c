int __cdecl MagicItem_LookupByFormID(UInt32 a1)
{
  TESForm *v1; // eax
  TESForm *v2; // esi
  void *v3; // edi
  void *v4; // eax

  v1 = TESForm_LookupByFormID(a1);
  v2 = v1;
  if ( !v1 )
    return MagicItem_LookupByFormID_::Return_0();
  v3 = OblivionDynamicCast(
         v1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &MagicItemForm `RTTI Type Descriptor',
         0);
  v4 = OblivionDynamicCast(
         v2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &MagicItemObject `RTTI Type Descriptor',
         0);
  if ( v3 )
    return (int)v3 + 0x18;
  if ( v4 )
    return (int)v4 + 0x24;
  else
    return MagicItem_LookupByFormID_::Return_0();
}
