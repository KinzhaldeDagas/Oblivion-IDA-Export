bool __cdecl sub_4B7930(unsigned __int8 *a1)
{
  int v1; // ecx
  bool result; // al
  TESObjectCELL *v3; // eax
  bool v4; // zf

  if ( !a1 )
    return 0;
  v1 = a1[4];
  if ( v1 != 0x30 )
    return v1 == 0x35;
  v3 = (TESObjectCELL *)OblivionDynamicCast(
                          a1,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESObjectCELL `RTTI Type Descriptor',
                          0);
  if ( !v3 )
    return 0;
  v4 = TESObjectCELL_IsInterior(v3) == 0;
  result = 1;
  if ( v4 )
    return 0;
  return result;
}
