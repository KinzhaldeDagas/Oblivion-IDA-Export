char __thiscall sub_72C4C0(_WORD *this, int a2)
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

  v2 = this; /*0x72c4c6*/
  v3 = *(this + 0xE); /*0x72c4c9*/
  if ( v3 != *(_WORD *)(a2 + 0x1C) ) /*0x72c4d5*/
    return 0; /*0x72c4d5*/
  if ( *(this + 0xF) != *(_WORD *)(a2 + 0x1E) ) /*0x72c4e7*/
    return 0; /*0x72c4e7*/
  v5 = *(this + 0x10); /*0x72c4e9*/
  if ( *((_DWORD *)this + 8) != *(_DWORD *)(a2 + 0x20) ) /*0x72c4f1*/
    return 0; /*0x72c4dc*/
  v6 = *(this + 0x12); /*0x72c4fe*/
  if ( v6 != *(_WORD *)(a2 + 0x24) ) /*0x72c506*/
    return 0; /*0x72c50e*/
  v7 = *(_DWORD **)(a2 + 4); /*0x72c511*/
  v8 = *((_DWORD **)v2 + 1); /*0x72c514*/
  v9 = 2 * v5; /*0x72c51a*/
  if ( v9 < 4 ) /*0x72c520*/
  {
LABEL_10:
    if ( !v9 ) /*0x72c538*/
    {
LABEL_21:
      v19 = 0; /*0x72c59f*/
      goto LABEL_22; /*0x72c59f*/
    }
  }
  else
  {
    while ( *v8 == *v7 ) /*0x72c526*/
    {
      v9 -= 4; /*0x72c528*/
      ++v7; /*0x72c52b*/
      ++v8; /*0x72c52e*/
      if ( v9 < 4 ) /*0x72c534*/
        goto LABEL_10; /*0x72c534*/
    }
  }
  v10 = *(unsigned __int8 *)v8 - *(unsigned __int8 *)v7; /*0x72c540*/
  if ( !v10 ) /*0x72c542*/
  {
    v11 = v9 - 1; /*0x72c544*/
    v12 = (unsigned __int8 *)v7 + 1; /*0x72c547*/
    v13 = (unsigned __int8 *)v8 + 1; /*0x72c54a*/
    if ( !v11 ) /*0x72c54f*/
      goto LABEL_20; /*0x72c54f*/
    v10 = *v13 - *v12; /*0x72c557*/
    if ( !v10 ) /*0x72c559*/
    {
      v14 = v11 - 1; /*0x72c55b*/
      v15 = v12 + 1; /*0x72c55e*/
      v16 = v13 + 1; /*0x72c561*/
      if ( !v14 || (v10 = *v16 - *v15) == 0 && ((v17 = v15 + 1, v18 = v16 + 1, v14 == 1) || (v10 = *v18 - *v17) == 0) ) /*0x72c587*/
      {
LABEL_20:
        v2 = this; /*0x72c59b*/
        goto LABEL_21; /*0x72c59b*/
      }
    }
  }
  v2 = this; /*0x72c58b*/
  v19 = 1; /*0x72c58f*/
  if ( v10 <= 0 ) /*0x72c594*/
    v19 = 0xFFFFFFFF; /*0x72c596*/
LABEL_22:
  if ( v19 ) /*0x72c5a3*/
    return 0; /*0x72c796*/
  v20 = *(_DWORD **)(a2 + 0xC); /*0x72c5ad*/
  v21 = *((_DWORD **)v2 + 3); /*0x72c5b0*/
  v22 = 2 * v3; /*0x72c5b6*/
  if ( v22 < 4 ) /*0x72c5bc*/
  {
LABEL_26:
    if ( !v22 ) /*0x72c5d6*/
    {
LABEL_37:
      v32 = 0; /*0x72c63d*/
      goto LABEL_38; /*0x72c63d*/
    }
  }
  else
  {
    while ( *v21 == *v20 ) /*0x72c5c4*/
    {
      v22 -= 4; /*0x72c5c6*/
      ++v20; /*0x72c5c9*/
      ++v21; /*0x72c5cc*/
      if ( v22 < 4 ) /*0x72c5d2*/
        goto LABEL_26; /*0x72c5d2*/
    }
  }
  v23 = *(unsigned __int8 *)v21 - *(unsigned __int8 *)v20; /*0x72c5de*/
  if ( !v23 ) /*0x72c5e0*/
  {
    v24 = v22 - 1; /*0x72c5e2*/
    v25 = (unsigned __int8 *)v20 + 1; /*0x72c5e5*/
    v26 = (unsigned __int8 *)v21 + 1; /*0x72c5e8*/
    if ( !v24 ) /*0x72c5ed*/
      goto LABEL_36; /*0x72c5ed*/
    v23 = *v26 - *v25; /*0x72c5f5*/
    if ( !v23 ) /*0x72c5f7*/
    {
      v27 = v24 - 1; /*0x72c5f9*/
      v28 = v25 + 1; /*0x72c5fc*/
      v29 = v26 + 1; /*0x72c5ff*/
      if ( !v27 || (v23 = *v29 - *v28) == 0 && ((v30 = v28 + 1, v31 = v29 + 1, v27 == 1) || (v23 = *v31 - *v30) == 0) ) /*0x72c625*/
      {
LABEL_36:
        v2 = this; /*0x72c639*/
        goto LABEL_37; /*0x72c639*/
      }
    }
  }
  v2 = this; /*0x72c629*/
  v32 = 1; /*0x72c62d*/
  if ( v23 <= 0 ) /*0x72c632*/
    v32 = 0xFFFFFFFF; /*0x72c634*/
