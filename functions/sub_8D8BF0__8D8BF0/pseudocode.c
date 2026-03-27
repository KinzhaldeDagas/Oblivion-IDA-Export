int __thiscall sub_8D8BF0(int *this)
{
  int *v1; // ebx
  _BYTE *v2; // eax
  int v3; // ecx
  _DWORD *v4; // ecx
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // esi
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  int v12; // ecx
  int v13; // esi
  int *v14; // edi
  unsigned int j; // ebx
  int v16; // ecx
  _DWORD *v17; // ecx
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  int result; // eax
  int v22; // ecx
  int *v23; // edi
  unsigned int k; // ebx
  int v25; // ecx
  _DWORD *v26; // eax
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  _DWORD *v30; // edx
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  int v34; // ecx
  int v35; // ecx
  _DWORD *v36; // ecx
  int *v37; // edi
  unsigned int m; // ebx
  int v39; // ecx
  int *v40; // edi
  unsigned int n; // ebx
  int v42; // ecx
  int v43; // ecx
  _DWORD *v44; // ecx
  int v45; // ecx
  int v46; // eax
  int *v47; // ecx
  int v48; // eax
  _DWORD *v49; // ecx
  int v50; // ecx
  int v51; // edi
  int v52; // eax
  int v53; // edx
  int v54; // edi
  int v55; // edx
  int v56; // eax
  int v57; // edi
  int v58; // eax
  int v59; // edx
  int v60; // edi
  int v61; // ebx
  int v62; // ecx
  int v63; // edi
  int v64; // eax
  int v65; // edx
  int *v66; // ecx
  int *v67; // edi
  unsigned int ii; // ebx
  int v69; // ecx
  char v71; // [esp+1Ah] [ebp-1A6h] BYREF
  char v72; // [esp+1Bh] [ebp-1A5h] BYREF
  int i; // [esp+1Ch] [ebp-1A4h]
  _DWORD *v74; // [esp+20h] [ebp-1A0h] BYREF
  int v75; // [esp+24h] [ebp-19Ch]
  int v76; // [esp+28h] [ebp-198h]
  int v77; // [esp+2Ch] [ebp-194h]
  _DWORD v78[4]; // [esp+30h] [ebp-190h] BYREF
  _DWORD v79[4]; // [esp+40h] [ebp-180h] BYREF
  _DWORD v80[4]; // [esp+50h] [ebp-170h] BYREF
  _DWORD v81[4]; // [esp+60h] [ebp-160h] BYREF
  _DWORD *v82; // [esp+70h] [ebp-150h]
  int v83; // [esp+74h] [ebp-14Ch]
  int v84; // [esp+78h] [ebp-148h]
  _BYTE v85[324]; // [esp+7Ch] [ebp-144h] BYREF
  int savedregs; // [esp+1C0h] [ebp+0h] BYREF

  v1 = this;
  v2 = v85;
  v82 = v85;
  v83 = 0;
  v84 = 0x80000010;
  v3 = 0x10;
  do
  {
    *v2 = 0;
    v2 += 0x14;
    --v3;
  }
  while ( v3 );
  v4 = (_DWORD *)*v1;
  v5 = v1[1];
  *v1 = (int)v82;
  v1[1] = v83;
  v82 = v4;
  v6 = v1[2];
  v1[2] = v84;
  v7 = v1[3];
  v83 = v5;
  v84 = v6;
  ++*(_DWORD *)(v7 + 0x98);
  v8 = 0;
  for ( i = 0; i < v83; ++i )
  {
    v9 = &v82[5 * v8];
    switch ( *(_BYTE *)v9 )
    {
      case 1:
        v10 = (_DWORD *)v9[1];
        if ( !v10[2] )
          sub_8994E0((_DWORD *)v1[3], v10, v9[2]);
        goto LABEL_117;
      case 2:
        v11 = (_DWORD *)v1[3];
        if ( *(_DWORD **)(v9[1] + 8) == v11 )
          sub_8996C0(v11, &v72, (int (__stdcall ***)(signed int))v9[1]);
        goto LABEL_117;
      case 3:
        v43 = v1[3];
        if ( *(_DWORD *)(v9[1] + 8) == v43 )
          sub_8CC570(v43, v9[1]);
        sub_8BC730((int (__thiscall ***)(int (__stdcall ***)(signed int), int))v9[1]);
        goto LABEL_21;
      case 4:
        sub_8A9AB0(
          v9[1],
          (int)&savedregs,
          (int)v9,
          *((unsigned __int8 *)v9 + 8),
          *((unsigned __int8 *)v9 + 9),
          *((unsigned __int8 *)v9 + 0xA));
        goto LABEL_127;
      case 5:
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v9[1] + 8))(v9[1], v9[2]);
        v12 = v9[1];
        if ( *(_WORD *)(v12 + 4) )
        {
          if ( !--*(_WORD *)(v12 + 6) )
            (**(void (__thiscall ***)(int, int))v12)(v12, 1);
        }
        v13 = v9[2];
        goto LABEL_128;
      case 6:
        sub_89C310((_DWORD *)*(this + 3), v9[1], *((unsigned __int16 *)v9 + 4), *((unsigned __int8 *)v9 + 0xA));
        v14 = (int *)v9[1];
        for ( j = (unsigned int)&v14[*((unsigned __int16 *)v9 + 4)]; (unsigned int)v14 < j; ++v14 )
        {
          v16 = *v14;
          if ( *(_WORD *)(*v14 + 4) )
          {
            if ( !--*(_WORD *)(v16 + 6) )
              (**(void (__thiscall ***)(int, int))v16)(v16, 1);
          }
        }
        goto LABEL_19;
      case 7:
        sub_89C8E0((_DWORD *)*(this + 3), (int *)v9[1], *((unsigned __int16 *)v9 + 4));
        v23 = (int *)v9[1];
        for ( k = (unsigned int)&v23[*((unsigned __int16 *)v9 + 4)]; (unsigned int)v23 < k; ++v23 )
        {
          v25 = *v23;
          if ( *(_WORD *)(*v23 + 4) )
          {
            if ( !--*(_WORD *)(v25 + 6) )
              (**(void (__thiscall ***)(int, int))v25)(v25, 1);
          }
        }
        goto LABEL_19;
      case 8:
        v26 = (_DWORD *)v9[1];
        if ( !v26[2] )
        {
          v27 = v1[3];
          if ( *(_DWORD *)(v26[4] + 8) == v27 && *(_DWORD *)(v26[5] + 8) == v27 )
            sub_8988A0(v27, (int)&savedregs, (_DWORD *)v9[1]);
        }
        goto LABEL_39;
      case 9:
        if ( *(_DWORD *)(v9[1] + 8) )
          sub_8988F0((int *)v1[3], &v71, v9[1]);
        goto LABEL_117;
      case 0xA:
        if ( *(_DWORD *)(v9[1] + 8) )
          goto LABEL_117;
        v28 = v9[1];
        v74 = 0;
        v75 = 0;
        v76 = 0x80000000;
        (*(void (__thiscall **)(int, _DWORD **))(*(_DWORD *)v28 + 0xC))(v28, &v74);
        v29 = 0;
        if ( v75 <= 0 )
          goto LABEL_51;
        v30 = v74;
        break;
      case 0xB:
        if ( *(_DWORD *)(v9[1] + 0xC) )
          sub_89CCC0((int *)v1[3], v9[1]);
        goto LABEL_39;
      case 0xC:
        v32 = v9[1];
        v33 = v1[3];
        if ( *(_DWORD *)(v32 + 8) == v33 )
        {
          v34 = v9[2];
          if ( *(_DWORD *)(v34 + 8) == v33
            && !*(_BYTE *)(v32 + 0x91)
            && !*(_BYTE *)(v34 + 0x91)
            && *(_DWORD *)(v32 + 0x54) != *(_DWORD *)(v34 + 0x54) )
          {
            sub_8CD320(*(int **)(v32 + 8), v32, v9[2]);
          }
        }
        v35 = v9[1];
        if ( *(_WORD *)(v35 + 4) )
        {
          if ( !--*(_WORD *)(v35 + 6) )
            (**(void (__thiscall ***)(int, int))v35)(v35, 1);
        }
        v13 = v9[2];
        goto LABEL_40;
      case 0xD:
        if ( !*(_DWORD *)(v9[1] + 8) )
          sub_899A50((_DWORD *)v1[3], (int *)v9[1]);
        goto LABEL_117;
      case 0xE:
        v36 = (_DWORD *)v1[3];
        if ( *(_DWORD **)(v9[1] + 8) == v36 )
          sub_899B30(v36, (int (__stdcall ***)(signed int))v9[1]);
        goto LABEL_39;
      case 0xF:
        sub_89CD00((_DWORD *)*(this + 3), v9[1], *((unsigned __int16 *)v9 + 4));
        v37 = (int *)v9[1];
        for ( m = (unsigned int)&v37[*((unsigned __int16 *)v9 + 4)]; (unsigned int)v37 < m; ++v37 )
        {
          v39 = *v37;
          if ( *(_WORD *)(*v37 + 4) )
          {
            if ( !--*(_WORD *)(v39 + 6) )
              (**(void (__thiscall ***)(int, int))v39)(v39, 1);
          }
        }
        goto LABEL_19;
      case 0x10:
        sub_89D080((_DWORD *)*(this + 3), v9[1], *((unsigned __int16 *)v9 + 4));
        v40 = (int *)v9[1];
        for ( n = (unsigned int)&v40[*((unsigned __int16 *)v9 + 4)]; (unsigned int)v40 < n; ++v40 )
        {
          v42 = *v40;
          if ( *(_WORD *)(*v40 + 4) )
          {
            if ( !--*(_WORD *)(v42 + 6) )
              (**(void (__thiscall ***)(int, int))v42)(v42, 1);
          }
        }
        goto LABEL_19;
      case 0x11:
        v44 = (_DWORD *)v9[1];
        if ( v44[2] == v1[3] )
          sub_8DE950(v44, v9[2]);
        v45 = v9[1];
        if ( *(_WORD *)(v45 + 4) )
        {
          if ( !--*(_WORD *)(v45 + 6) )
            (**(void (__thiscall ***)(int, int))v45)(v45, 1);
        }
        (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
          dword_BA7D98,
          v9[2],
          0x20,
          0x24);
        goto LABEL_21;
      case 0x12:
        v46 = v9[1];
        v47 = (int *)v1[3];
        if ( *(int **)(v46 + 8) == v47 )
          sub_89B630(v47, v46, *((unsigned __int8 *)v9 + 8), *((unsigned __int8 *)v9 + 9));
        goto LABEL_39;
      case 0x13:
        v48 = v9[1];
        v49 = (_DWORD *)v1[3];
        if ( *(_DWORD **)(v48 + 8) == v49 )
          sub_89B390(v49, v48, *((unsigned __int8 *)v9 + 8));
LABEL_39:
        v13 = v9[1];
LABEL_40:
        if ( *(_WORD *)(v13 + 4) )
        {
          if ( !--*(_WORD *)(v13 + 6) )
            goto LABEL_130;
        }
        goto LABEL_21;
      case 0x14:
        sub_89BF50(v1[3], *((unsigned __int8 *)v9 + 1), *((unsigned __int8 *)v9 + 2));
        goto LABEL_21;
      case 0x15:
        sub_8A9D10(v9[1]);
        goto LABEL_112;
      case 0x16:
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(*(this + 3) + 8) + 0x14))(
          *(_DWORD *)(*(this + 3) + 8),
          v9[1],
          *((unsigned __int16 *)v9 + 4),
          *(this + 3));
        v67 = (int *)v9[1];
        for ( ii = (unsigned int)&v67[*((unsigned __int16 *)v9 + 4)]; (unsigned int)v67 < ii; ++v67 )
        {
          v69 = *v67;
          if ( *(_WORD *)(*v67 + 4) )
          {
            if ( !--*(_WORD *)(v69 + 6) )
              (**(void (__thiscall ***)(int, int))v69)(v69, 1);
          }
        }
