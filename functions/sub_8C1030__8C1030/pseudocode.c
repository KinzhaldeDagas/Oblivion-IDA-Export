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

  *(float *)&v24[4] = 0.0;
  *(float *)&v24[5] = 0.0;
  v3 = a3;
  *(float *)&v24[6] = 0.0;
  *(float *)&v24[7] = 0.0;
  *(float *)&v24[8] = 0.0;
  *(float *)&v24[9] = 0.0;
  *(float *)&v24[0xA] = 0.0;
  *(float *)&v24[0xB] = 0.0;
  memset(v24, 0, 0xC);
  *(float *)&v24[0xC] = 0.0;
  *(float *)&v24[0xD] = 0.0;
  *(float *)&v24[0xE] = 0.0;
  *(float *)&v24[0xF] = 0.0;
  *(float *)&v24[0x10] = 0.0;
  *(float *)&v24[0x11] = 0.0;
  *(float *)&v24[0x12] = 0.0;
  *(float *)&v24[0x13] = 0.0;
  *(float *)&v24[0x14] = 0.0;
  *(float *)&v24[0x15] = 0.0;
  *(float *)&v24[0x16] = 0.0;
  *(float *)&v24[0x17] = 0.0;
  *(float *)&v24[0x18] = 0.0;
  *(float *)&v24[0x19] = 0.0;
  *(float *)&v24[0x1A] = 0.0;
  *(float *)&v24[0x1B] = 0.0;
  if ( !a3 )
  {
    v3 = (float *)v24;
    (*(void (__cdecl **)(_DWORD, _DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)(a2 + 0x21C) + 4))(
      *(_DWORD *)(a2 + 0x21C),
      v24,
      0x90,
      0,
      0);
  }
  sub_8A01F0(this, a2, (int)v3);
  v18 = v3[5];
  result = (float *)*(this + 1);
  v6 = v3[6];
  v12 = v3[7];
  result[4] = v3[4];
  result[5] = v18;
  result[6] = v6;
  result[7] = v12;
  v13 = v3[0xD];
  v7 = v3[0xE];
  v19 = v3[0xF];
  result[8] = v3[0xC];
  result[9] = v13;
  result[0xA] = v7;
  result[0xB] = v19;
  v14 = v3[0x15];
  v8 = v3[0x16];
  v20 = v3[0x17];
  result[0xC] = v3[0x14];
  result[0xD] = v14;
  result[0xE] = v8;
  result[0xF] = v20;
  v15 = v3[9];
  v9 = v3[0xA];
  v21 = v3[0xB];
  result[0x10] = v3[8];
  result[0x11] = v15;
  result[0x12] = v9;
  result[0x13] = v21;
  v16 = v3[0x11];
  v10 = v3[0x12];
  v22 = v3[0x13];
  result[0x14] = v3[0x10];
  result[0x15] = v16;
  result[0x16] = v10;
  result[0x17] = v22;
  v17 = v3[0x19];
  v11 = v3[0x1A];
  v23 = v3[0x1B];
  result[0x18] = v3[0x18];
  result[0x19] = v17;
  result[0x1A] = v11;
  result[0x1B] = v23;
  result[0x1C] = v3[0x1C];
  result[0x1D] = v3[0x1D];
  result[0x1E] = v3[0x1E];
  result[0x1F] = v3[0x1F];
  result[0x20] = v3[0x20];
  result[0x21] = v3[0x21];
  return result;
}
