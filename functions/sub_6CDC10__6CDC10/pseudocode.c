int __thiscall sub_6CDC10(char *this, signed int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, char *, int, signed int *, int); // edx
  char *v6; // ebp
  int (__cdecl *v7)(int, char *, int, signed int *, int); // eax
  int result; // eax
  void (__cdecl *v9)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v10)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v11)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v12)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v13)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v14)(int, char *, int, signed int *, int); // eax
  void (__cdecl *v15)(int, char *, int, signed int *, int); // eax
  int v16; // eax
  unsigned __int8 i; // bl
  int v18; // [esp-50h] [ebp-60h]
  int v19; // [esp-3Ch] [ebp-4Ch]
  int v20; // [esp-3Ch] [ebp-4Ch]
  int v21; // [esp-3Ch] [ebp-4Ch]
  int v22; // [esp-28h] [ebp-38h]
  int v23; // [esp-28h] [ebp-38h]
  int v24; // [esp-28h] [ebp-38h]
  int v25; // [esp-14h] [ebp-24h]
  int v26; // [esp-14h] [ebp-24h]
  int v27; // [esp-14h] [ebp-24h]

  v2 = (_DWORD *)a2; /*0x6cdc14*/
  j_nullsub_3(a2); /*0x6cdc1b*/
  v25 = v2[0x88]; /*0x6cdc36*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v25 + 8); /*0x6cdc37*/
  a2 = 1; /*0x6cdc3a*/
  v4(v25, this + 0xC, 1, &a2, 1); /*0x6cdc3e*/
  v5 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v2[0x88] + 8); /*0x6cdc46*/
  v6 = this + 0xD; /*0x6cdc50*/
  v22 = v2[0x88]; /*0x6cdc54*/
  a2 = 1; /*0x6cdc55*/
  v5(v22, this + 0xD, 1, &a2, 1); /*0x6cdc59*/
  v19 = v2[0x88]; /*0x6cdc6d*/
  v7 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v19 + 8); /*0x6cdc6e*/
  a2 = 4; /*0x6cdc71*/
  result = v7(v19, this + 0x1C, 4, &a2, 1); /*0x6cdc79*/
  if ( (*(this + 0xC) & 1) == 0 ) /*0x6cdc81*/
  {
    v26 = v2[0x88]; /*0x6cdc98*/
    v9 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v26 + 8); /*0x6cdc99*/
    a2 = 1; /*0x6cdc9c*/
    v9(v26, this + 0xE, 1, &a2, 1); /*0x6cdca0*/
    v23 = v2[0x88]; /*0x6cdcb3*/
    v10 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v23 + 8); /*0x6cdcb4*/
    a2 = 1; /*0x6cdcb7*/
    v10(v23, this + 0xF, 1, &a2, 1); /*0x6cdcbb*/
    v20 = v2[0x88]; /*0x6cdcce*/
    v11 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v20 + 8); /*0x6cdccf*/
    a2 = 1; /*0x6cdcd2*/
    v11(v20, this + 0x10, 1, &a2, 1); /*0x6cdcd6*/
    v18 = v2[0x88]; /*0x6cdce9*/
    v12 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v18 + 8); /*0x6cdcea*/
    a2 = 1; /*0x6cdced*/
    v12(v18, this + 0x11, 1, &a2, 1); /*0x6cdcf1*/
    v27 = v2[0x88]; /*0x6cdd08*/
    v13 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v27 + 8); /*0x6cdd09*/
    a2 = 4; /*0x6cdd0c*/
    v13(v27, this + 0x20, 4, &a2, 1); /*0x6cdd14*/
    v24 = v2[0x88]; /*0x6cdd28*/
    v14 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v24 + 8); /*0x6cdd29*/
    a2 = 4; /*0x6cdd2c*/
    v14(v24, this + 0x24, 4, &a2, 1); /*0x6cdd34*/
    v21 = v2[0x88]; /*0x6cdd48*/
    v15 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v21 + 8); /*0x6cdd49*/
    a2 = 4; /*0x6cdd4c*/
    v15(v21, this + 0x28, 4, &a2, 1); /*0x6cdd54*/
    v16 = v2[0x88]; /*0x6cdd56*/
    a2 = 4; /*0x6cdd5c*/
    (*(void (__cdecl **)(int, char *, int, signed int *, int))(v16 + 8))(v16, this + 0x2C, 4, &a2, 1); /*0x6cdd74*/
    for ( i = 0; i < (unsigned __int8)*v6; ++i ) /*0x6cdd7b*/
      sub_6CD680((_DWORD *)(*((_DWORD *)this + 5) + 0x18 * i), (signed int)v2); /*0x6cdd8d*/
    return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *((_DWORD *)this + 6)); /*0x6cdda5*/
  }
  return result; /*0x6cdda7*/
}