LABEL_19:
        (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
          dword_BA7D98,
          v9[1],
          4 * *((unsigned __int16 *)v9 + 4),
          4);
        goto LABEL_20;
      case 0x17:
        sub_8A9E20((_DWORD **)v9[1], v9[2], v9[2] + 0x10);
        (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(dword_BA7D98, v9[2], 0x20, 4);
        v50 = v9[1];
        if ( !*(_WORD *)(v50 + 4) )
          goto LABEL_20;
        if ( --*(_WORD *)(v50 + 6) )
          goto LABEL_20;
        (**(void (__thiscall ***)(int, int))v50)(v50, 1);
        goto LABEL_21;
      case 0x18:
        v51 = v9[1];
        v52 = v9[2];
        v53 = v9[4];
        v81[1] = v9[3];
        v81[0] = v52;
        v81[2] = v53;
        v81[3] = 0;
        sub_8A6410(v51);
        (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(v51 + 0x50) + 0x54))(*(_DWORD *)(v51 + 0x50), v81);
        goto LABEL_127;
      case 0x19:
        v54 = v9[1];
        v55 = v9[3];
        v56 = v9[4];
        v78[0] = v9[2];
        v78[1] = v55;
        v78[2] = v56;
        v78[3] = 0;
        sub_8A6410(v54);
        (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(v54 + 0x50) + 0x58))(*(_DWORD *)(v54 + 0x50), v78);
        goto LABEL_112;
      case 0x1A:
        v57 = v9[1];
        v58 = v9[2];
        v59 = v9[4];
        v79[1] = v9[3];
        v79[0] = v58;
        v79[2] = v59;
        v79[3] = 0;
        sub_8A6410(v57);
        (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(v57 + 0x50) + 0x5C))(*(_DWORD *)(v57 + 0x50), v79);
        goto LABEL_127;
      case 0x1B:
        v60 = v9[2];
        v61 = v9[1];
        v77 = v60 + 0x10;
        sub_8A6410(v61);
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v61 + 0x50) + 0x60))(*(_DWORD *)(v61 + 0x50), v77, v60);
        (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(dword_BA7D98, v9[2], 0x20, 4);
        v62 = v9[1];
        if ( *(_WORD *)(v62 + 4) )
        {
          if ( !--*(_WORD *)(v62 + 6) )
            (**(void (__thiscall ***)(int, int))v62)(v62, 1);
        }
        goto LABEL_20;
      case 0x1C:
        v63 = v9[1];
        v64 = v9[2];
        v65 = v9[4];
        v80[1] = v9[3];
        v80[0] = v64;
        v80[2] = v65;
        v80[3] = 0;
        sub_8A6410(v63);
        (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(v63 + 0x50) + 0x64))(*(_DWORD *)(v63 + 0x50), v80);
        goto LABEL_127;
      case 0x1F:
        sub_8998A0((int *)v1[3], (const void *)v9[1]);
        (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(dword_BA7D98, v9[1], 0x20, 4);
        goto LABEL_21;
      case 0x20:
        sub_8A6410(v9[1]);
LABEL_112:
        v13 = v9[1];
        if ( *(_WORD *)(v13 + 4) )
        {
          if ( !--*(_WORD *)(v13 + 6) )
            goto LABEL_130;
        }
        goto LABEL_20;
      case 0x21:
        v66 = (int *)v9[1];
        if ( v66[2] == v1[3] )
          sub_8A6440(v66);
        goto LABEL_117;
      case 0x22:
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v9[1] + 8))(v9[1], v9[2]);
LABEL_127:
        v13 = v9[1];
