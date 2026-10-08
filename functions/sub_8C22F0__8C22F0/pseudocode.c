bhkRefObject *__cdecl sub_8C22F0(int a1, float a2)
{
  int (__thiscall *v2)(int); // edx
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  bhkRefObject *v8; // eax
  bhkRefObject *v9; // eax
  bhkRefObject *v10; // esi
  bhkRefObject *v11; // eax
  bhkRefObject *v12; // eax
  _DWORD v14[3]; // [esp+14h] [ebp-3Ch] BYREF
  int v15; // [esp+20h] [ebp-30h]
  int v16; // [esp+24h] [ebp-2Ch]
  void **v17; // [esp+28h] [ebp-28h] BYREF
  int v18; // [esp+2Ch] [ebp-24h]
  int v19; // [esp+30h] [ebp-20h]
  int v20; // [esp+34h] [ebp-1Ch]
  int v21; // [esp+38h] [ebp-18h]
  unsigned int v22; // [esp+4Ch] [ebp-4h]

  v18 = 0; /*0x8c2318*/
  v20 = 0; /*0x8c231c*/
  v21 = 0; /*0x8c2320*/
  v19 = 1; /*0x8c2324*/
  v17 = &hkFixedConstraintCinfo::`vftable'; /*0x8c232c*/
  v2 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x8C); /*0x8c233a*/
  v22 = 0; /*0x8c2342*/
  v3 = v2(a1); /*0x8c2346*/
  if ( v3 ) /*0x8c234a*/
    v4 = *(_DWORD *)(v3 + 0xC); /*0x8c234c*/
  else
    v4 = 0; /*0x8c2351*/
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x88))(a1); /*0x8c235d*/
  if ( v5 && (v6 = *(_DWORD *)(v5 + 0xC)) != 0 ) /*0x8c2368*/
    v20 = *(_DWORD *)(v6 + 8); /*0x8c236d*/
  else
    v20 = 0; /*0x8c2373*/
  if ( v4 ) /*0x8c2379*/
    v21 = *(_DWORD *)(v4 + 8); /*0x8c237e*/
  else
    v21 = 0; /*0x8c2384*/
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x88))(a1); /*0x8c2392*/
  if ( v7 ) /*0x8c239a*/
    sub_8C21D0((char **)&v17, (__m128 *)(*(_DWORD *)(v7 + 0x50) + 0x10)); /*0x8c23a3*/
  else
    sub_8C21D0((char **)&v17, (__m128 *)xmmword_B2F090); /*0x8c23aa*/
  if ( a2 >= 1.0 ) /*0x8c23bf*/
  {
    v11 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8c246c*/
    LOBYTE(v22) = 3; /*0x8c247a*/
    if ( v11 ) /*0x8c247f*/
      v12 = sub_8C1D80(v11, (int)&v17); /*0x8c2488*/
    else
      v12 = 0; /*0x8c248f*/
    v10 = v12; /*0x8c2491*/
  }
  else
  {
    v14[1] = 0; /*0x8c23c5*/
    v15 = 0; /*0x8c23c9*/
    v16 = 0; /*0x8c23cd*/
    v14[2] = 1; /*0x8c23d1*/
    v14[0] = &hkMalleableConstraintCinfo::`vftable'; /*0x8c23d9*/
    LOBYTE(v22) = 1; /*0x8c23e5*/
    sub_8BEEC0(v14); /*0x8c23ea*/
    sub_8BEF00(v14, v18); /*0x8c23f8*/
    v15 = v20; /*0x8c240f*/
    v16 = v21; /*0x8c2413*/
    sub_8BEDE0(v14, 1.0); /*0x8c2417*/
    sub_8BEE00(v14, a2); /*0x8c2428*/
    v8 = (bhkRefObject *)FormHeapAlloc(0x10u); /*0x8c242f*/
    LOBYTE(v22) = 2; /*0x8c243d*/
    if ( v8 ) /*0x8c2442*/
      v9 = sub_8C1E10(v8, (int)v14); /*0x8c244b*/
    else
      v9 = 0; /*0x8c2452*/
    v10 = v9; /*0x8c2459*/
    LOBYTE(v22) = 0; /*0x8c245b*/
    v14[0] = &hkConstraintCinfo::`vftable'; /*0x8c245f*/
    sub_8A0200(v14, 0); /*0x8c2463*/
  }
  v22 = 0xFFFFFFFF; /*0x8c2498*/
  v17 = &hkConstraintCinfo::`vftable'; /*0x8c24a0*/
  sub_8A0200(&v17, 0); /*0x8c24a4*/
  return v10; /*0x8c24ab*/
}
