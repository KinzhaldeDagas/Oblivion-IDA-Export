void __cdecl sub_89A230(__m128 *a1, int Args)
{
  int v2; // ecx
  int v3; // esi
  char *v4; // eax
  char *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  __m128 v10; // xmm0
  float v11; // xmm1_4
  __m128 v12; // xmm0
  _OWORD v13[14]; // [esp+28h] [ebp-2F0h] BYREF
  char v14[516]; // [esp+110h] [ebp-208h] BYREF

  v3 = v2;
  *(_DWORD *)v2 = &off_A96D6C;
  *(_DWORD *)(v2 + 0x10) = 0;
  *(_DWORD *)(v2 + 0x14) = 0;
  *(_DWORD *)(v2 + 0x18) = 0;
  *(_WORD *)(v2 + 6) = 1;
  *(_DWORD *)(v2 + 0x38) = 0;
  *(_DWORD *)(v2 + 0x3C) = 0;
  *(_DWORD *)(v2 + 0x40) = 0x80000000;
  *(_DWORD *)(v2 + 0x44) = 0;
  *(_DWORD *)(v2 + 0x48) = 0;
  *(_DWORD *)(v2 + 0x4C) = 0x80000000;
  *(_DWORD *)(v2 + 0x50) = 0;
  *(_DWORD *)(v2 + 0x54) = 0;
  *(_DWORD *)(v2 + 0x58) = 0x80000000;
  *(_BYTE *)(v2 + 0x9C) = 0xFD;
  *(_BYTE *)(v2 + 0x9D) = 0;
  *(_DWORD *)(v2 + 0xB8) = 0;
  *(_DWORD *)(v2 + 0xBC) = 0;
  *(_DWORD *)(v2 + 0xC0) = 0x80000000;
  *(_DWORD *)(v2 + 0xC4) = 0;
  *(_DWORD *)(v2 + 0xC8) = 0;
  *(_DWORD *)(v2 + 0xCC) = 0x80000000;
  *(_DWORD *)(v2 + 0xD0) = 0;
  *(_DWORD *)(v2 + 0xD4) = 0;
  *(_DWORD *)(v2 + 0xD8) = 0x80000000;
  *(_DWORD *)(v2 + 0xDC) = 0;
  *(_DWORD *)(v2 + 0xE0) = 0;
  *(_DWORD *)(v2 + 0xE4) = 0x80000000;
  *(_DWORD *)(v2 + 0xE8) = 0;
  *(_DWORD *)(v2 + 0xEC) = 0;
  *(_DWORD *)(v2 + 0xF0) = 0x80000000;
  *(_DWORD *)(v2 + 0xF4) = 0;
  *(_DWORD *)(v2 + 0xF8) = 0;
  *(_DWORD *)(v2 + 0xFC) = 0x80000000;
  *(_DWORD *)(v2 + 0x100) = 0;
  *(_DWORD *)(v2 + 0x104) = 0;
  *(_DWORD *)(v2 + 0x108) = 0x80000000;
  *(_DWORD *)(v2 + 0x10C) = 0;
  *(_DWORD *)(v2 + 0x110) = 0;
  *(_DWORD *)(v2 + 0x114) = 0x80000000;
  *(_DWORD *)(v2 + 0x118) = 0;
  *(_DWORD *)(v2 + 0x11C) = 0;
  *(_DWORD *)(v2 + 0x120) = 0x80000000;
  *(_DWORD *)(v2 + 0x124) = 0;
  *(_DWORD *)(v2 + 0x128) = 0;
  *(_DWORD *)(v2 + 0x12C) = 0x80000000;
  *(_DWORD *)(v2 + 0x130) = 0;
  *(_DWORD *)(v2 + 0x134) = 0;
  *(_DWORD *)(v2 + 0x138) = 0x80000000;
  *(_DWORD *)(v2 + 0x13C) = 0;
  *(_DWORD *)(v2 + 0x140) = 0;
  *(_DWORD *)(v2 + 0x144) = 0x80000000;
  *(_DWORD *)(v2 + 0x148) = 0;
  *(_DWORD *)(v2 + 0x14C) = 0;
  *(_DWORD *)(v2 + 0x150) = 0x80000000;
  v4 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x28, 0x2C);
  if ( v4 )
    v5 = sub_8D87A0(v4, v3);
  else
    v5 = 0;
  *(_DWORD *)(v3 + 0x80) = v5;
  *(_DWORD *)(v3 + 0x94) = 0;
  *(_DWORD *)(v3 + 0x84) = 0;
  *(_DWORD *)(v3 + 0x88) = 0;
  *(_DWORD *)(v3 + 0x8C) = 0;
  *(_BYTE *)(v3 + 0x90) = 0;
  *(_BYTE *)(v3 + 0x91) = 1;
  *(_DWORD *)(v3 + 0x98) = 1;
  *(_DWORD *)(v3 + 0xA0) = 0;
  if ( Args != 0x7595 )
  {
    sub_8BBFB0((int)v13, 0, v14, 0x200u, 1);
    v6 = sub_8BBDB0(v13, "** Havok libs built with version [");
    v7 = sub_8BBE00(v6, 0x7595);
    v8 = sub_8BBDB0(v7, "], used with code built with [");
    v9 = sub_8BBE70(v8, Args);
    sub_8BBDB0(v9, "]. **");
    (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
      dword_BA7FB0,
      3,
      0x53C94B42,
      v14,
      ".\\world\\hkWorld.cpp",
      0x859);
    sub_8BC000(v13);
  }
  *(_DWORD *)(v3 + 0xB4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(__m128 *)(v3 + 0x20) = a1[1];
  *(_BYTE *)(v3 + 0xA6) = a1[8].m128_i8[0xC];
  *(_DWORD *)(v3 + 0xB0) = a1[9].m128_i32[0];
  *(_DWORD *)(v3 + 0xA8) = a1[8].m128_i32[1];
  *(_DWORD *)(v3 + 0xAC) = a1[8].m128_i32[2];
  *(_DWORD *)(v3 + 0x170) = 0x3F800000;
  *(_DWORD *)(v3 + 0x174) = a1[6].m128_i32[3];
  *(_DWORD *)(v3 + 0x178) = a1[7].m128_i32[0];
  *(float *)(v3 + 0x17C) = a1[6].m128_f32[3] * flt_A3D65C;
  *(_DWORD *)(v3 + 0x1A0) = a1[2].m128_i32[1];
  *(_DWORD *)(v3 + 0x26C) = a1[7].m128_i32[1];
  *(float *)(v3 + 0x270) = fConstant_1 / (double)a1[7].m128_i32[1];
  v10 = _mm_mul_ps(a1[1], a1[1]);
  v11 = _mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0];
  v12 = _mm_shuffle_ps(v10, v10, 0xAA);
  v12.m128_f32[0] = v12.m128_f32[0] + v11;
  v13[0] = v12;
  LODWORD(v13[0]) = fsqrt(v12.m128_f32[0]);
  JUMPOUT(0x89A5D8);
}
