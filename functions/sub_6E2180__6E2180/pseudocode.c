// Oblivion NiTransformData binary load. In rotation, translation, scale order, reads a 32-bit count; for nonzero count reads numeric type, allocates through that channel/type factory, reads keys using the registered stride/reader, clamps count to 0xFFFF, and transfers the array to the corresponding ownership setter.
char __thiscall NiTransformData_LoadBinary(NiRenderer *this, unsigned int a2)
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

  v2 = a2; /*0x6e2186*/
  sub_7008A0(this, a2); /*0x6e2190*/
  v22 = *(_DWORD *)(v2 + 0x21C); /*0x6e21ad*/
  v3 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v22 + 4); /*0x6e21ae*/
  v29 = 4; /*0x6e21b1*/
  v3(v22, &a2, 4, &v29, 1); /*0x6e21b5*/
  if ( a2 ) /*0x6e21bf*/
  {
    v23 = *(_DWORD *)(v2 + 0x21C); /*0x6e21d4*/
    v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v23 + 4); /*0x6e21d5*/
    v29 = 4; /*0x6e21d8*/
    v4(v23, &v30, 4, &v29, 1); /*0x6e21dc*/
    v5 = v30; /*0x6e21de*/
    v6 = *(int (__cdecl **)(unsigned int, unsigned int))(4 * v30 + 0xB3D0B8); /*0x6e21ec*/
    LOBYTE(v30) = byte_B3D3F4[v30]; /*0x6e21f5*/
    v7 = v6(v2, a2); /*0x6e2206*/
    (*(void (__cdecl **)(int, unsigned int, int))(4 * v5 + 0xB3D440))(v7, a2, v30); /*0x6e220f*/
    if ( a2 > 0xFFFF ) /*0x6e221d*/
    {
      a2 = 0xFFFF; /*0x6e2224*/
      Shared_NoOpVirtual_60D0A0(v8); /*0x6e2228*/
    }
    NiTransformData_SetRotationKeys((int)this, v7, a2, v5); /*0x6e223b*/
  }
  v24 = *(_DWORD *)(v2 + 0x21C); /*0x6e2253*/
  v9 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v24 + 4); /*0x6e2254*/
  v30 = 4; /*0x6e2257*/
  v9(v24, &a2, 4, &v30, 1); /*0x6e225b*/
  if ( a2 ) /*0x6e2265*/
  {
    v25 = *(_DWORD *)(v2 + 0x21C); /*0x6e227a*/
    v10 = *(void (__cdecl **)(int, int *, int, int *, int))(v25 + 4); /*0x6e227b*/
    v30 = 4; /*0x6e227e*/
    v10(v25, &v29, 4, &v30, 1); /*0x6e2282*/
    v11 = v29; /*0x6e2288*/
    v12 = *(int (__cdecl **)(unsigned int, unsigned int))(4 * v29 + 0xB3D0A0); /*0x6e2292*/
    LOBYTE(v30) = unk_B3D3EE[v29]; /*0x6e229b*/
    v13 = v12(v2, a2); /*0x6e22ac*/
    (*(void (__cdecl **)(int, unsigned int, int))(4 * v11 + 0xB3D428))(v13, a2, v30); /*0x6e22b5*/
    if ( a2 > 0xFFFF ) /*0x6e22c3*/
    {
      a2 = 0xFFFF; /*0x6e22ca*/
      Shared_NoOpVirtual_60D0A0(v14); /*0x6e22ce*/
    }
    NiTransformData_SetTranslationKeys(this, v13, a2, v11); /*0x6e22e1*/
  }
  v26 = *(_DWORD *)(v2 + 0x21C); /*0x6e22f9*/
  v15 = *(int (__cdecl **)(int, unsigned int *, int, int *, int))(v26 + 4); /*0x6e22fa*/
  v30 = 4; /*0x6e22fd*/
  result = v15(v26, &a2, 4, &v30, 1); /*0x6e2301*/
  if ( a2 ) /*0x6e230b*/
  {
    v27 = *(_DWORD *)(v2 + 0x21C); /*0x6e2320*/
    v17 = *(void (__cdecl **)(int, int *, int, int *, int))(v27 + 4); /*0x6e2321*/
    v30 = 4; /*0x6e2324*/
    v17(v27, &v29, 4, &v30, 1); /*0x6e2328*/
    v18 = v29; /*0x6e232e*/
    v19 = *(int (__cdecl **)(unsigned int, unsigned int))(4 * v29 + 0xB3D088); /*0x6e2338*/
    LOBYTE(v30) = byte_B3D3E8[v29]; /*0x6e2341*/
    v20 = v19(v2, a2); /*0x6e2352*/
    (*(void (__cdecl **)(int, unsigned int, int))(4 * v18 + 0xB3D410))(v20, a2, v30); /*0x6e235b*/
    if ( a2 > 0xFFFF ) /*0x6e2369*/
    {
      a2 = 0xFFFF; /*0x6e2370*/
      Shared_NoOpVirtual_60D0A0(v21); /*0x6e2374*/
    }
    return NiTransformData_SetScaleKeys(this, v20, a2, v18); /*0x6e2387*/
  }
  return result; /*0x6e238c*/
}