LABEL_38:
  if ( v32 ) /*0x72c641*/
    return 0; /*0x72c641*/
  v33 = *(_DWORD **)(a2 + 8); /*0x72c64b*/
  v34 = *((_DWORD **)v2 + 2); /*0x72c64e*/
  v101 = v3 * v6; /*0x72c657*/
  v35 = 4 * v101; /*0x72c65d*/
  if ( 4 * v101 < 4 ) /*0x72c662*/
  {
LABEL_42:
    if ( !v35 ) /*0x72c67a*/
    {
LABEL_52:
      v45 = 0; /*0x72c6d9*/
      goto LABEL_53; /*0x72c6d9*/
    }
  }
  else
  {
    while ( *v34 == *v33 ) /*0x72c668*/
    {
      v35 -= 4; /*0x72c66a*/
      ++v33; /*0x72c66d*/
      ++v34; /*0x72c670*/
      if ( v35 < 4 ) /*0x72c676*/
        goto LABEL_42; /*0x72c676*/
    }
  }
  v36 = *(unsigned __int8 *)v34 - *(unsigned __int8 *)v33; /*0x72c682*/
  if ( !v36 ) /*0x72c684*/
  {
    v37 = v35 - 1; /*0x72c686*/
    v38 = (unsigned __int8 *)v33 + 1; /*0x72c689*/
    v39 = (unsigned __int8 *)v34 + 1; /*0x72c68c*/
    if ( !v37 ) /*0x72c691*/
      goto LABEL_52; /*0x72c691*/
    v36 = *v39 - *v38; /*0x72c699*/
    if ( !v36 ) /*0x72c69b*/
    {
      v40 = v37 - 1; /*0x72c69d*/
      v41 = v38 + 1; /*0x72c6a0*/
      v42 = v39 + 1; /*0x72c6a3*/
      if ( !v40 ) /*0x72c6a8*/
        goto LABEL_52; /*0x72c6a8*/
      v36 = *v42 - *v41; /*0x72c6b0*/
      if ( !v36 ) /*0x72c6b2*/
      {
        v43 = v41 + 1; /*0x72c6b7*/
        v44 = v42 + 1; /*0x72c6ba*/
        if ( v40 == 1 ) /*0x72c6bf*/
          goto LABEL_52; /*0x72c6bf*/
        v36 = *v44 - *v43; /*0x72c6c7*/
        if ( !v36 ) /*0x72c6c9*/
          goto LABEL_52; /*0x72c6c9*/
      }
    }
  }
  v45 = 1; /*0x72c6cd*/
  if ( v36 <= 0 ) /*0x72c6d2*/
    v45 = 0xFFFFFFFF; /*0x72c6d4*/
