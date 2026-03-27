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

  *(_DWORD *)(a3 + 0xB4) = 4;
  *(_DWORD *)(a2 + 0x95) = 4;
  v57 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x28, 0x12);
  v57[2] = 0x28;
  *(_DWORD *)(a3 + 8) = sub_8D3330(v57, a1);
  v58 = _mm_mul_ps(*(__m128 *)(a3 + 0x20), *(__m128 *)(a3 + 0x20));
  v59 = _mm_shuffle_ps(v58, v58, 0x55).m128_f32[0] + v58.m128_f32[0];
  v60 = _mm_shuffle_ps(v58, v58, 0xAA);
  v60.m128_f32[0] = v60.m128_f32[0] + v59;
  a11 = v60;
  a11.m128_i32[0] = fsqrt(v60.m128_f32[0]);
  v61 = a11.m128_f32[0];
  if ( a11.m128_f32[0] == *(float *)&SrcStr )
    v61 = flt_A96D08;
  v62 = *(_DWORD *)(a3 + 0x74);
  a11.m128_f32[0] = v61;
  v63 = *(_DWORD *)(v62 + 8);
  v64 = *(_DWORD *)(a2 + 0x5C);
  a11.m128_i32[3] = *(_DWORD *)(a2 + 0x58);
  v66 = __OFSUB__(*(_BYTE *)(a2 + 0x95), 4);
  v65 = (char)(*(_BYTE *)(a2 + 0x95) - 4) < 0;
  a11.m128_i32[1] = v63;
  LOBYTE(a14) = v65 == v66;
  LOBYTE(v63) = *(_BYTE *)(a2 + 0x68);
  a11.m128_i32[2] = v64;
  BYTE1(a14) = (_BYTE)v63 == 2;
  v67 = *(_DWORD *)(a3 + 0x7C);
  BYTE2(a14) = (char)v63 >= 1;
  a12 = 0x20001;
  a13 = 0x40003;
  sub_8DA870(v67, (int)&a11);
  *(_DWORD *)(*(_DWORD *)(a3 + 0x74) + 0x28) = *(_DWORD *)(a3 + 0x7C) + 0x1A50;
  v68 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x6C, 0x2F);
  *(_WORD *)(v68 + 4) = 0x6C;
  v69 = sub_8DE400((_DWORD *)v68, a3);
  *(_DWORD *)(a3 + 0x30) = v69;
  *((_WORD *)v69 + 0x10) = 0xFFFF;
  *(_BYTE *)(*(_DWORD *)(a3 + 0x30) + 0x28) = a1;
  *(_BYTE *)(*(_DWORD *)(a3 + 0x30) + 0x29) = a1;
  if ( *(_BYTE *)(a3 + 0xA4) == (_BYTE)a1 )
  {
    v70 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x6C, 0x2F);
    *(_WORD *)(v70 + 4) = 0x6C;
    v71 = sub_8DE400((_DWORD *)v70, a3);
    a9 = v71;
    if ( *(_DWORD *)(a3 + 0x3C) == (*(_DWORD *)(a3 + 0x40) & 0x3FFFFFFF) )
    {
      sub_8A6EE0(a3 + 0x38, 4);
      v71 = a9;
    }
    *(_DWORD *)(*(_DWORD *)(a3 + 0x38) + 4 * (*(_DWORD *)(a3 + 0x3C))++) = v71;
    *((_WORD *)v71 + 0x10) = a1;
  }
  sub_8DF420(&a16);
  v72 = dword_BA7FB0;
  a57 = 7;
  a49 = 0;
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v72 + 0xC))(v72, 0x7CDCD39F);
  v73 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xC4, 0x2A);
  *(_WORD *)(v73 + 4) = 0xC4;
  *(_DWORD *)(a3 + 0x34) = sub_8A9F50((char *)v73, (int)&a15);
  v79 = dword_BA7FB0;
  LOBYTE(v79) = 1;
  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7FB0 + 0xC))(dword_BA7FB0, 0x7CDCD39F, v79);
  sub_8994E0((_DWORD *)a3, *(_DWORD **)(a3 + 0x34), 1);
  sub_8BC730(*(int (__stdcall ****)(signed int))(a3 + 0x34));
  v74 = *(_DWORD *)(a3 + 0x74);
  *(_DWORD *)(a3 + 0x168) = a1;
  *(_DWORD *)(v74 + 0x24) = a3 + 0x160;
  if ( *(_BYTE *)(a2 + 0x28) == 3 )
  {
    *(_DWORD *)(a3 + 0x154) = a1;
  }
  else
  {
    v75 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x30, 0xC);
    *(_WORD *)(v75 + 4) = 0x30;
    *(_DWORD *)(a3 + 0x154) = sub_8DF080((_DWORD *)v75, (_DWORD *)a3, *(char *)(a2 + 0x28));
  }
  v76 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x10, 0x12);
  v76[2] = 0x10;
  v77 = sub_8DEC10(v76);
  *(_DWORD *)(a3 + 0x5C) = v77;
  (*(void (__thiscall **)(_WORD *, int))(*(_DWORD *)v77 + 8))(v77, a3);
  if ( *(_BYTE *)(a2 + 0x95) != 9 )
    sub_8DEBE0((_BYTE *)(a3 + 0x9C));
  return a3;
}
