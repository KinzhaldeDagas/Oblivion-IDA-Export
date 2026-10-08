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

  v1 = this; /*0x8d8bfd*/
  v2 = v85; /*0x8d8c00*/
  v82 = v85; /*0x8d8c09*/
  v83 = 0; /*0x8d8c0d*/
  v84 = 0x80000010; /*0x8d8c15*/
  v3 = 0x10; /*0x8d8c1d*/
  do /*0x8d8c29*/
  {
    *v2 = 0; /*0x8d8c22*/
    v2 += 0x14; /*0x8d8c25*/
    --v3; /*0x8d8c28*/
  }
  while ( v3 ); /*0x8d8c29*/
  v4 = (_DWORD *)*v1; /*0x8d8c2f*/
  v5 = v1[1]; /*0x8d8c31*/
  *v1 = (int)v82; /*0x8d8c34*/
  v1[1] = v83; /*0x8d8c3a*/
  v82 = v4; /*0x8d8c41*/
  v6 = v1[2]; /*0x8d8c45*/
  v1[2] = v84; /*0x8d8c48*/
  v7 = v1[3]; /*0x8d8c4b*/
  v83 = v5; /*0x8d8c4e*/
  v84 = v6; /*0x8d8c52*/
  ++*(_DWORD *)(v7 + 0x98); /*0x8d8c56*/
  v8 = 0; /*0x8d8c60*/
  for ( i = 0; i < v83; ++i ) /*0x8d8c68*/
  {
    v9 = &v82[5 * v8]; /*0x8d8c77*/
    switch ( *(_BYTE *)v9 ) /*0x8d8c87*/
    {
      case 1: /*0x8d8c87*/
        v10 = (_DWORD *)v9[1]; /*0x8d8c8e*/
        if ( !v10[2] ) /*0x8d8c91*/
          sub_8994E0((_DWORD *)v1[3], v10, v9[2]); /*0x8d8ca4*/
        goto LABEL_117; /*0x8d8ca9*/
      case 2: /*0x8d8c87*/
        v11 = (_DWORD *)v1[3]; /*0x8d8cb1*/
        if ( *(_DWORD **)(v9[1] + 8) == v11 ) /*0x8d8cb7*/
          sub_8996C0(v11, &v72, (int (__stdcall ***)(signed int))v9[1]); /*0x8d8cc3*/
        goto LABEL_117; /*0x8d8cc8*/
      case 3: /*0x8d8c87*/
        v43 = v1[3]; /*0x8d90c9*/
        if ( *(_DWORD *)(v9[1] + 8) == v43 ) /*0x8d90cf*/
          sub_8CC570(v43, v9[1]); /*0x8d90d3*/
        sub_8BC730((int (__thiscall ***)(int (__stdcall ***)(signed int), int))v9[1]); /*0x8d90de*/
        goto LABEL_21; /*0x8d90e3*/
      case 4: /*0x8d8c87*/
        sub_8A9AB0( /*0x8d8cdf*/
          v9[1],
          (int)&savedregs,
          (int)v9,
          *((unsigned __int8 *)v9 + 8),
          *((unsigned __int8 *)v9 + 9),
          *((unsigned __int8 *)v9 + 0xA));
        goto LABEL_127; /*0x8d8ce4*/
      case 5: /*0x8d8c87*/
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v9[1] + 8))(v9[1], v9[2]); /*0x8d8cf2*/
        v12 = v9[1]; /*0x8d8cf5*/
        if ( *(_WORD *)(v12 + 4) ) /*0x8d8cf8*/
        {
          if ( !--*(_WORD *)(v12 + 6) ) /*0x8d8d03*/
            (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x8d8d0e*/
        }
        v13 = v9[2]; /*0x8d8d10*/
        goto LABEL_128; /*0x8d8d13*/
      case 6: /*0x8d8c87*/
        sub_89C310((_DWORD *)*(this + 3), v9[1], *((unsigned __int16 *)v9 + 4), *((unsigned __int8 *)v9 + 0xA)); /*0x8d8d2d*/
        v14 = (int *)v9[1]; /*0x8d8d36*/
        for ( j = (unsigned int)&v14[*((unsigned __int16 *)v9 + 4)]; (unsigned int)v14 < j; ++v14 ) /*0x8d8d3e*/
        {
          v16 = *v14; /*0x8d8d40*/
          if ( *(_WORD *)(*v14 + 4) ) /*0x8d8d42*/
          {
            if ( !--*(_WORD *)(v16 + 6) ) /*0x8d8d4d*/
              (**(void (__thiscall ***)(int, int))v16)(v16, 1); /*0x8d8d58*/
          }
        }
        goto LABEL_19; /*0x8d8d5f*/
      case 7: /*0x8d8c87*/
        sub_89C8E0((_DWORD *)*(this + 3), (int *)v9[1], *((unsigned __int16 *)v9 + 4)); /*0x8d8e29*/
        v23 = (int *)v9[1]; /*0x8d8e32*/
        for ( k = (unsigned int)&v23[*((unsigned __int16 *)v9 + 4)]; (unsigned int)v23 < k; ++v23 ) /*0x8d8e3a*/
        {
          v25 = *v23; /*0x8d8e40*/
          if ( *(_WORD *)(*v23 + 4) ) /*0x8d8e42*/
          {
            if ( !--*(_WORD *)(v25 + 6) ) /*0x8d8e4d*/
              (**(void (__thiscall ***)(int, int))v25)(v25, 1); /*0x8d8e58*/
          }
        }
        goto LABEL_19; /*0x8d8e5f*/
      case 8: /*0x8d8c87*/
        v26 = (_DWORD *)v9[1]; /*0x8d8e66*/
        if ( !v26[2] ) /*0x8d8e69*/
        {
          v27 = v1[3]; /*0x8d8e73*/
          if ( *(_DWORD *)(v26[4] + 8) == v27 && *(_DWORD *)(v26[5] + 8) == v27 ) /*0x8d8e81*/
            sub_8988A0(v27, (int)&savedregs, (_DWORD *)v9[1]); /*0x8d8e84*/
        }
        goto LABEL_39; /*0x8d8e84*/
      case 9: /*0x8d8c87*/
        if ( *(_DWORD *)(v9[1] + 8) ) /*0x8d8eb6*/
          sub_8988F0((int *)v1[3], &v71, v9[1]); /*0x8d8eca*/
        goto LABEL_117; /*0x8d8ecf*/
      case 0xA: /*0x8d8c87*/
        if ( *(_DWORD *)(v9[1] + 8) ) /*0x8d8ed7*/
          goto LABEL_117; /*0x8d8edc*/
        v28 = v9[1]; /*0x8d8ee2*/
        v74 = 0; /*0x8d8eea*/
        v75 = 0; /*0x8d8eee*/
        v76 = 0x80000000; /*0x8d8ef2*/
        (*(void (__thiscall **)(int, _DWORD **))(*(_DWORD *)v28 + 0xC))(v28, &v74); /*0x8d8efd*/
        v29 = 0; /*0x8d8f04*/
        if ( v75 <= 0 ) /*0x8d8f08*/
          goto LABEL_51; /*0x8d8f08*/
        v30 = v74; /*0x8d8f0d*/
        break; /*0x8d8f0d*/
      case 0xB: /*0x8d8c87*/
        if ( *(_DWORD *)(v9[1] + 0xC) ) /*0x8d8f7d*/
          sub_89CCC0((int *)v1[3], v9[1]); /*0x8d8f8c*/
        goto LABEL_39; /*0x8d8f91*/
      case 0xC: /*0x8d8c87*/
        v32 = v9[1]; /*0x8d8f96*/
        v33 = v1[3]; /*0x8d8f99*/
        if ( *(_DWORD *)(v32 + 8) == v33 ) /*0x8d8f9f*/
        {
          v34 = v9[2]; /*0x8d8fa1*/
          if ( *(_DWORD *)(v34 + 8) == v33 /*0x8d8fc3*/
            && !*(_BYTE *)(v32 + 0x91)
            && !*(_BYTE *)(v34 + 0x91)
            && *(_DWORD *)(v32 + 0x54) != *(_DWORD *)(v34 + 0x54) )
          {
            sub_8CD320(*(int **)(v32 + 8), v32, v9[2]); /*0x8d8fcb*/
          }
        }
        v35 = v9[1]; /*0x8d8fd3*/
        if ( *(_WORD *)(v35 + 4) ) /*0x8d8fd6*/
        {
          if ( !--*(_WORD *)(v35 + 6) ) /*0x8d8fe1*/
            (**(void (__thiscall ***)(int, int))v35)(v35, 1); /*0x8d8fec*/
        }
        v13 = v9[2]; /*0x8d8fee*/
        goto LABEL_40; /*0x8d8ff1*/
      case 0xD: /*0x8d8c87*/
        if ( !*(_DWORD *)(v9[1] + 8) ) /*0x8d8ff9*/
          sub_899A50((_DWORD *)v1[3], (int *)v9[1]); /*0x8d9008*/
        goto LABEL_117; /*0x8d900d*/
      case 0xE: /*0x8d8c87*/
        v36 = (_DWORD *)v1[3]; /*0x8d9015*/
        if ( *(_DWORD **)(v9[1] + 8) == v36 ) /*0x8d901b*/
          sub_899B30(v36, (int (__stdcall ***)(signed int))v9[1]); /*0x8d9022*/
        goto LABEL_39; /*0x8d9027*/
      case 0xF: /*0x8d8c87*/
        sub_89CD00((_DWORD *)*(this + 3), v9[1], *((unsigned __int16 *)v9 + 4)); /*0x8d903c*/
        v37 = (int *)v9[1]; /*0x8d9045*/
        for ( m = (unsigned int)&v37[*((unsigned __int16 *)v9 + 4)]; (unsigned int)v37 < m; ++v37 ) /*0x8d904d*/
        {
          v39 = *v37; /*0x8d9053*/
          if ( *(_WORD *)(*v37 + 4) ) /*0x8d9055*/
          {
            if ( !--*(_WORD *)(v39 + 6) ) /*0x8d9060*/
              (**(void (__thiscall ***)(int, int))v39)(v39, 1); /*0x8d906b*/
          }
        }
        goto LABEL_19; /*0x8d9072*/
      case 0x10: /*0x8d8c87*/
        sub_89D080((_DWORD *)*(this + 3), v9[1], *((unsigned __int16 *)v9 + 4)); /*0x8d9089*/
        v40 = (int *)v9[1]; /*0x8d9092*/
        for ( n = (unsigned int)&v40[*((unsigned __int16 *)v9 + 4)]; (unsigned int)v40 < n; ++v40 ) /*0x8d909a*/
        {
          v42 = *v40; /*0x8d90a0*/
          if ( *(_WORD *)(*v40 + 4) ) /*0x8d90a2*/
          {
            if ( !--*(_WORD *)(v42 + 6) ) /*0x8d90ad*/
              (**(void (__thiscall ***)(int, int))v42)(v42, 1); /*0x8d90b8*/
          }
        }
        goto LABEL_19; /*0x8d90bf*/
      case 0x11: /*0x8d8c87*/
        v44 = (_DWORD *)v9[1]; /*0x8d90e8*/
        if ( v44[2] == v1[3] ) /*0x8d90f1*/
          sub_8DE950(v44, v9[2]); /*0x8d90f7*/
        v45 = v9[1]; /*0x8d90fc*/
        if ( *(_WORD *)(v45 + 4) ) /*0x8d90ff*/
        {
          if ( !--*(_WORD *)(v45 + 6) ) /*0x8d910a*/
            (**(void (__thiscall ***)(int, int))v45)(v45, 1); /*0x8d9115*/
        }
        (*(void (__thiscall **)(_DWORD, _DWORD, int, int))(*(_DWORD *)LODWORD(OB_ShaderConstantStorage_010201A0[0x187E1]) /*0x8d9127*/
                                                         + 0x14))(
          LODWORD(OB_ShaderConstantStorage_010201A0[0x187E1]),
          v9[2],
          0x20,
          0x24);
        goto LABEL_21; /*0x8d912a*/
      case 0x12: /*0x8d8c87*/
        v46 = v9[1]; /*0x8d912f*/
        v47 = (int *)v1[3]; /*0x8d9132*/
        if ( *(int **)(v46 + 8) == v47 ) /*0x8d9138*/
          sub_89B630(v47, v46, *((unsigned __int8 *)v9 + 8), *((unsigned __int8 *)v9 + 9)); /*0x8d9149*/
        goto LABEL_39; /*0x8d914e*/
      case 0x13: /*0x8d8c87*/
        v48 = v9[1]; /*0x8d9153*/
        v49 = (_DWORD *)v1[3]; /*0x8d9156*/
        if ( *(_DWORD **)(v48 + 8) == v49 ) /*0x8d915c*/
          sub_89B390(v49, v48, *((unsigned __int8 *)v9 + 8)); /*0x8d9168*/
LABEL_39:
        v13 = v9[1]; /*0x8d8e89*/
LABEL_40:
        if ( *(_WORD *)(v13 + 4) ) /*0x8d8e8c*/
        {
          if ( !--*(_WORD *)(v13 + 6) ) /*0x8d8e9b*/
            goto LABEL_130; /*0x8d8ea0*/
        }
        goto LABEL_21; /*0x8d8ea0*/
      case 0x14: /*0x8d8c87*/
        sub_89BF50(v1[3], *((unsigned __int8 *)v9 + 1), *((unsigned __int8 *)v9 + 2)); /*0x8d917f*/
        goto LABEL_21; /*0x8d9184*/
      case 0x15: /*0x8d8c87*/
        sub_8A9D10(v9[1]); /*0x8d918d*/
        goto LABEL_112; /*0x8d9195*/
      case 0x16: /*0x8d8c87*/
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(*(this + 3) + 8) + 0x14))( /*0x8d93cc*/
          *(_DWORD *)(*(this + 3) + 8),
          v9[1],
          *((unsigned __int16 *)v9 + 4),
          *(this + 3));
        v67 = (int *)v9[1]; /*0x8d93d3*/
        for ( ii = (unsigned int)&v67[*((unsigned __int16 *)v9 + 4)]; (unsigned int)v67 < ii; ++v67 ) /*0x8d93db*/
        {
          v69 = *v67; /*0x8d93e0*/
          if ( *(_WORD *)(*v67 + 4) ) /*0x8d93e2*/
          {
            if ( !--*(_WORD *)(v69 + 6) ) /*0x8d93ed*/
              (**(void (__thiscall ***)(int, int))v69)(v69, 1); /*0x8d93f8*/
          }
        }
