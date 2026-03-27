int __fastcall sub_946FB0(int a1, int a2, int a3)
{
  int result; // eax
  int v4; // ecx
  int v5; // edi
  int v6; // eax
  int v7; // ebx
  int v8; // ecx
  int v9; // edx
  int v10; // esi
  int v11; // eax
  int *v12; // esi
  int v13; // ecx
  int v14; // edx
  _DWORD *v15; // ebp
  int v16; // eax
  int v17; // esi
  int v18; // esi
  int v19; // edi
  int *v20; // esi
  int v21; // ecx
  int v22; // ecx
  int v23; // edx
  _DWORD *v24; // edi
  int v25; // eax
  int v26; // esi
  int v27; // eax
  int v28; // esi
  int v29; // edi
  _DWORD *v30; // ebp
  int v31; // esi
  int v32; // ebx
  _DWORD *v33; // ecx
  _DWORD *v34; // eax
  int v35; // edi
  char *v36; // esi
  _DWORD *v37; // edx
  int v38; // eax
  int v39; // ecx
  int v40; // ecx
  _DWORD **v41; // esi
  int v42; // eax
  int v43; // edi
  int v44; // ecx
  _DWORD *ThreadLocalStoragePointer; // esi
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // edi
  int v51; // esi
  int v52; // ebx
  int v53; // esi
  int v54; // edi
  int v55; // ebp
  int v56; // esi
  int v57; // esi
  _DWORD *v58; // edi
  int v59; // ecx
  int v60; // ecx
  int v61; // ecx
  bool v62; // [esp+Fh] [ebp-5Dh] BYREF
  int v63; // [esp+10h] [ebp-5Ch]
  int v64; // [esp+14h] [ebp-58h]
  int v65; // [esp+18h] [ebp-54h] BYREF
  _DWORD *v66; // [esp+1Ch] [ebp-50h] BYREF
  int v67; // [esp+20h] [ebp-4Ch]
  int v68; // [esp+24h] [ebp-48h]
  _DWORD *v69; // [esp+28h] [ebp-44h] BYREF
  int v70; // [esp+2Ch] [ebp-40h]
  int v71; // [esp+30h] [ebp-3Ch]
  char *v72; // [esp+34h] [ebp-38h] BYREF
  int v73; // [esp+38h] [ebp-34h]
  int v74; // [esp+3Ch] [ebp-30h]
  char *v75[3]; // [esp+40h] [ebp-2Ch] BYREF
  _DWORD *v76[2]; // [esp+4Ch] [ebp-20h] BYREF
  int v77; // [esp+54h] [ebp-18h]
  void **v78; // [esp+58h] [ebp-14h] BYREF
  __int16 v79; // [esp+5Eh] [ebp-Eh]
  _DWORD **v80; // [esp+60h] [ebp-Ch]
  int v81; // [esp+64h] [ebp-8h]
  int v82; // [esp+68h] [ebp-4h]

  result = a1;
  v4 = *(_DWORD *)(a1 + 0xC);
  v5 = 0;
  v63 = result;
  if ( v4 )
  {
    v6 = *(_DWORD *)(result + 0x1C);
    v7 = TlsIndex;
    v8 = 0x80000000;
    v76[0] = 0;
    v76[1] = 0;
    v77 = 0x80000000;
    v66 = 0;
    v67 = 0;
    v68 = 0x80000000;
    v69 = 0;
    v70 = 0;
    v71 = 0x80000000;
    if ( v6 <= 0 )
      goto LABEL_26;
    v9 = *(_DWORD *)(v63 + 0x18);
    while ( *(int *)(*(_DWORD *)v9 + 0xC) <= 0 )
    {
      ++v5;
      v9 += 4;
      if ( v5 >= v6 )
        goto LABEL_26;
    }
    v10 = *(_DWORD *)(*(_DWORD *)(v63 + 0x18) + 4 * v5);
    v11 = *(_DWORD *)(v10 + 0xC);
    v12 = (int *)(v10 + 8);
    if ( v11 > 0 )
    {
      v13 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v7) + 0x19C);
      if ( !v13 )
        v13 = dword_BA7D9C;
      v66 = sub_8A7560(v13, 4 * v11, 0x14);
      v8 = v12[1] | v68 & 0x40000000;
      v68 = v8;
    }
    v15 = v66;
    v16 = 0;
    v67 = v12[1];
    v14 = v67;
    v17 = *v12;
    if ( v67 > 0 )
    {
      do
      {
        v15[v16] = *(_DWORD *)(v17 + 4 * v16);
        ++v16;
      }
      while ( v16 < v14 );
      v8 = v68;
    }
    v18 = *(_DWORD *)(*(_DWORD *)(v63 + 0x18) + 4 * v5);
    v19 = *(_DWORD *)(v18 + 0x28);
    v20 = (int *)(v18 + 0x24);
    if ( (v71 & 0x3FFFFFFF) < v19 )
    {
      if ( v71 >= 0 )
      {
        v21 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v7) + 0x19C);
        if ( !v21 )
          v21 = dword_BA7D9C;
        sub_8A75D0(v21, v69, 4 * v71, 0x14);
      }
      v22 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v7) + 0x19C);
      if ( !v22 )
        v22 = dword_BA7D9C;
      v69 = sub_8A7560(v22, 4 * v20[1], 0x14);
      v8 = v68;
      v71 = v20[1] | v71 & 0x40000000;
    }
    v24 = v69;
    v25 = 0;
    v70 = v20[1];
    v23 = v70;
    v26 = *v20;
    if ( v70 > 0 )
    {
      do
      {
        v24[v25] = *(_DWORD *)(v26 + 4 * v25);
        ++v25;
      }
      while ( v25 < v23 );
      v8 = v68;
    }
    if ( !v67 )
    {
LABEL_26:
      v27 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v7);
      v28 = *(_DWORD *)(v27 + 0x1A0);
      v29 = *(_DWORD *)(v27 + 0x1A4);
      if ( (v8 & 0x3FFFFFFF) == 0 )
        sub_8A6EE0((const void **)&v66, 4);
      v66[v67++] = v28;
      if ( v70 == (v71 & 0x3FFFFFFF) )
        sub_8A6EE0((const void **)&v69, 4);
      v69[v70++] = v29;
    }
    v30 = (_DWORD *)(v63 + 0x30);
    v31 = 0;
    v32 = 0;
    *(_DWORD *)(v63 + 0x34) = 0;
    v64 = 0;
    sub_8B0E10(v75, 0);
    v72 = 0;
    v73 = 0;
    v74 = 0x80000000;
    if ( v67 > 0 )
    {
      v33 = v66;
      v34 = v69;
      do
      {
        sub_9584F0((unsigned int *)v33[v31], v34[v31], (int *)v75);
        v34 = v69;
        v33 = v66;
        v32 += v69[v31] - v66[v31];
        ++v31;
      }
      while ( v31 < v67 );
      v64 = v32;
    }
    v35 = sub_8B0D00(v75);
    sub_8B0D80(v75, &v62, v35);
    while ( v62 )
    {
      if ( v73 == (v74 & 0x3FFFFFFF) )
        sub_8A6EE0((const void **)&v72, 0x10);
      v36 = &v72[0x10 * v73++];
      *(_QWORD *)v36 = sub_8B0D20(v75, v35);
      *((_DWORD *)v36 + 2) = sub_8B0D30(v75, v35);
      v35 = sub_8B0D50((int *)v75, v35);
      sub_8B0D80(v75, &v62, v35);
    }
    v37 = v30;
    v81 = v30[1];
    v79 = 1;
    v78 = (void **)&off_A98330;
    v80 = (_DWORD **)v30;
    v82 = 1;
    v38 = v81 + 1;
    v39 = v30[2] & 0x3FFFFFFF;
    if ( v39 < v81 + 1 )
    {
      v40 = 2 * v39;
      if ( v38 < v40 )
        v38 = v40;
      sub_8A6E40((const void **)v30, v38, 1);
      v37 = v80;
    }
    *(_BYTE *)(v37[1] + *v37) = 0;
    sub_90BBA0(&v65, dword_A9C288);
    sub_9582E0(v32, (int)&v78, (int)&v65, 1, 0, (int)&v72, (unsigned int)&unk_BA99D4, (int)v76);
    v78 = (void **)&off_A98330;
    if ( v82 || (v41 = v80) == 0 )
    {
      v43 = TlsIndex;
    }
    else
    {
      v42 = (int)v80[2];
      v43 = TlsIndex;
      if ( v42 >= 0 )
      {
        v44 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v43) + 0x19C);
        if ( !v44 )
          v44 = dword_BA7D9C;
        sub_8A75D0(v44, *v80, v42 & 0x3FFFFFFF, 0x14);
      }
      (*(void (__thiscall **)(int, _DWORD **, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(dword_BA7D98, v41, 0xC, 0x14);
    }
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    v78 = &hkBaseObject::`vftable';
    if ( v74 >= 0 )
    {
      v46 = *(_DWORD *)(ThreadLocalStoragePointer[v43] + 0x19C);
      if ( !v46 )
        v46 = dword_BA7D9C;
      sub_8A75D0(v46, v72, 0x10 * v74, 0x14);
    }
    sub_8B0E60(v75);
    if ( v32 >= 1 )
    {
      v50 = *(_DWORD *)(v63 + 0x34);
      v51 = *(_DWORD *)(v63 + 0x28);
      v52 = v67;
      sub_918440(*(void **)(v63 + 0xC), v51 + v50 + 4 * v67 + v64 + 0xD);
      sub_9181B0(*(_DWORD ***)(v63 + 0xC), 0xA);
      sub_918440(*(void **)(v63 + 0xC), v51);
      if ( v51 > 0 )
        sub_918390(*(_DWORD ***)(v63 + 0xC));
      v53 = v63;
      sub_918440(*(void **)(v63 + 0xC), v50);
      if ( v50 > 0 )
        sub_918390(*(_DWORD ***)(v53 + 0xC));
      sub_918440(*(void **)(v53 + 0xC), v52);
      v54 = 0;
      if ( v52 > 0 )
      {
        v55 = v63;
        do
        {
          v56 = v69[v54] - v66[v54];
          sub_918440(*(void **)(v55 + 0xC), LOBYTE(v69[v54]) - LOBYTE(v66[v54]));
          if ( v56 > 0 )
            sub_918390(*(_DWORD ***)(v55 + 0xC));
          ++v54;
        }
        while ( v54 < v52 );
      }
      v57 = TlsIndex;
      v58 = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( v71 >= 0 )
      {
        v59 = *(_DWORD *)(v58[v57] + 0x19C);
        if ( !v59 )
          v59 = dword_BA7D9C;
        sub_8A75D0(v59, v69, 4 * v71, 0x14);
      }
      if ( v68 >= 0 )
      {
        v60 = *(_DWORD *)(v58[v57] + 0x19C);
        if ( !v60 )
          v60 = dword_BA7D9C;
        sub_8A75D0(v60, v66, 4 * v68, 0x14);
      }
      result = v77;
      if ( v77 >= 0 )
      {
        v49 = v58[v57];
        goto LABEL_85;
      }
    }
    else
    {
      if ( v71 >= 0 )
      {
        v47 = *(_DWORD *)(ThreadLocalStoragePointer[v43] + 0x19C);
        if ( !v47 )
          v47 = dword_BA7D9C;
        sub_8A75D0(v47, v69, 4 * v71, 0x14);
      }
      if ( v68 >= 0 )
      {
        v48 = *(_DWORD *)(ThreadLocalStoragePointer[v43] + 0x19C);
        if ( !v48 )
          v48 = dword_BA7D9C;
        sub_8A75D0(v48, v66, 4 * v68, 0x14);
      }
      result = v77;
      if ( v77 >= 0 )
      {
        v49 = ThreadLocalStoragePointer[v43];
LABEL_85:
        v61 = *(_DWORD *)(v49 + 0x19C);
        if ( !v61 )
          v61 = dword_BA7D9C;
        return sub_8A75D0(v61, v76[0], 0x18 * (result & 0x3FFFFFFF), 0x14);
      }
    }
  }
  return result;
}
