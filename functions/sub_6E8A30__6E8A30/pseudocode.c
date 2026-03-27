int __thiscall sub_6E8A30(NiRenderer *this, signed int a2)
{
  signed int v2; // ebx
  int (__cdecl *v4)(int, signed int *, int, int *, int); // eax
  int v5; // esi
  int result; // eax
  void (__cdecl *v7)(int, int *, int, int *, int); // eax
  int v8; // ebx
  int v9; // [esp-14h] [ebp-28h]
  int v10; // [esp-14h] [ebp-28h]
  signed int v11; // [esp-4h] [ebp-18h]
  int v12; // [esp+Ch] [ebp-8h] BYREF
  int v13; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  sub_7008A0(this, a2);
  v9 = *(_DWORD *)(v2 + 0x21C);
  v4 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v9 + 4);
  v5 = 5;
  v12 = 4;
  result = v4(v9, &a2, 4, &v12, 1);
  if ( a2 )
  {
    if ( *(_DWORD *)(v2 + 0xD8) >= 0xA010068u )
    {
      v10 = *(_DWORD *)(v2 + 0x21C);
      v7 = *(void (__cdecl **)(int, int *, int, int *, int))(v10 + 4);
      v12 = 4;
      v7(v10, &v13, 4, &v12, 1);
      v5 = v13;
    }
    v11 = a2;
    LOBYTE(this->members.pad014[0]) = byte_B3D406[v5];
    v8 = (*(int (__cdecl **)(signed int, signed int))(4 * v5 + 0xB3D100))(v2, v11);
    (*(void (__cdecl **)(int, signed int, _DWORD))(4 * v5 + 0xB3D488))(v8, a2, LOBYTE(this->members.pad014[0]));
    return sub_6E88C0(this, v8, a2, v5);
  }
  return result;
}
