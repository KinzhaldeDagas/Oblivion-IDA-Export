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

  *(float *)&v21[4] = 0.0; /*0x8c292f*/
  *(float *)&v21[5] = 0.0; /*0x8c2933*/
  v3 = a3; /*0x8c2938*/
  *(float *)&v21[6] = 0.0; /*0x8c293b*/
  *(float *)&v21[7] = 0.0; /*0x8c293f*/
  *(float *)&v21[8] = 0.0; /*0x8c2944*/
  *(float *)&v21[9] = 0.0; /*0x8c294a*/
  *(float *)&v21[0xA] = 0.0; /*0x8c2952*/
  *(float *)&v21[0xB] = 0.0; /*0x8c2956*/
  memset(v21, 0, 0xC); /*0x8c295a*/
  *(float *)&v21[0xC] = 0.0; /*0x8c295e*/
  *(float *)&v21[0xD] = 0.0; /*0x8c2966*/
  *(float *)&v21[0xE] = 0.0; /*0x8c296e*/
  *(float *)&v21[0xF] = 0.0; /*0x8c2972*/
  *(float *)&v21[0x10] = 0.0; /*0x8c2976*/
  *(float *)&v21[0x11] = 0.0; /*0x8c297a*/
  *(float *)&v21[0x12] = 0.0; /*0x8c297e*/
  *(float *)&v21[0x13] = 0.0; /*0x8c2982*/
  *(float *)&v21[0x14] = 0.0; /*0x8c2986*/
  *(float *)&v21[0x15] = 0.0; /*0x8c298a*/
  *(float *)&v21[0x16] = 0.0; /*0x8c298e*/
  *(float *)&v21[0x17] = 0.0; /*0x8c2992*/
  if ( !a3 ) /*0x8c2996*/
  {
    v3 = (float *)v21; /*0x8c29a3*/
    (*(void (__cdecl **)(_DWORD, _DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)(a2 + 0x21C) + 4))( /*0x8c29ad*/
      *(_DWORD *)(a2 + 0x21C),
      v21,
      0x60,
      0,
      0);
  }
  sub_8A01F0(this, a2, (int)v3); /*0x8c29b6*/
  v6 = v3[5]; /*0x8c29be*/
  result = (float *)*(this + 1); /*0x8c29c2*/
  v11 = v3[6]; /*0x8c29c9*/
  v16 = v3[7]; /*0x8c29d0*/
  result[4] = v3[4]; /*0x8c29d7*/
  result[5] = v6; /*0x8c29de*/
  result[6] = v11; /*0x8c29e5*/
  result[7] = v16; /*0x8c29ec*/
  v17 = v3[0x11]; /*0x8c29f2*/
  v12 = v3[0x12]; /*0x8c29f9*/
  v7 = v3[0x13]; /*0x8c2a00*/
  result[8] = v3[0x10]; /*0x8c2a07*/
  result[9] = v17; /*0x8c2a0e*/
  result[0xA] = v12; /*0x8c2a15*/
  result[0xB] = v7; /*0x8c2a1c*/
  v18 = v3[0x15]; /*0x8c2a22*/
  v13 = v3[0x16]; /*0x8c2a29*/
  v8 = v3[0x17]; /*0x8c2a30*/
  result[0xC] = v3[0x14]; /*0x8c2a37*/
  result[0xD] = v18; /*0x8c2a3e*/
  result[0xE] = v13; /*0x8c2a45*/
  result[0xF] = v8; /*0x8c2a4c*/
  v19 = v3[9]; /*0x8c2a52*/
  v14 = v3[0xA]; /*0x8c2a59*/
  v9 = v3[0xB]; /*0x8c2a60*/
  result[0x10] = v3[8]; /*0x8c2a67*/
  result[0x11] = v19; /*0x8c2a6e*/
  result[0x12] = v14; /*0x8c2a75*/
  result[0x13] = v9; /*0x8c2a7c*/
  v20 = v3[0xD]; /*0x8c2a82*/
  v15 = v3[0xE]; /*0x8c2a89*/
  v10 = v3[0xF]; /*0x8c2a90*/
  result[0x14] = v3[0xC]; /*0x8c2a98*/
  result[0x15] = v20; /*0x8c2aa0*/
  result[0x16] = v15; /*0x8c2aa7*/
  result[0x17] = v10; /*0x8c2aae*/
  return result; /*0x8c2ab1*/
}
