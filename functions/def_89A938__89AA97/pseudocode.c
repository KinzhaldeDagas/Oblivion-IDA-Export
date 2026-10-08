int __userpurge def_89A938@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _BYTE a9[24],
        int a10,
        __m128 a11,
        int a12,
        int a13,
        int a14,
        int a15,
        __int128 a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        char a52,
        int a53,
        int a54,
        int a55,
        int a56,
        char a57)
{
  _WORD *v57; // eax
  __m128 v58; // xmm0
  float v59; // xmm1_4
  __m128 v60; // xmm0
  double v61; // st7
  int v62; // edx
  __int32 v63; // eax
  __int32 v64; // ecx
  bool v65; // sf
  bool v66; // of
  int v67; // ecx
  int v68; // eax
  _DWORD *v69; // eax
  int v70; // eax
  _DWORD *v71; // eax
  int v72; // ecx
  int v73; // eax
  int v74; // edx
  int v75; // eax
  _WORD *v76; // eax
  _WORD *v77; // eax
  int v79; // [esp-8h] [ebp-8h]

  *(_DWORD *)(a3 + 0xB4) = 4; /*0x89aa9c*/
  *(_DWORD *)(a2 + 0x95) = 4; /*0x89aaa2*/
  v57 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x28, 0x12); /*0x89aab4*/
  v57[2] = 0x28; /*0x89aaba*/
  *(_DWORD *)(a3 + 8) = sub_8D3330(v57, a1); /*0x89aac5*/
  v58 = _mm_mul_ps(*(__m128 *)(a3 + 0x20), *(__m128 *)(a3 + 0x20)); /*0x89aacc*/
  v59 = _mm_shuffle_ps(v58, v58, 0x55).m128_f32[0] + v58.m128_f32[0]; /*0x89aad6*/
  v60 = _mm_shuffle_ps(v58, v58, 0xAA); /*0x89aada*/
  v60.m128_f32[0] = v60.m128_f32[0] + v59; /*0x89aade*/
  a11 = v60; /*0x89aae2*/
  a11.m128_i32[0] = fsqrt(v60.m128_f32[0]); /*0x89aaeb*/
  v61 = a11.m128_f32[0]; /*0x89aafe*/
  if ( a11.m128_f32[0] == *(float *)&SrcStr ) /*0x89ab13*/
    v61 = flt_A96D08; /*0x89ab17*/
  v62 = *(_DWORD *)(a3 + 0x74); /*0x89ab1d*/
  a11.m128_f32[0] = v61; /*0x89ab20*/
  v63 = *(_DWORD *)(v62 + 8); /*0x89ab24*/
  v64 = *(_DWORD *)(a2 + 0x5C); /*0x89ab2a*/
  a11.m128_i32[3] = *(_DWORD *)(a2 + 0x58); /*0x89ab2d*/
  v66 = __OFSUB__(*(_BYTE *)(a2 + 0x95), 4); /*0x89ab31*/
  v65 = (char)(*(_BYTE *)(a2 + 0x95) - 4) < 0; /*0x89ab31*/
  a11.m128_i32[1] = v63; /*0x89ab38*/
  LOBYTE(a14) = v65 == v66; /*0x89ab3f*/
  LOBYTE(v63) = *(_BYTE *)(a2 + 0x68); /*0x89ab43*/
  a11.m128_i32[2] = v64; /*0x89ab48*/
  BYTE1(a14) = (_BYTE)v63 == 2; /*0x89ab55*/
  v67 = *(_DWORD *)(a3 + 0x7C); /*0x89ab59*/
  BYTE2(a14) = (char)v63 >= 1; /*0x89ab60*/
  a12 = 0x20001; /*0x89ab64*/
  a13 = 0x40003; /*0x89ab72*/
  sub_8DA870(v67, (int)&a11); /*0x89ab80*/
  *(_DWORD *)(*(_DWORD *)(a3 + 0x74) + 0x28) = *(_DWORD *)(a3 + 0x7C) + 0x1A50; /*0x89ab90*/
  v68 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x6C, 0x2F); /*0x89ab9f*/
  *(_WORD *)(v68 + 4) = 0x6C; /*0x89aba5*/
  v69 = sub_8DE400((_DWORD *)v68, a3); /*0x89abab*/
  *(_DWORD *)(a3 + 0x30) = v69; /*0x89abb0*/
  *((_WORD *)v69 + 0x10) = 0xFFFF; /*0x89abb3*/
  *(_BYTE *)(*(_DWORD *)(a3 + 0x30) + 0x28) = a1; /*0x89abbf*/
  *(_BYTE *)(*(_DWORD *)(a3 + 0x30) + 0x29) = a1; /*0x89abc7*/
  if ( *(_BYTE *)(a3 + 0xA4) == (_BYTE)a1 ) /*0x89abcf*/
  {
    v70 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x6C, 0x2F); /*0x89abdd*/
    *(_WORD *)(v70 + 4) = 0x6C; /*0x89abe3*/
    v71 = sub_8DE400((_DWORD *)v70, a3); /*0x89abe9*/
    a9 = v71; /*0x89abfd*/
    if ( *(_DWORD *)(a3 + 0x3C) == (*(_DWORD *)(a3 + 0x40) & 0x3FFFFFFF) ) /*0x89ac01*/
    {
      sub_8A6EE0((const void **)(a3 + 0x38), 4); /*0x89ac06*/
      v71 = a9; /*0x89ac0b*/
    }
    *(_DWORD *)(*(_DWORD *)(a3 + 0x38) + 4 * (*(_DWORD *)(a3 + 0x3C))++) = v71; /*0x89ac18*/
    *((_WORD *)v71 + 0x10) = a1; /*0x89ac1e*/
  }
  sub_8DF420(&a16); /*0x89ac26*/
  v72 = unk_BA7FB0; /*0x89ac2b*/
  a57 = 7; /*0x89ac34*/
  a49 = 0; /*0x89ac3c*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v72 + 0xC))(v72, 0x7CDCD39F); /*0x89ac50*/
  v73 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xC4, 0x2A); /*0x89ac62*/
  *(_WORD *)(v73 + 4) = 0xC4; /*0x89ac6c*/
  *(_DWORD *)(a3 + 0x34) = sub_8A9F50((char *)v73, (int)&a15); /*0x89ac77*/
  v79 = unk_BA7FB0; /*0x89ac80*/
  LOBYTE(v79) = 1; /*0x89ac83*/
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7FB0 + 0xC))(unk_BA7FB0, 0x7CDCD39F, v79); /*0x89ac8d*/
  sub_8994E0((_DWORD *)a3, *(_DWORD **)(a3 + 0x34), 1); /*0x89ac98*/
  sub_8BC730(*(int (__thiscall ****)(int (__stdcall ***)(signed int), int))(a3 + 0x34)); /*0x89aca0*/
  v74 = *(_DWORD *)(a3 + 0x74); /*0x89aca5*/
  *(_DWORD *)(a3 + 0x168) = a1; /*0x89aca8*/
  *(_DWORD *)(v74 + 0x24) = a3 + 0x160; /*0x89acb4*/
  if ( *(_BYTE *)(a2 + 0x28) == 3 ) /*0x89acbb*/
  {
    *(_DWORD *)(a3 + 0x154) = a1; /*0x89ace7*/
  }
  else
  {
    v75 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x30, 0xC); /*0x89acc9*/
    *(_WORD *)(v75 + 4) = 0x30; /*0x89accc*/
    *(_DWORD *)(a3 + 0x154) = sub_8DF080((_DWORD *)v75, (_DWORD *)a3, *(char *)(a2 + 0x28)); /*0x89acdf*/
  }
  v76 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10, 0x12); /*0x89acf9*/
  v76[2] = 0x10; /*0x89acfe*/
  v77 = sub_8DEC10(v76); /*0x89ad04*/
  *(_DWORD *)(a3 + 0x5C) = v77; /*0x89ad09*/
  (*(void (__thiscall **)(_WORD *, int))(*(_DWORD *)v77 + 8))(v77, a3); /*0x89ad11*/
  if ( *(_BYTE *)(a2 + 0x95) != 9 ) /*0x89ad1b*/
    sub_8DEBE0((_BYTE *)(a3 + 0x9C)); /*0x89ad23*/
  return a3; /*0x89ad3c*/
}
