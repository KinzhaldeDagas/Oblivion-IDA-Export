__int16 __thiscall sub_719110(NiRenderer *this, int a2)
{
  int v2; // edi
  int v4; // eax
  void (__cdecl *v5)(int, int *, int, int *, int); // eax
  void (__cdecl *v6)(int, int *, int, int *, int); // eax
  void (__cdecl *v7)(int, int *, int, int *, int); // eax
  void (__cdecl *v8)(int, int *, int, int *, int); // eax
  void (__cdecl *v9)(int, int *, int, int *, int); // eax
  void (__cdecl *v10)(int, int *, int, int *, int); // eax
  int v11; // eax
  int v12; // edi
  void (__cdecl *v13)(int, int *, int, int *, int); // edx
  __int16 result; // ax
  void (__cdecl *v15)(int, int *, int, int *, int); // edx
  void (__cdecl *v16)(int, int *, int, int *, int); // eax
  int v17; // edi
  __int16 (__cdecl *v18)(int, int *, int, int *, int); // edx
  int v19; // [esp-50h] [ebp-64h]
  int v20; // [esp-3Ch] [ebp-50h]
  int v21; // [esp-28h] [ebp-3Ch]
  int v22; // [esp-28h] [ebp-3Ch]
  int v23; // [esp-14h] [ebp-28h]
  int v24; // [esp-14h] [ebp-28h]
  int v25; // [esp-14h] [ebp-28h]
  int v26; // [esp+Ch] [ebp-8h] BYREF
  int v27; // [esp+10h] [ebp-4h] BYREF

  v2 = a2; /*0x719116*/
  sub_700AC0(this, (unsigned int *)a2); /*0x71911d*/
  v4 = *(_DWORD *)(v2 + 0x21C); /*0x71912c*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0x14010002u ) /*0x719134*/
  {
    v15 = *(void (__cdecl **)(int, int *, int, int *, int))(v4 + 4); /*0x7192bf*/
    a2 = 2; /*0x7192c9*/
    v15(v4, (int *)&this->members.pad014[1], 2, &a2, 1); /*0x7192d1*/
    v22 = *(_DWORD *)(v2 + 0x21C); /*0x7192ea*/
    v16 = *(void (__cdecl **)(int, int *, int, int *, int))(v22 + 4); /*0x7192eb*/
    a2 = 4; /*0x7192ee*/
    v16(v22, (int *)&this->members.pad014[2], 4, &a2, 1); /*0x7192f2*/
    v17 = *(_DWORD *)(v2 + 0x21C); /*0x7192f4*/
    v18 = *(__int16 (__cdecl **)(int, int *, int, int *, int))(v17 + 4); /*0x7192fa*/
    a2 = 4; /*0x71930a*/
    return v18(v17, (int *)&this->members.pad014[3], 4, &a2, 1); /*0x71930e*/
  }
  else
  {
    v23 = *(_DWORD *)(v2 + 0x21C); /*0x719146*/
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v4 + 4); /*0x719147*/
    v26 = 1; /*0x71914a*/
    v5(v23, &a2, 1, &v26, 1); /*0x719152*/
    if ( (_BYTE)a2 ) /*0x71915c*/
      LOWORD(this->members.pad014[1]) |= 1u; /*0x71915e*/
    else
      LOWORD(this->members.pad014[1]) &= ~1u; /*0x719165*/
    v24 = *(_DWORD *)(v2 + 0x21C); /*0x719183*/
    v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v24 + 4); /*0x719184*/
    v26 = 4; /*0x719187*/
    v6(v24, &v27, 4, &v26, 1); /*0x71918b*/
    LOWORD(this->members.pad014[1]) = ((_WORD)v27 << 0xC) | this->members.pad014[1] & 0xFFF; /*0x7191a0*/
    v21 = *(_DWORD *)(v2 + 0x21C); /*0x7191b6*/
    v7 = *(void (__cdecl **)(int, int *, int, int *, int))(v21 + 4); /*0x7191b7*/
    v27 = 4; /*0x7191ba*/
    v7(v21, (int *)&this->members.pad014[2], 4, &v27, 1); /*0x7191be*/
    v20 = *(_DWORD *)(v2 + 0x21C); /*0x7191d2*/
    v8 = *(void (__cdecl **)(int, int *, int, int *, int))(v20 + 4); /*0x7191d3*/
    v27 = 4; /*0x7191d6*/
    v8(v20, (int *)&this->members.pad014[3], 4, &v27, 1); /*0x7191da*/
    v19 = *(_DWORD *)(v2 + 0x21C); /*0x7191ef*/
    v9 = *(void (__cdecl **)(int, int *, int, int *, int))(v19 + 4); /*0x7191f0*/
    v27 = 4; /*0x7191f3*/
    v9(v19, &v26, 4, &v27, 1); /*0x7191f7*/
    LOWORD(this->members.pad014[1]) = (2 * v26) | this->members.pad014[1] & 0xFFF1; /*0x71920f*/
    v25 = *(_DWORD *)(v2 + 0x21C); /*0x719226*/
    v10 = *(void (__cdecl **)(int, int *, int, int *, int))(v25 + 4); /*0x719227*/
    v27 = 4; /*0x71922a*/
    v10(v25, &v26, 4, &v27, 1); /*0x71922e*/
    LOWORD(this->members.pad014[1]) = (0x10 * v26) | this->members.pad014[1] & 0xFF8F; /*0x719243*/
    v11 = *(_DWORD *)(v2 + 0x21C); /*0x719247*/
    v27 = 4; /*0x719254*/
    (*(void (__cdecl **)(int, int *, int, int *, int))(v11 + 4))(v11, &v26, 4, &v27, 1); /*0x719262*/
    LOWORD(this->members.pad014[1]) = ((_WORD)v26 << 7) | this->members.pad014[1] & 0xFC7F; /*0x71927e*/
    v12 = *(_DWORD *)(v2 + 0x21C); /*0x719282*/
    v13 = *(void (__cdecl **)(int, int *, int, int *, int))(v12 + 4); /*0x719288*/
    v27 = 4; /*0x719292*/
    v13(v12, &v26, 4, &v27, 1); /*0x719296*/
    result = ((_WORD)v26 << 0xA) | this->members.pad014[1] & 0xF3FF; /*0x7192aa*/
    LOWORD(this->members.pad014[1]) = result; /*0x7192ae*/
  }
  return result; /*0x7192ad*/
}
