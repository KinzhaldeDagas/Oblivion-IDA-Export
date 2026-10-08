unsigned int __thiscall sub_739EC0(char *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  void (__cdecl *v4)(int, char *, int, int *, int); // edx
  char *v5; // ebx
  int v6; // ebp
  int v7; // eax
  void (__cdecl *v8)(int, _DWORD **, int, int *, int); // eax
  int i; // ebp
  void (__cdecl *v10)(int, bool *, int, int *, int); // eax
  int j; // ebp
  int v12; // eax
  void (__cdecl *v13)(int, unsigned int *, int, int *, int); // eax
  unsigned int result; // eax
  int v15; // ebx
  int v16; // [esp-14h] [ebp-30h]
  int v17; // [esp-14h] [ebp-30h]
  int v18; // [esp-14h] [ebp-30h]
  int v19; // [esp-14h] [ebp-30h]
  bool v20; // [esp+13h] [ebp-9h] BYREF
  unsigned int v21; // [esp+14h] [ebp-8h] BYREF
  int v22; // [esp+18h] [ebp-4h] BYREF

  v2 = a2; /*0x739ec6*/
  nullsub_returnvVoid_1arg((int)a2); /*0x739ece*/
  v4 = *(void (__cdecl **)(int, char *, int, int *, int))(v2[0x88] + 8); /*0x739ed9*/
  v5 = this + 0xC; /*0x739ee5*/
  v16 = v2[0x88]; /*0x739ee9*/
  v22 = 2; /*0x739eea*/
  v4(v16, this + 0xC, 2, &v22, 1); /*0x739ef2*/
  v6 = 0; /*0x739ef4*/
  if ( *((_WORD *)this + 6) ) /*0x739ef9*/
  {
    do /*0x739f18*/
      sub_7094A0((char *)(*((_DWORD *)this + 4) + 0xC * (unsigned __int16)v6++), (signed int)v2); /*0x739f0d*/
    while ( (unsigned __int16)v6 < *(_WORD *)v5 ); /*0x739f18*/
  }
  v7 = v2[0x88]; /*0x739f1e*/
  LOBYTE(a2) = *((_DWORD *)this + 5) != 0; /*0x739f2e*/
  v17 = v7; /*0x739f39*/
  v8 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v7 + 8); /*0x739f3a*/
  v22 = 1; /*0x739f3d*/
  v8(v17, &a2, 1, &v22, 1); /*0x739f45*/
  if ( (_BYTE)a2 ) /*0x739f4f*/
  {
    for ( i = 0; (unsigned __int16)i < *(_WORD *)v5; ++i ) /*0x739f53*/
      sub_714BF0((char *)(*((_DWORD *)this + 5) + 8 * (unsigned __int16)i), (signed int)v2); /*0x739f62*/
  }
  v20 = *((_DWORD *)this + 6) != 0; /*0x739f7d*/
  v18 = v2[0x88]; /*0x739f8e*/
  v10 = *(void (__cdecl **)(int, bool *, int, int *, int))(v18 + 8); /*0x739f8f*/
  v22 = 1; /*0x739f92*/
  v10(v18, &v20, 1, &v22, 1); /*0x739f9a*/
  if ( v20 ) /*0x739fa4*/
  {
    for ( j = 0; (unsigned __int16)j < *(_WORD *)v5; ++j ) /*0x739fa8*/
      sub_709510((char *)(*((_DWORD *)this + 6) + 0x10 * (unsigned __int16)j), (signed int)v2); /*0x739fba*/
  }
  v12 = v2[0x88]; /*0x739fc7*/
  v21 = 0xA; /*0x739fdb*/
  v19 = v12; /*0x739fe3*/
  v13 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v12 + 8); /*0x739fe4*/
  v22 = 4; /*0x739fe7*/
  v13(v19, &v21, 4, &v22, 1); /*0x739fef*/
  result = v21; /*0x739ff1*/
  if ( v21 ) /*0x739ffa*/
  {
    v15 = 0; /*0x739ffc*/
    result = 0; /*0x73a002*/
    do /*0x73a01f*/
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(*((_DWORD *)this + 2) + 4 * result + 8)); /*0x73a013*/
      result = (unsigned __int16)++v15; /*0x73a018*/
    }
    while ( (unsigned __int16)v15 < v21 ); /*0x73a01f*/
  }
  return result; /*0x73a021*/
}
