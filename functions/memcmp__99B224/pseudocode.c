int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  unsigned int v3; // edi
  unsigned __int8 *v4; // ecx
  unsigned __int8 *v5; // eax
  int v6; // esi
  int v7; // esi
  int v8; // esi
  int v9; // esi
  int v10; // esi
  int v11; // esi
  int v12; // esi
  int v13; // esi
  int v14; // esi
  int v15; // esi
  int v16; // esi
  int v17; // esi
  int v18; // esi
  int v19; // esi
  int v20; // esi
  int v21; // esi
  int v22; // esi
  int v23; // esi
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // esi
  int v29; // esi
  int v30; // esi
  unsigned __int8 *v31; // eax
  unsigned __int8 *v32; // ecx
  int result; // eax
  int v34; // edx
  int v35; // esi
  int v36; // esi
  int v37; // esi
  int v38; // edx
  int v39; // esi
  int v40; // esi
  int v41; // esi
  int v42; // edx
  int v43; // esi
  int v44; // esi
  int v45; // esi
  int v46; // edx
  int v47; // esi
  int v48; // esi
  int v49; // esi
  int v50; // esi
  int v51; // esi
  int v52; // esi
  int v53; // edx
  int v54; // esi
  int v55; // esi
  int v56; // esi
  int v57; // edx
  int v58; // esi
  int v59; // edx
  int v60; // esi
  int v61; // esi
  int v62; // edx
  int v63; // esi
  int v64; // esi
  int v65; // esi
  int v66; // edx
  int v67; // esi
  int v68; // esi
  int v69; // esi
  int v70; // edx
  int v71; // esi
  int v72; // esi
  int v73; // esi
  int v74; // edx
  int v75; // esi
  int v76; // esi
  int v77; // esi
  int v78; // edx
  int v79; // esi
  int v80; // esi
  int v81; // esi
  int v82; // esi
  int v83; // esi
  int v84; // esi
  int v85; // edx
  int v86; // esi
  int v87; // esi
  int v88; // esi
  int v89; // edx
  int v90; // esi
  int v91; // esi
  int v92; // esi
  int v93; // edx
  int v94; // esi
  int v95; // esi
  int v96; // esi
  int v97; // edx
  int v98; // esi
  int v99; // esi
  int v100; // esi
  int v101; // edx
  int v102; // esi
  int v103; // esi
  int v104; // esi
  int v105; // edx
  int v106; // esi
  int v107; // esi
  int v108; // esi
  int v109; // esi
  int v110; // esi
  int v111; // esi
  int v112; // edx
  int v113; // esi
  int v114; // esi
  int v115; // esi
  int v116; // esi
  int v117; // edx
  int v118; // esi
  int v119; // esi
  int v120; // esi
  int v121; // edx
  int v122; // esi
  int v123; // esi
  int v124; // esi
  int v125; // edx
  int v126; // esi
  int v127; // esi
  int v128; // esi
  int v129; // edx
  int v130; // esi
  int v131; // esi
  int v132; // esi
  int v133; // esi
  int v134; // esi
  int v135; // esi
  int v136; // edx
  int v137; // esi
  int v138; // esi
  int v139; // esi
  int v140; // edx
  int v141; // esi
  int v142; // esi
  int v143; // esi
  int v144; // esi
  int v145; // eax
  int v146; // eax
  int v147; // eax
  int v148; // eax
  int v149; // ecx
  int v150; // eax
  int v151; // eax
  int v152; // eax

  v3 = Size; /*0x99b229*/
  switch ( (_DWORD)Size ) /*0x99b231*/
  {
    case 0: /*0x99b231*/
      return 0; /*0x99c81c*/
    case 1: /*0x99b231*/
      v148 = *(unsigned __int8 *)Buf1; /*0x99c811*/
      v149 = *(unsigned __int8 *)Buf2; /*0x99c814*/
      goto LABEL_426; /*0x99c817*/
    case 2: /*0x99b231*/
      v152 = *(unsigned __int8 *)Buf1 - *(unsigned __int8 *)Buf2; /*0x99c7e9*/
      if ( v152 ) /*0x99c7eb*/
      {
        result = 2 * (v152 > 0) - 1; /*0x99c7f8*/
        if ( result ) /*0x99c7fc*/
          return result; /*0x99c7fc*/
      }
      v148 = *((unsigned __int8 *)Buf1 + 1); /*0x99c7fe*/
      v149 = *((unsigned __int8 *)Buf2 + 1); /*0x99c802*/
LABEL_426:
      result = v148 - v149; /*0x99c77b*/
      if ( result ) /*0x99c77d*/
        return 2 * (result > 0) - 1; /*0x99c78e*/
      return result; /*0x99c790*/
    case 3: /*0x99b231*/
      v150 = *(unsigned __int8 *)Buf1 - *(unsigned __int8 *)Buf2; /*0x99c7a1*/
      if ( v150 ) /*0x99c7a3*/
      {
        result = 2 * (v150 > 0) - 1; /*0x99c7b0*/
        if ( result ) /*0x99c7b4*/
          return result; /*0x99c7b4*/
      }
      v151 = *((unsigned __int8 *)Buf1 + 1) - *((unsigned __int8 *)Buf2 + 1); /*0x99c7be*/
      if ( v151 ) /*0x99c7c0*/
      {
        result = 2 * (v151 > 0) - 1; /*0x99c7cd*/
        if ( result ) /*0x99c7d1*/
          return result; /*0x99c7d1*/
      }
      v148 = *((unsigned __int8 *)Buf1 + 2); /*0x99c7d3*/
      v149 = *((unsigned __int8 *)Buf2 + 2); /*0x99c7d7*/
      goto LABEL_426; /*0x99c7db*/
    case 4: /*0x99b231*/
      v145 = *(unsigned __int8 *)Buf1 - *(unsigned __int8 *)Buf2; /*0x99c718*/
      if ( v145 ) /*0x99c71a*/
      {
        result = 2 * (v145 > 0) - 1; /*0x99c727*/
        if ( result ) /*0x99c72b*/
          return result; /*0x99c72b*/
      }
      v146 = *((unsigned __int8 *)Buf1 + 1) - *((unsigned __int8 *)Buf2 + 1); /*0x99c739*/
      if ( v146 ) /*0x99c73b*/
      {
        result = 2 * (v146 > 0) - 1; /*0x99c748*/
        if ( result ) /*0x99c74c*/
          return result; /*0x99c74c*/
      }
      v147 = *((unsigned __int8 *)Buf1 + 2) - *((unsigned __int8 *)Buf2 + 2); /*0x99c75a*/
      if ( v147 ) /*0x99c75c*/
      {
        result = 2 * (v147 > 0) - 1; /*0x99c769*/
        if ( result ) /*0x99c76d*/
          return result; /*0x99c76d*/
      }
      v148 = *((unsigned __int8 *)Buf1 + 3); /*0x99c773*/
      v149 = *((unsigned __int8 *)Buf2 + 3); /*0x99c777*/
      goto LABEL_426; /*0x99c777*/
  }
  v4 = (unsigned __int8 *)Buf2; /*0x99b253*/
  v5 = (unsigned __int8 *)Buf1; /*0x99b256*/
  while ( v3 >= 0x20 ) /*0x99b6d6*/
  {
    if ( *(_DWORD *)v5 == *(_DWORD *)v4 ) /*0x99b266*/
    {
      v7 = 0; /*0x99b2e4*/
    }
    else
    {
      v6 = *v5 - *v4; /*0x99b26e*/
      if ( v6 ) /*0x99b270*/
      {
        v7 = 2 * (v6 > 0) - 1; /*0x99b27d*/
        if ( v7 ) /*0x99b281*/
          return v7; /*0x99b281*/
      }
      v8 = v5[1] - v4[1]; /*0x99b28f*/
      if ( v8 ) /*0x99b291*/
      {
        v7 = 2 * (v8 > 0) - 1; /*0x99b29e*/
        if ( v7 ) /*0x99b2a2*/
          return v7; /*0x99b2a2*/
      }
      v9 = v5[2] - v4[2]; /*0x99b2b0*/
      if ( v9 ) /*0x99b2b2*/
      {
        v7 = 2 * (v9 > 0) - 1; /*0x99b2bf*/
        if ( v7 ) /*0x99b2c3*/
          return v7; /*0x99b2c3*/
      }
      v7 = v5[3] - v4[3]; /*0x99b2d1*/
      if ( v7 ) /*0x99b2d3*/
        v7 = 2 * (v7 > 0) - 1; /*0x99b2e0*/
    }
    if ( v7 ) /*0x99b2e8*/
      return v7; /*0x99b2e8*/
    if ( *((_DWORD *)v5 + 1) == *((_DWORD *)v4 + 1) ) /*0x99b2f4*/
    {
      v7 = 0; /*0x99b374*/
    }
    else
    {
      v10 = v5[4] - v4[4]; /*0x99b2fe*/
      if ( v10 ) /*0x99b300*/
      {
        v7 = 2 * (v10 > 0) - 1; /*0x99b30d*/
        if ( v7 ) /*0x99b311*/
          return v7; /*0x99b311*/
      }
      v11 = v5[5] - v4[5]; /*0x99b31f*/
      if ( v11 ) /*0x99b321*/
      {
        v7 = 2 * (v11 > 0) - 1; /*0x99b32e*/
        if ( v7 ) /*0x99b332*/
          return v7; /*0x99b332*/
      }
      v12 = v5[6] - v4[6]; /*0x99b340*/
      if ( v12 ) /*0x99b342*/
      {
        v7 = 2 * (v12 > 0) - 1; /*0x99b34f*/
        if ( v7 ) /*0x99b353*/
          return v7; /*0x99b353*/
      }
      v7 = v5[7] - v4[7]; /*0x99b361*/
      if ( v7 ) /*0x99b363*/
        v7 = 2 * (v7 > 0) - 1; /*0x99b370*/
    }
    if ( v7 ) /*0x99b378*/
      return v7; /*0x99b378*/
    if ( *((_DWORD *)v5 + 2) == *((_DWORD *)v4 + 2) ) /*0x99b384*/
    {
      v7 = 0; /*0x99b404*/
    }
    else
    {
      v13 = v5[8] - v4[8]; /*0x99b38e*/
      if ( v13 ) /*0x99b390*/
      {
        v7 = 2 * (v13 > 0) - 1; /*0x99b39d*/
        if ( v7 ) /*0x99b3a1*/
          return v7; /*0x99b3a1*/
      }
      v14 = v5[9] - v4[9]; /*0x99b3af*/
      if ( v14 ) /*0x99b3b1*/
      {
        v7 = 2 * (v14 > 0) - 1; /*0x99b3be*/
        if ( v7 ) /*0x99b3c2*/
          return v7; /*0x99b3c2*/
      }
      v15 = v5[0xA] - v4[0xA]; /*0x99b3d0*/
      if ( v15 ) /*0x99b3d2*/
      {
        v7 = 2 * (v15 > 0) - 1; /*0x99b3df*/
        if ( v7 ) /*0x99b3e3*/
          return v7; /*0x99b3e3*/
      }
      v7 = v5[0xB] - v4[0xB]; /*0x99b3f1*/
      if ( v7 ) /*0x99b3f3*/
        v7 = 2 * (v7 > 0) - 1; /*0x99b400*/
    }
    if ( v7 ) /*0x99b408*/
      return v7; /*0x99b408*/
    if ( *((_DWORD *)v5 + 3) == *((_DWORD *)v4 + 3) ) /*0x99b414*/
    {
      v7 = 0; /*0x99b494*/
    }
    else
    {
      v16 = v5[0xC] - v4[0xC]; /*0x99b41e*/
      if ( v16 ) /*0x99b420*/
      {
        v7 = 2 * (v16 > 0) - 1; /*0x99b42d*/
        if ( v7 ) /*0x99b431*/
          return v7; /*0x99b431*/
      }
      v17 = v5[0xD] - v4[0xD]; /*0x99b43f*/
      if ( v17 ) /*0x99b441*/
      {
        v7 = 2 * (v17 > 0) - 1; /*0x99b44e*/
        if ( v7 ) /*0x99b452*/
          return v7; /*0x99b452*/
      }
      v18 = v5[0xE] - v4[0xE]; /*0x99b460*/
      if ( v18 ) /*0x99b462*/
      {
        v7 = 2 * (v18 > 0) - 1; /*0x99b46f*/
        if ( v7 ) /*0x99b473*/
          return v7; /*0x99b473*/
      }
      v7 = v5[0xF] - v4[0xF]; /*0x99b481*/
      if ( v7 ) /*0x99b483*/
        v7 = 2 * (v7 > 0) - 1; /*0x99b490*/
    }
    if ( v7 ) /*0x99b498*/
      return v7; /*0x99b498*/
    if ( *((_DWORD *)v5 + 4) == *((_DWORD *)v4 + 4) ) /*0x99b4a4*/
    {
      v7 = 0; /*0x99b524*/
    }
    else
    {
      v19 = v5[0x10] - v4[0x10]; /*0x99b4ae*/
      if ( v19 ) /*0x99b4b0*/
      {
        v7 = 2 * (v19 > 0) - 1; /*0x99b4bd*/
        if ( v7 ) /*0x99b4c1*/
          return v7; /*0x99b4c1*/
      }
      v20 = v5[0x11] - v4[0x11]; /*0x99b4cf*/
      if ( v20 ) /*0x99b4d1*/
      {
        v7 = 2 * (v20 > 0) - 1; /*0x99b4de*/
        if ( v7 ) /*0x99b4e2*/
          return v7; /*0x99b4e2*/
      }
      v21 = v5[0x12] - v4[0x12]; /*0x99b4f0*/
      if ( v21 ) /*0x99b4f2*/
      {
        v7 = 2 * (v21 > 0) - 1; /*0x99b4ff*/
        if ( v7 ) /*0x99b503*/
          return v7; /*0x99b503*/
      }
      v7 = v5[0x13] - v4[0x13]; /*0x99b511*/
      if ( v7 ) /*0x99b513*/
        v7 = 2 * (v7 > 0) - 1; /*0x99b520*/
    }
    if ( v7 ) /*0x99b528*/
      return v7; /*0x99b528*/
    if ( *((_DWORD *)v5 + 5) == *((_DWORD *)v4 + 5) ) /*0x99b534*/
    {
      v7 = 0; /*0x99b5b4*/
    }
    else
    {
      v22 = v5[0x14] - v4[0x14]; /*0x99b53e*/
      if ( v22 ) /*0x99b540*/
      {
        v7 = 2 * (v22 > 0) - 1; /*0x99b54d*/
        if ( v7 ) /*0x99b551*/
          return v7; /*0x99b551*/
      }
      v23 = v5[0x15] - v4[0x15]; /*0x99b55f*/
      if ( v23 ) /*0x99b561*/
      {
        v7 = 2 * (v23 > 0) - 1; /*0x99b56e*/
        if ( v7 ) /*0x99b572*/
          return v7; /*0x99b572*/
      }
      v24 = v5[0x16] - v4[0x16]; /*0x99b580*/
      if ( v24 ) /*0x99b582*/
      {
        v7 = 2 * (v24 > 0) - 1; /*0x99b58f*/
        if ( v7 ) /*0x99b593*/
          return v7; /*0x99b593*/
      }
      v7 = v5[0x17] - v4[0x17]; /*0x99b5a1*/
      if ( v7 ) /*0x99b5a3*/
        v7 = 2 * (v7 > 0) - 1; /*0x99b5b0*/
    }
    if ( v7 ) /*0x99b5b8*/
      return v7; /*0x99b5b8*/
    if ( *((_DWORD *)v5 + 6) == *((_DWORD *)v4 + 6) ) /*0x99b5c4*/
    {
      v7 = 0; /*0x99b644*/
    }
    else
    {
      v25 = v5[0x18] - v4[0x18]; /*0x99b5ce*/
      if ( v25 ) /*0x99b5d0*/
      {
        v7 = 2 * (v25 > 0) - 1; /*0x99b5dd*/
        if ( v7 ) /*0x99b5e1*/
          return v7; /*0x99b5e1*/
      }
      v26 = v5[0x19] - v4[0x19]; /*0x99b5ef*/
      if ( v26 ) /*0x99b5f1*/
      {
        v7 = 2 * (v26 > 0) - 1; /*0x99b5fe*/
        if ( v7 ) /*0x99b602*/
          return v7; /*0x99b602*/
      }
      v27 = v5[0x1A] - v4[0x1A]; /*0x99b610*/
      if ( v27 ) /*0x99b612*/
      {
        v7 = 2 * (v27 > 0) - 1; /*0x99b61f*/
        if ( v7 ) /*0x99b623*/
          return v7; /*0x99b623*/
      }
      v7 = v5[0x1B] - v4[0x1B]; /*0x99b631*/
      if ( v7 ) /*0x99b633*/
        v7 = 2 * (v7 > 0) - 1; /*0x99b640*/
    }
    if ( v7 ) /*0x99b648*/
      return v7; /*0x99b648*/
    if ( *((_DWORD *)v5 + 7) == *((_DWORD *)v4 + 7) ) /*0x99b654*/
    {
      v7 = 0; /*0x99b6c8*/
    }
    else
    {
      v28 = v5[0x1C] - v4[0x1C]; /*0x99b65e*/
      if ( v28 ) /*0x99b660*/
      {
        v7 = 2 * (v28 > 0) - 1; /*0x99b66d*/
        if ( v7 ) /*0x99b671*/
          return v7; /*0x99b671*/
      }
      v29 = v5[0x1D] - v4[0x1D]; /*0x99b67b*/
      if ( v29 ) /*0x99b67d*/
      {
        v7 = 2 * (v29 > 0) - 1; /*0x99b68a*/
        if ( v7 ) /*0x99b68e*/
          return v7; /*0x99b68e*/
      }
      v30 = v5[0x1E] - v4[0x1E]; /*0x99b698*/
      if ( v30 ) /*0x99b69a*/
      {
        v7 = 2 * (v30 > 0) - 1; /*0x99b6a7*/
        if ( v7 ) /*0x99b6ab*/
          return v7; /*0x99b6ab*/
      }
      v7 = v5[0x1F] - v4[0x1F]; /*0x99b6b5*/
      if ( v7 ) /*0x99b6b7*/
        v7 = 2 * (v7 > 0) - 1; /*0x99b6c4*/
    }
    if ( v7 ) /*0x99b6cc*/
      return v7; /*0x99b6cc*/
    v5 += 0x20; /*0x99b6ce*/
    v4 += 0x20; /*0x99b6d0*/
    v3 -= 0x20; /*0x99b6d2*/
  }
  v31 = &v5[v3]; /*0x99b6dc*/
  v32 = &v4[v3]; /*0x99b6de*/
  switch ( v3 ) /*0x99b6e9*/
  {
    case 1u: /*0x99b6e9*/
      goto _memcmp___$LN103;
    case 2u: /*0x99b6e9*/
      goto _memcmp___$LN88_0;
    case 3u: /*0x99b6e9*/
      goto _memcmp___$LN73;
    case 4u: /*0x99b6e9*/
      goto _memcmp___$LN120;
    case 5u: /*0x99b6e9*/
      goto _memcmp___$LN105;
    case 6u: /*0x99b6e9*/
      goto _memcmp___$LN90;
    case 7u: /*0x99b6e9*/
      goto _memcmp___$LN75_0;
    case 8u: /*0x99b6e9*/
      goto _memcmp___$LN122_0;
    case 9u: /*0x99b6e9*/
      goto _memcmp___$LN107;
    case 0xAu: /*0x99b6e9*/
      goto _memcmp___$LN92;
    case 0xBu: /*0x99b6e9*/
      goto _memcmp___$LN77;
    case 0xCu: /*0x99b6e9*/
      goto _memcmp___$LN124;
    case 0xDu: /*0x99b6e9*/
      goto _memcmp___$LN109;
    case 0xEu: /*0x99b6e9*/
      goto _memcmp___$LN94;
    case 0xFu: /*0x99b6e9*/
      goto _memcmp___$LN79;
    case 0x10u: /*0x99b6e9*/
      goto _memcmp___$LN126;
    case 0x11u: /*0x99b6e9*/
      goto _memcmp___$LN111;
    case 0x12u: /*0x99b6e9*/
      goto _memcmp___$LN96_0;
    case 0x13u: /*0x99b6e9*/
      goto _memcmp___$LN81;
    case 0x14u: /*0x99b6e9*/
      goto _memcmp___$LN128;
    case 0x15u: /*0x99b6e9*/
      goto _memcmp___$LN113_0;
    case 0x16u: /*0x99b6e9*/
      goto _memcmp___$LN98;
    case 0x17u: /*0x99b6e9*/
      goto _memcmp___$LN83;
    case 0x18u: /*0x99b6e9*/
      goto _memcmp___$LN130_1;
    case 0x19u: /*0x99b6e9*/
      goto _memcmp___$LN115;
    case 0x1Au: /*0x99b6e9*/
      goto _memcmp___$LN100;
    case 0x1Bu: /*0x99b6e9*/
      goto _memcmp___$LN85;
    case 0x1Cu: /*0x99b6e9*/
      v34 = *((_DWORD *)v31 + 0xFFFFFFF9); /*0x99b6f7*/
      if ( v34 == *((_DWORD *)v32 + 0xFFFFFFF9) ) /*0x99b6fd*/
      {
        v7 = 0; /*0x99b770*/
      }
      else
      {
        v35 = (unsigned __int8)v34 - v32[0xFFFFFFE4]; /*0x99b706*/
        if ( v35 ) /*0x99b708*/
        {
          v7 = 2 * (v35 > 0) - 1; /*0x99b715*/
          if ( v7 ) /*0x99b719*/
            return v7; /*0x99b719*/
        }
        v36 = v31[0xFFFFFFE5] - v32[0xFFFFFFE5]; /*0x99b723*/
        if ( v36 ) /*0x99b725*/
        {
          v7 = 2 * (v36 > 0) - 1; /*0x99b732*/
          if ( v7 ) /*0x99b736*/
            return v7; /*0x99b736*/
        }
        v37 = v31[0xFFFFFFE6] - v32[0xFFFFFFE6]; /*0x99b740*/
        if ( v37 ) /*0x99b742*/
        {
          v7 = 2 * (v37 > 0) - 1; /*0x99b74f*/
          if ( v7 ) /*0x99b753*/
            return v7; /*0x99b753*/
        }
        v7 = v31[0xFFFFFFE7] - v32[0xFFFFFFE7]; /*0x99b75d*/
        if ( v7 ) /*0x99b75f*/
          v7 = 2 * (v7 > 0) - 1; /*0x99b76c*/
      }
      if ( v7 ) /*0x99b774*/
        return v7; /*0x99b774*/
_memcmp___$LN130_1:
      v38 = *((_DWORD *)v31 + 0xFFFFFFFA); /*0x99b77a*/
      if ( v38 == *((_DWORD *)v32 + 0xFFFFFFFA) ) /*0x99b780*/
      {
        v7 = 0; /*0x99b7ff*/
      }
      else
      {
        v39 = (unsigned __int8)v38 - v32[0xFFFFFFE8]; /*0x99b789*/
        if ( v39 ) /*0x99b78b*/
        {
          v7 = 2 * (v39 > 0) - 1; /*0x99b798*/
          if ( v7 ) /*0x99b79c*/
            return v7; /*0x99b79c*/
        }
        v40 = v31[0xFFFFFFE9] - v32[0xFFFFFFE9]; /*0x99b7aa*/
        if ( v40 ) /*0x99b7ac*/
        {
          v7 = 2 * (v40 > 0) - 1; /*0x99b7b9*/
          if ( v7 ) /*0x99b7bd*/
            return v7; /*0x99b7bd*/
        }
        v41 = v31[0xFFFFFFEA] - v32[0xFFFFFFEA]; /*0x99b7cb*/
        if ( v41 ) /*0x99b7cd*/
        {
          v7 = 2 * (v41 > 0) - 1; /*0x99b7da*/
          if ( v7 ) /*0x99b7de*/
            return v7; /*0x99b7de*/
        }
        v7 = v31[0xFFFFFFEB] - v32[0xFFFFFFEB]; /*0x99b7ec*/
        if ( v7 ) /*0x99b7ee*/
          v7 = 2 * (v7 > 0) - 1; /*0x99b7fb*/
      }
      if ( v7 ) /*0x99b803*/
        return v7; /*0x99b803*/
_memcmp___$LN128:
      v42 = *((_DWORD *)v31 + 0xFFFFFFFB); /*0x99b809*/
      if ( v42 == *((_DWORD *)v32 + 0xFFFFFFFB) ) /*0x99b80f*/
      {
        v7 = 0; /*0x99b88e*/
      }
      else
      {
        v43 = (unsigned __int8)v42 - v32[0xFFFFFFEC]; /*0x99b818*/
        if ( v43 ) /*0x99b81a*/
        {
          v7 = 2 * (v43 > 0) - 1; /*0x99b827*/
          if ( v7 ) /*0x99b82b*/
            return v7; /*0x99b82b*/
        }
        v44 = v31[0xFFFFFFED] - v32[0xFFFFFFED]; /*0x99b839*/
        if ( v44 ) /*0x99b83b*/
        {
          v7 = 2 * (v44 > 0) - 1; /*0x99b848*/
          if ( v7 ) /*0x99b84c*/
            return v7; /*0x99b84c*/
        }
        v45 = v31[0xFFFFFFEE] - v32[0xFFFFFFEE]; /*0x99b85a*/
        if ( v45 ) /*0x99b85c*/
        {
          v7 = 2 * (v45 > 0) - 1; /*0x99b869*/
          if ( v7 ) /*0x99b86d*/
            return v7; /*0x99b86d*/
        }
        v7 = v31[0xFFFFFFEF] - v32[0xFFFFFFEF]; /*0x99b87b*/
        if ( v7 ) /*0x99b87d*/
          v7 = 2 * (v7 > 0) - 1; /*0x99b88a*/
      }
      if ( v7 ) /*0x99b892*/
        return v7; /*0x99b892*/
_memcmp___$LN126:
      v46 = *((_DWORD *)v31 + 0xFFFFFFFC); /*0x99b898*/
      if ( v46 == *((_DWORD *)v32 + 0xFFFFFFFC) ) /*0x99b89e*/
      {
        v7 = 0; /*0x99b91d*/
      }
      else
      {
        v47 = (unsigned __int8)v46 - v32[0xFFFFFFF0]; /*0x99b8a7*/
        if ( v47 ) /*0x99b8a9*/
        {
          v7 = 2 * (v47 > 0) - 1; /*0x99b8b6*/
          if ( v7 ) /*0x99b8ba*/
            return v7; /*0x99b8ba*/
        }
        v48 = v31[0xFFFFFFF1] - v32[0xFFFFFFF1]; /*0x99b8c8*/
        if ( v48 ) /*0x99b8ca*/
        {
          v7 = 2 * (v48 > 0) - 1; /*0x99b8d7*/
          if ( v7 ) /*0x99b8db*/
            return v7; /*0x99b8db*/
        }
        v49 = v31[0xFFFFFFF2] - v32[0xFFFFFFF2]; /*0x99b8e9*/
        if ( v49 ) /*0x99b8eb*/
        {
          v7 = 2 * (v49 > 0) - 1; /*0x99b8f8*/
          if ( v7 ) /*0x99b8fc*/
            return v7; /*0x99b8fc*/
        }
        v7 = v31[0xFFFFFFF3] - v32[0xFFFFFFF3]; /*0x99b90a*/
        if ( v7 ) /*0x99b90c*/
          v7 = 2 * (v7 > 0) - 1; /*0x99b919*/
      }
      if ( v7 ) /*0x99b921*/
        return v7; /*0x99b921*/
_memcmp___$LN124:
      if ( *((_DWORD *)v31 + 0xFFFFFFFD) == *((_DWORD *)v32 + 0xFFFFFFFD) ) /*0x99b92d*/
      {
        v7 = 0; /*0x99b9ad*/
      }
      else
      {
        v50 = v31[0xFFFFFFF4] - v32[0xFFFFFFF4]; /*0x99b937*/
        if ( v50 ) /*0x99b939*/
        {
          v7 = 2 * (v50 > 0) - 1; /*0x99b946*/
          if ( v7 ) /*0x99b94a*/
            return v7; /*0x99b94a*/
        }
        v51 = v31[0xFFFFFFF5] - v32[0xFFFFFFF5]; /*0x99b958*/
        if ( v51 ) /*0x99b95a*/
        {
          v7 = 2 * (v51 > 0) - 1; /*0x99b967*/
          if ( v7 ) /*0x99b96b*/
            return v7; /*0x99b96b*/
        }
        v52 = v31[0xFFFFFFF6] - v32[0xFFFFFFF6]; /*0x99b979*/
        if ( v52 ) /*0x99b97b*/
        {
          v7 = 2 * (v52 > 0) - 1; /*0x99b988*/
          if ( v7 ) /*0x99b98c*/
            return v7; /*0x99b98c*/
        }
        v7 = v31[0xFFFFFFF7] - v32[0xFFFFFFF7]; /*0x99b99a*/
        if ( v7 ) /*0x99b99c*/
          v7 = 2 * (v7 > 0) - 1; /*0x99b9a9*/
      }
      if ( v7 ) /*0x99b9b1*/
        return v7; /*0x99b9b1*/
_memcmp___$LN122_0:
      v53 = *((_DWORD *)v31 + 0xFFFFFFFE); /*0x99b9b7*/
      if ( v53 == *((_DWORD *)v32 + 0xFFFFFFFE) ) /*0x99b9bd*/
      {
        v7 = 0; /*0x99ba3c*/
      }
      else
      {
        v54 = (unsigned __int8)v53 - v32[0xFFFFFFF8]; /*0x99b9c6*/
        if ( v54 ) /*0x99b9c8*/
        {
          v7 = 2 * (v54 > 0) - 1; /*0x99b9d5*/
          if ( v7 ) /*0x99b9d9*/
            return v7; /*0x99b9d9*/
        }
        v55 = v31[0xFFFFFFF9] - v32[0xFFFFFFF9]; /*0x99b9e7*/
        if ( v55 ) /*0x99b9e9*/
        {
          v7 = 2 * (v55 > 0) - 1; /*0x99b9f6*/
          if ( v7 ) /*0x99b9fa*/
            return v7; /*0x99b9fa*/
        }
        v56 = v31[0xFFFFFFFA] - v32[0xFFFFFFFA]; /*0x99ba08*/
        if ( v56 ) /*0x99ba0a*/
        {
          v7 = 2 * (v56 > 0) - 1; /*0x99ba17*/
          if ( v7 ) /*0x99ba1b*/
            return v7; /*0x99ba1b*/
        }
        v7 = v31[0xFFFFFFFB] - v32[0xFFFFFFFB]; /*0x99ba29*/
        if ( v7 ) /*0x99ba2b*/
          v7 = 2 * (v7 > 0) - 1; /*0x99ba38*/
      }
      if ( v7 ) /*0x99ba40*/
        return v7; /*0x99ba40*/
_memcmp___$LN120:
      v57 = *((_DWORD *)v31 + 0xFFFFFFFF); /*0x99ba46*/
      if ( v57 == *((_DWORD *)v32 + 0xFFFFFFFF) ) /*0x99ba4c*/
      {
        result = 0; /*0x99babd*/
      }
      else
      {
        v58 = (unsigned __int8)v57 - v32[0xFFFFFFFC]; /*0x99ba55*/
        if ( (!v58 || (v59 = 2 * (v58 > 0) - 1, 2 * (v58 > 0) == 1)) /*0x99ba9c*/
          && ((v60 = v31[0xFFFFFFFD] - v32[0xFFFFFFFD]) == 0 || (v59 = 2 * (v60 > 0) - 1, 2 * (v60 > 0) == 1))
          && ((v61 = v31[0xFFFFFFFE] - v32[0xFFFFFFFE]) == 0 || (v59 = 2 * (v61 > 0) - 1, 2 * (v61 > 0) == 1)) )
        {
          result = v31[0xFFFFFFFF] - v32[0xFFFFFFFF]; /*0x99baaa*/
          if ( result ) /*0x99baac*/
            result = 2 * (result > 0) - 1; /*0x99bab9*/
        }
        else
        {
          result = v59; /*0x99ba9e*/
        }
      }
      if ( !result ) /*0x99bac1*/
        return 0; /*0x99bac1*/
      return result; /*0x99bac1*/
    case 0x1Du: /*0x99b6e9*/
      v62 = *(_DWORD *)(v31 + 0xFFFFFFE3); /*0x99bacb*/
      if ( v62 == *(_DWORD *)(v32 + 0xFFFFFFE3) ) /*0x99bad1*/
      {
        v7 = 0; /*0x99bb50*/
      }
      else
      {
        v63 = (unsigned __int8)v62 - v32[0xFFFFFFE3]; /*0x99bada*/
        if ( v63 ) /*0x99badc*/
        {
          v7 = 2 * (v63 > 0) - 1; /*0x99bae9*/
          if ( v7 ) /*0x99baed*/
            return v7; /*0x99baed*/
        }
        v64 = v31[0xFFFFFFE4] - v32[0xFFFFFFE4]; /*0x99bafb*/
        if ( v64 ) /*0x99bafd*/
        {
          v7 = 2 * (v64 > 0) - 1; /*0x99bb0a*/
          if ( v7 ) /*0x99bb0e*/
            return v7; /*0x99bb0e*/
        }
        v65 = v31[0xFFFFFFE5] - v32[0xFFFFFFE5]; /*0x99bb1c*/
        if ( v65 ) /*0x99bb1e*/
        {
          v7 = 2 * (v65 > 0) - 1; /*0x99bb2b*/
          if ( v7 ) /*0x99bb2f*/
            return v7; /*0x99bb2f*/
        }
        v7 = v31[0xFFFFFFE6] - v32[0xFFFFFFE6]; /*0x99bb3d*/
        if ( v7 ) /*0x99bb3f*/
          v7 = 2 * (v7 > 0) - 1; /*0x99bb4c*/
      }
      if ( v7 ) /*0x99bb54*/
        return v7; /*0x99bb54*/
_memcmp___$LN115:
      v66 = *(_DWORD *)(v31 + 0xFFFFFFE7); /*0x99bb5a*/
      if ( v66 == *(_DWORD *)(v32 + 0xFFFFFFE7) ) /*0x99bb60*/
      {
        v7 = 0; /*0x99bbdf*/
      }
      else
      {
        v67 = (unsigned __int8)v66 - v32[0xFFFFFFE7]; /*0x99bb69*/
        if ( v67 ) /*0x99bb6b*/
        {
          v7 = 2 * (v67 > 0) - 1; /*0x99bb78*/
          if ( v7 ) /*0x99bb7c*/
            return v7; /*0x99bb7c*/
        }
        v68 = v31[0xFFFFFFE8] - v32[0xFFFFFFE8]; /*0x99bb8a*/
        if ( v68 ) /*0x99bb8c*/
        {
          v7 = 2 * (v68 > 0) - 1; /*0x99bb99*/
          if ( v7 ) /*0x99bb9d*/
            return v7; /*0x99bb9d*/
        }
        v69 = v31[0xFFFFFFE9] - v32[0xFFFFFFE9]; /*0x99bbab*/
        if ( v69 ) /*0x99bbad*/
        {
          v7 = 2 * (v69 > 0) - 1; /*0x99bbba*/
          if ( v7 ) /*0x99bbbe*/
            return v7; /*0x99bbbe*/
        }
        v7 = v31[0xFFFFFFEA] - v32[0xFFFFFFEA]; /*0x99bbcc*/
        if ( v7 ) /*0x99bbce*/
          v7 = 2 * (v7 > 0) - 1; /*0x99bbdb*/
      }
      if ( v7 ) /*0x99bbe3*/
        return v7; /*0x99bbe3*/
_memcmp___$LN113_0:
      v70 = *(_DWORD *)(v31 + 0xFFFFFFEB); /*0x99bbe9*/
      if ( v70 == *(_DWORD *)(v32 + 0xFFFFFFEB) ) /*0x99bbef*/
      {
        v7 = 0; /*0x99bc6e*/
      }
      else
      {
        v71 = (unsigned __int8)v70 - v32[0xFFFFFFEB]; /*0x99bbf8*/
        if ( v71 ) /*0x99bbfa*/
        {
          v7 = 2 * (v71 > 0) - 1; /*0x99bc07*/
          if ( v7 ) /*0x99bc0b*/
            return v7; /*0x99bc0b*/
        }
        v72 = v31[0xFFFFFFEC] - v32[0xFFFFFFEC]; /*0x99bc19*/
        if ( v72 ) /*0x99bc1b*/
        {
          v7 = 2 * (v72 > 0) - 1; /*0x99bc28*/
          if ( v7 ) /*0x99bc2c*/
            return v7; /*0x99bc2c*/
        }
        v73 = v31[0xFFFFFFED] - v32[0xFFFFFFED]; /*0x99bc3a*/
        if ( v73 ) /*0x99bc3c*/
        {
          v7 = 2 * (v73 > 0) - 1; /*0x99bc49*/
          if ( v7 ) /*0x99bc4d*/
            return v7; /*0x99bc4d*/
        }
        v7 = v31[0xFFFFFFEE] - v32[0xFFFFFFEE]; /*0x99bc5b*/
        if ( v7 ) /*0x99bc5d*/
          v7 = 2 * (v7 > 0) - 1; /*0x99bc6a*/
      }
      if ( v7 ) /*0x99bc72*/
        return v7; /*0x99bc72*/
_memcmp___$LN111:
      v74 = *(_DWORD *)(v31 + 0xFFFFFFEF); /*0x99bc78*/
      if ( v74 == *(_DWORD *)(v32 + 0xFFFFFFEF) ) /*0x99bc7e*/
      {
        v7 = 0; /*0x99bcfd*/
      }
      else
      {
        v75 = (unsigned __int8)v74 - v32[0xFFFFFFEF]; /*0x99bc87*/
        if ( v75 ) /*0x99bc89*/
        {
          v7 = 2 * (v75 > 0) - 1; /*0x99bc96*/
          if ( v7 ) /*0x99bc9a*/
            return v7; /*0x99bc9a*/
        }
        v76 = v31[0xFFFFFFF0] - v32[0xFFFFFFF0]; /*0x99bca8*/
        if ( v76 ) /*0x99bcaa*/
        {
          v7 = 2 * (v76 > 0) - 1; /*0x99bcb7*/
          if ( v7 ) /*0x99bcbb*/
            return v7; /*0x99bcbb*/
        }
        v77 = v31[0xFFFFFFF1] - v32[0xFFFFFFF1]; /*0x99bcc9*/
        if ( v77 ) /*0x99bccb*/
        {
          v7 = 2 * (v77 > 0) - 1; /*0x99bcd8*/
          if ( v7 ) /*0x99bcdc*/
            return v7; /*0x99bcdc*/
        }
        v7 = v31[0xFFFFFFF2] - v32[0xFFFFFFF2]; /*0x99bcea*/
        if ( v7 ) /*0x99bcec*/
          v7 = 2 * (v7 > 0) - 1; /*0x99bcf9*/
      }
      if ( v7 ) /*0x99bd01*/
        return v7; /*0x99bd01*/
_memcmp___$LN109:
      v78 = *(_DWORD *)(v31 + 0xFFFFFFF3); /*0x99bd07*/
      if ( v78 == *(_DWORD *)(v32 + 0xFFFFFFF3) ) /*0x99bd0d*/
      {
        v7 = 0; /*0x99bd8c*/
      }
      else
      {
        v79 = (unsigned __int8)v78 - v32[0xFFFFFFF3]; /*0x99bd16*/
        if ( v79 ) /*0x99bd18*/
        {
          v7 = 2 * (v79 > 0) - 1; /*0x99bd25*/
          if ( v7 ) /*0x99bd29*/
            return v7; /*0x99bd29*/
        }
        v80 = v31[0xFFFFFFF4] - v32[0xFFFFFFF4]; /*0x99bd37*/
        if ( v80 ) /*0x99bd39*/
        {
          v7 = 2 * (v80 > 0) - 1; /*0x99bd46*/
          if ( v7 ) /*0x99bd4a*/
            return v7; /*0x99bd4a*/
        }
        v81 = v31[0xFFFFFFF5] - v32[0xFFFFFFF5]; /*0x99bd58*/
        if ( v81 ) /*0x99bd5a*/
        {
          v7 = 2 * (v81 > 0) - 1; /*0x99bd67*/
          if ( v7 ) /*0x99bd6b*/
            return v7; /*0x99bd6b*/
        }
        v7 = v31[0xFFFFFFF6] - v32[0xFFFFFFF6]; /*0x99bd79*/
        if ( v7 ) /*0x99bd7b*/
          v7 = 2 * (v7 > 0) - 1; /*0x99bd88*/
      }
      if ( v7 ) /*0x99bd90*/
        return v7; /*0x99bd90*/
_memcmp___$LN107:
      if ( *(_DWORD *)(v31 + 0xFFFFFFF7) == *(_DWORD *)(v32 + 0xFFFFFFF7) ) /*0x99bd9c*/
      {
        v7 = 0; /*0x99be1c*/
      }
      else
      {
        v82 = v31[0xFFFFFFF7] - v32[0xFFFFFFF7]; /*0x99bda6*/
        if ( v82 ) /*0x99bda8*/
        {
          v7 = 2 * (v82 > 0) - 1; /*0x99bdb5*/
          if ( v7 ) /*0x99bdb9*/
            return v7; /*0x99bdb9*/
        }
        v83 = v31[0xFFFFFFF8] - v32[0xFFFFFFF8]; /*0x99bdc7*/
        if ( v83 ) /*0x99bdc9*/
        {
          v7 = 2 * (v83 > 0) - 1; /*0x99bdd6*/
          if ( v7 ) /*0x99bdda*/
            return v7; /*0x99bdda*/
        }
        v84 = v31[0xFFFFFFF9] - v32[0xFFFFFFF9]; /*0x99bde8*/
        if ( v84 ) /*0x99bdea*/
        {
          v7 = 2 * (v84 > 0) - 1; /*0x99bdf7*/
          if ( v7 ) /*0x99bdfb*/
            return v7; /*0x99bdfb*/
        }
        v7 = v31[0xFFFFFFFA] - v32[0xFFFFFFFA]; /*0x99be09*/
        if ( v7 ) /*0x99be0b*/
          v7 = 2 * (v7 > 0) - 1; /*0x99be18*/
      }
      if ( v7 ) /*0x99be20*/
        return v7; /*0x99be20*/
_memcmp___$LN105:
      v85 = *(_DWORD *)(v31 + 0xFFFFFFFB); /*0x99be26*/
      if ( v85 == *(_DWORD *)(v32 + 0xFFFFFFFB) ) /*0x99be2c*/
      {
        v7 = 0; /*0x99beab*/
      }
      else
      {
        v86 = (unsigned __int8)v85 - v32[0xFFFFFFFB]; /*0x99be35*/
        if ( v86 ) /*0x99be37*/
        {
          v7 = 2 * (v86 > 0) - 1; /*0x99be44*/
          if ( v7 ) /*0x99be48*/
            return v7; /*0x99be48*/
        }
        v87 = v31[0xFFFFFFFC] - v32[0xFFFFFFFC]; /*0x99be56*/
        if ( v87 ) /*0x99be58*/
        {
          v7 = 2 * (v87 > 0) - 1; /*0x99be65*/
          if ( v7 ) /*0x99be69*/
            return v7; /*0x99be69*/
        }
        v88 = v31[0xFFFFFFFD] - v32[0xFFFFFFFD]; /*0x99be77*/
        if ( v88 ) /*0x99be79*/
        {
          v7 = 2 * (v88 > 0) - 1; /*0x99be86*/
          if ( v7 ) /*0x99be8a*/
            return v7; /*0x99be8a*/
        }
        v7 = v31[0xFFFFFFFE] - v32[0xFFFFFFFE]; /*0x99be98*/
        if ( v7 ) /*0x99be9a*/
          v7 = 2 * (v7 > 0) - 1; /*0x99bea7*/
      }
      if ( v7 ) /*0x99beaf*/
        return v7; /*0x99beaf*/
      goto _memcmp___$LN103; /*0x99beaf*/
    case 0x1Eu: /*0x99b6e9*/
      v89 = *(_DWORD *)(v31 + 0xFFFFFFE2); /*0x99bed7*/
      if ( v89 == *(_DWORD *)(v32 + 0xFFFFFFE2) ) /*0x99bedd*/
      {
        v7 = 0; /*0x99bf5c*/
      }
      else
      {
        v90 = (unsigned __int8)v89 - v32[0xFFFFFFE2]; /*0x99bee6*/
        if ( v90 ) /*0x99bee8*/
        {
          v7 = 2 * (v90 > 0) - 1; /*0x99bef5*/
          if ( v7 ) /*0x99bef9*/
            return v7; /*0x99bef9*/
        }
        v91 = v31[0xFFFFFFE3] - v32[0xFFFFFFE3]; /*0x99bf07*/
        if ( v91 ) /*0x99bf09*/
        {
          v7 = 2 * (v91 > 0) - 1; /*0x99bf16*/
          if ( v7 ) /*0x99bf1a*/
            return v7; /*0x99bf1a*/
        }
        v92 = v31[0xFFFFFFE4] - v32[0xFFFFFFE4]; /*0x99bf28*/
        if ( v92 ) /*0x99bf2a*/
        {
          v7 = 2 * (v92 > 0) - 1; /*0x99bf37*/
          if ( v7 ) /*0x99bf3b*/
            return v7; /*0x99bf3b*/
        }
        v7 = v31[0xFFFFFFE5] - v32[0xFFFFFFE5]; /*0x99bf49*/
        if ( v7 ) /*0x99bf4b*/
          v7 = 2 * (v7 > 0) - 1; /*0x99bf58*/
      }
      if ( v7 ) /*0x99bf60*/
        return v7; /*0x99bf60*/
_memcmp___$LN100:
      v93 = *(_DWORD *)(v31 + 0xFFFFFFE6); /*0x99bf66*/
      if ( v93 == *(_DWORD *)(v32 + 0xFFFFFFE6) ) /*0x99bf6c*/
      {
        v7 = 0; /*0x99bfeb*/
      }
      else
      {
        v94 = (unsigned __int8)v93 - v32[0xFFFFFFE6]; /*0x99bf75*/
        if ( v94 ) /*0x99bf77*/
        {
          v7 = 2 * (v94 > 0) - 1; /*0x99bf84*/
          if ( v7 ) /*0x99bf88*/
            return v7; /*0x99bf88*/
        }
        v95 = v31[0xFFFFFFE7] - v32[0xFFFFFFE7]; /*0x99bf96*/
        if ( v95 ) /*0x99bf98*/
        {
          v7 = 2 * (v95 > 0) - 1; /*0x99bfa5*/
          if ( v7 ) /*0x99bfa9*/
            return v7; /*0x99bfa9*/
        }
        v96 = v31[0xFFFFFFE8] - v32[0xFFFFFFE8]; /*0x99bfb7*/
        if ( v96 ) /*0x99bfb9*/
        {
          v7 = 2 * (v96 > 0) - 1; /*0x99bfc6*/
          if ( v7 ) /*0x99bfca*/
            return v7; /*0x99bfca*/
        }
        v7 = v31[0xFFFFFFE9] - v32[0xFFFFFFE9]; /*0x99bfd8*/
        if ( v7 ) /*0x99bfda*/
          v7 = 2 * (v7 > 0) - 1; /*0x99bfe7*/
      }
      if ( v7 ) /*0x99bfef*/
        return v7; /*0x99bfef*/
_memcmp___$LN98:
      v97 = *(_DWORD *)(v31 + 0xFFFFFFEA); /*0x99bff5*/
      if ( v97 == *(_DWORD *)(v32 + 0xFFFFFFEA) ) /*0x99bffb*/
      {
        v7 = 0; /*0x99c07a*/
      }
      else
      {
        v98 = (unsigned __int8)v97 - v32[0xFFFFFFEA]; /*0x99c004*/
        if ( v98 ) /*0x99c006*/
        {
          v7 = 2 * (v98 > 0) - 1; /*0x99c013*/
          if ( v7 ) /*0x99c017*/
            return v7; /*0x99c017*/
        }
        v99 = v31[0xFFFFFFEB] - v32[0xFFFFFFEB]; /*0x99c025*/
        if ( v99 ) /*0x99c027*/
        {
          v7 = 2 * (v99 > 0) - 1; /*0x99c034*/
          if ( v7 ) /*0x99c038*/
            return v7; /*0x99c038*/
        }
        v100 = v31[0xFFFFFFEC] - v32[0xFFFFFFEC]; /*0x99c046*/
        if ( v100 ) /*0x99c048*/
        {
          v7 = 2 * (v100 > 0) - 1; /*0x99c055*/
          if ( v7 ) /*0x99c059*/
            return v7; /*0x99c059*/
        }
        v7 = v31[0xFFFFFFED] - v32[0xFFFFFFED]; /*0x99c067*/
        if ( v7 ) /*0x99c069*/
          v7 = 2 * (v7 > 0) - 1; /*0x99c076*/
      }
      if ( v7 ) /*0x99c07e*/
        return v7; /*0x99c07e*/
_memcmp___$LN96_0:
      v101 = *(_DWORD *)(v31 + 0xFFFFFFEE); /*0x99c084*/
      if ( v101 == *(_DWORD *)(v32 + 0xFFFFFFEE) ) /*0x99c08a*/
      {
        v7 = 0; /*0x99c109*/
      }
      else
      {
        v102 = (unsigned __int8)v101 - v32[0xFFFFFFEE]; /*0x99c093*/
        if ( v102 ) /*0x99c095*/
        {
          v7 = 2 * (v102 > 0) - 1; /*0x99c0a2*/
          if ( v7 ) /*0x99c0a6*/
            return v7; /*0x99c0a6*/
        }
        v103 = v31[0xFFFFFFEF] - v32[0xFFFFFFEF]; /*0x99c0b4*/
        if ( v103 ) /*0x99c0b6*/
        {
          v7 = 2 * (v103 > 0) - 1; /*0x99c0c3*/
          if ( v7 ) /*0x99c0c7*/
            return v7; /*0x99c0c7*/
        }
        v104 = v31[0xFFFFFFF0] - v32[0xFFFFFFF0]; /*0x99c0d5*/
        if ( v104 ) /*0x99c0d7*/
        {
          v7 = 2 * (v104 > 0) - 1; /*0x99c0e4*/
          if ( v7 ) /*0x99c0e8*/
            return v7; /*0x99c0e8*/
        }
        v7 = v31[0xFFFFFFF1] - v32[0xFFFFFFF1]; /*0x99c0f6*/
        if ( v7 ) /*0x99c0f8*/
          v7 = 2 * (v7 > 0) - 1; /*0x99c105*/
      }
      if ( v7 ) /*0x99c10d*/
        return v7; /*0x99c10d*/
_memcmp___$LN94:
      v105 = *(_DWORD *)(v31 + 0xFFFFFFF2); /*0x99c113*/
      if ( v105 == *(_DWORD *)(v32 + 0xFFFFFFF2) ) /*0x99c119*/
      {
        v7 = 0; /*0x99c198*/
      }
      else
      {
        v106 = (unsigned __int8)v105 - v32[0xFFFFFFF2]; /*0x99c122*/
        if ( v106 ) /*0x99c124*/
        {
          v7 = 2 * (v106 > 0) - 1; /*0x99c131*/
          if ( v7 ) /*0x99c135*/
            return v7; /*0x99c135*/
        }
        v107 = v31[0xFFFFFFF3] - v32[0xFFFFFFF3]; /*0x99c143*/
        if ( v107 ) /*0x99c145*/
        {
          v7 = 2 * (v107 > 0) - 1; /*0x99c152*/
          if ( v7 ) /*0x99c156*/
            return v7; /*0x99c156*/
        }
        v108 = v31[0xFFFFFFF4] - v32[0xFFFFFFF4]; /*0x99c164*/
        if ( v108 ) /*0x99c166*/
        {
          v7 = 2 * (v108 > 0) - 1; /*0x99c173*/
          if ( v7 ) /*0x99c177*/
            return v7; /*0x99c177*/
        }
        v7 = v31[0xFFFFFFF5] - v32[0xFFFFFFF5]; /*0x99c185*/
        if ( v7 ) /*0x99c187*/
          v7 = 2 * (v7 > 0) - 1; /*0x99c194*/
      }
      if ( v7 ) /*0x99c19c*/
        return v7; /*0x99c19c*/
_memcmp___$LN92:
      if ( *(_DWORD *)(v31 + 0xFFFFFFF6) == *(_DWORD *)(v32 + 0xFFFFFFF6) ) /*0x99c1a8*/
      {
        v7 = 0; /*0x99c228*/
      }
      else
      {
        v109 = v31[0xFFFFFFF6] - v32[0xFFFFFFF6]; /*0x99c1b2*/
        if ( v109 ) /*0x99c1b4*/
        {
          v7 = 2 * (v109 > 0) - 1; /*0x99c1c1*/
          if ( v7 ) /*0x99c1c5*/
            return v7; /*0x99c1c5*/
        }
        v110 = v31[0xFFFFFFF7] - v32[0xFFFFFFF7]; /*0x99c1d3*/
        if ( v110 ) /*0x99c1d5*/
        {
          v7 = 2 * (v110 > 0) - 1; /*0x99c1e2*/
          if ( v7 ) /*0x99c1e6*/
            return v7; /*0x99c1e6*/
        }
        v111 = v31[0xFFFFFFF8] - v32[0xFFFFFFF8]; /*0x99c1f4*/
        if ( v111 ) /*0x99c1f6*/
        {
          v7 = 2 * (v111 > 0) - 1; /*0x99c203*/
          if ( v7 ) /*0x99c207*/
            return v7; /*0x99c207*/
        }
        v7 = v31[0xFFFFFFF9] - v32[0xFFFFFFF9]; /*0x99c215*/
        if ( v7 ) /*0x99c217*/
          v7 = 2 * (v7 > 0) - 1; /*0x99c224*/
      }
      if ( v7 ) /*0x99c22c*/
        return v7; /*0x99c22c*/
_memcmp___$LN90:
      v112 = *(_DWORD *)(v31 + 0xFFFFFFFA); /*0x99c232*/
      if ( v112 == *(_DWORD *)(v32 + 0xFFFFFFFA) ) /*0x99c238*/
      {
        v7 = 0; /*0x99c2b7*/
      }
      else
      {
        v113 = (unsigned __int8)v112 - v32[0xFFFFFFFA]; /*0x99c241*/
        if ( v113 ) /*0x99c243*/
        {
          v7 = 2 * (v113 > 0) - 1; /*0x99c250*/
          if ( v7 ) /*0x99c254*/
            return v7; /*0x99c254*/
        }
        v114 = v31[0xFFFFFFFB] - v32[0xFFFFFFFB]; /*0x99c262*/
        if ( v114 ) /*0x99c264*/
        {
          v7 = 2 * (v114 > 0) - 1; /*0x99c271*/
          if ( v7 ) /*0x99c275*/
            return v7; /*0x99c275*/
        }
        v115 = v31[0xFFFFFFFC] - v32[0xFFFFFFFC]; /*0x99c283*/
        if ( v115 ) /*0x99c285*/
        {
          v7 = 2 * (v115 > 0) - 1; /*0x99c292*/
          if ( v7 ) /*0x99c296*/
            return v7; /*0x99c296*/
        }
        v7 = v31[0xFFFFFFFD] - v32[0xFFFFFFFD]; /*0x99c2a4*/
        if ( v7 ) /*0x99c2a6*/
          v7 = 2 * (v7 > 0) - 1; /*0x99c2b3*/
      }
      if ( v7 ) /*0x99c2bb*/
        return v7; /*0x99c2bb*/
_memcmp___$LN88_0:
      if ( *((_WORD *)v31 + 0xFFFFFFFF) == *((_WORD *)v32 + 0xFFFFFFFF) ) /*0x99c2c9*/
        return 0; /*0x99bac3*/
      goto LABEL_336; /*0x99c2c9*/
    case 0x1Fu: /*0x99b6e9*/
      if ( *(_DWORD *)(v31 + 0xFFFFFFE1) == *(_DWORD *)(v32 + 0xFFFFFFE1) ) /*0x99c2fd*/
      {
        v7 = 0; /*0x99c37d*/
      }
      else
      {
        v118 = v31[0xFFFFFFE1] - v32[0xFFFFFFE1]; /*0x99c307*/
        if ( v118 ) /*0x99c309*/
        {
          v7 = 2 * (v118 > 0) - 1; /*0x99c316*/
          if ( v7 ) /*0x99c31a*/
            return v7; /*0x99c31a*/
        }
        v119 = v31[0xFFFFFFE2] - v32[0xFFFFFFE2]; /*0x99c328*/
        if ( v119 ) /*0x99c32a*/
        {
          v7 = 2 * (v119 > 0) - 1; /*0x99c337*/
          if ( v7 ) /*0x99c33b*/
            return v7; /*0x99c33b*/
        }
        v120 = v31[0xFFFFFFE3] - v32[0xFFFFFFE3]; /*0x99c349*/
        if ( v120 ) /*0x99c34b*/
        {
          v7 = 2 * (v120 > 0) - 1; /*0x99c358*/
          if ( v7 ) /*0x99c35c*/
            return v7; /*0x99c35c*/
        }
        v7 = v31[0xFFFFFFE4] - v32[0xFFFFFFE4]; /*0x99c36a*/
        if ( v7 ) /*0x99c36c*/
          v7 = 2 * (v7 > 0) - 1; /*0x99c379*/
      }
      if ( v7 ) /*0x99c381*/
        return v7; /*0x99c381*/
_memcmp___$LN85:
      v121 = *(_DWORD *)(v31 + 0xFFFFFFE5); /*0x99c387*/
      if ( v121 == *(_DWORD *)(v32 + 0xFFFFFFE5) ) /*0x99c38d*/
      {
        v7 = 0; /*0x99c40c*/
      }
      else
      {
        v122 = (unsigned __int8)v121 - v32[0xFFFFFFE5]; /*0x99c396*/
        if ( v122 ) /*0x99c398*/
        {
          v7 = 2 * (v122 > 0) - 1; /*0x99c3a5*/
          if ( v7 ) /*0x99c3a9*/
            return v7; /*0x99c3a9*/
        }
        v123 = v31[0xFFFFFFE6] - v32[0xFFFFFFE6]; /*0x99c3b7*/
        if ( v123 ) /*0x99c3b9*/
        {
          v7 = 2 * (v123 > 0) - 1; /*0x99c3c6*/
          if ( v7 ) /*0x99c3ca*/
            return v7; /*0x99c3ca*/
        }
        v124 = v31[0xFFFFFFE7] - v32[0xFFFFFFE7]; /*0x99c3d8*/
        if ( v124 ) /*0x99c3da*/
        {
          v7 = 2 * (v124 > 0) - 1; /*0x99c3e7*/
          if ( v7 ) /*0x99c3eb*/
            return v7; /*0x99c3eb*/
        }
        v7 = v31[0xFFFFFFE8] - v32[0xFFFFFFE8]; /*0x99c3f9*/
        if ( v7 ) /*0x99c3fb*/
          v7 = 2 * (v7 > 0) - 1; /*0x99c408*/
      }
      if ( v7 ) /*0x99c410*/
        return v7; /*0x99c410*/
_memcmp___$LN83:
      v125 = *(_DWORD *)(v31 + 0xFFFFFFE9); /*0x99c416*/
      if ( v125 == *(_DWORD *)(v32 + 0xFFFFFFE9) ) /*0x99c41c*/
      {
        v7 = 0; /*0x99c49b*/
      }
      else
      {
        v126 = (unsigned __int8)v125 - v32[0xFFFFFFE9]; /*0x99c425*/
        if ( v126 ) /*0x99c427*/
        {
          v7 = 2 * (v126 > 0) - 1; /*0x99c434*/
          if ( v7 ) /*0x99c438*/
            return v7; /*0x99c438*/
        }
        v127 = v31[0xFFFFFFEA] - v32[0xFFFFFFEA]; /*0x99c446*/
        if ( v127 ) /*0x99c448*/
        {
          v7 = 2 * (v127 > 0) - 1; /*0x99c455*/
          if ( v7 ) /*0x99c459*/
            return v7; /*0x99c459*/
        }
        v128 = v31[0xFFFFFFEB] - v32[0xFFFFFFEB]; /*0x99c467*/
        if ( v128 ) /*0x99c469*/
        {
          v7 = 2 * (v128 > 0) - 1; /*0x99c476*/
          if ( v7 ) /*0x99c47a*/
            return v7; /*0x99c47a*/
        }
        v7 = v31[0xFFFFFFEC] - v32[0xFFFFFFEC]; /*0x99c488*/
        if ( v7 ) /*0x99c48a*/
          v7 = 2 * (v7 > 0) - 1; /*0x99c497*/
      }
      if ( v7 ) /*0x99c49f*/
        return v7; /*0x99c49f*/
_memcmp___$LN81:
      v129 = *(_DWORD *)(v31 + 0xFFFFFFED); /*0x99c4a5*/
      if ( v129 == *(_DWORD *)(v32 + 0xFFFFFFED) ) /*0x99c4ab*/
      {
        v7 = 0; /*0x99c52a*/
      }
      else
      {
        v130 = (unsigned __int8)v129 - v32[0xFFFFFFED]; /*0x99c4b4*/
        if ( v130 ) /*0x99c4b6*/
        {
          v7 = 2 * (v130 > 0) - 1; /*0x99c4c3*/
          if ( v7 ) /*0x99c4c7*/
            return v7; /*0x99c4c7*/
        }
        v131 = v31[0xFFFFFFEE] - v32[0xFFFFFFEE]; /*0x99c4d5*/
        if ( v131 ) /*0x99c4d7*/
        {
          v7 = 2 * (v131 > 0) - 1; /*0x99c4e4*/
          if ( v7 ) /*0x99c4e8*/
            return v7; /*0x99c4e8*/
        }
        v132 = v31[0xFFFFFFEF] - v32[0xFFFFFFEF]; /*0x99c4f6*/
        if ( v132 ) /*0x99c4f8*/
        {
          v7 = 2 * (v132 > 0) - 1; /*0x99c505*/
          if ( v7 ) /*0x99c509*/
            return v7; /*0x99c509*/
        }
        v7 = v31[0xFFFFFFF0] - v32[0xFFFFFFF0]; /*0x99c517*/
        if ( v7 ) /*0x99c519*/
          v7 = 2 * (v7 > 0) - 1; /*0x99c526*/
      }
      if ( v7 ) /*0x99c52e*/
        return v7; /*0x99c52e*/
_memcmp___$LN79:
      if ( *(_DWORD *)(v31 + 0xFFFFFFF1) == *(_DWORD *)(v32 + 0xFFFFFFF1) ) /*0x99c53a*/
      {
        v7 = 0; /*0x99c5ba*/
      }
      else
      {
        v133 = v31[0xFFFFFFF1] - v32[0xFFFFFFF1]; /*0x99c544*/
        if ( v133 ) /*0x99c546*/
        {
          v7 = 2 * (v133 > 0) - 1; /*0x99c553*/
          if ( v7 ) /*0x99c557*/
            return v7; /*0x99c557*/
        }
        v134 = v31[0xFFFFFFF2] - v32[0xFFFFFFF2]; /*0x99c565*/
        if ( v134 ) /*0x99c567*/
        {
          v7 = 2 * (v134 > 0) - 1; /*0x99c574*/
          if ( v7 ) /*0x99c578*/
            return v7; /*0x99c578*/
        }
        v135 = v31[0xFFFFFFF3] - v32[0xFFFFFFF3]; /*0x99c586*/
        if ( v135 ) /*0x99c588*/
        {
          v7 = 2 * (v135 > 0) - 1; /*0x99c595*/
          if ( v7 ) /*0x99c599*/
            return v7; /*0x99c599*/
        }
        v7 = v31[0xFFFFFFF4] - v32[0xFFFFFFF4]; /*0x99c5a7*/
        if ( v7 ) /*0x99c5a9*/
          v7 = 2 * (v7 > 0) - 1; /*0x99c5b6*/
      }
      if ( v7 ) /*0x99c5be*/
        return v7; /*0x99c5be*/
_memcmp___$LN77:
      v136 = *(_DWORD *)(v31 + 0xFFFFFFF5); /*0x99c5c4*/
      if ( v136 == *(_DWORD *)(v32 + 0xFFFFFFF5) ) /*0x99c5ca*/
      {
        v7 = 0; /*0x99c649*/
      }
      else
      {
        v137 = (unsigned __int8)v136 - v32[0xFFFFFFF5]; /*0x99c5d3*/
        if ( v137 ) /*0x99c5d5*/
        {
          v7 = 2 * (v137 > 0) - 1; /*0x99c5e2*/
          if ( v7 ) /*0x99c5e6*/
            return v7; /*0x99c5e6*/
        }
        v138 = v31[0xFFFFFFF6] - v32[0xFFFFFFF6]; /*0x99c5f4*/
        if ( v138 ) /*0x99c5f6*/
        {
          v7 = 2 * (v138 > 0) - 1; /*0x99c603*/
          if ( v7 ) /*0x99c607*/
            return v7; /*0x99c607*/
        }
        v139 = v31[0xFFFFFFF7] - v32[0xFFFFFFF7]; /*0x99c615*/
        if ( v139 ) /*0x99c617*/
        {
          v7 = 2 * (v139 > 0) - 1; /*0x99c624*/
          if ( v7 ) /*0x99c628*/
            return v7; /*0x99c628*/
        }
        v7 = v31[0xFFFFFFF8] - v32[0xFFFFFFF8]; /*0x99c636*/
        if ( v7 ) /*0x99c638*/
          v7 = 2 * (v7 > 0) - 1; /*0x99c645*/
      }
      if ( v7 ) /*0x99c64d*/
        return v7; /*0x99c64d*/
_memcmp___$LN75_0:
      v140 = *(_DWORD *)(v31 + 0xFFFFFFF9); /*0x99c653*/
      if ( v140 != *(_DWORD *)(v32 + 0xFFFFFFF9) ) /*0x99c659*/
      {
        v141 = (unsigned __int8)v140 - v32[0xFFFFFFF9]; /*0x99c662*/
        if ( !v141 || (v7 = 2 * (v141 > 0) - 1) == 0 ) /*0x99c675*/
        {
          v142 = v31[0xFFFFFFFA] - v32[0xFFFFFFFA]; /*0x99c683*/
          if ( !v142 || (v7 = 2 * (v142 > 0) - 1) == 0 ) /*0x99c696*/
          {
            v143 = v31[0xFFFFFFFB] - v32[0xFFFFFFFB]; /*0x99c6a4*/
            if ( !v143 || (v7 = 2 * (v143 > 0) - 1) == 0 ) /*0x99c6b7*/
            {
              v7 = v31[0xFFFFFFFC] - v32[0xFFFFFFFC]; /*0x99c6c5*/
              if ( v7 ) /*0x99c6c7*/
                v7 = 2 * (v7 > 0) - 1; /*0x99c6d4*/
              goto LABEL_415; /*0x99c6d6*/
            }
          }
        }
        return v7; /*0x99b6f2*/
      }
      v7 = 0; /*0x99c6d8*/
LABEL_415:
      if ( v7 ) /*0x99c6dc*/
        return v7; /*0x99c6dc*/
_memcmp___$LN73:
      v144 = v31[0xFFFFFFFD] - v32[0xFFFFFFFD]; /*0x99c6e2*/
      if ( v144 ) /*0x99c6ec*/
      {
        v117 = 2 * (v144 > 0) - 1; /*0x99c6f9*/
        if ( 2 * (v144 > 0) != 1 ) /*0x99c6ff*/
          return v117; /*0x99c6ff*/
      }
LABEL_336:
      v116 = v31[0xFFFFFFFE] - v32[0xFFFFFFFE]; /*0x99c2cf*/
      if ( v116 ) /*0x99c2d9*/
      {
        v117 = 2 * (v116 > 0) - 1; /*0x99c2e6*/
        if ( 2 * (v116 > 0) != 1 ) /*0x99c2ec*/
          return v117; /*0x99c707*/
      }
_memcmp___$LN103:
      result = v31[0xFFFFFFFF] - v32[0xFFFFFFFF]; /*0x99beb5*/
      if ( result ) /*0x99bebf*/
        return 2 * (result > 0) - 1; /*0x99bed0*/
      return result;
    default:
      return 0;
  }
}
