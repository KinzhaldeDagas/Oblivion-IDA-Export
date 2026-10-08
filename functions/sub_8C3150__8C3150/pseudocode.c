_OWORD *__thiscall sub_8C3150(_DWORD *this, int a2, float *a3)
{
  float *v3; // esi
  _OWORD *v5; // ecx
  _DWORD v7[12]; // [esp+8h] [ebp-60h] BYREF
  __int128 v8; // [esp+38h] [ebp-30h] BYREF
  __int128 v9; // [esp+48h] [ebp-20h] BYREF

  *(float *)&v7[4] = 0.0; /*0x8c3167*/
  v3 = a3; /*0x8c316c*/
  *(float *)&v7[5] = 0.0; /*0x8c316f*/
  *(float *)&v7[6] = 0.0; /*0x8c3173*/
  *(float *)&v7[7] = 0.0; /*0x8c317b*/
  *(float *)&v7[8] = 0.0; /*0x8c3181*/
  *(float *)&v7[9] = 0.0; /*0x8c3185*/
  *(float *)&v7[0xA] = 0.0; /*0x8c318d*/
  *(float *)&v7[0xB] = 0.0; /*0x8c3191*/
  memset(v7, 0, 0xC); /*0x8c3195*/
  if ( !a3 ) /*0x8c31a1*/
  {
    v3 = (float *)v7; /*0x8c31ae*/
    (*(void (__cdecl **)(_DWORD, _DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)(a2 + 0x21C) + 4))( /*0x8c31b8*/
      *(_DWORD *)(a2 + 0x21C),
      v7,
      0x30,
      0,
      0);
  }
  sub_8A01F0(this, a2, (int)v3); /*0x8c31c1*/
  *(float *)&v9 = v3[8]; /*0x8c31c9*/
  *((float *)&v9 + 1) = v3[9]; /*0x8c31d5*/
  v5 = (_OWORD *)*(this + 1); /*0x8c31e1*/
  *((float *)&v9 + 2) = v3[0xA]; /*0x8c31e4*/
  *((float *)&v9 + 3) = v3[0xB]; /*0x8c31eb*/
  *(float *)&v8 = v3[4]; /*0x8c31f2*/
  *((float *)&v8 + 1) = v3[5]; /*0x8c31f9*/
  *((float *)&v8 + 2) = v3[6]; /*0x8c3200*/
  *((float *)&v8 + 3) = v3[7]; /*0x8c3207*/
  return sub_913C50(v5, &v8, &v9); /*0x8c3216*/
}