LABEL_53:
  if ( v45 ) /*0x72c6dd*/
    return 0; /*0x72c6dd*/
  v46 = v2[0x11]; /*0x72c6e3*/
  if ( v46 ) /*0x72c6ee*/
  {
    v60 = *(_DWORD **)(a2 + 0x18); /*0x72c799*/
    v61 = *((_DWORD **)v2 + 6); /*0x72c79c*/
    v62 = 2 * v46; /*0x72c7a2*/
    if ( v62 < 4 ) /*0x72c7a7*/
    {
LABEL_74:
      if ( !v62 ) /*0x72c7c6*/
        goto LABEL_84; /*0x72c7c6*/
    }
    else
    {
      while ( *v61 == *v60 ) /*0x72c7b4*/
      {
        v62 -= 4; /*0x72c7b6*/
        ++v60; /*0x72c7b9*/
        ++v61; /*0x72c7bc*/
        if ( v62 < 4 ) /*0x72c7c2*/
          goto LABEL_74; /*0x72c7c2*/
      }
    }
    v63 = *(unsigned __int8 *)v61 - *(unsigned __int8 *)v60; /*0x72c7ce*/
    if ( v63 ) /*0x72c7d0*/
      goto LABEL_82; /*0x72c7d0*/
    v64 = v62 - 1; /*0x72c7d2*/
    v65 = (unsigned __int8 *)v60 + 1; /*0x72c7d5*/
    v66 = (unsigned __int8 *)v61 + 1; /*0x72c7d8*/
    if ( v64 ) /*0x72c7dd*/
    {
      v63 = *v66 - *v65; /*0x72c7e5*/
      if ( v63 /*0x72c815*/
        || (v67 = v64 - 1, v68 = v65 + 1, v69 = v66 + 1, v67)
        && ((v63 = *v69 - *v68) != 0 || (v70 = v68 + 1, v71 = v69 + 1, v67 != 1) && (v63 = *v71 - *v70) != 0) )
      {
LABEL_82:
        v72 = 1; /*0x72c819*/
        if ( v63 <= 0 ) /*0x72c81e*/
          v72 = 0xFFFFFFFF; /*0x72c820*/
LABEL_85:
        if ( v72 ) /*0x72c829*/
          return 0; /*0x72c829*/
        v73 = sub_72C4A0((int)v2); /*0x72c831*/
        v74 = *(_DWORD **)(a2 + 0x14); /*0x72c836*/
        v75 = *((_DWORD **)v2 + 5); /*0x72c839*/
        v76 = 2 * v73; /*0x72c83c*/
        if ( v76 < 4 ) /*0x72c841*/
        {
LABEL_89:
          if ( !v76 ) /*0x72c859*/
            goto LABEL_99; /*0x72c859*/
        }
        else
        {
          while ( *v75 == *v74 ) /*0x72c847*/
          {
            v76 -= 4; /*0x72c849*/
            ++v74; /*0x72c84c*/
            ++v75; /*0x72c84f*/
            if ( v76 < 4 ) /*0x72c855*/
              goto LABEL_89; /*0x72c855*/
          }
        }
        v77 = *(unsigned __int8 *)v75 - *(unsigned __int8 *)v74; /*0x72c861*/
        if ( v77 ) /*0x72c863*/
          goto LABEL_97; /*0x72c863*/
        v78 = v76 - 1; /*0x72c865*/
        v79 = (unsigned __int8 *)v74 + 1; /*0x72c868*/
        v80 = (unsigned __int8 *)v75 + 1; /*0x72c86b*/
        if ( v78 ) /*0x72c870*/
        {
          v77 = *v80 - *v79; /*0x72c878*/
          if ( v77 /*0x72c8a8*/
            || (v81 = v78 - 1, v82 = v79 + 1, v83 = v80 + 1, v81)
            && ((v77 = *v83 - *v82) != 0 || (v84 = v82 + 1, v85 = v83 + 1, v81 != 1) && (v77 = *v85 - *v84) != 0) )
          {
LABEL_97:
            v86 = 1; /*0x72c8ac*/
            if ( v77 <= 0 ) /*0x72c8b1*/
              v86 = 0xFFFFFFFF; /*0x72c8b3*/
LABEL_100:
            if ( v86 ) /*0x72c8bc*/
              return 0; /*0x72c8bc*/
            goto LABEL_101; /*0x72c8bc*/
          }
        }
LABEL_99:
        v86 = 0; /*0x72c8b8*/
        goto LABEL_100; /*0x72c8b8*/
      }
    }
LABEL_84:
    v72 = 0; /*0x72c825*/
    goto LABEL_85; /*0x72c825*/
  }
  v47 = *(_DWORD **)(a2 + 0x14); /*0x72c6f8*/
  v48 = *((_DWORD **)v2 + 5); /*0x72c6fb*/
  v49 = 6 * (unsigned __int16)v2[0xF]; /*0x72c704*/
  if ( v49 < 4 ) /*0x72c709*/
  {
LABEL_58:
    if ( !v49 ) /*0x72c726*/
    {
LABEL_68:
      v59 = 0; /*0x72c785*/
      goto LABEL_69; /*0x72c785*/
    }
  }
  else
  {
    while ( *v48 == *v47 ) /*0x72c714*/
    {
      v49 -= 4; /*0x72c716*/
      ++v47; /*0x72c719*/
      ++v48; /*0x72c71c*/
      if ( v49 < 4 ) /*0x72c722*/
        goto LABEL_58; /*0x72c722*/
    }
  }
  v50 = *(unsigned __int8 *)v48 - *(unsigned __int8 *)v47; /*0x72c72e*/
  if ( !v50 ) /*0x72c730*/
  {
    v51 = v49 - 1; /*0x72c732*/
    v52 = (unsigned __int8 *)v47 + 1; /*0x72c735*/
    v53 = (unsigned __int8 *)v48 + 1; /*0x72c738*/
    if ( !v51 ) /*0x72c73d*/
      goto LABEL_68; /*0x72c73d*/
    v50 = *v53 - *v52; /*0x72c745*/
    if ( !v50 ) /*0x72c747*/
    {
      v54 = v51 - 1; /*0x72c749*/
      v55 = v52 + 1; /*0x72c74c*/
      v56 = v53 + 1; /*0x72c74f*/
      if ( !v54 ) /*0x72c754*/
        goto LABEL_68; /*0x72c754*/
      v50 = *v56 - *v55; /*0x72c75c*/
      if ( !v50 ) /*0x72c75e*/
      {
        v57 = v55 + 1; /*0x72c763*/
        v58 = v56 + 1; /*0x72c766*/
        if ( v54 == 1 ) /*0x72c76b*/
          goto LABEL_68; /*0x72c76b*/
        v50 = *v58 - *v57; /*0x72c773*/
        if ( !v50 ) /*0x72c775*/
          goto LABEL_68; /*0x72c775*/
      }
    }
  }
  v59 = 1; /*0x72c779*/
  if ( v50 <= 0 ) /*0x72c77e*/
    v59 = 0xFFFFFFFF; /*0x72c780*/
