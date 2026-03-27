__int16 __stdcall sub_452250(void *a1, int a2)
{
  int v2; // eax

  if ( OblivionDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
         0) )
  {
    if ( (a2 & 2) != 0 )
    {
      LOWORD(v2) = 0x24;
      return v2;
    }
    if ( (a2 & 0xC) != 0 )
      return a2 < 0 ? 0x2C : 0x1C;
    if ( ((unsigned int)&loc_800000 & a2) != 0 )
      goto LABEL_4;
LABEL_11:
    LOWORD(v2) = 0;
    return v2;
  }
  if ( !OblivionDynamicCast(
          a1,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectCELL `RTTI Type Descriptor',
          0) )
    goto LABEL_11;
  if ( (a2 & 0x4000000) == 0 )
    return (a2 & 0x2000000) != 0 ? 6 : 0;
LABEL_4:
  LOWORD(v2) = 4;
  return v2;
}