LABEL_19:
        (*(void (__thiscall **)(_DWORD, _DWORD, int, int))(*(_DWORD *)LODWORD(OB_ShaderConstantStorage_010201A0[0x187E1]) /*0x8d8d61*/
                                                         + 0x14))(
          LODWORD(OB_ShaderConstantStorage_010201A0[0x187E1]),
          v9[1],
          4 * *((unsigned __int16 *)v9 + 4),
          4);
        goto LABEL_20; /*0x8d8d77*/
      case 0x17: /*0x8d8c87*/
        sub_8A9E20((_DWORD **)v9[1], v9[2], v9[2] + 0x10); /*0x8d91a5*/
        (*(void (__thiscall **)(_DWORD, _DWORD, int, int))(*(_DWORD *)LODWORD(OB_ShaderConstantStorage_010201A0[0x187E1]) /*0x8d91ba*/
                                                         + 0x14))(
          LODWORD(OB_ShaderConstantStorage_010201A0[0x187E1]),
          v9[2],
          0x20,
          4);
        v50 = v9[1]; /*0x8d91bd*/
        if ( !*(_WORD *)(v50 + 4) ) /*0x8d91c0*/
          goto LABEL_20; /*0x8d91c0*/
        if ( --*(_WORD *)(v50 + 6) ) /*0x8d91cf*/
          goto LABEL_20; /*0x8d91d4*/
        (**(void (__thiscall ***)(int, int))v50)(v50, 1); /*0x8d91de*/
        goto LABEL_21; /*0x8d91e0*/
      case 0x18: /*0x8d8c87*/
        v51 = v9[1]; /*0x8d91e8*/
        v52 = v9[2]; /*0x8d91eb*/
        v53 = v9[4]; /*0x8d91ee*/
        v81[1] = v9[3]; /*0x8d91f1*/
        v81[0] = v52; /*0x8d91f7*/
        v81[2] = v53; /*0x8d91fb*/
        v81[3] = 0; /*0x8d91ff*/
        sub_8A6410(v51); /*0x8d9207*/
        (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(v51 + 0x50) + 0x54))(*(_DWORD *)(v51 + 0x50), v81); /*0x8d9216*/
        goto LABEL_127; /*0x8d9219*/
      case 0x19: /*0x8d8c87*/
        v54 = v9[1]; /*0x8d9221*/
        v55 = v9[3]; /*0x8d9224*/
        v56 = v9[4]; /*0x8d9227*/
        v78[0] = v9[2]; /*0x8d922a*/
        v78[1] = v55; /*0x8d9230*/
        v78[2] = v56; /*0x8d9234*/
        v78[3] = 0; /*0x8d9238*/
        sub_8A6410(v54); /*0x8d9240*/
        (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(v54 + 0x50) + 0x58))(*(_DWORD *)(v54 + 0x50), v78); /*0x8d924f*/
        goto LABEL_112; /*0x8d9252*/
      case 0x1A: /*0x8d8c87*/
        v57 = v9[1]; /*0x8d925a*/
        v58 = v9[2]; /*0x8d925d*/
        v59 = v9[4]; /*0x8d9260*/
        v79[1] = v9[3]; /*0x8d9263*/
        v79[0] = v58; /*0x8d9269*/
        v79[2] = v59; /*0x8d926d*/
        v79[3] = 0; /*0x8d9271*/
        sub_8A6410(v57); /*0x8d9279*/
        (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(v57 + 0x50) + 0x5C))(*(_DWORD *)(v57 + 0x50), v79); /*0x8d9288*/
        goto LABEL_127; /*0x8d928b*/
      case 0x1B: /*0x8d8c87*/
        v60 = v9[2]; /*0x8d9290*/
        v61 = v9[1]; /*0x8d9293*/
        v77 = v60 + 0x10; /*0x8d9299*/
        sub_8A6410(v61); /*0x8d929f*/
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(v61 + 0x50) + 0x60))(*(_DWORD *)(v61 + 0x50), v77, v60); /*0x8d92af*/
        (*(void (__thiscall **)(_DWORD, _DWORD, int, int))(*(_DWORD *)LODWORD(OB_ShaderConstantStorage_010201A0[0x187E1]) /*0x8d92c2*/
                                                         + 0x14))(
          LODWORD(OB_ShaderConstantStorage_010201A0[0x187E1]),
          v9[2],
          0x20,
          4);
        v62 = v9[1]; /*0x8d92c5*/
        if ( *(_WORD *)(v62 + 4) ) /*0x8d92c8*/
        {
          if ( !--*(_WORD *)(v62 + 6) ) /*0x8d92d7*/
            (**(void (__thiscall ***)(int, int))v62)(v62, 1); /*0x8d92e6*/
        }
        goto LABEL_20; /*0x8d92e8*/
      case 0x1C: /*0x8d8c87*/
        v63 = v9[1]; /*0x8d92f0*/
        v64 = v9[2]; /*0x8d92f3*/
        v65 = v9[4]; /*0x8d92f6*/
        v80[1] = v9[3]; /*0x8d92f9*/
        v80[0] = v64; /*0x8d92ff*/
        v80[2] = v65; /*0x8d9303*/
        v80[3] = 0; /*0x8d9307*/
        sub_8A6410(v63); /*0x8d930f*/
        (*(void (__thiscall **)(_DWORD, _DWORD *))(**(_DWORD **)(v63 + 0x50) + 0x64))(*(_DWORD *)(v63 + 0x50), v80); /*0x8d931e*/
        goto LABEL_127; /*0x8d9321*/
      case 0x1F: /*0x8d8c87*/
        sub_8998A0((int *)v1[3], (const void *)v9[1]); /*0x8d932d*/
        (*(void (__thiscall **)(_DWORD, _DWORD, int, int))(*(_DWORD *)LODWORD(OB_ShaderConstantStorage_010201A0[0x187E1]) /*0x8d9342*/
                                                         + 0x14))(
          LODWORD(OB_ShaderConstantStorage_010201A0[0x187E1]),
          v9[1],
          0x20,
          4);
        goto LABEL_21; /*0x8d9345*/
      case 0x20: /*0x8d8c87*/
        sub_8A6410(v9[1]); /*0x8d934d*/
