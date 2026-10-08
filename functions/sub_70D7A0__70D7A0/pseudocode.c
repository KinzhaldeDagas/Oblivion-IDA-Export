unsigned int __thiscall sub_70D7A0(int *this, int a2)
{
  int v2; // esi
  void (__cdecl *v4)(int, int *, int, int *, int); // eax
  void (__cdecl *v5)(int, int *, int, int *, int); // eax
  void (__cdecl *v6)(int, int *, int, int *, int); // eax
  void (__cdecl *v7)(int, int *, int, int *, int); // eax
  void (__cdecl *v8)(int, int *, int, int *, int); // eax
  void (__cdecl *v9)(int, int *, int, int *, int); // eax
  void (__cdecl *v10)(int, int *, int, int *, int); // eax
  void (__cdecl *v11)(int, int *, int, int *, int); // eax
  void (__cdecl *v12)(int, int *, int, int *, int); // edx
  void (__cdecl *v13)(int, int *, int, int *, int); // eax
  void (__cdecl *v14)(int, int *, int, int *, int); // eax
  void (__cdecl *v15)(int, int *, int, int *, int); // eax
  void (__cdecl *v16)(int, int *, int, int *, int); // edx
  unsigned int result; // eax
  int v18; // [esp-54h] [ebp-64h]
  int v19; // [esp-54h] [ebp-64h]
  int v20; // [esp-40h] [ebp-50h]
  int v21; // [esp-40h] [ebp-50h]
  int v22; // [esp-2Ch] [ebp-3Ch]
  int v23; // [esp-2Ch] [ebp-3Ch]
  int v24; // [esp-2Ch] [ebp-3Ch]
  int v25; // [esp-18h] [ebp-28h]
  int v26; // [esp-18h] [ebp-28h]
  int v27; // [esp-18h] [ebp-28h]
  int v28; // [esp-18h] [ebp-28h]
  int v29; // [esp-18h] [ebp-28h]
  int v30; // [esp-14h] [ebp-24h]
  int v31; // [esp+8h] [ebp-8h] BYREF
  int v32; // [esp+Ch] [ebp-4h] BYREF

  v2 = a2; /*0x70d7a4*/
  sub_707F00(this, a2); /*0x70d7ac*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u ) /*0x70d7bb*/
  {
    v30 = *(_DWORD *)(v2 + 0x21C); /*0x70d7de*/
    v4 = *(void (__cdecl **)(int, int *, int, int *, int))(v30 + 4); /*0x70d7df*/
    a2 = 2; /*0x70d7e2*/
    v4(v30, &v31, 2, &a2, 1); /*0x70d7ea*/
  }
  else
  {
    v31 = *(unsigned __int16 *)(v2 + 0x258); /*0x70d7c4*/
  }
  v25 = *(_DWORD *)(v2 + 0x21C); /*0x70d80a*/
  v5 = *(void (__cdecl **)(int, int *, int, int *, int))(v25 + 4); /*0x70d80b*/
  a2 = 4; /*0x70d80e*/
  v5(v25, this + 0x3B, 4, &a2, 1); /*0x70d812*/
  v22 = *(_DWORD *)(v2 + 0x21C); /*0x70d829*/
  v6 = *(void (__cdecl **)(int, int *, int, int *, int))(v22 + 4); /*0x70d82a*/
  a2 = 4; /*0x70d82d*/
  v6(v22, this + 0x3C, 4, &a2, 1); /*0x70d831*/
  v20 = *(_DWORD *)(v2 + 0x21C); /*0x70d848*/
  v7 = *(void (__cdecl **)(int, int *, int, int *, int))(v20 + 4); /*0x70d849*/
  a2 = 4; /*0x70d84c*/
  v7(v20, this + 0x3D, 4, &a2, 1); /*0x70d850*/
  v18 = *(_DWORD *)(v2 + 0x21C); /*0x70d867*/
  v8 = *(void (__cdecl **)(int, int *, int, int *, int))(v18 + 4); /*0x70d868*/
  a2 = 4; /*0x70d86b*/
  v8(v18, this + 0x3E, 4, &a2, 1); /*0x70d86f*/
  v26 = *(_DWORD *)(v2 + 0x21C); /*0x70d889*/
  v9 = *(void (__cdecl **)(int, int *, int, int *, int))(v26 + 4); /*0x70d88a*/
  a2 = 4; /*0x70d88d*/
  v9(v26, this + 0x3F, 4, &a2, 1); /*0x70d891*/
  v23 = *(_DWORD *)(v2 + 0x21C); /*0x70d8a8*/
  v10 = *(void (__cdecl **)(int, int *, int, int *, int))(v23 + 4); /*0x70d8a9*/
  a2 = 4; /*0x70d8ac*/
  v10(v23, this + 0x40, 4, &a2, 1); /*0x70d8b0*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000105u ) /*0x70d8bf*/
  {
    v27 = *(_DWORD *)(v2 + 0x21C); /*0x70d8de*/
    v11 = *(void (__cdecl **)(int, int *, int, int *, int))(v27 + 4); /*0x70d8df*/
    v32 = 1; /*0x70d8e2*/
    v11(v27, &a2, 1, &v32, 1); /*0x70d8ea*/
    *((_BYTE *)this + 0x104) = (_BYTE)a2 != 0; /*0x70d8f7*/
  }
  else
  {
    *((_BYTE *)this + 0x104) = 0; /*0x70d8c1*/
  }
  v12 = *(void (__cdecl **)(int, int *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x70d90a*/
  v28 = *(_DWORD *)(v2 + 0x21C); /*0x70d915*/
  a2 = 4; /*0x70d916*/
  v12(v28, this + 0x44, 4, &a2, 1); /*0x70d91a*/
  v24 = *(_DWORD *)(v2 + 0x21C); /*0x70d931*/
  v13 = *(void (__cdecl **)(int, int *, int, int *, int))(v24 + 4); /*0x70d932*/
  a2 = 4; /*0x70d935*/
  v13(v24, this + 0x45, 4, &a2, 1); /*0x70d939*/
  v21 = *(_DWORD *)(v2 + 0x21C); /*0x70d950*/
  v14 = *(void (__cdecl **)(int, int *, int, int *, int))(v21 + 4); /*0x70d951*/
  a2 = 4; /*0x70d954*/
  v14(v21, this + 0x46, 4, &a2, 1); /*0x70d958*/
  v19 = *(_DWORD *)(v2 + 0x21C); /*0x70d96f*/
  v15 = *(void (__cdecl **)(int, int *, int, int *, int))(v19 + 4); /*0x70d970*/
  a2 = 4; /*0x70d973*/
  v15(v19, this + 0x47, 4, &a2, 1); /*0x70d977*/
  v16 = *(void (__cdecl **)(int, int *, int, int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x70d97f*/
  v29 = *(_DWORD *)(v2 + 0x21C); /*0x70d994*/
  a2 = 4; /*0x70d995*/
  v16(v29, this + 0x48, 4, &a2, 1); /*0x70d999*/
  sub_712A20((unsigned int *)v2); /*0x70d9a0*/
  result = sub_712AE0((unsigned int *)v2); /*0x70d9a7*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0x4010004u ) /*0x70d9b7*/
  {
    sub_712AE0((unsigned int *)v2); /*0x70d9bb*/
    result = *(_DWORD *)(v2 + 0xD8); /*0x70d9c0*/
    if ( result >= 0xA000107 && result < 0xA00010F ) /*0x70d9d2*/
      return sub_712AE0((unsigned int *)v2); /*0x70d9d6*/
  }
  return result; /*0x70d9db*/
}
