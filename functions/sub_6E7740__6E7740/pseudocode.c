int __thiscall sub_6E7740(_DWORD *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, _DWORD *, int, signed int *, int); // edx
  int v5; // ebx
  void (__cdecl *v6)(int, int, int, signed int *, int); // edx
  int (__cdecl *v7)(int, _DWORD *, int, signed int *, int); // edx
  int result; // eax
  int v9; // ebx
  int v10; // edi
  int (__cdecl *v11)(int, int, int, signed int *, int); // eax
  int v12; // [esp-14h] [ebp-20h]
  int v13; // [esp-14h] [ebp-20h]
  int v14; // [esp-14h] [ebp-20h]
  int v15; // [esp-10h] [ebp-1Ch]
  int v16; // [esp-10h] [ebp-1Ch]

  v2 = a2;
  nullsub_returnvVoid_1arg(a2);
  v4 = *(void (__cdecl **)(int, _DWORD *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v12 = *(_DWORD *)(v2 + 0x220);
  a2 = 4;
  v4(v12, this + 4, 4, &a2, 1);
  v5 = *(this + 4);
  if ( v5 )
  {
    v6 = *(void (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
    v15 = *(this + 2);
    v13 = *(_DWORD *)(v2 + 0x220);
    a2 = 4;
    v6(v13, v15, 4 * v5, &a2, 1);
  }
  v7 = *(int (__cdecl **)(int, _DWORD *, int, signed int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v14 = *(_DWORD *)(v2 + 0x220);
  a2 = 4;
  result = v7(v14, this + 5, 4, &a2, 1);
  v9 = *(this + 5);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v2 + 0x220);
    v11 = *(int (__cdecl **)(int, int, int, signed int *, int))(v10 + 8);
    v16 = *(this + 3);
    a2 = 2;
    return v11(v10, v16, 2 * v9, &a2, 1);
  }
  return result;
}
