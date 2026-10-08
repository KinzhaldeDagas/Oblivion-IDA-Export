int __thiscall sub_6C8C90(const char **this, signed int a2)
{
  _DWORD *v2; // esi
  void (__cdecl *v4)(int, const char **, int, signed int *, int); // edx
  void (__cdecl *v5)(int, const char **, int, signed int *, int); // eax
  bool v6; // zf
  int v7; // ebp
  int v8; // ebx
  int v9; // eax
  int v10; // ebx
  void (__cdecl *v11)(int, int, int, int *, int); // edx
  void (__cdecl *v13)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v14)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v15)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v16)(int, const char **, int, signed int *, int); // eax
  void (__cdecl *v17)(int, const char **, int, signed int *, int); // eax
  int v19; // [esp-50h] [ebp-64h]
  int v20; // [esp-3Ch] [ebp-50h]
  int v21; // [esp-28h] [ebp-3Ch]
  int v22; // [esp-28h] [ebp-3Ch]
  int v23; // [esp-14h] [ebp-28h]
  int v24; // [esp-14h] [ebp-28h]
  int v25; // [esp-14h] [ebp-28h]
  int v26; // [esp-14h] [ebp-28h]
  int v27; // [esp+10h] [ebp-4h] BYREF

  v2 = (_DWORD *)a2; /*0x6c8c94*/
  nullsub_returnvVoid_1arg(a2); /*0x6c8c9c*/
  sub_713720(v2, *(this + 2)); /*0x6c8ca7*/
  v4 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v2[0x88] + 8); /*0x6c8cb2*/
  v23 = v2[0x88]; /*0x6c8cc6*/
  a2 = 4; /*0x6c8cc7*/
  v4(v23, this + 3, 4, &a2, 1); /*0x6c8ccb*/
  v21 = v2[0x88]; /*0x6c8cdf*/
  v5 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v21 + 8); /*0x6c8ce0*/
  a2 = 4; /*0x6c8ce3*/
  v5(v21, this + 4, 4, &a2, 1); /*0x6c8ce7*/
  v6 = *(this + 3) == 0; /*0x6c8cec*/
  a2 = 0; /*0x6c8cf0*/
  if ( !v6 ) /*0x6c8cf8*/
  {
    v7 = 0; /*0x6c8cfa*/
    do /*0x6c8d5f*/
    {
      v8 = (int)*(this + 5); /*0x6c8d00*/
      v9 = *(_DWORD *)(v8 + v7); /*0x6c8d05*/
      v10 = v7 + v8; /*0x6c8d0b*/
      (*(void (__thiscall **)(_DWORD *, int))(*v2 + 0x2C))(v2, v9); /*0x6c8d10*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(v10 + 4)); /*0x6c8d1d*/
      v11 = *(void (__cdecl **)(int, int, int, int *, int))(v2[0x88] + 8); /*0x6c8d25*/
      v24 = v2[0x88]; /*0x6c8d35*/
      v27 = 1; /*0x6c8d36*/
      v11(v24, v10 + 0xD, 1, &v27, 1); /*0x6c8d3e*/
      sub_6C8920(&(*(this + 6))[v7], (unsigned int)v2); /*0x6c8d49*/
      v7 += 0x10; /*0x6c8d55*/
    }
    while ( ++a2 < (unsigned int)*(this + 3) ); /*0x6c8d5f*/
  }
  v25 = v2[0x88]; /*0x6c8d78*/
  v13 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v25 + 8); /*0x6c8d79*/
  a2 = 4; /*0x6c8d7c*/
  v13(v25, this + 7, 4, &a2, 1); /*0x6c8d80*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 8)); /*0x6c8d90*/
  v26 = v2[0x88]; /*0x6c8da4*/
  v14 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v26 + 8); /*0x6c8da5*/
  a2 = 4; /*0x6c8da8*/
  v14(v26, this + 9, 4, &a2, 1); /*0x6c8dac*/
  v22 = v2[0x88]; /*0x6c8dc0*/
  v15 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v22 + 8); /*0x6c8dc1*/
  a2 = 4; /*0x6c8dc4*/
  v15(v22, this + 0xA, 4, &a2, 1); /*0x6c8dc8*/
  v20 = v2[0x88]; /*0x6c8ddc*/
  v16 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v20 + 8); /*0x6c8ddd*/
  a2 = 4; /*0x6c8de0*/
  v16(v20, this + 0xB, 4, &a2, 1); /*0x6c8de4*/
  v19 = v2[0x88]; /*0x6c8df8*/
  v17 = *(void (__cdecl **)(int, const char **, int, signed int *, int))(v19 + 8); /*0x6c8df9*/
  a2 = 4; /*0x6c8dfc*/
  v17(v19, this + 0xC, 4, &a2, 1); /*0x6c8e00*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 0x10)); /*0x6c8e10*/
  sub_713720(v2, *(this + 0x17)); /*0x6c8e18*/
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 0x19)); /*0x6c8e2a*/
}
