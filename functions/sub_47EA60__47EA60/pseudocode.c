NiAVObject *__cdecl sub_47EA60(float a1, float a2, float a3, _DWORD *a4)
{
  double v4; // rt0
  double v5; // st7
  float *v6; // ebx
  double v7; // st6
  double v8; // st5
  _DWORD *v9; // eax
  _DWORD *v10; // edi
  _WORD *v11; // esi
  NiAVObject *v12; // eax
  float v14; // [esp+14h] [ebp-18h]
  float v15; // [esp+14h] [ebp-18h]
  float v16; // [esp+14h] [ebp-18h]
  float v17; // [esp+14h] [ebp-18h]
  float v18; // [esp+14h] [ebp-18h]
  float v19; // [esp+14h] [ebp-18h]
  float v20; // [esp+18h] [ebp-14h]
  float v21; // [esp+18h] [ebp-14h]
  float v22; // [esp+30h] [ebp+4h]
  float v23; // [esp+30h] [ebp+4h]
  float v24; // [esp+30h] [ebp+4h]
  float v25; // [esp+30h] [ebp+4h]
  float v26; // [esp+34h] [ebp+8h]
  float v27; // [esp+38h] [ebp+Ch]

  v4 = dbl_A2FAA0;
  v22 = a1 * v4;
  v26 = a2 * v4;
  v27 = v4 * a3;
  v5 = v22;
  v6 = (float *)FormHeapAlloc(0x60u);
  v23 = -v22;
  v7 = v23;
  *v6 = v23;
  v6[1] = v26;
  v6[2] = v27;
  v14 = v5;
  v6[3] = v14;
  v6[4] = v26;
  v6[5] = v27;
  v15 = v5;
  v6[6] = v15;
  v24 = -v26;
  v8 = v24;
  v6[7] = v24;
  v6[8] = v27;
  v16 = v7;
  v6[9] = v16;
  v6[0xA] = v24;
  v6[0xB] = v27;
  v17 = v7;
  v6[0xC] = v17;
  v6[0xD] = v26;
  v25 = -v27;
  v18 = v5;
  v6[0xE] = v25;
  v6[0xF] = v18;
  v6[0x10] = v26;
  v6[0x11] = v25;
  v20 = v8;
  v6[0x12] = v18;
  v6[0x13] = v20;
  v19 = v7;
  v6[0x14] = v25;
  v21 = v8;
  v6[0x15] = v19;
  v6[0x16] = v21;
  v6[0x17] = v25;
  v9 = (_DWORD *)FormHeapAlloc(0x80u);
  v10 = v9;
  if ( v9 )
    sub_401080(v9, 0x10, 8, (void *(__thiscall *)(void *))sub_47EA50);
  else
    v10 = 0;
  *v10 = *a4;
  v10[1] = a4[1];
  v10[2] = a4[2];
  v10[3] = a4[3];
  v10[4] = *a4;
  v10[5] = a4[1];
  v10[6] = a4[2];
  v10[7] = a4[3];
  v10[8] = *a4;
  v10[9] = a4[1];
  v10[0xA] = a4[2];
  v10[0xB] = a4[3];
  v10[0xC] = *a4;
  v10[0xD] = a4[1];
  v10[0xE] = a4[2];
  v10[0xF] = a4[3];
  v10[0x10] = *a4;
  v10[0x11] = a4[1];
  v10[0x12] = a4[2];
  v10[0x13] = a4[3];
  v10[0x14] = *a4;
  v10[0x15] = a4[1];
  v10[0x16] = a4[2];
  v10[0x17] = a4[3];
  v10[0x18] = *a4;
  v10[0x19] = a4[1];
  v10[0x1A] = a4[2];
  v10[0x1B] = a4[3];
  v10[0x1C] = *a4;
  v10[0x1D] = a4[1];
  v10[0x1E] = a4[2];
  v10[0x1F] = a4[3];
  v11 = (_WORD *)FormHeapAlloc(0x90u);
  *v11 = 0;
  v11[1] = 2;
  v11[2] = 1;
  v11[3] = 0;
  v11[4] = 3;
  v11[5] = 2;
  v11[6] = 0;
  v11[7] = 7;
  v11[8] = 3;
  v11[0xC] = 1;
  v11[0xF] = 1;
  v11[0x12] = 2;
  v11[0x14] = 1;
  v11[0x15] = 2;
  v11[0x1A] = 2;
  v11[0x26] = 2;
  v11[0x28] = 2;
  v11[0x36] = 2;
  v11[0x39] = 2;
  v11[0x3D] = 2;
  v11[9] = 0;
  v11[0xA] = 4;
  v11[0xB] = 7;
  v11[0xD] = 4;
  v11[0xE] = 0;
  v11[0x10] = 5;
  v11[0x11] = 4;
  v11[0x13] = 5;
  v11[0x16] = 6;
  v11[0x17] = 5;
  v11[0x18] = 3;
  v11[0x19] = 6;
  v11[0x1B] = 3;
  v11[0x1C] = 7;
  v11[0x1D] = 6;
  v11[0x1E] = 4;
  v11[0x1F] = 7;
  v11[0x20] = 6;
  v11[0x21] = 4;
  v11[0x22] = 6;
  v11[0x23] = 5;
  v11[0x24] = 0;
  v11[0x25] = 1;
  v11[0x27] = 0;
  v11[0x29] = 3;
  v11[0x2A] = 0;
  v11[0x2B] = 3;
  v11[0x2C] = 7;
  v11[0x2D] = 0;
  v11[0x2E] = 7;
  v11[0x2F] = 4;
  v11[0x30] = 1;
  v11[0x31] = 0;
  v11[0x32] = 4;
  v11[0x33] = 1;
  v11[0x34] = 4;
  v11[0x35] = 5;
  v11[0x37] = 1;
  v11[0x38] = 5;
  v11[0x3A] = 5;
  v11[0x3B] = 6;
  v11[0x3C] = 3;
  v11[0x3E] = 6;
  v11[0x3F] = 3;
  v11[0x40] = 6;
  v11[0x41] = 7;
  v11[0x42] = 4;
  v11[0x43] = 6;
  v11[0x44] = 7;
  v11[0x45] = 4;
  v11[0x46] = 5;
  v11[0x47] = 6;
  v12 = (NiAVObject *)FormHeapAlloc(0xC0u);
  if ( v12 )
    return sub_7174B0(v12, 8, (int)v6, 0, (int)v10, 0, 0, 0, 0x18, (int)v11);
  else
    return 0;
}
