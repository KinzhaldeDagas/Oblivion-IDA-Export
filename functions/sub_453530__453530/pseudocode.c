unsigned int __stdcall sub_453530(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // edi

  if ( !TESDataHandler_IsFormIDCreated_(a1[3]) )
    return a2;
  v2 = a2;
  if ( OblivionDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
         0) )
  {
    v2 = a2 & 0xFFFFFFF9 | 2;
  }
  if ( OblivionDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESObjectCELL `RTTI Type Descriptor',
         0) )
  {
    v2 |= 6u;
  }
  return v2;
}
