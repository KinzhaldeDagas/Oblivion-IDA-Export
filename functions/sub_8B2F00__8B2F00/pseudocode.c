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

  sub_8B2D60(v27); /*0x8b2f15*/
  v4 = a3; /*0x8b2f1a*/
  if ( !a3 ) /*0x8b2f22*/
  {
    v4 = v27; /*0x8b2f31*/
    (*(void (__cdecl **)(_DWORD, float *, int, _DWORD, _DWORD))(*(_DWORD *)(a2 + 0x21C) + 4))( /*0x8b2f3e*/
      *(_DWORD *)(a2 + 0x21C),
      v27,
      0x90,
      0,
      0);
  }
  sub_8A01F0(this, a2, (int)v4); /*0x8b2f47*/
  v20 = v4[5]; /*0x8b2f4f*/
  result = (float *)*(this + 1); /*0x8b2f53*/
  v6 = v4[6]; /*0x8b2f59*/
  v13 = v4[7]; /*0x8b2f60*/
  result[8] = v4[4]; /*0x8b2f67*/
  result[9] = v20; /*0x8b2f6e*/
  result[0xA] = v6; /*0x8b2f75*/
  result[0xB] = v13; /*0x8b2f7c*/
  v14 = v4[0xD]; /*0x8b2f82*/
  v7 = v4[0xE]; /*0x8b2f89*/
  v21 = v4[0xF]; /*0x8b2f90*/
  result[0xC] = v4[0xC]; /*0x8b2f97*/
  result[0xD] = v14; /*0x8b2f9e*/
  result[0xE] = v7; /*0x8b2fa5*/
  result[0xF] = v21; /*0x8b2fac*/
  v15 = v4[0x15]; /*0x8b2fb2*/
  v8 = v4[0x16]; /*0x8b2fb9*/
  v22 = v4[0x17]; /*0x8b2fc0*/
  result[0x10] = v4[0x14]; /*0x8b2fc7*/
  result[0x11] = v15; /*0x8b2fce*/
  result[0x12] = v8; /*0x8b2fd5*/
  result[0x13] = v22; /*0x8b2fdc*/
  v16 = v4[0x19]; /*0x8b2fe2*/
  v9 = v4[0x1A]; /*0x8b2fe9*/
  v23 = v4[0x1B]; /*0x8b2ff0*/
  result[0x14] = v4[0x18]; /*0x8b2ff7*/
  result[0x15] = v16; /*0x8b2ffe*/
  result[0x16] = v9; /*0x8b3005*/
  result[0x17] = v23; /*0x8b300c*/
  v17 = v4[9]; /*0x8b3012*/
  v10 = v4[0xA]; /*0x8b3019*/
  v24 = v4[0xB]; /*0x8b3020*/
  result[0x18] = v4[8]; /*0x8b3027*/
  result[0x19] = v17; /*0x8b302e*/
  result[0x1A] = v10; /*0x8b3035*/
  result[0x1B] = v24; /*0x8b303c*/
  v18 = v4[0x11]; /*0x8b3042*/
  v11 = v4[0x12]; /*0x8b3049*/
  v25 = v4[0x13]; /*0x8b3050*/
  result[0x1C] = v4[0x10]; /*0x8b3058*/
  result[0x1D] = v18; /*0x8b305f*/
  result[0x1E] = v11; /*0x8b3066*/
  result[0x1F] = v25; /*0x8b306d*/
  v19 = v4[0x1D]; /*0x8b3073*/
  v12 = v4[0x1E]; /*0x8b307a*/
  v26 = v4[0x1F]; /*0x8b3081*/
  result[0x20] = v4[0x1C]; /*0x8b3088*/
  result[0x21] = v19; /*0x8b3092*/
  result[0x22] = v12; /*0x8b309c*/
  result[0x23] = v26; /*0x8b30a6*/
  result[3] = v4[0x20]; /*0x8b30b2*/
  result[4] = v4[0x21]; /*0x8b30bb*/
  result[5] = v4[0x22]; /*0x8b30c5*/
  return result; /*0x8b30c8*/
}
