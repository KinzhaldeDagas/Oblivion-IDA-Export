float *__thiscall sub_8C2920(_DWORD *this, int a2, float *a3)
{
  float *v3; // esi
  float *result; // eax
  float v6; // [esp+Ch] [ebp-6Ch]
  float v7; // [esp+Ch] [ebp-6Ch]
  float v8; // [esp+Ch] [ebp-6Ch]
  float v9; // [esp+Ch] [ebp-6Ch]
  float v10; // [esp+Ch] [ebp-6Ch]
  float v11; // [esp+10h] [ebp-68h]
  float v12; // [esp+10h] [ebp-68h]
  float v13; // [esp+10h] [ebp-68h]
  float v14; // [esp+10h] [ebp-68h]
  float v15; // [esp+10h] [ebp-68h]
  float v16; // [esp+14h] [ebp-64h]
  float v17; // [esp+14h] [ebp-64h]
  float v18; // [esp+14h] [ebp-64h]
  float v19; // [esp+14h] [ebp-64h]
  float v20; // [esp+14h] [ebp-64h]
  _DWORD v21[24]; // [esp+18h] [ebp-60h] BYREF

  *(float *)&v21[4] = 0.0;
  *(float *)&v21[5] = 0.0;
  v3 = a3;
  *(float *)&v21[6] = 0.0;
  *(float *)&v21[7] = 0.0;
  *(float *)&v21[8] = 0.0;
  *(float *)&v21[9] = 0.0;
  *(float *)&v21[0xA] = 0.0;
  *(float *)&v21[0xB] = 0.0;
  memset(v21, 0, 0xC);
  *(float *)&v21[0xC] = 0.0;
  *(float *)&v21[0xD] = 0.0;
  *(float *)&v21[0xE] = 0.0;
  *(float *)&v21[0xF] = 0.0;
  *(float *)&v21[0x10] = 0.0;
  *(float *)&v21[0x11] = 0.0;
  *(float *)&v21[0x12] = 0.0;
  *(float *)&v21[0x13] = 0.0;
  *(float *)&v21[0x14] = 0.0;
  *(float *)&v21[0x15] = 0.0;
  *(float *)&v21[0x16] = 0.0;
  *(float *)&v21[0x17] = 0.0;
  if ( !a3 )
  {
    v3 = (float *)v21;
    (*(void (__cdecl **)(_DWORD, _DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)(a2 + 0x21C) + 4))(
      *(_DWORD *)(a2 + 0x21C),
      v21,
      0x60,
      0,
      0);
  }
  sub_8A01F0(this, a2, (int)v3);
  v6 = v3[5];
  result = (float *)*(this + 1);
  v11 = v3[6];
  v16 = v3[7];
  result[4] = v3[4];
  result[5] = v6;
  result[6] = v11;
  result[7] = v16;
  v17 = v3[0x11];
  v12 = v3[0x12];
  v7 = v3[0x13];
  result[8] = v3[0x10];
  result[9] = v17;
  result[0xA] = v12;
  result[0xB] = v7;
  v18 = v3[0x15];
  v13 = v3[0x16];
  v8 = v3[0x17];
  result[0xC] = v3[0x14];
  result[0xD] = v18;
  result[0xE] = v13;
  result[0xF] = v8;
  v19 = v3[9];
  v14 = v3[0xA];
  v9 = v3[0xB];
  result[0x10] = v3[8];
  result[0x11] = v19;
  result[0x12] = v14;
  result[0x13] = v9;
  v20 = v3[0xD];
  v15 = v3[0xE];
  v10 = v3[0xF];
  result[0x14] = v3[0xC];
  result[0x15] = v20;
  result[0x16] = v15;
  result[0x17] = v10;
  return result;
}
