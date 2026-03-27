void __thiscall sub_8C7D60(_DWORD *this, signed int a2)
{
  _DWORD *v2; // ebp
  int v3; // esi
  unsigned int v4; // eax
  int *v5; // ebx
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
  int *v24; // [esp+28h] [ebp-20h]
  unsigned int v25; // [esp+2Ch] [ebp-1Ch]
  unsigned int v26; // [esp+30h] [ebp-18h]
  int v27; // [esp+34h] [ebp-14h]
  int v28; // [esp+38h] [ebp-10h]
  int v29; // [esp+44h] [ebp-4h]

  v2 = this;
  v20 = this;
  v3 = (*(int (__thiscall **)(_DWORD *, int *))(*this + 0x74))(this, &v22);
  v4 = 0;
  v5 = 0;
  v23 = &NiTLargeArray<hkNiTriStripsData>::`vftable';
  v25 = 0;
  v28 = 1;
  v26 = 0;
  v27 = 0;
  v24 = 0;
  v29 = 1;
  v19 = 0;
  if ( v3 )
  {
    v6 = 0;
    v19 = *(_DWORD *)(v3 + 0x14);
    if ( v19 > 0 )
    {
      while ( 1 )
      {
        v7 = (int *)(*(_DWORD *)(v3 + 0xC) + 8 * v6);
        v8 = v4;
        if ( v4 >= v25 )
          sub_8C69C0((int **)&v23, v28 + v4);
        sub_8C68D0(&v23, v8, v7);
        if ( ++v6 >= v19 )
          break;
        v4 = v26;
      }
      v2 = v20;
      v5 = v24;
    }
    sub_8C6BE0((_DWORD *)(v3 + 8));
    sub_8C69C0((int **)(v3 + 8), 0);
    *(float *)(v3 + 4) = flt_B2EFC4;
  }
  v9 = (_DWORD *)a2;
  sub_8A2610(v2, a2);
  v17 = v9[0x88];
  v10 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v17 + 8);
  a2 = 4;
  v10(v17, &v19, 4, &a2, 1);
  for ( i = 0; i < v19; ++i )
    (*(void (__thiscall **)(_DWORD *, int))(*v9 + 0x2C))(v9, v5[2 * i]);
  v18 = v9[0x88];
  v12 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v18 + 8);
  a2 = 4;
  v12(v18, &v19, 4, &a2, 1);
  v13 = 0;
  if ( v19 > 0 )
  {
    v14 = v5 + 1;
    do
    {
      v15 = v9[0x88];
      v21 = *v14;
      v16 = *(void (__cdecl **)(int, int *, int, signed int *, int))(v15 + 8);
      a2 = 4;
      v16(v15, &v21, 4, &a2, 1);
      ++v13;
      v14 += 2;
    }
    while ( v13 < v19 );
    v5 = v24;
  }
  (*(void (__thiscall **)(_DWORD *, int))(*v2 + 0x64))(v2, v22);
  v29 = 0xFFFFFFFF;
  if ( v5 )
  {
    _LN21(v5, 8u, v5[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree((unsigned int)(v5 + 0xFFFFFFFF));
  }
}
