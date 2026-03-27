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

  v2 = a2;
  nullsub_returnvVoid_1arg((int)a2);
  v4 = *(void (__cdecl **)(int, char *, int, int *, int))(v2[0x88] + 8);
  v5 = this + 0xC;
  v16 = v2[0x88];
  v22 = 2;
  v4(v16, this + 0xC, 2, &v22, 1);
  v6 = 0;
  if ( *((_WORD *)this + 6) )
  {
    do
      sub_7094A0((char *)(*((_DWORD *)this + 4) + 0xC * (unsigned __int16)v6++), (signed int)v2);
    while ( (unsigned __int16)v6 < *(_WORD *)v5 );
  }
  v7 = v2[0x88];
  LOBYTE(a2) = *((_DWORD *)this + 5) != 0;
  v17 = v7;
  v8 = *(void (__cdecl **)(int, _DWORD **, int, int *, int))(v7 + 8);
  v22 = 1;
  v8(v17, &a2, 1, &v22, 1);
  if ( (_BYTE)a2 )
  {
    for ( i = 0; (unsigned __int16)i < *(_WORD *)v5; ++i )
      sub_714BF0((char *)(*((_DWORD *)this + 5) + 8 * (unsigned __int16)i), (signed int)v2);
  }
  v20 = *((_DWORD *)this + 6) != 0;
  v18 = v2[0x88];
  v10 = *(void (__cdecl **)(int, bool *, int, int *, int))(v18 + 8);
  v22 = 1;
  v10(v18, &v20, 1, &v22, 1);
  if ( v20 )
  {
    for ( j = 0; (unsigned __int16)j < *(_WORD *)v5; ++j )
      sub_709510((char *)(*((_DWORD *)this + 6) + 0x10 * (unsigned __int16)j), (signed int)v2);
  }
  v12 = v2[0x88];
  v21 = 0xA;
  v19 = v12;
  v13 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v12 + 8);
  v22 = 4;
  v13(v19, &v21, 4, &v22, 1);
  result = v21;
  if ( v21 )
  {
    v15 = 0;
    result = 0;
    do
    {
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(_DWORD *)(*((_DWORD *)this + 2) + 4 * result + 8));
      result = (unsigned __int16)++v15;
    }
    while ( (unsigned __int16)v15 < v21 );
  }
  return result;
}
