unsigned int __thiscall sub_9465A0(_DWORD *this, int a2, _DWORD *a3, char a4, const void **a5)
{
  int v6; // ecx
  _DWORD *v7; // edi
  _DWORD *v8; // esi
  const void **v9; // edi
  int v10; // edx
  int v11; // eax
  _DWORD *v12; // ecx
  int v13; // ecx
  const void *v15; // eax
  _DWORD *v16; // ecx
  int v17; // eax
  void *v18; // ecx
  char *v19; // esi
  int v20; // ebp
  int v21; // esi
  unsigned int v22; // eax
  char *v23; // ecx
  int v24; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v26; // ecx
  int v27; // ecx
  int v28; // esi
  _DWORD *v29; // edi
  int v30; // ecx
  int v31; // ecx
  int v32; // [esp+10h] [ebp-30h] BYREF
  _DWORD *v33; // [esp+14h] [ebp-2Ch] BYREF
  int v34; // [esp+18h] [ebp-28h]
  int v35; // [esp+1Ch] [ebp-24h]
  _DWORD *v36; // [esp+20h] [ebp-20h] BYREF
  int v37; // [esp+24h] [ebp-1Ch]
  int v38; // [esp+28h] [ebp-18h]
  _DWORD v39[5]; // [esp+2Ch] [ebp-14h] BYREF

  sub_90BBA0(&v32, dword_A9C288);
  v6 = *(this + 0xB);
  v7 = a3;
  v33 = 0;
  v34 = 0;
  v35 = 0x80000000;
  v8 = a3;
  if ( *(_DWORD *)(v6 + 0x48) )
  {
    if ( *sub_90D380(a3, (bool *)&a3) )
    {
      v8 = (_DWORD *)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 0xB) + 0x48) + 0xC))(
                       *(_DWORD *)(*(this + 0xB) + 0x48),
                       a2);
      if ( !v8 )
        v8 = v7;
    }
  }
  v9 = a5;
  if ( a4 )
  {
    v10 = (int)a5[1];
    v11 = 0;
    if ( v10 > 0 )
    {
      v12 = *a5;
      do
      {
        if ( *v12 == a2 )
          break;
        ++v11;
        v12 += 2;
      }
      while ( v11 < (int)a5[1] );
    }
    if ( v11 < v10 )
    {
      if ( v35 >= 0 )
      {
        v13 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
        if ( !v13 )
          v13 = dword_BA7D9C;
        sub_8A75D0(v13, v33, 0x18 * (v35 & 0x3FFFFFFF), 0x14);
      }
      return 0;
    }
    if ( v10 == ((unsigned int)a5[2] & 0x3FFFFFFF) )
      sub_8A6EE0(a5, 8);
    v15 = v9[1];
    v16 = (char *)*v9 + 8 * (_DWORD)v15;
    v9[1] = (char *)v15 + 1;
    *v16 = a2;
    v16[1] = v8;
  }
  v36 = 0;
  v37 = 0;
  v38 = 0x80000000;
  sub_8BC030(v39, (int)&v36, 1);
  v17 = sub_9582E0((int)this, (int)v39, (int)&v32, a2, 0, a2, (unsigned int)v8, (int)&v33);
  if ( v17 == v37 && v17 >= 1 )
  {
    v18 = (void *)*(this + 5);
    v19 = (char *)(v17 + 1);
    a3 = (_DWORD *)(v17 + 1);
    sub_918440(v18, v17 + 1);
    sub_9181B0((_DWORD **)*(this + 5), 0x24);
    sub_918390((_DWORD **)*(this + 5));
    if ( a4 )
    {
      v20 = 0;
      if ( v34 > 0 )
      {
        v21 = 0;
        do
        {
          v22 = sub_9465A0(this, v33[v21 + 2], (_DWORD *)v33[v21 + 4], 1, v9);
          v23 = (char *)a3 + v22;
          ++v20;
          v21 += 6;
          a3 = (_DWORD *)((char *)a3 + v22);
        }
        while ( v20 < v34 );
        v19 = v23;
      }
    }
    sub_8BC2E0(v39);
    v24 = TlsIndex;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( v38 >= 0 )
    {
      v26 = *(_DWORD *)(ThreadLocalStoragePointer[v24] + 0x19C);
      if ( !v26 )
        v26 = dword_BA7D9C;
      sub_8A75D0(v26, v36, v38 & 0x3FFFFFFF, 0x14);
    }
    if ( v35 >= 0 )
    {
      v27 = *(_DWORD *)(ThreadLocalStoragePointer[v24] + 0x19C);
      if ( !v27 )
        v27 = dword_BA7D9C;
      sub_8A75D0(v27, v33, 0x18 * (v35 & 0x3FFFFFFF), 0x14);
    }
    return (unsigned int)v19;
  }
  else
  {
    sub_8BC2E0(v39);
    v28 = TlsIndex;
    v29 = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( v38 >= 0 )
    {
      v30 = *(_DWORD *)(v29[v28] + 0x19C);
      if ( !v30 )
        v30 = dword_BA7D9C;
      sub_8A75D0(v30, v36, v38 & 0x3FFFFFFF, 0x14);
    }
    if ( v35 >= 0 )
    {
      v31 = *(_DWORD *)(v29[v28] + 0x19C);
      if ( !v31 )
        v31 = dword_BA7D9C;
      sub_8A75D0(v31, v33, 0x18 * (v35 & 0x3FFFFFFF), 0x14);
    }
    return 0xFFFFFFFF;
  }
}