LABEL_112:
        v13 = v9[1]; /*0x8d9352*/
        if ( *(_WORD *)(v13 + 4) ) /*0x8d9355*/
        {
          if ( !--*(_WORD *)(v13 + 6) ) /*0x8d9364*/
            goto LABEL_130; /*0x8d9369*/
        }
        goto LABEL_20; /*0x8d9369*/
      case 0x21: /*0x8d8c87*/
        v66 = (int *)v9[1]; /*0x8d937c*/
        if ( v66[2] == v1[3] ) /*0x8d9385*/
          sub_8A6440(v66); /*0x8d9387*/
        goto LABEL_117; /*0x8d9387*/
      case 0x22: /*0x8d8c87*/
        (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v9[1] + 8))(v9[1], v9[2]); /*0x8d9428*/
LABEL_127:
        v13 = v9[1]; /*0x8d942b*/
LABEL_128:
        if ( *(_WORD *)(v13 + 4) ) /*0x8d942e*/
        {
          if ( !--*(_WORD *)(v13 + 6) ) /*0x8d943d*/
            goto LABEL_130; /*0x8d9442*/
        }
LABEL_20:
        v1 = this; /*0x8d8d7a*/
        goto LABEL_21; /*0x8d8d7a*/
      default:
        goto LABEL_21;
    }
    do /*0x8d8f1c*/
    {
      if ( *(_DWORD *)(v74[v29] + 8) != v1[3] ) /*0x8d8f17*/
      {
        v1 = this; /*0x8d8f34*/
        goto LABEL_53; /*0x8d8f34*/
      }
      ++v29; /*0x8d8f19*/
    }
    while ( v29 < v75 ); /*0x8d8f1c*/
    v1 = this; /*0x8d8f1e*/
