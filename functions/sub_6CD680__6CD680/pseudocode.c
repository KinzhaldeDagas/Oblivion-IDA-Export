int __thiscall sub_6CD680(_DWORD *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v5)(int, _DWORD *, int, signed int *, int); // eax
  void (__cdecl *v6)(int, _DWORD *, int, signed int *, int); // eax
  int v7; // edi
  int (__cdecl *v8)(int, _DWORD *, int, signed int *, int); // edx
  int v10; // [esp-3Ch] [ebp-44h]
  int v11; // [esp-28h] [ebp-30h]
  int v12; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  (*(void (__thiscall **)(signed int, _DWORD))(*(_DWORD *)a2 + 0x2C))(a2, *this);
  v12 = *(_DWORD *)(v2 + 0x220);
  v4 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v12 + 8);
  a2 = 4;
  v4(v12, this + 1, 4, &a2, 1);
  v11 = *(_DWORD *)(v2 + 0x220);
  v5 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v11 + 8);
  a2 = 4;
  v5(v11, this + 2, 4, &a2, 1);
  v10 = *(_DWORD *)(v2 + 0x220);
  v6 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(v10 + 8);
  a2 = 1;
  v6(v10, this + 3, 1, &a2, 1);
  v7 = *(_DWORD *)(v2 + 0x220);
  v8 = *(int (__cdecl **)(int, _DWORD *, int, signed int *, int))(v7 + 8);
  a2 = 4;
  return v8(v7, this + 4, 4, &a2, 1);
}
