float *__thiscall sub_4DC360(NiObjectNET **this, float *a2)
{
  NiObjectNET *v2; // ecx
  float *ExtraData; // eax
  float v4; // ecx
  float v5; // edx
  double v6; // st7
  double v8; // st7
  float v9; // ecx
  float v10; // edx

  v2 = *(this + 0xF); /*0x4dc360*/
  if ( v2 && (ExtraData = (float *)NiObjectNET_GetExtraData(v2, (const char *)&off_A7D2CC)) != 0 ) /*0x4dc373*/
  {
    unk_B35EE8 = -ExtraData[6]; /*0x4dc37a*/
    unk_B35EEC = -ExtraData[7]; /*0x4dc385*/
    unk_B35EF0 = -ExtraData[8]; /*0x4dc390*/
    unk_B35EE8 = ExtraData[3] + unk_B35EE8; /*0x4dc39f*/
    v4 = unk_B35EE8; /*0x4dc3a5*/
    unk_B35EEC = ExtraData[4] + unk_B35EEC; /*0x4dc3b4*/
    v5 = unk_B35EEC; /*0x4dc3ba*/
    v6 = ExtraData[5]; /*0x4dc3c0*/
    v8 = v6 + unk_B35EF0; /*0x4dc3c7*/
    *a2 = v4; /*0x4dc3cd*/
    a2[1] = v5; /*0x4dc3cf*/
    unk_B35EF0 = v8; /*0x4dc3d2*/
    a2[2] = unk_B35EF0; /*0x4dc3de*/
    return a2; /*0x4dc3c3*/
  }
  else
  {
    v9 = MEMORY[0xB3F9AC]; /*0x4dc3ee*/
    *a2 = g_zeroNiPoint3; /*0x4dc3f4*/
    v10 = MEMORY[0xB3F9B0][0]; /*0x4dc3f6*/
    a2[1] = v9; /*0x4dc3fc*/
    a2[2] = v10; /*0x4dc3ff*/
    return a2; /*0x4dc3e4*/
  }
}
