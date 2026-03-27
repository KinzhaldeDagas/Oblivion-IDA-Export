char *__cdecl sub_9531A0(int a1, int a2)
{
  int v2; // ebx
  int v3; // edi
  int v4; // esi
  int v5; // edi
  unsigned int v6; // esi
  int v7; // ebp
  int v8; // eax
  char *v9; // edi
  int j; // eax
  int k; // ebp
  unsigned int v12; // esi
  int v13; // eax
  int v14; // esi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v17; // esi
  _DWORD *v18; // edi
  _DWORD *v19; // [esp+10h] [ebp-84h] BYREF
  int v20; // [esp+14h] [ebp-80h]
  int v21; // [esp+18h] [ebp-7Ch]
  bool v22; // [esp+1Fh] [ebp-75h] BYREF
  int v23; // [esp+20h] [ebp-74h] BYREF
  int i; // [esp+24h] [ebp-70h] BYREF
  _DWORD *v25; // [esp+28h] [ebp-6Ch] BYREF
  unsigned int v26; // [esp+2Ch] [ebp-68h]
  int v27; // [esp+30h] [ebp-64h]
  char *v28[3]; // [esp+34h] [ebp-60h] BYREF
  int v29; // [esp+40h] [ebp-54h] BYREF
  int v30; // [esp+44h] [ebp-50h]
  unsigned int v31; // [esp+48h] [ebp-4Ch]
  int v32; // [esp+4Ch] [ebp-48h]
  int v33; // [esp+50h] [ebp-44h]
  unsigned int v34; // [esp+54h] [ebp-40h]
  int v35; // [esp+58h] [ebp-3Ch]
  int v36; // [esp+5Ch] [ebp-38h]
  unsigned int v37; // [esp+60h] [ebp-34h]
  int v38; // [esp+64h] [ebp-30h]
  int v39; // [esp+68h] [ebp-2Ch]
  unsigned int v40; // [esp+6Ch] [ebp-28h]
  int v41; // [esp+70h] [ebp-24h]
  _DWORD v42[3]; // [esp+74h] [ebp-20h] BYREF
  _DWORD v43[5]; // [esp+80h] [ebp-14h] BYREF

  v2 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0x80000000;
  sub_8BC270(v42, (int)&v25);
  v29 = 0;
  v30 = 0;
  v31 = 0x80000000;
  v32 = 0;
  v33 = 0;
  v34 = 0x80000000;
  v35 = 0;
  v36 = 0;
  v37 = 0x80000000;
  v38 = 0;
  v39 = 0;
  v40 = 0x80000000;
  v41 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0x80000000;
  sub_8A6EE0((const void **)&v19, 8);
  v19[2 * v20] = a1;
  v19[2 * v20++ + 1] = a2;
  sub_8B0E10(v28, 0);
  sub_90BBA0(&i, &dword_B2FDE4);
  sub_90BBA0(&v23, &dword_B2FDE4);
  sub_953530(v43, &v23, &i);
  v3 = 0;
  for ( i = 0; v3 < v20; i = v3 )
  {
    sub_8B0E80(v28, v19[2 * v3], v26);
    v4 = v33;
    sub_954620((char *)v43, v19[2 * v3], (_DWORD *)v19[2 * v3 + 1], (_DWORD **)v42[2], (_DWORD *)v19[2 * v3 + 1], &v29);
    v23 = v4;
    if ( v4 < v33 )
    {
      v5 = 0xC * v4;
      do
      {
        v6 = *(_DWORD *)(v5 + v32 + 4);
        v7 = *(_DWORD *)(v5 + v32 + 8);
        v8 = sub_8B0F00((int *)v28, v6);
        sub_8B0D80(v28, &v22, v8);
        if ( !v22 )
        {
          if ( v20 == (v21 & 0x3FFFFFFF) )
            sub_8A6EE0((const void **)&v19, 8);
          v19[2 * v20] = v6;
          v19[2 * v20++ + 1] = v7;
        }
        v5 += 0xC;
        ++v23;
      }
      while ( v23 < v33 );
      v3 = i;
    }
    ++v3;
  }
  if ( v26 )
  {
    v9 = (char *)(**(int (__thiscall ***)(int, unsigned int, int))dword_BA7D98)(dword_BA7D98, v26, 5);
    sub_8B1890(v9, v25, v26);
    for ( j = 0; j < v30; ++j )
      *(_DWORD *)&v9[*(_DWORD *)(v29 + 8 * j)] = &v9[*(_DWORD *)(v29 + 8 * j + 4)];
    for ( k = 0; k < v33; v2 += 0xC )
    {
      v12 = *(_DWORD *)(v2 + v32 + 4);
      v13 = sub_8B1550((int *)v28, v12, 0xFFFFFFFF);
      if ( v13 != 0xFFFFFFFF )
        v12 = (unsigned int)&v9[v13];
      *(_DWORD *)&v9[*(_DWORD *)(v2 + v32)] = v12;
      ++k;
    }
    sub_4BFC40(v43);
    sub_8B0E60(v28);
    v14 = TlsIndex;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( v21 >= 0 )
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v14] + 0x19C), v19, 8 * v21, 0x14);
    sub_941400(&v29);
    sub_8BC000(v42);
    if ( v27 >= 0 )
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v14] + 0x19C), v25, v27 & 0x3FFFFFFF, 0x14);
    return v9;
  }
  else
  {
    sub_4BFC40(v43);
    sub_8B0E60(v28);
    v17 = TlsIndex;
    v18 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( (v21 & 0x80000000) == 0 )
      sub_8A75D0(*(_DWORD *)(v18[v17] + 0x19C), v19, 8 * v21, 0x14);
    sub_941400(&v29);
    sub_8BC000(v42);
    if ( (v27 & 0x80000000) == 0 )
      sub_8A75D0(*(_DWORD *)(v18[v17] + 0x19C), v25, v27 & 0x3FFFFFFF, 0x14);
    return 0;
  }
}
