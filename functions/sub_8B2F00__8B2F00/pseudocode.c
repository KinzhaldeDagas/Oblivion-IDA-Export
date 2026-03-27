float *__thiscall sub_8B2F00(_DWORD *this, int a2, float *a3)
{
  float *v4; // esi
  float *result; // eax
  float v6; // [esp+14h] [ebp-9Ch]
  float v7; // [esp+14h] [ebp-9Ch]
  float v8; // [esp+14h] [ebp-9Ch]
  float v9; // [esp+14h] [ebp-9Ch]
  float v10; // [esp+14h] [ebp-9Ch]
  float v11; // [esp+14h] [ebp-9Ch]
  float v12; // [esp+14h] [ebp-9Ch]
  float v13; // [esp+18h] [ebp-98h]
  float v14; // [esp+18h] [ebp-98h]
  float v15; // [esp+18h] [ebp-98h]
  float v16; // [esp+18h] [ebp-98h]
  float v17; // [esp+18h] [ebp-98h]
  float v18; // [esp+18h] [ebp-98h]
  float v19; // [esp+18h] [ebp-98h]
  float v20; // [esp+1Ch] [ebp-94h]
  float v21; // [esp+1Ch] [ebp-94h]
  float v22; // [esp+1Ch] [ebp-94h]
  float v23; // [esp+1Ch] [ebp-94h]
  float v24; // [esp+1Ch] [ebp-94h]
  float v25; // [esp+1Ch] [ebp-94h]
  float v26; // [esp+1Ch] [ebp-94h]
  float v27[36]; // [esp+20h] [ebp-90h] BYREF

  sub_8B2D60(v27);
  v4 = a3;
  if ( !a3 )
  {
    v4 = v27;
    (*(void (__cdecl **)(_DWORD, float *, int, _DWORD, _DWORD))(*(_DWORD *)(a2 + 0x21C) + 4))(
      *(_DWORD *)(a2 + 0x21C),
      v27,
      0x90,
      0,
      0);
  }
  sub_8A01F0(this, a2, (int)v4);
  v20 = v4[5];
  result = (float *)*(this + 1);
  v6 = v4[6];
  v13 = v4[7];
  result[8] = v4[4];
  result[9] = v20;
  result[0xA] = v6;
  result[0xB] = v13;
  v14 = v4[0xD];
  v7 = v4[0xE];
  v21 = v4[0xF];
  result[0xC] = v4[0xC];
  result[0xD] = v14;
  result[0xE] = v7;
  result[0xF] = v21;
  v15 = v4[0x15];
  v8 = v4[0x16];
  v22 = v4[0x17];
  result[0x10] = v4[0x14];
  result[0x11] = v15;
  result[0x12] = v8;
  result[0x13] = v22;
  v16 = v4[0x19];
  v9 = v4[0x1A];
  v23 = v4[0x1B];
  result[0x14] = v4[0x18];
  result[0x15] = v16;
  result[0x16] = v9;
  result[0x17] = v23;
  v17 = v4[9];
  v10 = v4[0xA];
  v24 = v4[0xB];
  result[0x18] = v4[8];
  result[0x19] = v17;
  result[0x1A] = v10;
  result[0x1B] = v24;
  v18 = v4[0x11];
  v11 = v4[0x12];
  v25 = v4[0x13];
  result[0x1C] = v4[0x10];
  result[0x1D] = v18;
  result[0x1E] = v11;
  result[0x1F] = v25;
  v19 = v4[0x1D];
  v12 = v4[0x1E];
  v26 = v4[0x1F];
  result[0x20] = v4[0x1C];
  result[0x21] = v19;
  result[0x22] = v12;
  result[0x23] = v26;
  result[3] = v4[0x20];
  result[4] = v4[0x21];
  result[5] = v4[0x22];
  return result;
}
