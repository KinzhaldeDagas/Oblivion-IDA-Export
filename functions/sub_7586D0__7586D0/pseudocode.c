int __thiscall sub_7586D0(_DWORD *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // edx
  int v5; // eax
  void (__cdecl *v6)(int, _DWORD *, int, signed int *, int); // edx
  void (__cdecl *v7)(int, _DWORD *, int, signed int *, int); // edx
  _DWORD *v8; // ebx
  int result; // eax
  int v10; // eax
  void (__cdecl *v11)(int, _DWORD *, int, int *, int); // edx
  int v13; // [esp-14h] [ebp-28h]
  int v14; // [esp-14h] [ebp-28h]
  int v15; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  nullsub_returnvVoid_1arg(a2);
  v4 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v13 = *(_DWORD *)(v2 + 0x220);
  a2 = 4;
  v4(v13, this + 2, 4, &a2, 1);
  if ( *(this + 2) )
  {
    v5 = *(_DWORD *)(v2 + 0x220);
    v6 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v5 + 8);
    a2 = 4;
    v6(v5, this + 4, 4, &a2, 1);
    (*(void (__cdecl **)(signed int, _DWORD, _DWORD))(4 * *(this + 4) + 0xB3D5C0))(v2, *(this + 3), *(this + 2));
  }
  v7 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v8 = this + 6;
  v14 = *(_DWORD *)(v2 + 0x220);
  a2 = 4;
  v7(v14, this + 6, 4, &a2, 1);
  result = *(this + 6);
  a2 = 0;
  if ( result )
  {
    do
    {
      if ( result )
      {
        v10 = *(_DWORD *)(v2 + 0x220);
        v11 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(v10 + 8);
        v15 = 4;
        v11(v10, this + 8, 4, &v15, 1);
        (*(void (__cdecl **)(signed int, _DWORD, _DWORD))(4 * *(this + 8) + 0xB3D638))(v2, *(this + 7), *v8);
      }
      result = *v8;
    }
    while ( (unsigned int)++a2 < *v8 );
  }
  return result;
}
