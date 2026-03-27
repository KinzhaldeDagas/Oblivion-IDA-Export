hkVector4 *__thiscall sub_90CAE0(const void **this, int a2)
{
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  int v8; // edx
  char **v10; // ebp
  char *v11; // ebx
  int v12; // edi
  int v13; // eax
  int v14; // eax
  char *v15; // edx
  _DWORD *v16; // eax
  char *v17; // ecx
  int i; // edx
  unsigned int v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  const void **v25; // edi
  char *v26; // ebp
  int v27; // ebx
  int v28; // eax
  int v29; // eax
  char *v30; // eax
  char *v31; // ecx
  _WORD *v32; // eax
  int v33; // edx
  char *j; // ebp
  int v35; // eax
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  char *v40; // ebp
  int v41; // ebx
  int v42; // eax
  int v43; // eax
  char *v44; // eax
  char *v45; // ecx
  _DWORD *v46; // eax
  int v47; // edx
  char *v48; // ebp
  int v49; // ecx
  int v50; // eax
  char *v51; // ebp
  int v52; // edi
  int v53; // eax
  int v54; // eax
  char *v55; // eax
  char *v56; // eax
  char *v57; // ecx
  int k; // edi
  int v59; // eax
  char *v60; // ebp
  int v61; // edi
  int v62; // eax
  int v63; // eax
  char *v64; // ecx
  char *v65; // edx
  _WORD *v66; // eax
  int m; // ecx
  int v68; // eax
  _DWORD *v69; // ebp
  __int128 **v70; // edi
  _DWORD *v71; // esi
  hkVector4 *result; // eax
  int v73; // ecx
  int v74; // ebx
  int v75; // eax
  int v76; // eax
  __int128 *v77; // edx
  _DWORD *v78; // eax
  char *v79; // edx
  int n; // ecx
  char **v81; // [esp+10h] [ebp-8h]
  int v82; // [esp+14h] [ebp-4h]
  int v83; // [esp+1Ch] [ebp+4h]
  int v84; // [esp+1Ch] [ebp+4h]
  int v85; // [esp+1Ch] [ebp+4h]

  v3 = this + 9;
  if ( *(this + 0xA) == (const void *)((unsigned int)*(this + 0xB) & 0x3FFFFFFF) )
    sub_8A6EE0(this + 9, 0x30);
  v4 = (int)*(this + 0xA);
  v5 = *v3 + 0x30 * v4;
  *(this + 0xA) = (const void *)(v4 + 1);
  v82 = v5;
  v6 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x48, 0x22);
  if ( v6 )
  {
    *v6 = 0;
    v6[1] = 0;
    v6[2] = 0x80000000;
    v6[3] = 0;
    v6[4] = 0;
    v6[5] = 0x80000000;
    v6[6] = 0;
    v6[7] = 0;
    v6[8] = 0x80000000;
    v6[9] = 0;
    v6[0xA] = 0;
    v6[0xB] = 0x80000000;
    v6[0xC] = 0;
    v6[0xD] = 0;
    v6[0xE] = 0x80000000;
    v6[0xF] = 0;
    v6[0x10] = 0;
    v6[0x11] = 0x80000000;
    v7 = v6;
  }
  else
  {
    v7 = 0;
  }
  if ( *(this + 0x11) == (const void *)((unsigned int)*(this + 0x12) & 0x3FFFFFFF) )
    sub_8A6EE0(this + 0x10, 4);
  *((_DWORD *)*(this + 0x10) + (_DWORD)*(this + 0x11)) = v7;
  v8 = (int)*(this + 0x11) + 1;
  *(this + 0x11) = (const void *)v8;
  v10 = *((char ***)*(this + 0x10) + v8 - 1);
  v11 = v10[1];
  v12 = (int)&v11[2 * *(_DWORD *)(a2 + 8) + *(_DWORD *)(a2 + 8)];
  v13 = (unsigned int)v10[2] & 0x3FFFFFFF;
  v81 = v10;
  if ( v13 < v12 )
  {
    v14 = 2 * v13;
    if ( v12 >= v14 )
      v14 = (int)&v11[2 * *(_DWORD *)(a2 + 8) + *(_DWORD *)(a2 + 8)];
    sub_8A6E40((const void **)v10, v14, 4);
  }
  v15 = *v10;
  v10[1] = (char *)v12;
  v16 = *(_DWORD **)a2;
  v17 = &v15[4 * (_DWORD)v11];
  for ( i = 0; i < *(_DWORD *)(a2 + 8); ++i )
  {
    *(_DWORD *)v17 = *v16;
    *((_DWORD *)v17 + 1) = v16[1];
    *((_DWORD *)v17 + 2) = v16[2];
    v16 = (_DWORD *)((char *)v16 + *(_DWORD *)(a2 + 4));
    v17 += 0xC;
  }
  *(_DWORD *)v82 = *v10;
  *(_DWORD *)(v82 + 4) = 0xC;
  *(_DWORD *)(v82 + 8) = *(_DWORD *)(a2 + 8);
  v19 = *(_DWORD *)(a2 + 0x14);
  if ( *(_BYTE *)(a2 + 0x10) == 1 )
  {
    v20 = v19 >> 1;
    v83 = v20;
    v21 = v20;
    if ( v20 > 2 )
      v21 = 3;
    v22 = v20 - 1;
    *(_DWORD *)(v82 + 0x14) = 2 * v21;
    v23 = *(_DWORD *)(a2 + 0x18);
    if ( v22 )
    {
      if ( v22 == 1 )
        v24 = 2 * v23 + 1;
      else
        v24 = 3 * v23;
    }
    else
    {
      v24 = v23 + 2;
    }
    v25 = (const void **)(v10 + 3);
    v26 = v10[4];
    v27 = (int)&v26[v24];
    v28 = (unsigned int)v25[2] & 0x3FFFFFFF;
    if ( v28 < v27 )
    {
      v29 = 2 * v28;
      if ( v27 >= v29 )
        v29 = v27;
      sub_8A6E40(v25, v29, 2);
    }
    v30 = (char *)*v25;
    v25[1] = (const void *)v27;
    v31 = &v30[2 * (_DWORD)v26];
    v32 = *(_WORD **)(a2 + 0xC);
    v33 = 0;
    for ( j = v31; v33 < *(_DWORD *)(a2 + 0x18); ++v33 )
    {
      *(_WORD *)v31 = *v32;
      *((_WORD *)v31 + 1) = v32[1];
      *((_WORD *)v31 + 2) = v32[2];
      v32 = (_WORD *)((char *)v32 + *(_DWORD *)(a2 + 0x14));
      v31 += 2 * v83;
    }
  }
  else
  {
    v35 = v19 >> 2;
    v84 = v35;
    v36 = v35;
    if ( v35 > 2 )
      v36 = 3;
    v37 = v35 - 1;
    *(_DWORD *)(v82 + 0x14) = 4 * v36;
    v38 = *(_DWORD *)(a2 + 0x18);
    if ( v37 )
    {
      if ( v37 == 1 )
        v39 = 2 * v38 + 1;
      else
        v39 = 3 * v38;
    }
    else
    {
      v39 = v38 + 2;
    }
    v40 = v10[7];
    v41 = (int)&v40[v39];
    v42 = (unsigned int)v81[8] & 0x3FFFFFFF;
    if ( v42 < v41 )
    {
      v43 = 2 * v42;
      if ( v41 >= v43 )
        v43 = v41;
      sub_8A6E40((const void **)v81 + 6, v43, 4);
    }
    v44 = v81[6];
    v81[7] = (char *)v41;
    v45 = &v44[4 * (_DWORD)v40];
    v46 = *(_DWORD **)(a2 + 0xC);
    v47 = 0;
    for ( j = v45; v47 < *(_DWORD *)(a2 + 0x18); ++v47 )
    {
      *(_DWORD *)v45 = *v46;
      *((_DWORD *)v45 + 1) = v46[1];
      *((_DWORD *)v45 + 2) = v46[2];
      v46 = (_DWORD *)((char *)v46 + *(_DWORD *)(a2 + 0x14));
      v45 += 4 * v84;
    }
  }
  *(_BYTE *)(v82 + 0x10) = *(_BYTE *)(a2 + 0x10);
  *(_DWORD *)(v82 + 0x18) = *(_DWORD *)(a2 + 0x18);
  *(_DWORD *)(v82 + 0xC) = j;
  *(_BYTE *)(v82 + 0x11) = *(_BYTE *)(a2 + 0x11);
  v48 = *(char **)(a2 + 0x1C);
  if ( v48 )
  {
    v49 = *(_DWORD *)(a2 + 0x20);
    if ( *(_BYTE *)(a2 + 0x11) == 1 )
    {
      if ( v49 )
      {
        v51 = v81[0xA];
        v52 = (int)&v51[*(_DWORD *)(a2 + 0x18)];
        v53 = (unsigned int)v81[0xB] & 0x3FFFFFFF;
        if ( v53 < v52 )
        {
          v54 = 2 * v53;
          if ( v52 >= v54 )
            v54 = (int)&v51[*(_DWORD *)(a2 + 0x18)];
          sub_8A6E40((const void **)v81 + 9, v54, 1);
        }
        v55 = v81[9];
        v81[0xA] = (char *)v52;
        v56 = &v55[(_DWORD)v51];
        *(_DWORD *)(v82 + 0x1C) = v56;
        v57 = *(char **)(a2 + 0x1C);
        for ( k = 0; k < *(_DWORD *)(a2 + 0x18); ++k )
        {
          v56[k] = *v57;
          v57 += *(_DWORD *)(a2 + 0x20);
        }
      }
      else
      {
        if ( v81[0xA] == (char *)((unsigned int)v81[0xB] & 0x3FFFFFFF) )
          sub_8A6EE0((const void **)v81 + 9, 1);
        v81[9][(_DWORD)v81[0xA]] = *v48;
        v50 = (int)(v81[0xA] + 1);
        v81[0xA] = (char *)v50;
        *(_DWORD *)(v82 + 0x1C) = &v81[9][v50 - 1];
      }
    }
    else if ( v49 )
    {
      v60 = v81[0x10];
      v61 = (int)&v60[*(_DWORD *)(a2 + 0x18)];
      v62 = (unsigned int)v81[0x11] & 0x3FFFFFFF;
      if ( v62 < v61 )
      {
        v63 = 2 * v62;
        if ( v61 >= v63 )
          v63 = (int)&v60[*(_DWORD *)(a2 + 0x18)];
        sub_8A6E40((const void **)v81 + 0xF, v63, 2);
      }
      v64 = v81[0xF];
      v81[0x10] = (char *)v61;
      v65 = &v64[2 * (_DWORD)v60];
      *(_DWORD *)(v82 + 0x1C) = v65;
      v66 = *(_WORD **)(a2 + 0x1C);
      for ( m = 0; m < *(_DWORD *)(a2 + 0x18); ++m )
      {
        *(_WORD *)&v65[2 * m] = *v66;
        v66 = (_WORD *)((char *)v66 + *(_DWORD *)(a2 + 0x20));
      }
    }
    else
    {
      if ( v81[0x10] == (char *)((unsigned int)v81[0x11] & 0x3FFFFFFF) )
        sub_8A6EE0((const void **)v81 + 0xF, 2);
      *(_WORD *)&v81[0xF][2 * (_DWORD)v81[0x10]] = *(_WORD *)v48;
      v59 = (int)(v81[0x10] + 1);
      v81[0x10] = (char *)v59;
      *(_DWORD *)(v82 + 0x1C) = &v81[0xF][2 * v59 - 2];
    }
    v68 = *(_DWORD *)(a2 + 0x20);
    v69 = (_DWORD *)v82;
    *(_DWORD *)(v82 + 0x20) = v68;
    if ( v68 )
    {
      if ( *(_BYTE *)(v82 + 0x11) == 1 )
      {
        *(_DWORD *)(v82 + 0x20) = 1;
      }
      else if ( *(_BYTE *)(v82 + 0x11) == 2 )
      {
        *(_DWORD *)(v82 + 0x20) = 2;
      }
    }
  }
  else
  {
    v69 = (_DWORD *)v82;
    *(_DWORD *)(v82 + 0x1C) = 0;
    *(_DWORD *)(v82 + 0x20) = 0;
  }
  if ( v69[7] )
  {
    v70 = (__int128 **)(v81 + 0xC);
    if ( *(_DWORD *)(a2 + 0x28) )
    {
      v73 = (int)v81[0xD];
      v74 = v73 + *(_DWORD *)(a2 + 0x2C);
      v75 = (unsigned int)v81[0xE] & 0x3FFFFFFF;
      v85 = v73;
      if ( v75 < v74 )
      {
        v76 = 2 * v75;
        if ( v74 >= v76 )
          v76 = v73 + *(_DWORD *)(a2 + 0x2C);
        sub_8A6E40((const void **)v81 + 0xC, v76, 4);
        v73 = v85;
      }
      v77 = *v70;
      v81[0xD] = (char *)v74;
      v78 = *(_DWORD **)(a2 + 0x24);
      v79 = (char *)v77 + 4 * v73;
      for ( n = 0; n < *(_DWORD *)(a2 + 0x2C); ++n )
      {
        *(_DWORD *)&v79[4 * n] = *v78;
        v78 = (_DWORD *)((char *)v78 + *(_DWORD *)(a2 + 0x28));
      }
      v69[0xA] = 4;
      result = *(hkVector4 **)(a2 + 0x2C);
      v69[0xB] = result;
      v69[9] = *v70;
    }
    else
    {
      v71 = *(_DWORD **)(a2 + 0x24);
      if ( v81[0xD] == (char *)((unsigned int)v81[0xE] & 0x3FFFFFFF) )
        sub_8A6EE0((const void **)v81 + 0xC, 4);
      result = (hkVector4 *)*v70;
      *(_DWORD *)&v81[0xC][4 * (_DWORD)v81[0xD]++] = *v71;
      v69[0xA] = 0;
      v69[0xB] = 1;
      v69[9] = *v70;
    }
  }
  else
  {
    v69[0xA] = 0;
    v69[0xB] = 1;
    v69[9] = &stru_BA7A40;
    v69[7] = &stru_BA7A40;
    return &stru_BA7A40;
  }
  return result;
}