LABEL_51:
    sub_89BAE0((int *)v1[3], v9[1]); /*0x8d8f22*/
    v30 = v74; /*0x8d8f2e*/
LABEL_53:
    if ( v76 >= 0 ) /*0x8d8f3e*/
    {
      v31 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer /*0x8d8f54*/
                        + LODWORD(OB_ShaderConstantStorage_010201A0[0x18FF4]))
                      + 0x19C);
      if ( !v31 ) /*0x8d8f5c*/
        v31 = LODWORD(OB_ShaderConstantStorage_010201A0[0x187E2]); /*0x8d8f5e*/
      sub_8A75D0(v31, v30, 4 * v76, 0x14); /*0x8d8f70*/
    }
LABEL_117:
    v13 = v9[1]; /*0x8d938c*/
    if ( *(_WORD *)(v13 + 4) ) /*0x8d938f*/
    {
      if ( !--*(_WORD *)(v13 + 6) ) /*0x8d939e*/
LABEL_130:
        (**(void (__thiscall ***)(int, int))v13)(v13, 1); /*0x8d9448*/
    }
LABEL_21:
    if ( v1[1] ) /*0x8d8d7e*/
      sub_8D8BF0(v1); /*0x8d8d87*/
    v8 = i + 1; /*0x8d8d94*/
  }
  v17 = (_DWORD *)*v1; /*0x8d8da5*/
  v18 = v1[1]; /*0x8d8da7*/
  *v1 = (int)v82; /*0x8d8daa*/
  v82 = v17; /*0x8d8db0*/
  v19 = v1[2]; /*0x8d8db4*/
  v1[2] = v84; /*0x8d8db7*/
  v20 = v1[3]; /*0x8d8dba*/
  v83 = v18; /*0x8d8dbd*/
  v84 = v19; /*0x8d8dc1*/
  v1[1] = 0; /*0x8d8dc5*/
  --*(_DWORD *)(v20 + 0x98); /*0x8d8dcc*/
  result = v84; /*0x8d8dd2*/
  if ( v84 >= 0 ) /*0x8d8dd8*/
  {
    v22 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer /*0x8d8dea*/
                      + LODWORD(OB_ShaderConstantStorage_010201A0[0x18FF4]))
                    + 0x19C);
    if ( !v22 ) /*0x8d8df2*/
      v22 = LODWORD(OB_ShaderConstantStorage_010201A0[0x187E2]); /*0x8d8df4*/
    return sub_8A75D0(v22, v82, 0x14 * (v84 & 0x3FFFFFFF), 0x14); /*0x8d8e0d*/
  }
  return result; /*0x8d8e12*/
}
