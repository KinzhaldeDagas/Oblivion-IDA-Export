int __thiscall sub_758580(NiRenderer *this, signed int a2)
{
  signed int v2; // esi
  void (__cdecl *v4)(int, signed int *, int, int *, int); // eax
  void (__cdecl *v5)(int, int *, int, int *, int); // eax
  int v6; // edi
  int (__cdecl *v7)(signed int, signed int); // eax
  int v8; // ebx
  int (__cdecl *v9)(int, int *, int, int *, int); // eax
  int result; // eax
  int v11; // edi
  void (__cdecl *v12)(int, int *, int, int *, int); // eax
  int (__cdecl *v13)(signed int, int); // eax
  int v14; // esi
  int v15; // [esp-14h] [ebp-30h]
  int v16; // [esp-14h] [ebp-30h]
  int v17; // [esp-14h] [ebp-30h]
  int v18; // [esp-14h] [ebp-30h]
  int v19; // [esp+10h] [ebp-Ch] BYREF
  int v20; // [esp+14h] [ebp-8h] BYREF
  int v21; // [esp+18h] [ebp-4h] BYREF

  v2 = a2;
  sub_7008A0(this, a2);
  v15 = *(_DWORD *)(v2 + 0x21C);
  v4 = *(void (__cdecl **)(int, signed int *, int, int *, int))(v15 + 4);
  v20 = 4;
  v4(v15, &a2, 4, &v20, 1);
  if ( a2 )
  {
    v16 = *(_DWORD *)(v2 + 0x21C);
    v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v16 + 4);
    v20 = 4;
    v5(v16, &v21, 4, &v20, 1);
    v6 = v21;
    v7 = *(int (__cdecl **)(signed int, signed int))(4 * v21 + 0xB3D088);
    LOBYTE(v21) = byte_B3D3E8[v21];
    v8 = v7(v2, a2);
    (*(void (__cdecl **)(int, signed int, int))(4 * v6 + 0xB3D410))(v8, a2, v21);
    sub_758460(this, v8, a2, v6);
  }
  v17 = *(_DWORD *)(v2 + 0x21C);
  v9 = *(int (__cdecl **)(int, int *, int, int *, int))(v17 + 4);
  v21 = 4;
  result = v9(v17, &v19, 4, &v21, 1);
  if ( v19 )
  {
    v11 = 5;
    if ( *(_DWORD *)(v2 + 0xD8) >= 0xA010068u )
    {
      v18 = *(_DWORD *)(v2 + 0x21C);
      v12 = *(void (__cdecl **)(int, int *, int, int *, int))(v18 + 4);
      v21 = 4;
      v12(v18, &v20, 4, &v21, 1);
      v11 = v20;
    }
    v13 = *(int (__cdecl **)(signed int, int))(4 * v11 + 0xB3D100);
    LOBYTE(v21) = byte_B3D406[v11];
    v14 = v13(v2, v19);
    (*(void (__cdecl **)(int, int, int))(4 * v11 + 0xB3D488))(v14, v19, v21);
    return sub_7584C0(this, v14, v19, v11);
  }
  return result;
}
