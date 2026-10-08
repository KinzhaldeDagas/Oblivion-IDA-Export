float *__cdecl sub_4DC4B0(float *a1, NiObjectNET *a2)
{
  float *ExtraData; // eax
  float v3; // ecx
  float v4; // edx
  double v5; // st7
  double v7; // st7
  float v8; // ecx
  float v9; // edx

  if ( a2 && (ExtraData = (float *)NiObjectNET_GetExtraData(a2, (const char *)&off_A7D2CC)) != 0 ) /*0x4dc4c4*/
  {
    unk_B35EF4 = ExtraData[6]; /*0x4dc4c9*/
    unk_B35EF8 = ExtraData[7]; /*0x4dc4d2*/
    unk_B35EFC = ExtraData[8]; /*0x4dc4db*/
    unk_B35EF4 = ExtraData[3] + unk_B35EF4; /*0x4dc4ea*/
    v3 = unk_B35EF4; /*0x4dc4f0*/
    unk_B35EF8 = ExtraData[4] + unk_B35EF8; /*0x4dc4ff*/
    v4 = unk_B35EF8; /*0x4dc505*/
    v5 = ExtraData[5]; /*0x4dc50b*/
    v7 = v5 + unk_B35EFC; /*0x4dc512*/
    *a1 = v3; /*0x4dc518*/
    a1[1] = v4; /*0x4dc51a*/
    unk_B35EFC = v7; /*0x4dc51d*/
    a1[2] = unk_B35EFC; /*0x4dc529*/
    return a1; /*0x4dc50e*/
  }
  else
  {
    v8 = MEMORY[0xB3F9AC]; /*0x4dc537*/
    *a1 = g_zeroNiPoint3; /*0x4dc53d*/
    v9 = MEMORY[0xB3F9B0][0]; /*0x4dc53f*/
    a1[1] = v8; /*0x4dc545*/
    a1[2] = v9; /*0x4dc548*/
    return a1; /*0x4dc52d*/
  }
}
