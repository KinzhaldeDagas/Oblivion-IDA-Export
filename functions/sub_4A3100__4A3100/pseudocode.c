float *sub_4A3100()
{
  float *result; // eax
  unsigned int v1; // esi
  TESForm *v2; // eax
  size_t v3; // [esp-8h] [ebp-1Ch]
  size_t v4; // [esp+0h] [ebp-14h]
  size_t v5; // [esp+0h] [ebp-14h]
  float Dst; // [esp+8h] [ebp-Ch] BYREF
  int v7; // [esp+Ch] [ebp-8h] BYREF

  LODWORD(v4) = 2; /*0x4a310a*/
  result = (float *)SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v4);// EnginePatch analysis 2026-05-07: saved region-entry count is UInt16; loop consumes FormID + float (8 bytes) per entry and performs global form lookup. Clamp count to remaining bytes / 8. /*0x4a3111*/
  v1 = 0; /*0x4a3116*/
  if ( LOWORD(Dst) ) /*0x4a311d*/
  {
    do /*0x4a318b*/
    {
      LODWORD(v5) = 4; /*0x4a3122*/
      SaveLoad_LoadFormID(&v7, v5, SLODWORD(Dst), 0, COERCE_INT(0.0)); /*0x4a313b*/
      LODWORD(v3) = 4; /*0x4a3146*/
      SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v3); /*0x4a314d*/
      v2 = TESForm_LookupByFormID(HIDWORD(v5)); /*0x4a3165*/
      result = (float *)OblivionDynamicCast( /*0x4a316e*/
                          v2,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESRegion `RTTI Type Descriptor',
                          0);
      if ( result ) /*0x4a3178*/
        result[0xA] = Dst; /*0x4a317e*/
      ++v1; /*0x4a3186*/
    }
    while ( v1 < (unsigned __int16)v5 ); /*0x4a318b*/
  }
  return result; /*0x4a318d*/
}
