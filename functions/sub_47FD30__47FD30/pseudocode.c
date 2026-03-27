NiAVObject *__cdecl sub_47FD30(float a1, NiD3DPassVtbl **a2)
{
  float *v2; // ebx
  double v3; // st6
  double v4; // st4
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  int v7; // esi
  NiAVObject *v8; // eax
  float v10; // [esp+14h] [ebp-18h]
  float v11; // [esp+18h] [ebp-14h]
  float v12; // [esp+1Ch] [ebp-10h]
  float v13; // [esp+1Ch] [ebp-10h]
  float v14; // [esp+30h] [ebp+4h]

  v2 = (float *)FormHeapAlloc(0x48u);
  v3 = a1;
  *v2 = 0.0;
  v4 = dbl_A3D660;
  v2[1] = 0.0;
  v12 = a1 * v4;
  v2[2] = v12;
  v14 = -a1;
  v2[3] = v14;
  v11 = v3;
  v2[4] = v11;
  v2[5] = 0.0;
  v2[6] = v11;
  v2[7] = v11;
  v10 = v3;
  v2[8] = 0.0;
  v2[9] = v10;
  v2[0xA] = v14;
  v2[0xB] = 0.0;
  v2[0xC] = v14;
  v2[0xD] = v14;
  v2[0xE] = 0.0;
  v2[0xF] = 0.0;
  v13 = v14 * v4;
  v2[0x10] = 0.0;
  v2[0x11] = v13;
  v5 = (_DWORD *)FormHeapAlloc(0x60u);
  v6 = v5;
  if ( v5 )
    sub_401080(v5, 0x10, 6, (void *(__thiscall *)(void *))sub_47EA50);
  else
    v6 = 0;
  *v6 = *a2;
  v6[1] = a2[1];
  v6[2] = a2[2];
  v6[3] = a2[3];
  v6[4] = *a2;
  v6[5] = a2[1];
  v6[6] = a2[2];
  v6[7] = a2[3];
  v6[8] = *a2;
  v6[9] = a2[1];
  v6[0xA] = a2[2];
  v6[0xB] = a2[3];
  v6[0xC] = *a2;
  v6[0xD] = a2[1];
  v6[0xE] = a2[2];
  v6[0xF] = a2[3];
  v6[0x10] = *a2;
  v6[0x11] = a2[1];
  v6[0x12] = a2[2];
  v6[0x13] = a2[3];
  v6[0x14] = *a2;
  v6[0x15] = a2[1];
  v6[0x16] = a2[2];
  v6[0x17] = a2[3];
  v7 = FormHeapAlloc(0x30u);
  *(_WORD *)(v7 + 2) = 2;
  *(_WORD *)(v7 + 6) = 0;
  *(_WORD *)(v7 + 0xA) = 2;
  *(_WORD *)(v7 + 0xC) = 0;
  *(_WORD *)(v7 + 0x1A) = 2;
  *(_WORD *)v7 = 0;
  *(_WORD *)(v7 + 4) = 1;
  *(_WORD *)(v7 + 8) = 3;
  *(_WORD *)(v7 + 0xE) = 4;
  *(_DWORD *)(v7 + 0x10) = 3;
  *(_WORD *)(v7 + 0x14) = 1;
  *(_WORD *)(v7 + 0x16) = 4;
  *(_WORD *)(v7 + 0x18) = 1;
  *(_WORD *)(v7 + 0x1C) = 5;
  *(_WORD *)(v7 + 0x1E) = 2;
  *(_WORD *)(v7 + 0x20) = 3;
  *(_WORD *)(v7 + 0x22) = 5;
  *(_WORD *)(v7 + 0x24) = 3;
  *(_WORD *)(v7 + 0x26) = 4;
  *(_WORD *)(v7 + 0x28) = 5;
  *(_WORD *)(v7 + 0x2A) = 4;
  *(_WORD *)(v7 + 0x2C) = 1;
  *(_WORD *)(v7 + 0x2E) = 5;
  v8 = (NiAVObject *)FormHeapAlloc(0xC0u);
  if ( v8 )
    return sub_7174B0(v8, 6, (int)v2, 0, (int)v6, 0, 0, 0, 8, v7);
  else
    return 0;
}
