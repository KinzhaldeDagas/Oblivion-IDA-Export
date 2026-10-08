float *__thiscall sub_4DC410(NiObjectNET **this, float *a2)
{
  NiObjectNET *v2; // ecx
  float *ExtraData; // eax
  float v4; // ecx
  float v5; // edx
  double v6; // st7
  double v8; // st7
  float v9; // ecx
  float v10; // edx

  v2 = *(this + 0xF); /*0x4dc410*/
  if ( v2 && (ExtraData = (float *)NiObjectNET_GetExtraData(v2, (const char *)&off_A7D2CC)) != 0 ) /*0x4dc423*/
  {
    unk_B35EF4 = ExtraData[6]; /*0x4dc428*/
    unk_B35EF8 = ExtraData[7]; /*0x4dc431*/
    unk_B35EFC = ExtraData[8]; /*0x4dc43a*/
    unk_B35EF4 = ExtraData[3] + unk_B35EF4; /*0x4dc449*/
    v4 = unk_B35EF4; /*0x4dc44f*/
    unk_B35EF8 = ExtraData[4] + unk_B35EF8; /*0x4dc45e*/
    v5 = unk_B35EF8; /*0x4dc464*/
    v6 = ExtraData[5]; /*0x4dc46a*/
    v8 = v6 + unk_B35EFC; /*0x4dc471*/
    *a2 = v4; /*0x4dc477*/
    a2[1] = v5; /*0x4dc479*/
    unk_B35EFC = v8; /*0x4dc47c*/
    a2[2] = unk_B35EFC; /*0x4dc488*/
    return a2; /*0x4dc46d*/
  }
  else
  {
    v9 = MEMORY[0xB3F9AC]; /*0x4dc498*/
    *a2 = g_zeroNiPoint3; /*0x4dc49e*/
    v10 = MEMORY[0xB3F9B0][0]; /*0x4dc4a0*/
    a2[1] = v9; /*0x4dc4a6*/
    a2[2] = v10; /*0x4dc4a9*/
    return a2; /*0x4dc48e*/
  }
}
