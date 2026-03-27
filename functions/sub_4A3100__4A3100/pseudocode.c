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

  LODWORD(v4) = 2;
  result = (float *)SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v4);
  v1 = 0;
  if ( LOWORD(Dst) )
  {
    do
    {
      LODWORD(v5) = 4;
      SaveLoad_LoadFormID(&v7, v5, SLODWORD(Dst), 0, COERCE_INT(0.0));
      LODWORD(v3) = 4;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v3);
      v2 = TESForm_LookupByFormID(HIDWORD(v5));
      result = (float *)OblivionDynamicCast(
                          v2,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESRegion `RTTI Type Descriptor',
                          0);
      if ( result )
        result[0xA] = Dst;
      ++v1;
    }
    while ( v1 < (unsigned __int16)v5 );
  }
  return result;
}
