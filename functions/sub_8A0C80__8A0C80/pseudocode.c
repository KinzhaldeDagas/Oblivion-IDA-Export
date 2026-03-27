int __thiscall sub_8A0C80(_DWORD *this, signed int a2)
{
  _DWORD *v2; // edi
  int v3; // eax
  void (__cdecl *v5)(int, int *, int, signed int *, int); // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int (__cdecl *v11)(int, _DWORD *, int, signed int *, int); // edx
  int v13; // [esp-14h] [ebp-20h]
  int v14; // [esp+8h] [ebp-4h] BYREF

  v2 = (_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 0x220);
  v14 = 2;
  v13 = v3;
  v5 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v3 + 8);
  a2 = 4;
  v5(v13, &v14, 4, &a2, 1);
  v6 = *(this + 3);
  if ( v6 )
    v7 = *(_DWORD *)(v6 + 0xC);
  else
    v7 = 0;
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 0x2C))(v2, v7);
  v8 = *(this + 4);
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 0xC);
  else
    v9 = 0;
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 0x2C))(v2, v9);
  (*(void (__thiscall **)(_DWORD *))(*this + 0x10))(this);
  v10 = v2[0x88];
  v11 = *(int (__cdecl **)(int, _DWORD *, int, signed int *, int))(v10 + 8);
  a2 = 4;
  return v11(v10, this + 2, 4, &a2, 1);
}
