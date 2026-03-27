int __thiscall sub_6D9F90(NiRenderer *this, signed int a2)
{
  signed int v2; // ebx
  int (__cdecl *v4)(int, signed int *, int, int *, int); // eax
  int result; // eax
  void (__cdecl *v6)(int, int *, int, int *, int); // eax
  int v7; // edi
  int v8; // ebx
  signed int v9; // [esp-18h] [ebp-2Ch]
  int v10; // [esp-14h] [ebp-28h]
  int v11; // [esp-14h] [ebp-28h]
  int v12; // [esp+Ch] [ebp-8h] BYREF
  int v13; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  sub_7008A0(this, a2);
  v10 = *(_DWORD *)(v2 + 0x21C);
  v4 = *(int (__cdecl **)(int, signed int *, int, int *, int))(v10 + 4);
  v12 = 4;
  result = v4(v10, &a2, 4, &v12, 1);
  if ( a2 )
  {
    v11 = *(_DWORD *)(v2 + 0x21C);
    v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v11 + 4);
    v12 = 4;
    v6(v11, &v13, 4, &v12, 1);
    v7 = v13;
    v9 = a2;
    LOBYTE(this->members.pad014[0]) = byte_B3D3EE[v13];
    v8 = (*(int (__cdecl **)(signed int, signed int))(4 * v7 + 0xB3D0A0))(v2, v9);
    (*(void (__cdecl **)(int, signed int, _DWORD))(4 * v7 + 0xB3D428))(v8, a2, LOBYTE(this->members.pad014[0]));
    return sub_6D9E40(this, v8, a2, v7);
  }
  return result;
}
