int __userpurge sub_90E860@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3, int a4)
{
  char v4; // al
  int v6; // ecx
  int v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // ecx
  void *v11; // eax
  unsigned int *v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // edi
  char v16; // al
  int i; // ecx
  int v18; // eax
  int v19; // ebx
  int v20; // edi
  int v21; // eax
  int v22; // ebp
  _DWORD *v23; // ebx
  int v24; // edx
  int v25; // eax
  int v26; // edi
  char v27; // al
  int j; // ecx
  int v29; // eax
  _DWORD *ThreadLocalStoragePointer; // edi
  int v31; // eax
  int v32; // ebx
  int v33; // ebp
  _DWORD *v34; // edi
  int v35; // ebp
  int v36; // ebx
  int k; // eax
  int v38; // eax
  int v39; // ebx
  int v40; // ebp
  int v41; // eax
  int v42; // ecx
  int v43; // ebp
  _DWORD *v44; // edi
  int v45; // ebx
  int v46; // ebx
  int v47; // ebp
  int v48; // eax
  bool v49; // cc
  int v50; // edi
  int v51; // edx
  _DWORD *v52; // eax
  int v53; // edx
  const char *v55; // [esp+10h] [ebp-A8h]
  char *v56; // [esp+28h] [ebp-90h] BYREF
  int v57; // [esp+2Ch] [ebp-8Ch]
  int v58; // [esp+30h] [ebp-88h]
  char *v59; // [esp+34h] [ebp-84h] BYREF
  int v60; // [esp+38h] [ebp-80h]
  int v61; // [esp+3Ch] [ebp-7Ch]
  _DWORD *v62; // [esp+40h] [ebp-78h]
  int v63; // [esp+44h] [ebp-74h]
  int v64; // [esp+48h] [ebp-70h]
  int v65; // [esp+4Ch] [ebp-6Ch]
  int v66; // [esp+50h] [ebp-68h]
  int *v67; // [esp+54h] [ebp-64h]
  _DWORD *v68; // [esp+58h] [ebp-60h] BYREF
  int v69; // [esp+5Ch] [ebp-5Ch]
  int v70; // [esp+60h] [ebp-58h]
  _DWORD v71[10]; // [esp+64h] [ebp-54h] BYREF
  _DWORD v72[4]; // [esp+8Ch] [ebp-2Ch] BYREF
  char *v73[4]; // [esp+9Ch] [ebp-1Ch] BYREF
  char *v74[3]; // [esp+ACh] [ebp-Ch] BYREF

  v4 = *(_BYTE *)(a3 + 0x48);
  v6 = *(_DWORD *)(a3 + 0x1C);
  v62 = a1;
  sub_9183A0(v72, v6, v4);
  if ( *(_BYTE *)(*(_DWORD *)a3 + 8) )
  {
    v7 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0x80000000;
    sub_8B0E10(v74, a2);
    v8 = 2 * a1[0x14];
    if ( v8 > 0 )
    {
      if ( v8 < 2 * (v61 & 0x3FFFFFFF) )
        v8 = 2 * (v61 & 0x3FFFFFFF);
      sub_8A6E40((const void **)&v59, v8, 4);
    }
    if ( (int)a1[3] > 0 )
    {
      v9 = 0;
      do
      {
        v10 = a1[2];
        v11 = *(void **)(v10 + v9 + 4);
        v12 = (unsigned int *)(v9 + v10);
        if ( v11 == &unk_BA8788 )
        {
          sub_8B0E80(v74, *v12, v60 / 2);
          *(_DWORD *)&v59[4 * v60] = *(_DWORD *)(*(_DWORD *)(a3 + 0x10) + 8 * v7);
          v13 = *(_DWORD *)(a3 + 0x10);
          ++v60;
          *(_DWORD *)&v59[4 * v60++] = *(_DWORD *)(v13 + 8 * v7 + 4);
        }
        ++v7;
        v9 += 0x18;
      }
      while ( v7 < a1[3] );
    }
    v14 = sub_953130(v72);
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v14 + 0x18))(
      v14,
      *(_DWORD *)(*(_DWORD *)(a3 + 4) + 0x44),
      0);
    sub_918480(v72, v59, v60);
    v15 = sub_953130(v72);
    v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x1C))(v15);
    v68 = v71;
    v70 = 0x80000020;
    for ( i = 0; i < 0x10; ++i )
      *((_BYTE *)v68 + i) = 0xFF;
    v18 = v16 & 0xF;
    v69 = 0x10;
    if ( v18 )
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v15 + 0xC))(v15, v68, 0x10 - v18);
    v19 = TlsIndex;
    if ( v70 >= 0 )
      sub_8A75D0(
        *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v19) + 0x19C),
        v68,
        v70 & 0x3FFFFFFF,
        0x14);
    v20 = 0;
    v21 = 3 * a1[0x13];
    v56 = 0;
    v57 = 0;
    v58 = 0x80000000;
    if ( v21 > 0 )
      sub_8A6E40((const void **)&v56, v21 < 0 ? 0 : v21, 4);
    if ( (int)a1[3] > 0 )
    {
      v22 = 0;
      do
      {
        v23 = v62;
        if ( *(_UNKNOWN **)(v62[2] + v22 + 4) != &unk_BA8788 )
        {
          *(_DWORD *)&v56[4 * v57] = *(_DWORD *)(*(_DWORD *)(a3 + 0x10) + 8 * v20);
          v24 = *(_DWORD *)(a3 + 0x10);
          ++v57;
          *(_DWORD *)&v56[4 * v57++] = *(_DWORD *)(v24 + 8 * v20 + 4);
          v25 = sub_8B1550((int *)v74, *(_DWORD *)(v23[2] + v22 + 4), 0xFFFFFFFF);
          *(_DWORD *)&v56[4 * v57++] = v25;
        }
        ++v20;
        v22 += 0x18;
      }
      while ( v20 < v23[3] );
      a1 = v62;
      v19 = TlsIndex;
    }
    sub_918480(v72, v56, v57);
    v26 = sub_953130(v72);
    v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v26 + 0x1C))(v26);
    v68 = v71;
    v70 = 0x80000020;
    for ( j = 0; j < 0x10; ++j )
      *((_BYTE *)v68 + j) = 0xFF;
    v29 = v27 & 0xF;
    v69 = 0x10;
    if ( v29 )
      (*(void (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)v26 + 0xC))(v26, v68, 0x10 - v29);
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    if ( v70 >= 0 )
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v19] + 0x19C), v68, v70 & 0x3FFFFFFF, 0x14);
    if ( v58 >= 0 )
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v19] + 0x19C), v56, 4 * v58, 0x14);
    sub_8B0E60(v74);
    if ( v61 >= 0 )
      sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v19] + 0x19C), v59, 4 * v61, 0x14);
  }
  v31 = *(_DWORD *)(a3 + 8);
  v32 = 0;
  v64 = 0;
  if ( v31 > 0 )
  {
    v66 = 0;
    v65 = 0;
    do
    {
      v33 = *(_DWORD *)(a3 + 4);
      v34 = (_DWORD *)(v66 + *(_DWORD *)(a3 + 0x30));
      v59 = 0;
      v60 = 0;
      v61 = 0x80000000;
      v35 = v65 + v33;
      v36 = 3 * v34[1];
      v63 = v35;
      if ( v36 > 0 )
      {
        sub_8A6E40((const void **)&v59, v36, 4);
        for ( k = 0; k < v36; ++k )
          *(_DWORD *)&v59[4 * k] = 0xFFFFFFFF;
      }
      v60 = v36;
      v38 = v34[1];
      v39 = 0;
      v67 = 0;
      if ( v38 > 0 )
      {
        v40 = 0;
        do
        {
          v41 = sub_8B1550(v62 + 5, *(_DWORD *)(*v34 + v40 + 4), 0xFFFFFFFE);
          if ( v41 >= 0 && *(int *)(*(_DWORD *)(a3 + 0x10) + 8 * v41) >= 0 )
          {
            *(_DWORD *)&v59[v39] = *(_DWORD *)(*v34 + v40) - *(_DWORD *)(v63 + 0x14);
            *(_DWORD *)&v59[v39 + 4] = *(_DWORD *)(*(_DWORD *)(a3 + 0x10) + 8 * v41);
            *(_DWORD *)&v59[v39 + 8] = *(_DWORD *)(*(_DWORD *)(a3 + 0x10) + 8 * v41 + 4);
            v39 += 0xC;
          }
          v42 = v34[1];
          v40 += 0xC;
          v67 = (int *)((char *)v67 + 1);
        }
        while ( (int)v67 < v42 );
        v35 = v63;
      }
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a3 + 0x1C) + 0x18))(
        *(_DWORD *)(a3 + 0x1C),
        *(_DWORD *)(v35 + 0x14) + *(_DWORD *)(v35 + 0x1C),
        0);
      sub_918480(v72, v59, v60);
      if ( v61 >= 0 )
        sub_8A75D0(
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
          v59,
          4 * v61,
          0x14);
      v43 = v65 + *(_DWORD *)(a3 + 4);
      v44 = (_DWORD *)(v66 + *(_DWORD *)(a3 + 0x3C));
      v56 = 0;
      v57 = 0;
      v58 = 0x80000000;
      v45 = 3 * v44[1];
      v63 = v43;
      if ( v45 > 0 )
        sub_8A6E40((const void **)&v56, v45 < 0 ? 0 : v45, 4);
      v57 = v45;
      v46 = 0;
      if ( (int)v44[1] > 0 )
      {
        v47 = 0;
        do
        {
          *(_DWORD *)&v56[v47] = *(_DWORD *)(*v44 + 8 * v46) - *(_DWORD *)(v63 + 0x14);
          *(_DWORD *)&v56[v47 + 4] = 0;
          v55 = *(const char **)(*v44 + 8 * v46 + 4);
          v67 = (int *)&v56[v47 + 8];
          v48 = sub_942B40(v62 + 0xE, v55, 0xFFFFFFFF);
          *v67 = v48;
          ++v46;
          v47 += 0xC;
        }
        while ( v46 < v44[1] );
        v43 = v63;
      }
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a3 + 0x1C) + 0x18))(
        *(_DWORD *)(a3 + 0x1C),
        *(_DWORD *)(v43 + 0x14) + *(_DWORD *)(v43 + 0x20),
        0);
      sub_918480(v72, v56, v57);
      if ( v58 >= 0 )
        sub_8A75D0(
          *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
          v56,
          4 * v58,
          0x14);
      v49 = ++v64 < *(_DWORD *)(a3 + 8);
      v65 += 0x30;
      v66 += 0xC;
    }
    while ( v49 );
    a1 = v62;
    v32 = 0;
  }
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a3 + 0x1C) + 0x18))(*(_DWORD *)(a3 + 0x1C), a4, 0);
  if ( *(int *)(a3 + 8) > 0 )
  {
    v50 = 0;
    do
    {
      v51 = *(_DWORD *)(a3 + 0x20);
      v68 = 0;
      v69 = 0;
      v71[0] = 0;
      v71[1] = 0;
      v71[3] = 0;
      v71[4] = 0;
      v71[6] = 0;
      v71[7] = 0;
      v71[9] = 0;
      v70 = 0x80000000;
      v71[2] = 0x80000000;
      v71[5] = 0x80000000;
      v71[8] = 0x80000000;
      (*(void (__thiscall **)(int, _DWORD, int, void *, _DWORD **))(v51 + 8))(
        a3 + 0x20,
        *(_DWORD *)(a3 + 0x1C),
        v50 + *(_DWORD *)(a3 + 4),
        &unk_BA9498,
        &v68);
      sub_941400(&v68);
      ++v32;
      v50 += 0x30;
    }
    while ( v32 < *(_DWORD *)(a3 + 8) );
    a1 = v62;
  }
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a3 + 0x1C) + 0x18))(*(_DWORD *)(a3 + 0x1C), 0x18, 0);
  v52 = (_DWORD *)sub_942CA0((_DWORD *)(a3 + 0x20));
  v53 = *(_DWORD *)(a3 + 0x1C);
  LOBYTE(v64) = BYTE1(*v52) != BYTE1(dword_B2FDE4);
  sub_9183A0(v73, v53, v64);
  sub_918440(v73, *(_DWORD *)(*(_DWORD *)(a3 + 0x10) + 8 * a1[0x11]));
  sub_918440(v73, *(_DWORD *)(*(_DWORD *)(a3 + 0x10) + 8 * a1[0x11] + 4));
  sub_918440(v73, *(_DWORD *)(*(_DWORD *)(a3 + 0x10) + 8 * a1[0x12]));
  sub_918440(v73, *(_DWORD *)(*(_DWORD *)(a3 + 0x10) + 8 * a1[0x12] + 4));
  sub_918180(v73);
  return sub_918180(v72);
}
