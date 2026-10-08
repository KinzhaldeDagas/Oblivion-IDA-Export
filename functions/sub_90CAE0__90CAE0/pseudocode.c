hkVector4 *__thiscall sub_90CAE0(const void **this, int a2)
{
  const void **v3; // esi
  int v4; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  char *v8; // edx
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
  hkVector4 **v70; // edi
  _DWORD *v71; // esi
  hkVector4 *result; // eax
  char *v73; // ecx
  int v74; // ebx
  int v75; // eax
  int v76; // eax
  hkVector4 *v77; // edx
  _DWORD *v78; // eax
  char *v79; // edx
  int n; // ecx
  char **v81; // [esp+10h] [ebp-8h]
  int v82; // [esp+14h] [ebp-4h]
  int v83; // [esp+1Ch] [ebp+4h]
  int v84; // [esp+1Ch] [ebp+4h]
  char *v85; // [esp+1Ch] [ebp+4h]

  v3 = this + 9; /*0x90caee*/
  if ( *(this + 0xA) == (const void *)((unsigned int)*(this + 0xB) & 0x3FFFFFFF) ) /*0x90caf9*/
    sub_8A6EE0(this + 9, 0x30); /*0x90cafe*/
  v4 = (int)*(this + 0xA); /*0x90cb06*/
  v5 = (int)*v3 + 0x30 * v4; /*0x90cb11*/
  *(this + 0xA) = (const void *)(v4 + 1); /*0x90cb14*/
  v82 = v5; /*0x90cb17*/
  v6 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x48, 0x22); /*0x90cb27*/
  if ( v6 ) /*0x90cb2e*/
  {
    *v6 = 0; /*0x90cb30*/
    v6[1] = 0; /*0x90cb32*/
    v6[2] = 0x80000000; /*0x90cb3a*/
    v6[3] = 0; /*0x90cb3d*/
    v6[4] = 0; /*0x90cb40*/
    v6[5] = 0x80000000; /*0x90cb43*/
    v6[6] = 0; /*0x90cb46*/
    v6[7] = 0; /*0x90cb49*/
    v6[8] = 0x80000000; /*0x90cb4c*/
    v6[9] = 0; /*0x90cb4f*/
    v6[0xA] = 0; /*0x90cb52*/
    v6[0xB] = 0x80000000; /*0x90cb55*/
    v6[0xC] = 0; /*0x90cb58*/
    v6[0xD] = 0; /*0x90cb5b*/
    v6[0xE] = 0x80000000; /*0x90cb5e*/
    v6[0xF] = 0; /*0x90cb61*/
    v6[0x10] = 0; /*0x90cb64*/
    v6[0x11] = 0x80000000; /*0x90cb67*/
    v7 = v6; /*0x90cb6a*/
  }
  else
  {
    v7 = 0; /*0x90cb6e*/
  }
  if ( *(this + 0x11) == (const void *)((unsigned int)*(this + 0x12) & 0x3FFFFFFF) ) /*0x90cb80*/
    sub_8A6EE0(this + 0x10, 4); /*0x90cb85*/
  *((_DWORD *)*(this + 0x10) + (_DWORD)*(this + 0x11)) = v7; /*0x90cb92*/
  v8 = (char *)*(this + 0x11) + 1; /*0x90cb98*/
  *(this + 0x11) = v8; /*0x90cb99*/
  v10 = *((char ***)*(this + 0x10) + (_DWORD)v8 - 1); /*0x90cba4*/
  v11 = v10[1]; /*0x90cbab*/
  v12 = (int)&v11[2 * *(_DWORD *)(a2 + 8) + *(_DWORD *)(a2 + 8)]; /*0x90cbb1*/
  v13 = (unsigned int)v10[2] & 0x3FFFFFFF; /*0x90cbb6*/
  v81 = v10; /*0x90cbbd*/
  if ( v13 < v12 ) /*0x90cbc1*/
  {
    v14 = 2 * v13; /*0x90cbc3*/
    if ( v12 >= v14 ) /*0x90cbc7*/
      v14 = (int)&v11[2 * *(_DWORD *)(a2 + 8) + *(_DWORD *)(a2 + 8)]; /*0x90cbc9*/
    sub_8A6E40((const void **)v10, v14, 4); /*0x90cbcf*/
  }
  v15 = *v10; /*0x90cbd7*/
  v10[1] = (char *)v12; /*0x90cbda*/
  v16 = *(_DWORD **)a2; /*0x90cbe0*/
  v17 = &v15[4 * (_DWORD)v11]; /*0x90cbe2*/
  for ( i = 0; i < *(_DWORD *)(a2 + 8); ++i ) /*0x90cbe9*/
  {
    *(_DWORD *)v17 = *v16; /*0x90cbf2*/
    *((_DWORD *)v17 + 1) = v16[1]; /*0x90cbf7*/
    *((_DWORD *)v17 + 2) = v16[2]; /*0x90cbfd*/
    v16 = (_DWORD *)((char *)v16 + *(_DWORD *)(a2 + 4)); /*0x90cc00*/
    v17 += 0xC; /*0x90cc06*/
  }
  *(_DWORD *)v82 = *v10; /*0x90cc15*/
  *(_DWORD *)(v82 + 4) = 0xC; /*0x90cc17*/
  *(_DWORD *)(v82 + 8) = *(_DWORD *)(a2 + 8); /*0x90cc21*/
  v19 = *(_DWORD *)(a2 + 0x14); /*0x90cc28*/
  if ( *(_BYTE *)(a2 + 0x10) == 1 ) /*0x90cc2b*/
  {
    v20 = v19 >> 1; /*0x90cc31*/
    v83 = v20; /*0x90cc36*/
    v21 = v20; /*0x90cc3a*/
    if ( v20 > 2 ) /*0x90cc3c*/
      v21 = 3; /*0x90cc3e*/
    v22 = v20 - 1; /*0x90cc45*/
    *(_DWORD *)(v82 + 0x14) = 2 * v21; /*0x90cc46*/
    v23 = *(_DWORD *)(a2 + 0x18); /*0x90cc49*/
    if ( v22 ) /*0x90cc4c*/
    {
      if ( v22 == 1 ) /*0x90cc4f*/
        v24 = 2 * v23 + 1; /*0x90cc56*/
      else
        v24 = 3 * v23; /*0x90cc51*/
    }
    else
    {
      v24 = v23 + 2; /*0x90cc5c*/
    }
    v25 = (const void **)(v10 + 3); /*0x90cc5f*/
    v26 = v10[4]; /*0x90cc62*/
    v27 = (int)&v26[v24]; /*0x90cc65*/
    v28 = (unsigned int)v25[2] & 0x3FFFFFFF; /*0x90cc6b*/
    if ( v28 < v27 ) /*0x90cc72*/
    {
      v29 = 2 * v28; /*0x90cc74*/
      if ( v27 >= v29 ) /*0x90cc78*/
        v29 = v27; /*0x90cc7a*/
      sub_8A6E40(v25, v29, 2); /*0x90cc80*/
    }
    v30 = (char *)*v25; /*0x90cc88*/
    v25[1] = (const void *)v27; /*0x90cc8a*/
    v31 = &v30[2 * (_DWORD)v26]; /*0x90cc90*/
    v32 = *(_WORD **)(a2 + 0xC); /*0x90cc93*/
    v33 = 0; /*0x90cc96*/
    for ( j = v31; v33 < *(_DWORD *)(a2 + 0x18); ++v33 ) /*0x90cc9c*/
    {
      *(_WORD *)v31 = *v32; /*0x90ccb3*/
      *((_WORD *)v31 + 1) = v32[1]; /*0x90ccba*/
      *((_WORD *)v31 + 2) = v32[2]; /*0x90ccc2*/
      v32 = (_WORD *)((char *)v32 + *(_DWORD *)(a2 + 0x14)); /*0x90ccc6*/
      v31 += 2 * v83; /*0x90cccc*/
    }
  }
  else
  {
    v35 = v19 >> 2; /*0x90ccd8*/
    v84 = v35; /*0x90ccde*/
    v36 = v35; /*0x90cce2*/
    if ( v35 > 2 ) /*0x90cce4*/
      v36 = 3; /*0x90cce6*/
    v37 = v35 - 1; /*0x90ccee*/
    *(_DWORD *)(v82 + 0x14) = 4 * v36; /*0x90ccef*/
    v38 = *(_DWORD *)(a2 + 0x18); /*0x90ccf2*/
    if ( v37 ) /*0x90ccf5*/
    {
      if ( v37 == 1 ) /*0x90ccf8*/
        v39 = 2 * v38 + 1; /*0x90ccff*/
      else
        v39 = 3 * v38; /*0x90ccfa*/
    }
    else
    {
      v39 = v38 + 2; /*0x90cd05*/
    }
    v40 = v10[7]; /*0x90cd0c*/
    v41 = (int)&v40[v39]; /*0x90cd12*/
    v42 = (unsigned int)v81[8] & 0x3FFFFFFF; /*0x90cd18*/
    if ( v42 < v41 ) /*0x90cd1f*/
    {
      v43 = 2 * v42; /*0x90cd21*/
      if ( v41 >= v43 ) /*0x90cd25*/
        v43 = v41; /*0x90cd27*/
      sub_8A6E40((const void **)v81 + 6, v43, 4); /*0x90cd2d*/
    }
    v44 = v81[6]; /*0x90cd35*/
    v81[7] = (char *)v41; /*0x90cd37*/
    v45 = &v44[4 * (_DWORD)v40]; /*0x90cd3d*/
    v46 = *(_DWORD **)(a2 + 0xC); /*0x90cd40*/
    v47 = 0; /*0x90cd43*/
    for ( j = v45; v47 < *(_DWORD *)(a2 + 0x18); ++v47 ) /*0x90cd49*/
    {
      *(_DWORD *)v45 = *v46; /*0x90cd54*/
      *((_DWORD *)v45 + 1) = v46[1]; /*0x90cd59*/
      *((_DWORD *)v45 + 2) = v46[2]; /*0x90cd5f*/
      v46 = (_DWORD *)((char *)v46 + *(_DWORD *)(a2 + 0x14)); /*0x90cd62*/
      v45 += 4 * v84; /*0x90cd68*/
    }
  }
  *(_BYTE *)(v82 + 0x10) = *(_BYTE *)(a2 + 0x10); /*0x90cd76*/
  *(_DWORD *)(v82 + 0x18) = *(_DWORD *)(a2 + 0x18); /*0x90cd7c*/
  *(_DWORD *)(v82 + 0xC) = j; /*0x90cd7f*/
  *(_BYTE *)(v82 + 0x11) = *(_BYTE *)(a2 + 0x11); /*0x90cd85*/
  v48 = *(char **)(a2 + 0x1C); /*0x90cd88*/
  if ( v48 ) /*0x90cd8f*/
  {
    v49 = *(_DWORD *)(a2 + 0x20); /*0x90cd99*/
    if ( *(_BYTE *)(a2 + 0x11) == 1 ) /*0x90cd9c*/
    {
      if ( v49 ) /*0x90cda4*/
      {
        v51 = v81[0xA]; /*0x90cdee*/
        v52 = (int)&v51[*(_DWORD *)(a2 + 0x18)]; /*0x90cdfa*/
        v53 = (unsigned int)v81[0xB] & 0x3FFFFFFF; /*0x90cdfc*/
        if ( v53 < v52 ) /*0x90ce03*/
        {
          v54 = 2 * v53; /*0x90ce05*/
          if ( v52 >= v54 ) /*0x90ce09*/
            v54 = (int)&v51[*(_DWORD *)(a2 + 0x18)]; /*0x90ce0b*/
          sub_8A6E40((const void **)v81 + 9, v54, 1); /*0x90ce11*/
        }
        v55 = v81[9]; /*0x90ce19*/
        v81[0xA] = (char *)v52; /*0x90ce1f*/
        v56 = &v55[(_DWORD)v51]; /*0x90ce22*/
        *(_DWORD *)(v82 + 0x1C) = v56; /*0x90ce24*/
        v57 = *(char **)(a2 + 0x1C); /*0x90ce2a*/
        for ( k = 0; k < *(_DWORD *)(a2 + 0x18); ++k ) /*0x90ce31*/
        {
          v56[k] = *v57; /*0x90ce39*/
          v57 += *(_DWORD *)(a2 + 0x20); /*0x90ce42*/
        }
      }
      else
      {
        if ( v81[0xA] == (char *)((unsigned int)v81[0xB] & 0x3FFFFFFF) ) /*0x90cdbb*/
          sub_8A6EE0((const void **)v81 + 9, 1); /*0x90cdc0*/
        v81[9][(_DWORD)v81[0xA]] = *v48; /*0x90cdd0*/
        v50 = (int)(v81[0xA] + 1); /*0x90cdd6*/
        v81[0xA] = (char *)v50; /*0x90cdd7*/
        *(_DWORD *)(v82 + 0x1C) = &v81[9][v50 - 1]; /*0x90cde2*/
      }
    }
    else if ( v49 ) /*0x90ce50*/
    {
      v60 = v81[0x10]; /*0x90ce98*/
      v61 = (int)&v60[*(_DWORD *)(a2 + 0x18)]; /*0x90cea4*/
      v62 = (unsigned int)v81[0x11] & 0x3FFFFFFF; /*0x90cea6*/
      if ( v62 < v61 ) /*0x90cead*/
      {
        v63 = 2 * v62; /*0x90ceaf*/
        if ( v61 >= v63 ) /*0x90ceb3*/
          v63 = (int)&v60[*(_DWORD *)(a2 + 0x18)]; /*0x90ceb5*/
        sub_8A6E40((const void **)v81 + 0xF, v63, 2); /*0x90cebb*/
      }
      v64 = v81[0xF]; /*0x90cec3*/
      v81[0x10] = (char *)v61; /*0x90cec9*/
      v65 = &v64[2 * (_DWORD)v60]; /*0x90cecc*/
      *(_DWORD *)(v82 + 0x1C) = v65; /*0x90cecf*/
      v66 = *(_WORD **)(a2 + 0x1C); /*0x90ced5*/
      for ( m = 0; m < *(_DWORD *)(a2 + 0x18); ++m ) /*0x90cedc*/
      {
        *(_WORD *)&v65[2 * m] = *v66; /*0x90cee3*/
        v66 = (_WORD *)((char *)v66 + *(_DWORD *)(a2 + 0x20)); /*0x90ceed*/
      }
    }
    else
    {
      if ( v81[0x10] == (char *)((unsigned int)v81[0x11] & 0x3FFFFFFF) ) /*0x90ce66*/
        sub_8A6EE0((const void **)v81 + 0xF, 2); /*0x90ce6b*/
      *(_WORD *)&v81[0xF][2 * (_DWORD)v81[0x10]] = *(_WORD *)v48; /*0x90ce7c*/
      v59 = (int)(v81[0x10] + 1); /*0x90ce83*/
      v81[0x10] = (char *)v59; /*0x90ce84*/
      *(_DWORD *)(v82 + 0x1C) = &v81[0xF][2 * v59 - 2]; /*0x90ce8f*/
    }
    v68 = *(_DWORD *)(a2 + 0x20); /*0x90cef4*/
    v69 = (_DWORD *)v82; /*0x90cef9*/
    *(_DWORD *)(v82 + 0x20) = v68; /*0x90cefd*/
    if ( v68 ) /*0x90cf00*/
    {
      if ( *(_BYTE *)(v82 + 0x11) == 1 ) /*0x90cf07*/
      {
        *(_DWORD *)(v82 + 0x20) = 1; /*0x90cf15*/
      }
      else if ( *(_BYTE *)(v82 + 0x11) == 2 ) /*0x90cf0a*/
      {
        *(_DWORD *)(v82 + 0x20) = 2; /*0x90cf0c*/
      }
    }
  }
  else
  {
    v69 = (_DWORD *)v82; /*0x90cf1e*/
    *(_DWORD *)(v82 + 0x1C) = 0; /*0x90cf22*/
    *(_DWORD *)(v82 + 0x20) = 0; /*0x90cf25*/
  }
  if ( v69[7] ) /*0x90cf28*/
  {
    v70 = (hkVector4 **)(v81 + 0xC); /*0x90cf3c*/
    if ( *(_DWORD *)(a2 + 0x28) ) /*0x90cf39*/
    {
      v73 = v81[0xD]; /*0x90cf87*/
      v74 = (int)&v73[*(_DWORD *)(a2 + 0x2C)]; /*0x90cf90*/
      v75 = (unsigned int)v81[0xE] & 0x3FFFFFFF; /*0x90cf92*/
      v85 = v73; /*0x90cf99*/
      if ( v75 < v74 ) /*0x90cf9d*/
      {
        v76 = 2 * v75; /*0x90cf9f*/
        if ( v74 >= v76 ) /*0x90cfa3*/
          v76 = (int)&v73[*(_DWORD *)(a2 + 0x2C)]; /*0x90cfa5*/
        sub_8A6E40((const void **)v81 + 0xC, v76, 4); /*0x90cfab*/
        v73 = v85; /*0x90cfb0*/
      }
      v77 = *v70; /*0x90cfb7*/
      v81[0xD] = (char *)v74; /*0x90cfb9*/
      v78 = *(_DWORD **)(a2 + 0x24); /*0x90cfbf*/
      v79 = (char *)(&v77->x + (_DWORD)v73); /*0x90cfc2*/
      for ( n = 0; n < *(_DWORD *)(a2 + 0x2C); ++n ) /*0x90cfc9*/
      {
        *(_DWORD *)&v79[4 * n] = *v78; /*0x90cfd2*/
        v78 = (_DWORD *)((char *)v78 + *(_DWORD *)(a2 + 0x28)); /*0x90cfd5*/
      }
      v69[0xA] = 4; /*0x90cfe0*/
      result = *(hkVector4 **)(a2 + 0x2C); /*0x90cfe7*/
      v69[0xB] = result; /*0x90cfea*/
      v69[9] = *v70; /*0x90cff1*/
    }
    else
    {
      v71 = *(_DWORD **)(a2 + 0x24); /*0x90cf49*/
      if ( v81[0xD] == (char *)((unsigned int)v81[0xE] & 0x3FFFFFFF) ) /*0x90cf54*/
        sub_8A6EE0((const void **)v81 + 0xC, 4); /*0x90cf59*/
      result = *v70; /*0x90cf66*/
      *(_DWORD *)&v81[0xC][4 * (_DWORD)v81[0xD]++] = *v71; /*0x90cf68*/
      v69[0xA] = 0; /*0x90cf6e*/
      v69[0xB] = 1; /*0x90cf71*/
      v69[9] = *v70; /*0x90cf7c*/
    }
  }
  else
  {
    v69[0xA] = 0; /*0x90d003*/
    v69[0xB] = 1; /*0x90d006*/
    v69[9] = &unk_BA7A40; /*0x90d00d*/
    v69[7] = &unk_BA7A40; /*0x90d010*/
    return &unk_BA7A40; /*0x90cffd*/
  }
  return result; /*0x90cf7a*/
}
