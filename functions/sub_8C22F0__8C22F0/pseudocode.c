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

  v18 = 0;
  v20 = 0;
  v21 = 0;
  v19 = 1;
  v17 = &hkFixedConstraintCinfo::`vftable';
  v2 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x8C);
  v22 = 0;
  v3 = v2(a1);
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 0xC);
  else
    v4 = 0;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x88))(a1);
  if ( v5 && (v6 = *(_DWORD *)(v5 + 0xC)) != 0 )
    v20 = *(_DWORD *)(v6 + 8);
  else
    v20 = 0;
  if ( v4 )
    v21 = *(_DWORD *)(v4 + 8);
  else
    v21 = 0;
  v7 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x88))(a1);
  if ( v7 )
    sub_8C21D0((char **)&v17, (__m128 *)(*(_DWORD *)(v7 + 0x50) + 0x10));
  else
    sub_8C21D0((char **)&v17, (__m128 *)xmmword_B2F090);
  if ( a2 >= 1.0 )
  {
    v11 = (bhkRefObject *)FormHeapAlloc(0x10u);
    LOBYTE(v22) = 3;
    if ( v11 )
      v12 = sub_8C1D80(v11, (int)&v17);
    else
      v12 = 0;
    v10 = v12;
  }
  else
  {
    v14[1] = 0;
    v15 = 0;
    v16 = 0;
    v14[2] = 1;
    v14[0] = &hkMalleableConstraintCinfo::`vftable';
    LOBYTE(v22) = 1;
    sub_8BEEC0(v14);
    sub_8BEF00(v14, v18);
    v15 = v20;
    v16 = v21;
    sub_8BEDE0(v14, 1.0);
    sub_8BEE00(v14, a2);
    v8 = (bhkRefObject *)FormHeapAlloc(0x10u);
    LOBYTE(v22) = 2;
    if ( v8 )
      v9 = sub_8C1E10(v8, (int)v14);
    else
      v9 = 0;
    v10 = v9;
    LOBYTE(v22) = 0;
    v14[0] = &hkConstraintCinfo::`vftable';
    sub_8A0200(v14, 0);
  }
  v22 = 0xFFFFFFFF;
  v17 = &hkConstraintCinfo::`vftable';
  sub_8A0200(&v17, 0);
  return v10;
}
