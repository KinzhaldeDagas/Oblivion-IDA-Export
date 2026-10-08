void __cdecl sub_89A230(__m128 *a1, char *Args)
{
  int v2; // ecx
  int v3; // esi
  char *v4; // eax
  char *v5; // eax
  int **v6; // eax
  int **v7; // eax
  int **v8; // eax
  int **v9; // eax
  __m128 v10; // xmm0
  float v11; // xmm1_4
  __m128 v12; // xmm0
  _OWORD v13[14]; // [esp+28h] [ebp-2F0h] BYREF
  char v14[516]; // [esp+110h] [ebp-208h] BYREF

  v3 = v2; /*0x89a245*/
  *(_DWORD *)v2 = &off_A96D6C; /*0x89a247*/
  *(_DWORD *)(v2 + 0x10) = 0; /*0x89a24d*/
  *(_DWORD *)(v2 + 0x14) = 0; /*0x89a250*/
  *(_DWORD *)(v2 + 0x18) = 0; /*0x89a253*/
  *(_WORD *)(v2 + 6) = 1; /*0x89a268*/
  *(_DWORD *)(v2 + 0x38) = 0; /*0x89a26c*/
  *(_DWORD *)(v2 + 0x3C) = 0; /*0x89a26f*/
  *(_DWORD *)(v2 + 0x40) = 0x80000000; /*0x89a272*/
  *(_DWORD *)(v2 + 0x44) = 0; /*0x89a275*/
  *(_DWORD *)(v2 + 0x48) = 0; /*0x89a278*/
  *(_DWORD *)(v2 + 0x4C) = 0x80000000; /*0x89a27b*/
  *(_DWORD *)(v2 + 0x50) = 0; /*0x89a27e*/
  *(_DWORD *)(v2 + 0x54) = 0; /*0x89a281*/
  *(_DWORD *)(v2 + 0x58) = 0x80000000; /*0x89a284*/
  *(_BYTE *)(v2 + 0x9C) = 0xFD; /*0x89a287*/
  *(_BYTE *)(v2 + 0x9D) = 0; /*0x89a28e*/
  *(_DWORD *)(v2 + 0xB8) = 0; /*0x89a294*/
  *(_DWORD *)(v2 + 0xBC) = 0; /*0x89a29a*/
  *(_DWORD *)(v2 + 0xC0) = 0x80000000; /*0x89a2a0*/
  *(_DWORD *)(v2 + 0xC4) = 0; /*0x89a2a6*/
  *(_DWORD *)(v2 + 0xC8) = 0; /*0x89a2ac*/
  *(_DWORD *)(v2 + 0xCC) = 0x80000000; /*0x89a2b2*/
  *(_DWORD *)(v2 + 0xD0) = 0; /*0x89a2b8*/
  *(_DWORD *)(v2 + 0xD4) = 0; /*0x89a2be*/
  *(_DWORD *)(v2 + 0xD8) = 0x80000000; /*0x89a2c4*/
  *(_DWORD *)(v2 + 0xDC) = 0; /*0x89a2ca*/
  *(_DWORD *)(v2 + 0xE0) = 0; /*0x89a2d0*/
  *(_DWORD *)(v2 + 0xE4) = 0x80000000; /*0x89a2d6*/
  *(_DWORD *)(v2 + 0xE8) = 0; /*0x89a2dc*/
  *(_DWORD *)(v2 + 0xEC) = 0; /*0x89a2e2*/
  *(_DWORD *)(v2 + 0xF0) = 0x80000000; /*0x89a2e8*/
  *(_DWORD *)(v2 + 0xF4) = 0; /*0x89a2ee*/
  *(_DWORD *)(v2 + 0xF8) = 0; /*0x89a2f4*/
  *(_DWORD *)(v2 + 0xFC) = 0x80000000; /*0x89a2fa*/
  *(_DWORD *)(v2 + 0x100) = 0; /*0x89a300*/
  *(_DWORD *)(v2 + 0x104) = 0; /*0x89a306*/
  *(_DWORD *)(v2 + 0x108) = 0x80000000; /*0x89a30c*/
  *(_DWORD *)(v2 + 0x10C) = 0; /*0x89a312*/
  *(_DWORD *)(v2 + 0x110) = 0; /*0x89a318*/
  *(_DWORD *)(v2 + 0x114) = 0x80000000; /*0x89a31e*/
  *(_DWORD *)(v2 + 0x118) = 0; /*0x89a324*/
  *(_DWORD *)(v2 + 0x11C) = 0; /*0x89a32a*/
  *(_DWORD *)(v2 + 0x120) = 0x80000000; /*0x89a330*/
  *(_DWORD *)(v2 + 0x124) = 0; /*0x89a336*/
  *(_DWORD *)(v2 + 0x128) = 0; /*0x89a33c*/
  *(_DWORD *)(v2 + 0x12C) = 0x80000000; /*0x89a342*/
  *(_DWORD *)(v2 + 0x130) = 0; /*0x89a348*/
  *(_DWORD *)(v2 + 0x134) = 0; /*0x89a34e*/
  *(_DWORD *)(v2 + 0x138) = 0x80000000; /*0x89a354*/
  *(_DWORD *)(v2 + 0x13C) = 0; /*0x89a35a*/
  *(_DWORD *)(v2 + 0x140) = 0; /*0x89a360*/
  *(_DWORD *)(v2 + 0x144) = 0x80000000; /*0x89a366*/
  *(_DWORD *)(v2 + 0x148) = 0; /*0x89a36c*/
  *(_DWORD *)(v2 + 0x14C) = 0; /*0x89a372*/
  *(_DWORD *)(v2 + 0x150) = 0x80000000; /*0x89a378*/
  v4 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x28, 0x2C); /*0x89a38a*/
  if ( v4 ) /*0x89a38f*/
    v5 = sub_8D87A0(v4, v3); /*0x89a394*/
  else
    v5 = 0; /*0x89a39b*/
  *(_DWORD *)(v3 + 0x80) = v5; /*0x89a39d*/
  *(_DWORD *)(v3 + 0x94) = 0; /*0x89a3a3*/
  *(_DWORD *)(v3 + 0x84) = 0; /*0x89a3a9*/
  *(_DWORD *)(v3 + 0x88) = 0; /*0x89a3af*/
  *(_DWORD *)(v3 + 0x8C) = 0; /*0x89a3b5*/
  *(_BYTE *)(v3 + 0x90) = 0; /*0x89a3bb*/
  *(_BYTE *)(v3 + 0x91) = 1; /*0x89a3c1*/
  *(_DWORD *)(v3 + 0x98) = 1; /*0x89a3c8*/
  *(_DWORD *)(v3 + 0xA0) = 0; /*0x89a3d7*/
  if ( Args != (char *)0x7595 ) /*0x89a3dd*/
  {
    sub_8BBFB0((int)v13, 0, v14, 0x200u, 1); /*0x89a3fa*/
    v6 = sub_8BBDB0((int **)v13, "** Havok libs built with version ["); /*0x89a418*/
    v7 = sub_8BBE00(v6, (char *)0x7595); /*0x89a41f*/
    v8 = sub_8BBDB0(v7, "], used with code built with ["); /*0x89a426*/
    v9 = sub_8BBE70(v8, Args); /*0x89a42d*/
    sub_8BBDB0(v9, "]. **"); /*0x89a434*/
    (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x89a45a*/
      unk_BA7FB0,
      3,
      0x53C94B42,
      v14,
      ".\\world\\hkWorld.cpp",
      0x859);
    sub_8BC000(v13); /*0x89a461*/
  }
  *(_DWORD *)(v3 + 0xB4) = 0; /*0x89a469*/
  *(_DWORD *)(v3 + 8) = 0; /*0x89a46f*/
  *(__m128 *)(v3 + 0x20) = a1[1]; /*0x89a476*/
  *(_BYTE *)(v3 + 0xA6) = a1[8].m128_i8[0xC]; /*0x89a480*/
  *(_DWORD *)(v3 + 0xB0) = a1[9].m128_i32[0]; /*0x89a48c*/
  *(_QWORD *)(v3 + 0xA8) = *(unsigned __int64 *)((char *)a1[8].m128_u64 + 4); /*0x89a498*/
  *(_DWORD *)(v3 + 0x170) = 0x3F800000; /*0x89a4aa*/
  *(_QWORD *)(v3 + 0x174) = *(unsigned __int64 *)((char *)&a1[6].m128_u64[1] + 4); /*0x89a4b7*/
  *(float *)(v3 + 0x17C) = a1[6].m128_f32[3] * kHeadBodyNormalMatchRadius; /*0x89a4d3*/
  *(_DWORD *)(v3 + 0x1A0) = a1[2].m128_i32[1]; /*0x89a4dc*/
  *(_DWORD *)(v3 + 0x26C) = a1[7].m128_i32[1]; /*0x89a4e5*/
  *(float *)(v3 + 0x270) = fConstant_1 / (double)a1[7].m128_i32[1]; /*0x89a4f4*/
  v10 = _mm_mul_ps(a1[1], a1[1]); /*0x89a4fe*/
  v11 = _mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]; /*0x89a508*/
  v12 = _mm_shuffle_ps(v10, v10, 0xAA); /*0x89a50c*/
  v12.m128_f32[0] = v12.m128_f32[0] + v11; /*0x89a510*/
  v13[0] = v12; /*0x89a514*/
  LODWORD(v13[0]) = fsqrt(v12.m128_f32[0]); /*0x89a51d*/
  JUMPOUT(0x89A5D8); /*0x89a5d8*/
}
