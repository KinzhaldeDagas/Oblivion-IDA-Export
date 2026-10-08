float *__thiscall sub_8C1030(_DWORD *this, int a2, float *a3)
{
  float *v3; // esi
  float *result; // eax
  float v6; // [esp+Ch] [ebp-9Ch]
  float v7; // [esp+Ch] [ebp-9Ch]
  float v8; // [esp+Ch] [ebp-9Ch]
  float v9; // [esp+Ch] [ebp-9Ch]
  float v10; // [esp+Ch] [ebp-9Ch]
  float v11; // [esp+Ch] [ebp-9Ch]
  float v12; // [esp+10h] [ebp-98h]
  float v13; // [esp+10h] [ebp-98h]
  float v14; // [esp+10h] [ebp-98h]
  float v15; // [esp+10h] [ebp-98h]
  float v16; // [esp+10h] [ebp-98h]
  float v17; // [esp+10h] [ebp-98h]
  float v18; // [esp+14h] [ebp-94h]
  float v19; // [esp+14h] [ebp-94h]
  float v20; // [esp+14h] [ebp-94h]
  float v21; // [esp+14h] [ebp-94h]
  float v22; // [esp+14h] [ebp-94h]
  float v23; // [esp+14h] [ebp-94h]
  _DWORD v24[36]; // [esp+18h] [ebp-90h] BYREF

  *(float *)&v24[4] = 0.0; /*0x8c1042*/
  *(float *)&v24[5] = 0.0; /*0x8c1046*/
  v3 = a3; /*0x8c104b*/
  *(float *)&v24[6] = 0.0; /*0x8c104e*/
  *(float *)&v24[7] = 0.0; /*0x8c1052*/
  *(float *)&v24[8] = 0.0; /*0x8c1057*/
  *(float *)&v24[9] = 0.0; /*0x8c105d*/
  *(float *)&v24[0xA] = 0.0; /*0x8c1065*/
  *(float *)&v24[0xB] = 0.0; /*0x8c1069*/
  memset(v24, 0, 0xC); /*0x8c106d*/
  *(float *)&v24[0xC] = 0.0; /*0x8c1071*/
  *(float *)&v24[0xD] = 0.0; /*0x8c1079*/
  *(float *)&v24[0xE] = 0.0; /*0x8c1081*/
  *(float *)&v24[0xF] = 0.0; /*0x8c1085*/
  *(float *)&v24[0x10] = 0.0; /*0x8c1089*/
  *(float *)&v24[0x11] = 0.0; /*0x8c108d*/
  *(float *)&v24[0x12] = 0.0; /*0x8c1091*/
  *(float *)&v24[0x13] = 0.0; /*0x8c1095*/
  *(float *)&v24[0x14] = 0.0; /*0x8c1099*/
  *(float *)&v24[0x15] = 0.0; /*0x8c109d*/
  *(float *)&v24[0x16] = 0.0; /*0x8c10a1*/
  *(float *)&v24[0x17] = 0.0; /*0x8c10a5*/
  *(float *)&v24[0x18] = 0.0; /*0x8c10a9*/
  *(float *)&v24[0x19] = 0.0; /*0x8c10b0*/
  *(float *)&v24[0x1A] = 0.0; /*0x8c10b7*/
  *(float *)&v24[0x1B] = 0.0; /*0x8c10be*/
  if ( !a3 ) /*0x8c10c5*/
  {
    v3 = (float *)v24; /*0x8c10d2*/
    (*(void (__cdecl **)(_DWORD, _DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)(a2 + 0x21C) + 4))( /*0x8c10df*/
      *(_DWORD *)(a2 + 0x21C),
      v24,
      0x90,
      0,
      0);
  }
  sub_8A01F0(this, a2, (int)v3); /*0x8c10e8*/
  v18 = v3[5]; /*0x8c10f0*/
  result = (float *)*(this + 1); /*0x8c10f4*/
  v6 = v3[6]; /*0x8c10fa*/
  v12 = v3[7]; /*0x8c1101*/
  result[4] = v3[4]; /*0x8c1108*/
  result[5] = v18; /*0x8c110f*/
  result[6] = v6; /*0x8c1116*/
  result[7] = v12; /*0x8c111d*/
  v13 = v3[0xD]; /*0x8c1123*/
  v7 = v3[0xE]; /*0x8c112a*/
  v19 = v3[0xF]; /*0x8c1131*/
  result[8] = v3[0xC]; /*0x8c1138*/
  result[9] = v13; /*0x8c113f*/
  result[0xA] = v7; /*0x8c1146*/
  result[0xB] = v19; /*0x8c114d*/
  v14 = v3[0x15]; /*0x8c1153*/
  v8 = v3[0x16]; /*0x8c115a*/
  v20 = v3[0x17]; /*0x8c1161*/
  result[0xC] = v3[0x14]; /*0x8c1168*/
  result[0xD] = v14; /*0x8c116f*/
  result[0xE] = v8; /*0x8c1176*/
  result[0xF] = v20; /*0x8c117d*/
  v15 = v3[9]; /*0x8c1183*/
  v9 = v3[0xA]; /*0x8c118a*/
  v21 = v3[0xB]; /*0x8c1191*/
  result[0x10] = v3[8]; /*0x8c1198*/
  result[0x11] = v15; /*0x8c119f*/
  result[0x12] = v9; /*0x8c11a6*/
  result[0x13] = v21; /*0x8c11ad*/
  v16 = v3[0x11]; /*0x8c11b3*/
  v10 = v3[0x12]; /*0x8c11ba*/
  v22 = v3[0x13]; /*0x8c11c1*/
  result[0x14] = v3[0x10]; /*0x8c11c8*/
  result[0x15] = v16; /*0x8c11cf*/
  result[0x16] = v10; /*0x8c11d6*/
  result[0x17] = v22; /*0x8c11dd*/
  v17 = v3[0x19]; /*0x8c11e3*/
  v11 = v3[0x1A]; /*0x8c11ea*/
  v23 = v3[0x1B]; /*0x8c11f1*/
  result[0x18] = v3[0x18]; /*0x8c11f9*/
  result[0x19] = v17; /*0x8c1200*/
  result[0x1A] = v11; /*0x8c1207*/
  result[0x1B] = v23; /*0x8c120e*/
  result[0x1C] = v3[0x1C]; /*0x8c1214*/
  result[0x1D] = v3[0x1D]; /*0x8c121a*/
  result[0x1E] = v3[0x1E]; /*0x8c1220*/
  result[0x1F] = v3[0x1F]; /*0x8c1226*/
  result[0x20] = v3[0x20]; /*0x8c122f*/
  result[0x21] = v3[0x21]; /*0x8c123c*/
  return result; /*0x8c1242*/
}
