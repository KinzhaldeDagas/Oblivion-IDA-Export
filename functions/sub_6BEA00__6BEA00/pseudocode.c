int __thiscall sub_6BEA00(char *this, signed int a2)
{
  signed int v2; // edi
  bool v3; // cf
  void (__cdecl *v5)(int, int *, int, signed int *, int); // eax
  unsigned int v6; // ebx
  char *v7; // esi
  int (__cdecl *v8)(int, char *, int, signed int *, int); // edx
  int result; // eax
  void (__cdecl *v10)(int, int *, int, signed int *, int); // eax
  int v11; // eax
  char *v12; // edx
  int v13; // [esp-14h] [ebp-2Ch]
  int v14; // [esp-14h] [ebp-2Ch]
  int v15; // [esp-14h] [ebp-2Ch]
  int v16; // [esp+10h] [ebp-8h] BYREF
  char *v17; // [esp+14h] [ebp-4h]

  v2 = a2;
  v3 = *(_DWORD *)(a2 + 0xD8) < 0xA010068u;
  v17 = this;
  if ( v3 )
  {
    v13 = *(_DWORD *)(a2 + 0x21C);
    v5 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v13 + 4);
    a2 = 4;
    v5(v13, &v16, 4, &a2, 1);
  }
  v6 = 0;
  v7 = this + 0x14;
  do
  {
    v8 = *(int (__cdecl **)(int, char *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
    v14 = *(_DWORD *)(v2 + 0x21C);
    a2 = 4;
    result = v8(v14, v7, 4, &a2, 1);
    if ( *(_DWORD *)v7 )
    {
      v15 = *(_DWORD *)(v2 + 0x21C);
      v10 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v15 + 4);
      a2 = 4;
      v10(v15, &v16, 4, &a2, 1);
      v11 = v16;
      v12 = v17;
      *((_DWORD *)v7 + 3) = v16;
      v12[v6 + 0x2C] = byte_B3D3E8[v11];
      result = (*(int (__cdecl **)(signed int, _DWORD))(4 * v11 + 0xB3D088))(v2, *(_DWORD *)v7);
      *((_DWORD *)v7 + 7) = result;
    }
    ++v6;
    v7 += 4;
  }
  while ( v6 < 3 );
  return result;
}