LABEL_128:
        if ( *(_WORD *)(v13 + 4) )
        {
          if ( !--*(_WORD *)(v13 + 6) )
            goto LABEL_130;
        }
LABEL_20:
        v1 = this;
        goto LABEL_21;
      default:
        goto LABEL_21;
    }
    do
    {
      if ( *(_DWORD *)(v74[v29] + 8) != v1[3] )
      {
        v1 = this;
        goto LABEL_53;
      }
      ++v29;
    }
    while ( v29 < v75 );
    v1 = this;
LABEL_51:
    sub_89BAE0((int *)v1[3], v9[1]);
    v30 = v74;
LABEL_53:
    if ( v76 >= 0 )
    {
      v31 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v31 )
        v31 = dword_BA7D9C;
      sub_8A75D0(v31, v30, 4 * v76, 0x14);
    }
LABEL_117:
    v13 = v9[1];
    if ( *(_WORD *)(v13 + 4) )
    {
      if ( !--*(_WORD *)(v13 + 6) )
LABEL_130:
        (**(void (__thiscall ***)(int, int))v13)(v13, 1);
    }
LABEL_21:
    if ( v1[1] )
      sub_8D8BF0(v1);
    v8 = i + 1;
  }
  v17 = (_DWORD *)*v1;
  v18 = v1[1];
  *v1 = (int)v82;
  v82 = v17;
  v19 = v1[2];
  v1[2] = v84;
  v20 = v1[3];
  v83 = v18;
  v84 = v19;
  v1[1] = 0;
  --*(_DWORD *)(v20 + 0x98);
  result = v84;
  if ( v84 >= 0 )
  {
    v22 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v22 )
      v22 = dword_BA7D9C;
    return sub_8A75D0(v22, v82, 0x14 * (v84 & 0x3FFFFFFF), 0x14);
  }
  return result;
}
