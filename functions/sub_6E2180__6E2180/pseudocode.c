char __thiscall sub_6E2180(NiRenderer *this, unsigned int a2)
{
  unsigned int v2; // esi
  void (__cdecl *v3)(int, unsigned int *, int, int *, int); // eax
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(unsigned int, unsigned int); // eax
  int v7; // ebx
  void *v8; // ecx
  void (__cdecl *v9)(int, unsigned int *, int, int *, int); // eax
  void (__cdecl *v10)(int, int *, int, int *, int); // eax
  int v11; // edi
  int (__cdecl *v12)(unsigned int, unsigned int); // eax
  int v13; // ebx
  void *v14; // ecx
  int (__cdecl *v15)(int, unsigned int *, int, int *, int); // eax
  char result; // al
  void (__cdecl *v17)(int, int *, int, int *, int); // eax
  int v18; // edi
  int (__cdecl *v19)(unsigned int, unsigned int); // eax
  int v20; // esi
  void *v21; // ecx
  int v22; // [esp-14h] [ebp-30h]
  int v23; // [esp-14h] [ebp-30h]
  int v24; // [esp-14h] [ebp-30h]
  int v25; // [esp-14h] [ebp-30h]
  int v26; // [esp-14h] [ebp-30h]
  int v27; // [esp-14h] [ebp-30h]
  int v29; // [esp+14h] [ebp-8h] BYREF
  int v30; // [esp+18h] [ebp-4h] BYREF

  v2 = a2;
  sub_7008A0(this, a2);
  v22 = *(_DWORD *)(v2 + 0x21C);
  v3 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v22 + 4);
  v29 = 4;
  v3(v22, &a2, 4, &v29, 1);
  if ( a2 )
  {
    v23 = *(_DWORD *)(v2 + 0x21C);
    v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v23 + 4);
    v29 = 4;
    v4(v23, &v30, 4, &v29, 1);
    v5 = v30;
    v6 = *(int (__cdecl **)(unsigned int, unsigned int))(4 * v30 + 0xB3D0B8);
    LOBYTE(v30) = byte_B3D3F4[v30];
    v7 = v6(v2, a2);
    (*(void (__cdecl **)(int, unsigned int, int))(4 * v5 + 0xB3D440))(v7, a2, v30);
    if ( a2 > 0xFFFF )
    {
      a2 = 0xFFFF;
      TESTexture::ClearComponentReferences(v8);
    }
    sub_6E1E90((int)this, v7, a2, v5);
  }
  v24 = *(_DWORD *)(v2 + 0x21C);
  v9 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v24 + 4);
  v30 = 4;
  v9(v24, &a2, 4, &v30, 1);
  if ( a2 )
  {
    v25 = *(_DWORD *)(v2 + 0x21C);
    v10 = *(void (__cdecl **)(int, int *, int, int *, int))(v25 + 4);
    v30 = 4;
    v10(v25, &v29, 4, &v30, 1);
    v11 = v29;
    v12 = *(int (__cdecl **)(unsigned int, unsigned int))(4 * v29 + 0xB3D0A0);
    LOBYTE(v30) = byte_B3D3EE[v29];
    v13 = v12(v2, a2);
    (*(void (__cdecl **)(int, unsigned int, int))(4 * v11 + 0xB3D428))(v13, a2, v30);
    if ( a2 > 0xFFFF )
    {
      a2 = 0xFFFF;
      TESTexture::ClearComponentReferences(v14);
    }
    sub_6E1F00(this, v13, a2, v11);
  }
  v26 = *(_DWORD *)(v2 + 0x21C);
  v15 = *(int (__cdecl **)(int, unsigned int *, int, int *, int))(v26 + 4);
  v30 = 4;
  result = v15(v26, &a2, 4, &v30, 1);
  if ( a2 )
  {
    v27 = *(_DWORD *)(v2 + 0x21C);
    v17 = *(void (__cdecl **)(int, int *, int, int *, int))(v27 + 4);
    v30 = 4;
    v17(v27, &v29, 4, &v30, 1);
    v18 = v29;
    v19 = *(int (__cdecl **)(unsigned int, unsigned int))(4 * v29 + 0xB3D088);
    LOBYTE(v30) = byte_B3D3E8[v29];
    v20 = v19(v2, a2);
    (*(void (__cdecl **)(int, unsigned int, int))(4 * v18 + 0xB3D410))(v20, a2, v30);
    if ( a2 > 0xFFFF )
    {
      a2 = 0xFFFF;
      TESTexture::ClearComponentReferences(v21);
    }
    return sub_6E1F60(this, v20, a2, v18);
  }
  return result;
}