LABEL_69:
  if ( v59 ) /*0x72c789*/
    return 0; /*0x72c789*/
LABEL_101:
  v87 = *((_DWORD **)v2 + 4); /*0x72c8c2*/
  if ( (v87 == 0) != (*(_DWORD *)(a2 + 0x10) == 0) ) /*0x72c8d8*/
    return 0; /*0x72c8d8*/
  if ( v87 ) /*0x72c8e0*/
  {
    v88 = v3 * v6; /*0x72c8e6*/
    v89 = *(_DWORD **)(a2 + 0x10); /*0x72c8ed*/
    if ( v101 < 4 ) /*0x72c8ef*/
    {
LABEL_106:
      if ( !v88 ) /*0x72c907*/
        goto LABEL_116; /*0x72c907*/
    }
    else
    {
      while ( *v87 == *v89 ) /*0x72c8f5*/
      {
        v88 -= 4; /*0x72c8f7*/
        ++v89; /*0x72c8fa*/
        ++v87; /*0x72c8fd*/
        if ( v88 < 4 ) /*0x72c903*/
          goto LABEL_106; /*0x72c903*/
      }
    }
    v90 = *(unsigned __int8 *)v87 - *(unsigned __int8 *)v89; /*0x72c90f*/
    if ( v90 ) /*0x72c911*/
      goto LABEL_114; /*0x72c911*/
    v91 = v88 - 1; /*0x72c913*/
    v92 = (unsigned __int8 *)v89 + 1; /*0x72c916*/
    v93 = (unsigned __int8 *)v87 + 1; /*0x72c919*/
    if ( v91 ) /*0x72c91e*/
    {
      v90 = *v93 - *v92; /*0x72c926*/
      if ( v90 /*0x72c956*/
        || (v94 = v91 - 1, v95 = v92 + 1, v96 = v93 + 1, v94)
        && ((v90 = *v96 - *v95) != 0 || (v97 = v95 + 1, v98 = v96 + 1, v94 != 1) && (v90 = *v98 - *v97) != 0) )
      {
LABEL_114:
        v99 = 1; /*0x72c95a*/
        if ( v90 <= 0 ) /*0x72c95f*/
          v99 = 0xFFFFFFFF; /*0x72c961*/
        return !v99; /*0x72c96a*/
      }
    }
LABEL_116:
    v99 = 0; /*0x72c966*/
    return !v99; /*0x72c966*/
  }
  return 1; /*0x72c4d7*/
}
