int __thiscall sub_716050(_DWORD *this, signed int a2)
{
  _DWORD *v2; // esi
  _DWORD *i; // ebx
  void (__cdecl *v5)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v7)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v8)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v9)(int, _DWORD *, int, signed int *, int); // eax
  int v11; // [esp-50h] [ebp-5Ch]
  int v12; // [esp-3Ch] [ebp-48h]
  int v13; // [esp-28h] [ebp-34h]
  int v14; // [esp-14h] [ebp-20h]
  int v15; // [esp-14h] [ebp-20h]

  v2 = (_DWORD *)a2;
  nullsub_returnvVoid_1arg(a2);
  for ( i = (_DWORD *)*(this + 0xD); i; i = (_DWORD *)i[0xD] )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*i + 0x6C))(i) )
      break;
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v2 + 0x2C))(v2, i);
  v14 = v2[0x88];
  v5 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v14 + 8);
  a2 = 2;
  v5(v14, this + 2, 2, &a2, 1);
  v13 = v2[0x88];
  v6 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v13 + 8);
  a2 = 4;
  v6(v13, this + 3, 4, &a2, 1);
  v12 = v2[0x88];
  v7 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v12 + 8);
  a2 = 4;
  v7(v12, this + 4, 4, &a2, 1);
  v11 = v2[0x88];
  v8 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v11 + 8);
  a2 = 4;
  v8(v11, this + 5, 4, &a2, 1);
  v15 = v2[0x88];
  v9 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v15 + 8);
  a2 = 4;
  v9(v15, this + 6, 4, &a2, 1);
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 0xC));
}
