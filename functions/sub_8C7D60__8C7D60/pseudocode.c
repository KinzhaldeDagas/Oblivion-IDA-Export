void __thiscall sub_8C7D60(_DWORD *this, signed int a2)
{
  _DWORD *v2; // ebp
  int v3; // esi
  unsigned int v4; // eax
  char *v5; // ebx
  int v6; // edi
  int *v7; // ebx
  unsigned int v8; // ebp
  _DWORD *v9; // esi
  void (__cdecl *v10)(int, int *, int, signed int *, int); // eax
  int i; // edi
  void (__cdecl *v12)(int, int *, int, signed int *, int); // eax
  int v13; // edi
  int *v14; // ebx
  int v15; // eax
  void (__cdecl *v16)(int, int *, int, signed int *, int); // edx
  int v17; // [esp-14h] [ebp-5Ch]
  int v18; // [esp-14h] [ebp-5Ch]
  int v19; // [esp+14h] [ebp-34h] BYREF
  _DWORD *v20; // [esp+18h] [ebp-30h]
  int v21; // [esp+1Ch] [ebp-2Ch] BYREF
  int v22; // [esp+20h] [ebp-28h] BYREF
  void **v23; // [esp+24h] [ebp-24h] BYREF
  char *v24; // [esp+28h] [ebp-20h]
  unsigned int v25; // [esp+2Ch] [ebp-1Ch]
  unsigned int v26; // [esp+30h] [ebp-18h]
  int v27; // [esp+34h] [ebp-14h]
  int v28; // [esp+38h] [ebp-10h]
  int v29; // [esp+44h] [ebp-4h]

  v2 = this; /*0x8c7d87*/
  v20 = this; /*0x8c7d89*/
  v3 = (*(int (__thiscall **)(_DWORD *, int *))(*this + 0x74))(this, &v22); /*0x8c7d9c*/
  v4 = 0; /*0x8c7d9e*/
  v5 = 0; /*0x8c7da5*/
  v23 = &NiTLargeArray<hkNiTriStripsData>::`vftable'; /*0x8c7da7*/
  v25 = 0; /*0x8c7daf*/
  v28 = 1; /*0x8c7db3*/
  v26 = 0; /*0x8c7db7*/
  v27 = 0; /*0x8c7dbb*/
  v24 = 0; /*0x8c7dbf*/
  v29 = 1; /*0x8c7dc5*/
  v19 = 0; /*0x8c7dc9*/
  if ( v3 ) /*0x8c7dcd*/
  {
    v6 = 0; /*0x8c7dd2*/
    v19 = *(_DWORD *)(v3 + 0x14); /*0x8c7dd6*/
    if ( v19 > 0 ) /*0x8c7dda*/
    {
      while ( 1 ) /*0x8c7deb*/
      {
        v7 = (int *)(*(_DWORD *)(v3 + 0xC) + 8 * v6); /*0x8c7deb*/
        v8 = v4; /*0x8c7dee*/
        if ( v4 >= v25 ) /*0x8c7df0*/
          sub_8C69C0((int **)&v23, v28 + v4); /*0x8c7dfd*/
        sub_8C68D0(&v23, v8, v7); /*0x8c7e08*/
        if ( ++v6 >= v19 ) /*0x8c7e14*/
          break; /*0x8c7e14*/
        v4 = v26; /*0x8c7de0*/
      }
      v2 = v20; /*0x8c7e16*/
      v5 = v24; /*0x8c7e1a*/
    }
    sub_8C6BE0((_DWORD *)(v3 + 8)); /*0x8c7e23*/
    sub_8C69C0((int **)(v3 + 8), 0); /*0x8c7e2c*/
    *(float *)(v3 + 4) = flt_B2EFC4; /*0x8c7e37*/
  }
  v9 = (_DWORD *)a2; /*0x8c7e3a*/
  sub_8A2610(v2, a2); /*0x8c7e41*/
  v17 = v9[0x88]; /*0x8c7e5a*/
  v10 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v17 + 8); /*0x8c7e5b*/
  a2 = 4; /*0x8c7e5e*/
  v10(v17, &v19, 4, &a2, 1); /*0x8c7e66*/
  for ( i = 0; i < v19; ++i ) /*0x8c7e71*/
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v9 + 0x2C))(v9, *(_DWORD *)&v5[8 * i]); /*0x8c7e7e*/
  v18 = v9[0x88]; /*0x8c7e9d*/
  v12 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v18 + 8); /*0x8c7e9e*/
  a2 = 4; /*0x8c7ea1*/
  v12(v18, &v19, 4, &a2, 1); /*0x8c7ea9*/
  v13 = 0; /*0x8c7eab*/
  if ( v19 > 0 ) /*0x8c7eb4*/
  {
    v14 = (int *)(v5 + 4); /*0x8c7eb6*/
    do /*0x8c7ef5*/
    {
      v15 = v9[0x88]; /*0x8c7ec2*/
      v21 = *v14; /*0x8c7ecf*/
      v16 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v15 + 8); /*0x8c7ed3*/
      a2 = 4; /*0x8c7ede*/
      v16(v15, &v21, 4, &a2, 1); /*0x8c7ee6*/
      ++v13; /*0x8c7ee8*/
      v14 += 2; /*0x8c7eee*/
    }
    while ( v13 < v19 ); /*0x8c7ef5*/
    v5 = v24; /*0x8c7ef7*/
  }
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 0x64))(v2, v22); /*0x8c7f08*/
  v29 = 0xFFFFFFFF; /*0x8c7f0c*/
  if ( v5 ) /*0x8c7f14*/
  {
    _LN21(v5, 8u, *((_DWORD *)v5 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x8c7f25*/
    FormHeapFree((unsigned int)(v5 + 0xFFFFFFFC)); /*0x8c7f2b*/
  }
}
