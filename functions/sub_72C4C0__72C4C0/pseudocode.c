bool __thiscall sub_72C4C0(_WORD *this, int a2)
{
  _WORD *v2; // ebp
  unsigned __int16 v3; // di
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // bx
  _DWORD *v7; // ecx
  _DWORD *v8; // edx
  unsigned int v9; // eax
  int v10; // esi
  unsigned int v11; // eax
  unsigned __int8 *v12; // ecx
  unsigned __int8 *v13; // edx
  unsigned int v14; // eax
  unsigned __int8 *v15; // ecx
  unsigned __int8 *v16; // edx
  unsigned __int8 *v17; // ecx
  unsigned __int8 *v18; // edx
  int v19; // eax
  _DWORD *v20; // ecx
  _DWORD *v21; // edx
  unsigned int v22; // eax
  int v23; // esi
  unsigned int v24; // eax
  unsigned __int8 *v25; // ecx
  unsigned __int8 *v26; // edx
  unsigned int v27; // eax
  unsigned __int8 *v28; // ecx
  unsigned __int8 *v29; // edx
  unsigned __int8 *v30; // ecx
  unsigned __int8 *v31; // edx
  int v32; // eax
  _DWORD *v33; // ecx
  _DWORD *v34; // edx
  unsigned int v35; // eax
  int v36; // esi
  unsigned int v37; // eax
  unsigned __int8 *v38; // ecx
  unsigned __int8 *v39; // edx
  unsigned int v40; // eax
  unsigned __int8 *v41; // ecx
  unsigned __int8 *v42; // edx
  unsigned __int8 *v43; // ecx
  unsigned __int8 *v44; // edx
  int v45; // eax
  unsigned __int16 v46; // ax
  _DWORD *v47; // ecx
  _DWORD *v48; // edx
  unsigned int v49; // eax
  int v50; // esi
  unsigned int v51; // eax
  unsigned __int8 *v52; // ecx
  unsigned __int8 *v53; // edx
  unsigned int v54; // eax
  unsigned __int8 *v55; // ecx
  unsigned __int8 *v56; // edx
  unsigned __int8 *v57; // ecx
  unsigned __int8 *v58; // edx
  int v59; // eax
  _DWORD *v60; // ecx
  _DWORD *v61; // edx
  unsigned int v62; // eax
  int v63; // esi
  unsigned int v64; // eax
  unsigned __int8 *v65; // ecx
  unsigned __int8 *v66; // edx
  unsigned int v67; // eax
  unsigned __int8 *v68; // ecx
  unsigned __int8 *v69; // edx
  unsigned __int8 *v70; // ecx
  unsigned __int8 *v71; // edx
  int v72; // eax
  int v73; // eax
  _DWORD *v74; // ecx
  _DWORD *v75; // edx
  unsigned int v76; // eax
  int v77; // esi
  unsigned int v78; // eax
  unsigned __int8 *v79; // ecx
  unsigned __int8 *v80; // edx
  unsigned int v81; // eax
  unsigned __int8 *v82; // ecx
  unsigned __int8 *v83; // edx
  unsigned __int8 *v84; // ecx
  unsigned __int8 *v85; // edx
  int v86; // eax
  _DWORD *v87; // edx
  unsigned int v88; // eax
  _DWORD *v89; // ecx
  int v90; // esi
  unsigned int v91; // eax
  unsigned __int8 *v92; // ecx
  unsigned __int8 *v93; // edx
  unsigned int v94; // eax
  unsigned __int8 *v95; // ecx
  unsigned __int8 *v96; // edx
  unsigned __int8 *v97; // ecx
  unsigned __int8 *v98; // edx
  int v99; // eax
  unsigned int v101; // [esp+8h] [ebp-4h]

  v2 = this;
  v3 = *(this + 0xE);
  if ( v3 != *(_WORD *)(a2 + 0x1C) )
    return 0;
  if ( *(this + 0xF) != *(_WORD *)(a2 + 0x1E) )
    return 0;
  v5 = *(this + 0x10);
  if ( *((_DWORD *)this + 8) != *(_DWORD *)(a2 + 0x20) )
    return 0;
  v6 = *(this + 0x12);
  if ( v6 != *(_WORD *)(a2 + 0x24) )
    return 0;
  v7 = *(_DWORD **)(a2 + 4);
  v8 = *((_DWORD **)v2 + 1);
  v9 = 2 * v5;
  if ( v9 < 4 )
  {
LABEL_10:
    if ( !v9 )
    {
LABEL_21:
      v19 = 0;
      goto LABEL_22;
    }
  }
  else
  {
    while ( *v8 == *v7 )
    {
      v9 -= 4;
      ++v7;
      ++v8;
      if ( v9 < 4 )
        goto LABEL_10;
    }
  }
  v10 = *(unsigned __int8 *)v8 - *(unsigned __int8 *)v7;
  if ( !v10 )
  {
    v11 = v9 - 1;
    v12 = (unsigned __int8 *)v7 + 1;
    v13 = (unsigned __int8 *)v8 + 1;
    if ( !v11 )
      goto LABEL_20;
    v10 = *v13 - *v12;
    if ( !v10 )
    {
      v14 = v11 - 1;
      v15 = v12 + 1;
      v16 = v13 + 1;
      if ( !v14 || (v10 = *v16 - *v15) == 0 && ((v17 = v15 + 1, v18 = v16 + 1, v14 == 1) || (v10 = *v18 - *v17) == 0) )
      {
LABEL_20:
        v2 = this;
        goto LABEL_21;
      }
    }
  }
  v2 = this;
  v19 = 1;
  if ( v10 <= 0 )
    v19 = 0xFFFFFFFF;
LABEL_22:
  if ( v19 )
    return 0;
  v20 = *(_DWORD **)(a2 + 0xC);
  v21 = *((_DWORD **)v2 + 3);
  v22 = 2 * v3;
  if ( v22 < 4 )
  {
LABEL_26:
    if ( !v22 )
    {
LABEL_37:
      v32 = 0;
      goto LABEL_38;
    }
  }
  else
  {
    while ( *v21 == *v20 )
    {
      v22 -= 4;
      ++v20;
      ++v21;
      if ( v22 < 4 )
        goto LABEL_26;
    }
  }
  v23 = *(unsigned __int8 *)v21 - *(unsigned __int8 *)v20;
  if ( !v23 )
  {
    v24 = v22 - 1;
    v25 = (unsigned __int8 *)v20 + 1;
    v26 = (unsigned __int8 *)v21 + 1;
    if ( !v24 )
      goto LABEL_36;
    v23 = *v26 - *v25;
    if ( !v23 )
    {
      v27 = v24 - 1;
      v28 = v25 + 1;
      v29 = v26 + 1;
      if ( !v27 || (v23 = *v29 - *v28) == 0 && ((v30 = v28 + 1, v31 = v29 + 1, v27 == 1) || (v23 = *v31 - *v30) == 0) )
      {
LABEL_36:
        v2 = this;
        goto LABEL_37;
      }
    }
  }
  v2 = this;
  v32 = 1;
  if ( v23 <= 0 )
    v32 = 0xFFFFFFFF;
LABEL_38:
  if ( v32 )
    return 0;
  v33 = *(_DWORD **)(a2 + 8);
  v34 = *((_DWORD **)v2 + 2);
  v101 = v3 * v6;
  v35 = 4 * v101;
  if ( 4 * v101 < 4 )
  {
LABEL_42:
    if ( !v35 )
    {
LABEL_52:
      v45 = 0;
      goto LABEL_53;
    }
  }
  else
  {
    while ( *v34 == *v33 )
    {
      v35 -= 4;
      ++v33;
      ++v34;
      if ( v35 < 4 )
        goto LABEL_42;
    }
  }
  v36 = *(unsigned __int8 *)v34 - *(unsigned __int8 *)v33;
  if ( !v36 )
  {
    v37 = v35 - 1;
    v38 = (unsigned __int8 *)v33 + 1;
    v39 = (unsigned __int8 *)v34 + 1;
    if ( !v37 )
      goto LABEL_52;
    v36 = *v39 - *v38;
    if ( !v36 )
    {
      v40 = v37 - 1;
      v41 = v38 + 1;
      v42 = v39 + 1;
      if ( !v40 )
        goto LABEL_52;
      v36 = *v42 - *v41;
      if ( !v36 )
      {
        v43 = v41 + 1;
        v44 = v42 + 1;
        if ( v40 == 1 )
          goto LABEL_52;
        v36 = *v44 - *v43;
        if ( !v36 )
          goto LABEL_52;
      }
    }
  }
  v45 = 1;
  if ( v36 <= 0 )
    v45 = 0xFFFFFFFF;
LABEL_53:
  if ( v45 )
    return 0;
  v46 = v2[0x11];
  if ( v46 )
  {
    v60 = *(_DWORD **)(a2 + 0x18);
    v61 = *((_DWORD **)v2 + 6);
    v62 = 2 * v46;
    if ( v62 < 4 )
    {
LABEL_74:
      if ( !v62 )
        goto LABEL_84;
    }
    else
    {
      while ( *v61 == *v60 )
      {
        v62 -= 4;
        ++v60;
        ++v61;
        if ( v62 < 4 )
          goto LABEL_74;
      }
    }
    v63 = *(unsigned __int8 *)v61 - *(unsigned __int8 *)v60;
    if ( v63 )
      goto LABEL_82;
    v64 = v62 - 1;
    v65 = (unsigned __int8 *)v60 + 1;
    v66 = (unsigned __int8 *)v61 + 1;
    if ( v64 )
    {
      v63 = *v66 - *v65;
      if ( v63
        || (v67 = v64 - 1, v68 = v65 + 1, v69 = v66 + 1, v67)
        && ((v63 = *v69 - *v68) != 0 || (v70 = v68 + 1, v71 = v69 + 1, v67 != 1) && (v63 = *v71 - *v70) != 0) )
      {
LABEL_82:
        v72 = 1;
        if ( v63 <= 0 )
          v72 = 0xFFFFFFFF;
LABEL_85:
        if ( v72 )
          return 0;
        v73 = sub_72C4A0((int)v2);
        v74 = *(_DWORD **)(a2 + 0x14);
        v75 = *((_DWORD **)v2 + 5);
        v76 = 2 * v73;
        if ( v76 < 4 )
        {
LABEL_89:
          if ( !v76 )
            goto LABEL_99;
        }
        else
        {
          while ( *v75 == *v74 )
          {
            v76 -= 4;
            ++v74;
            ++v75;
            if ( v76 < 4 )
              goto LABEL_89;
          }
        }
        v77 = *(unsigned __int8 *)v75 - *(unsigned __int8 *)v74;
        if ( v77 )
          goto LABEL_97;
        v78 = v76 - 1;
        v79 = (unsigned __int8 *)v74 + 1;
        v80 = (unsigned __int8 *)v75 + 1;
        if ( v78 )
        {
          v77 = *v80 - *v79;
          if ( v77
            || (v81 = v78 - 1, v82 = v79 + 1, v83 = v80 + 1, v81)
            && ((v77 = *v83 - *v82) != 0 || (v84 = v82 + 1, v85 = v83 + 1, v81 != 1) && (v77 = *v85 - *v84) != 0) )
          {
LABEL_97:
            v86 = 1;
            if ( v77 <= 0 )
              v86 = 0xFFFFFFFF;
LABEL_100:
            if ( v86 )
              return 0;
            goto LABEL_101;
          }
        }
LABEL_99:
        v86 = 0;
        goto LABEL_100;
      }
    }
LABEL_84:
    v72 = 0;
    goto LABEL_85;
  }
  v47 = *(_DWORD **)(a2 + 0x14);
  v48 = *((_DWORD **)v2 + 5);
  v49 = 6 * (unsigned __int16)v2[0xF];
  if ( v49 < 4 )
  {
LABEL_58:
    if ( !v49 )
    {
LABEL_68:
      v59 = 0;
      goto LABEL_69;
    }
  }
  else
  {
    while ( *v48 == *v47 )
    {
      v49 -= 4;
      ++v47;
      ++v48;
      if ( v49 < 4 )
        goto LABEL_58;
    }
  }
  v50 = *(unsigned __int8 *)v48 - *(unsigned __int8 *)v47;
  if ( !v50 )
  {
    v51 = v49 - 1;
    v52 = (unsigned __int8 *)v47 + 1;
    v53 = (unsigned __int8 *)v48 + 1;
    if ( !v51 )
      goto LABEL_68;
    v50 = *v53 - *v52;
    if ( !v50 )
    {
      v54 = v51 - 1;
      v55 = v52 + 1;
      v56 = v53 + 1;
      if ( !v54 )
        goto LABEL_68;
      v50 = *v56 - *v55;
      if ( !v50 )
      {
        v57 = v55 + 1;
        v58 = v56 + 1;
        if ( v54 == 1 )
          goto LABEL_68;
        v50 = *v58 - *v57;
        if ( !v50 )
          goto LABEL_68;
      }
    }
  }
  v59 = 1;
  if ( v50 <= 0 )
    v59 = 0xFFFFFFFF;
LABEL_69:
  if ( v59 )
    return 0;
LABEL_101:
  v87 = *((_DWORD **)v2 + 4);
  if ( (v87 == 0) != (*(_DWORD *)(a2 + 0x10) == 0) )
    return 0;
  if ( v87 )
  {
    v88 = v3 * v6;
    v89 = *(_DWORD **)(a2 + 0x10);
    if ( v101 < 4 )
    {
LABEL_106:
      if ( !v88 )
        goto LABEL_116;
    }
    else
    {
      while ( *v87 == *v89 )
      {
        v88 -= 4;
        ++v89;
        ++v87;
        if ( v88 < 4 )
          goto LABEL_106;
      }
    }
    v90 = *(unsigned __int8 *)v87 - *(unsigned __int8 *)v89;
    if ( v90 )
      goto LABEL_114;
    v91 = v88 - 1;
    v92 = (unsigned __int8 *)v89 + 1;
    v93 = (unsigned __int8 *)v87 + 1;
    if ( v91 )
    {
      v90 = *v93 - *v92;
      if ( v90
        || (v94 = v91 - 1, v95 = v92 + 1, v96 = v93 + 1, v94)
        && ((v90 = *v96 - *v95) != 0 || (v97 = v95 + 1, v98 = v96 + 1, v94 != 1) && (v90 = *v98 - *v97) != 0) )
      {
LABEL_114:
        v99 = 1;
        if ( v90 <= 0 )
          v99 = 0xFFFFFFFF;
        return !v99;
      }
    }
LABEL_116:
    v99 = 0;
    return !v99;
  }
  return 1;
}
