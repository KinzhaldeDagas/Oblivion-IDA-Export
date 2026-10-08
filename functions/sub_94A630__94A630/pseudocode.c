int __thiscall sub_94A630(int *this, __m128 *a2, __m128 *a3, const void **a4)
{
  __int32 v5; // ecx
  int v6; // eax
  _OWORD *v7; // edi
  const void **v8; // esi
  int result; // eax
  __int32 v10; // ecx
  int v11; // eax
  __m128 v12; // xmm0
  __m128 *v13; // esi
  bool v14; // cc
  __m128 v15; // xmm1
  int v16; // eax
  int v17; // ecx
  __m128 v18; // xmm0
  _WORD *v19; // eax
  _WORD *v20; // eax
  _WORD *v21; // edi
  const void **v22; // esi
  int v23; // esi
  __int32 v24; // eax
  int v25; // edi
  __m128 v26; // xmm0
  int v27; // eax
  int v28; // eax
  __m128 v29; // xmm0
  __m128 *v30; // ecx
  int v31; // edi
  int v32; // eax
  int v33; // eax
  __m128 v34; // xmm0
  int v35; // edi
  int v36; // eax
  int v37; // eax
  __m128 v38; // xmm0
  int v39; // edi
  int v40; // eax
  int v41; // eax
  _DWORD *v42; // eax
  _WORD *v43; // eax
  __m128 v44; // xmm0
  int i; // esi
  __m128 *v46; // eax
  int v47; // esi
  __int32 v48; // ecx
  int v49; // edi
  int v50; // eax
  int v51; // eax
  int v52; // edi
  int v53; // eax
  int v54; // eax
  int v55; // edi
  int v56; // eax
  int v57; // eax
  int v58; // ebx
  int v59; // eax
  int v60; // esi
  int v61; // edi
  int v62; // eax
  int v63; // eax
  __int32 v64; // edi
  int v65; // edi
  int v66; // eax
  __int32 v67; // ebx
  int v68; // ebx
  int v69; // esi
  const void **v70; // eax
  const void **v71; // esi
  _WORD *v72; // eax
  _WORD *v73; // ebx
  __int32 v74; // eax
  _DWORD *ThreadLocalStoragePointer; // ebx
  bool v76; // sf
  int v77; // esi
  int v78; // ecx
  int v79; // ecx
  _DWORD *v80; // eax
  const void **v81; // esi
  int v82; // eax
  int v83; // eax
  char *v84; // edx
  char *v85; // eax
  char *v86; // ecx
  int v87; // edi
  int v88; // eax
  int v89; // eax
  __m128 *v90; // ecx
  bool v91; // zf
  _WORD *v92; // eax
  _WORD *v93; // edi
  __int32 v94; // edi
  __int32 v95; // edx
  double v96; // st7
  _DWORD *v97; // esi
  __int32 v98; // edx
  __int32 v99; // edx
  __int32 v100; // edx
  int v101; // eax
  int v102; // ecx
  int v103; // eax
  int v104; // eax
  int v105; // eax
  int v106; // eax
  int v107; // eax
  int v108; // eax
  int v109; // eax
  int v110; // eax
  int v111; // eax
  char v112; // cl
  int v113; // eax
  int v114; // ecx
  int v115; // edx
  int v116; // ecx
  int v117; // eax
  _DWORD *v118; // ecx
  int v119; // eax
  int v120; // edx
  int v121; // ecx
  int v122; // eax
  _DWORD *v123; // ecx
  int v124; // ecx
  int v125; // eax
  int v126; // edx
  _DWORD *v127; // eax
  int v128; // ecx
  int v129; // eax
  int v130; // eax
  _DWORD *v131; // eax
  int v132; // ecx
  int v133; // edx
  __int32 v134; // esi
  int v135; // [esp+8h] [ebp-31Ch]
  __m128 *v136; // [esp+10h] [ebp-314h]
  __m128 *v137; // [esp+2Ch] [ebp-2F8h]
  int v138; // [esp+2Ch] [ebp-2F8h]
  __m128 *v139; // [esp+2Ch] [ebp-2F8h]
  int v140; // [esp+2Ch] [ebp-2F8h]
  int v141; // [esp+2Ch] [ebp-2F8h]
  int v142; // [esp+30h] [ebp-2F4h]
  int v143; // [esp+30h] [ebp-2F4h]
  __int32 v144; // [esp+30h] [ebp-2F4h]
  const void *v145; // [esp+30h] [ebp-2F4h]
  int v146; // [esp+30h] [ebp-2F4h]
  __int32 v147; // [esp+30h] [ebp-2F4h]
  int k; // [esp+30h] [ebp-2F4h]
  int v150; // [esp+34h] [ebp-2F0h]
  __int32 j; // [esp+34h] [ebp-2F0h]
  __int32 v152; // [esp+34h] [ebp-2F0h]
  float v153; // [esp+38h] [ebp-2ECh]
  int v154; // [esp+38h] [ebp-2ECh]
  int v155; // [esp+38h] [ebp-2ECh]
  int v156; // [esp+38h] [ebp-2ECh]
  int v157; // [esp+38h] [ebp-2ECh]
  int v158; // [esp+3Ch] [ebp-2E8h]
  int v159; // [esp+3Ch] [ebp-2E8h]
  int v160; // [esp+3Ch] [ebp-2E8h]
  const void *v161; // [esp+3Ch] [ebp-2E8h]
  __int32 v162; // [esp+3Ch] [ebp-2E8h]
  unsigned int v163; // [esp+40h] [ebp-2E4h]
  int v164; // [esp+40h] [ebp-2E4h]
  int v165; // [esp+40h] [ebp-2E4h]
  __m128 v166; // [esp+44h] [ebp-2E0h] BYREF
  __m128 v167; // [esp+54h] [ebp-2D0h] BYREF
  __m128 v168; // [esp+64h] [ebp-2C0h] BYREF
  int v169; // [esp+74h] [ebp-2B0h] BYREF
  char v170; // [esp+78h] [ebp-2ACh]
  char v171; // [esp+7Fh] [ebp-2A5h] BYREF
  float v172; // [esp+80h] [ebp-2A4h]
  __m128 v173; // [esp+84h] [ebp-2A0h] BYREF
  __m128 v174; // [esp+94h] [ebp-290h]
  __int128 v175; // [esp+A4h] [ebp-280h]
  __m128 v176; // [esp+B4h] [ebp-270h]
  int v177; // [esp+D0h] [ebp-254h]
  __m128 v178[4]; // [esp+D4h] [ebp-250h] BYREF
  _BYTE v179[524]; // [esp+114h] [ebp-210h] BYREF

  switch ( (*(int (__thiscall **)(__m128 *))(a2->m128_i32[0] + 8))(a2) )
  {
    case 2:
    case 0xC:
    case 0xD:
    case 0x10:
    case 0x14:
      result = (*(int (__thiscall **)(__m128 *))(a2->m128_i32[0] + 0x20))(a2); /*0x94ada3*/
      for ( i = result; result != 0xFFFFFFFF; i = result ) /*0x94adab*/
      {
        v46 = (__m128 *)(*(int (__thiscall **)(__m128 *, int, _BYTE *))(a2->m128_i32[0] + 0x28))(a2, i, v179); /*0x94adbe*/
        sub_94A630(this, v46, a3, a4); /*0x94adcc*/
        result = (*(int (__thiscall **)(__m128 *, int))(a2->m128_i32[0] + 0x24))(a2, i); /*0x94add6*/
      }
      return result; /*0x94adde*/
    case 3:
    case 0x16:
    case 0x18:
      return (int)sub_94A630(this, (__m128 *)a2->m128_i32[3], a3, a4); /*0x94ad9c*/
    case 4:
      v5 = a2->m128_i32[3]; /*0x94a66e*/
      v173 = 0; /*0x94a674*/
      v173.m128_i32[3] = v5; /*0x94a679*/
      v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x80, 8); /*0x94a68c*/
      *(_WORD *)(v6 + 4) = 0x80; /*0x94a68f*/
      v7 = sub_958590((_DWORD *)v6, &v173, *(this + 3), *(this + 2)); /*0x94a6ac*/
      sub_539980(v7 + 1, a3); /*0x94a6b2*/
      v8 = a4; /*0x94a6b7*/
      result = (unsigned int)a4[2] & 0x3FFFFFFF; /*0x94a6c0*/
      if ( a4[1] != (const void *)result ) /*0x94a6c7*/
        goto LABEL_21; /*0x94a6c7*/
      sub_8A6EE0(a4, 4); /*0x94a6d0*/
      *((_DWORD *)*a4 + (_DWORD)a4[1]) = v7; /*0x94a6da*/
      result = (int)a4[1] + 1; /*0x94a6e3*/
      a4[1] = (const void *)result; /*0x94a6e4*/
      return result; /*0x94a6f9*/
    case 5:
      hkTransform_TransformPosition(&v167, a3, a2 + 3); /*0x94a9c1*/
      hkTransform_TransformPosition(&v173, a3, a2 + 2); /*0x94a9cf*/
      v21 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x90, 8); /*0x94a9e8*/
      v21[2] = 0x90; /*0x94a9ee*/
      *(float *)&v135 = sub_8F2260(a2->m128_f32); /*0x94a9fa*/
      v7 = sub_916380(v21, &v167, &v173, v135, 9, 1); /*0x94aa0e*/
      sub_539980(v7 + 1, a3); /*0x94aa14*/
      v22 = a4; /*0x94aa19*/
      if ( a4[1] != (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) ) /*0x94aa2a*/
        goto LABEL_46; /*0x94aa2a*/
      goto LABEL_18; /*0x94aa2a*/
    case 6:
      v47 = *(_DWORD *)(sub_94A560(this, a4) + 0x50); /*0x94ae02*/
      v48 = *(_DWORD *)(v47 + 4); /*0x94ae05*/
      v49 = v48 + 1; /*0x94ae0b*/
      v50 = *(_DWORD *)(v47 + 8) & 0x3FFFFFFF; /*0x94ae0e*/
      v144 = v48; /*0x94ae15*/
      if ( v50 < v48 + 1 ) /*0x94ae19*/
      {
        v51 = 2 * v50; /*0x94ae1b*/
        if ( v49 >= v51 ) /*0x94ae1f*/
          v51 = v48 + 1; /*0x94ae21*/
        sub_8A6E40((const void **)v47, v51, 0x10); /*0x94ae27*/
        v48 = v144; /*0x94ae2c*/
      }
      *(_DWORD *)(v47 + 4) = v49; /*0x94ae39*/
      hkTransform_TransformPosition((__m128 *)(*(_DWORD *)v47 + 0x10 * v48), a3, a2 + 1); /*0x94ae45*/
      v158 = *(_DWORD *)(v47 + 4); /*0x94ae50*/
      v52 = v158 + 1; /*0x94ae54*/
      v53 = *(_DWORD *)(v47 + 8) & 0x3FFFFFFF; /*0x94ae55*/
      if ( v53 < v158 + 1 ) /*0x94ae5c*/
      {
        v54 = 2 * v53; /*0x94ae5e*/
        if ( v52 >= v54 ) /*0x94ae62*/
          v54 = v158 + 1; /*0x94ae64*/
        sub_8A6E40((const void **)v47, v54, 0x10); /*0x94ae6a*/
      }
      *(_DWORD *)(v47 + 4) = v52; /*0x94ae7d*/
      hkTransform_TransformPosition((__m128 *)(*(_DWORD *)v47 + 0x10 * v158), a3, a2 + 2); /*0x94ae88*/
      v159 = *(_DWORD *)(v47 + 4); /*0x94ae93*/
      v55 = v159 + 1; /*0x94ae97*/
      v56 = *(_DWORD *)(v47 + 8) & 0x3FFFFFFF; /*0x94ae98*/
      if ( v56 < v159 + 1 ) /*0x94ae9f*/
      {
        v57 = 2 * v56; /*0x94aea1*/
        if ( v55 >= v57 ) /*0x94aea5*/
          v57 = v159 + 1; /*0x94aea7*/
        sub_8A6E40((const void **)v47, v57, 0x10); /*0x94aead*/
      }
      *(_DWORD *)(v47 + 4) = v55; /*0x94aebc*/
      hkTransform_TransformPosition((__m128 *)(*(_DWORD *)v47 + 0x10 * v159), a3, a2 + 3); /*0x94aecb*/
      v58 = *(_DWORD *)(v47 + 0x10); /*0x94aed0*/
      v59 = *(_DWORD *)(v47 + 0x14); /*0x94aed3*/
      v60 = v47 + 0xC; /*0x94aed6*/
      v61 = v58 + 1; /*0x94aed9*/
      v62 = v59 & 0x3FFFFFFF; /*0x94aedc*/
      if ( v62 < v58 + 1 ) /*0x94aee3*/
      {
        v63 = 2 * v62; /*0x94aee5*/
        if ( v61 >= v63 ) /*0x94aee9*/
          v63 = v58 + 1; /*0x94aeeb*/
        sub_8A6E40((const void **)v60, v63, 0xC); /*0x94aef1*/
      }
      result = *(_DWORD *)v60 + 0xC * v58; /*0x94aefe*/
      *(_DWORD *)(v60 + 4) = v61; /*0x94af05*/
      *(_DWORD *)result = v144; /*0x94af0b*/
      *(_DWORD *)(result + 4) = v144 + 1; /*0x94af10*/
      *(_DWORD *)(result + 8) = v144 + 2; /*0x94af13*/
      return result; /*0x94af28*/
    case 7:
      v43 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x70, 8); /*0x94ac20*/
      v43[2] = 0x70; /*0x94ac29*/
      v7 = sub_949CA0(v43, (__m128 *)a2[1].m128_f32); /*0x94ac37*/
      sub_539980(v7 + 1, a3); /*0x94ac3d*/
      v22 = a4; /*0x94ac42*/
      if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) ) /*0x94ac53*/
        sub_8A6EE0(a4, 4); /*0x94ac58*/
LABEL_46:
      result = (int)v22[1]; /*0x94ac60*/
      *((_DWORD *)*v22 + result) = v7; /*0x94ac65*/
      v22[1] = (char *)v22[1] + 1; /*0x94ac68*/
      return result; /*0x94ac7d*/
    case 8:
      v20 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x90, 8); /*0x94a944*/
      v20[2] = 0x90; /*0x94a949*/
      v7 = sub_8F4080(v20, (__m128 *)a2[2].m128_f32, (__m128 *)a2[1].m128_f32, a2->m128_i32[3], 6, 1); /*0x94a96d*/
      sub_539980(v7 + 1, a3); /*0x94a973*/
      v8 = a4; /*0x94a978*/
      result = (unsigned int)a4[2] & 0x3FFFFFFF; /*0x94a981*/
      if ( a4[1] == (const void *)result ) /*0x94a988*/
        result = sub_8A6EE0(a4, 4); /*0x94a98d*/
      goto LABEL_21; /*0x94a98d*/
    case 9:
      (*(void (__thiscall **)(__m128 *, int *))(a2->m128_i32[0] + 0x1C))(a2, &v169); /*0x94af34*/
      v168.m128_u64[0] = 0; /*0x94af3f*/
      v168.m128_i32[2] = 0x80000000; /*0x94af47*/
      if ( v170 )
      {
        v64 = v169; /*0x94af57*/
        if ( v169 > 0 )
          sub_8A6E40((const void **)&v168, v169 < 0 ? 0 : v169, 0x10);
        v168.m128_i32[1] = v64; /*0x94af75*/
      }
      v65 = (*(int (__thiscall **)(__m128 *, __int32))(a2->m128_i32[0] + 0x20))(a2, v168.m128_i32[0]); /*0x94af85*/
      v66 = v169; /*0x94af87*/
      v178[0].m128_u64[0] = 0; /*0x94af8d*/
      v178[0].m128_i32[2] = 0x80000000; /*0x94af9b*/
      v67 = v169; /*0x94afa6*/
      if ( v169 > 0 )
      {
        sub_8A6E40((const void **)v178, v169 < 0 ? 0 : v169, 0x10);
        v66 = v169; /*0x94afc4*/
      }
      v178[0].m128_i32[1] = v67; /*0x94afcb*/
      v68 = 0; /*0x94afd2*/
      if ( v66 > 0 ) /*0x94afd6*/
      {
        v69 = 0; /*0x94afd8*/
        do /*0x94b001*/
        {
          hkTransform_TransformPosition((__m128 *)(v178[0].m128_i32[0] + v69), a3, (__m128 *)(v65 + v69)); /*0x94aff2*/
          ++v68; /*0x94affb*/
          v69 += 0x10; /*0x94affc*/
        }
        while ( v68 < v169 ); /*0x94b001*/
      }
      v70 = (const void **)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x24); /*0x94b00f*/
      if ( v70 ) /*0x94b016*/
      {
        *v70 = 0; /*0x94b01d*/
        v70[1] = 0; /*0x94b01f*/
        v70[2] = (const void *)0x80000000; /*0x94b022*/
        v70[3] = 0; /*0x94b025*/
        v70[4] = 0; /*0x94b028*/
        v70[5] = (const void *)0x80000000; /*0x94b02b*/
        v71 = v70; /*0x94b02e*/
      }
      else
      {
        v71 = 0; /*0x94b032*/
      }
      v166.m128_i32[2] = 0x10; /*0x94b04e*/
      v166.m128_u64[0] = v178[0].m128_u64[0]; /*0x94b056*/
      sub_8F21E0((int *)&v166, v71, 1); /*0x94b05a*/
      v72 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x60, 8); /*0x94b06e*/
      v72[2] = 0x60; /*0x94b074*/
      v73 = sub_94CCB0(v72, (int)v71); /*0x94b085*/
      if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) ) /*0x94b091*/
        sub_8A6EE0(a4, 4); /*0x94b096*/
      *((_DWORD *)*a4 + (_DWORD)a4[1]) = v73; /*0x94b0a3*/
      v74 = v178[0].m128_i32[2]; /*0x94b0a9*/
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x94b0b0*/
      v76 = v178[0].m128_i32[2] < 0; /*0x94b0b8*/
      a4[1] = (char *)a4[1] + 1; /*0x94b0ba*/
      v77 = MEMORY[0xBA9DE4]; /*0x94b0bd*/
      if ( !v76 ) /*0x94b0c3*/
      {
        v78 = *(_DWORD *)(ThreadLocalStoragePointer[v77] + 0x19C); /*0x94b0c8*/
        if ( !v78 ) /*0x94b0d0*/
          v78 = unk_BA7D9C; /*0x94b0d2*/
        sub_8A75D0(v78, v178[0].m128_i32[0], 0x10 * v74, 0x14); /*0x94b0eb*/
      }
      result = v168.m128_i32[2]; /*0x94b0f0*/
      if ( v168.m128_i32[2] >= 0 ) /*0x94b0f6*/
      {
        v79 = *(_DWORD *)(ThreadLocalStoragePointer[v77] + 0x19C); /*0x94b0ff*/
        if ( !v79 ) /*0x94b107*/
          v79 = unk_BA7D9C; /*0x94b109*/
        return sub_8A75D0(v79, v168.m128_i32[0], 0x10 * v168.m128_i32[2], 0x14); /*0x94b11f*/
      }
      return result; /*0x94b136*/
    case 0xA:
      v80 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x24); /*0x94b145*/
      if ( v80 ) /*0x94b14a*/
        v81 = (const void **)sub_8B44A0(v80); /*0x94b153*/
      else
        v81 = 0; /*0x94b157*/
      for ( j = 0; j < a2[2].m128_i32[0]; ++j ) /*0x94b166*/
      {
        v160 = (*(int (__thiscall **)(__int32, _DWORD, _BYTE *))(*(_DWORD *)a2[1].m128_i32[2] + 0x28))( /*0x94b18b*/
                 a2[1].m128_i32[2],
                 *(_DWORD *)(a2[1].m128_i32[3] + 4 * j),
                 v179);
        v145 = v81[4]; /*0x94b198*/
        v82 = (unsigned int)v81[5] & 0x3FFFFFFF; /*0x94b19f*/
        if ( v82 < (int)v145 + 1 ) /*0x94b1a6*/
        {
          v83 = 2 * v82; /*0x94b1ac*/
          if ( (int)v145 + 1 >= v83 ) /*0x94b1b1*/
            v83 = (int)v145 + 1; /*0x94b1b3*/
          sub_8A6E40(v81 + 3, v83, 0xC); /*0x94b1b9*/
        }
        v84 = (char *)v81[3]; /*0x94b1c5*/
        v81[4] = (char *)v145 + 1; /*0x94b1ca*/
        v85 = &v84[0xC * (_DWORD)v145]; /*0x94b1d0*/
        v86 = (char *)v81[1]; /*0x94b1d3*/
        *(_DWORD *)v85 = v86; /*0x94b1d6*/
        *((_DWORD *)v85 + 1) = v86 + 1; /*0x94b1de*/
        *((_DWORD *)v85 + 2) = v86 + 2; /*0x94b1e1*/
        v139 = (__m128 *)(v160 + 0x10); /*0x94b1eb*/
        v146 = 3; /*0x94b1ef*/
        do /*0x94b258*/
        {
          v161 = v81[1]; /*0x94b206*/
          v87 = (int)v161 + 1; /*0x94b20a*/
          v88 = (unsigned int)v81[2] & 0x3FFFFFFF; /*0x94b20b*/
          if ( v88 < (int)v161 + 1 ) /*0x94b212*/
          {
            v89 = 2 * v88; /*0x94b214*/
            if ( v87 >= v89 ) /*0x94b218*/
              v89 = (int)v161 + 1; /*0x94b21a*/
            sub_8A6E40(v81, v89, 0x10); /*0x94b220*/
          }
          v90 = (__m128 *)((char *)*v81 + 0x10 * (_DWORD)v161); /*0x94b23a*/
          v81[1] = (const void *)v87; /*0x94b23c*/
          hkTransform_TransformPosition(v90, a3, v139); /*0x94b23f*/
          v91 = v146 == 1; /*0x94b24f*/
          ++v139; /*0x94b250*/
          --v146; /*0x94b254*/
        }
        while ( !v91 ); /*0x94b258*/
      }
      v92 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x60, 8); /*0x94b27a*/
      v92[2] = 0x60; /*0x94b280*/
      v93 = sub_94CCB0(v92, (int)v81); /*0x94b291*/
      if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) ) /*0x94b29e*/
        sub_8A6EE0(a4, 4); /*0x94b2a3*/
      result = (int)*a4; /*0x94b2ae*/
      *((_DWORD *)*a4 + (_DWORD)a4[1]) = v93; /*0x94b2b0*/
      a4[1] = (char *)a4[1] + 1; /*0x94b2b3*/
      return result; /*0x94b2c8*/
    case 0xB:
      result = (int)&a2[1]; /*0x94a701*/
      v142 = 0; /*0x94a704*/
      if ( a2->m128_i32[3] > 0 ) /*0x94a70c*/
      {
        v167 = 0; /*0x94a718*/
        v137 = a2 + 1; /*0x94a71d*/
        do /*0x94a7db*/
        {
          v10 = v137->m128_i32[3]; /*0x94a725*/
          v173 = (__m128)unk_BA7A40; /*0x94a72f*/
          v173.m128_i32[3] = v10; /*0x94a734*/
          v11 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x80, 8); /*0x94a747*/
          *(_WORD *)(v11 + 4) = 0x80; /*0x94a74e*/
          v12 = v167; /*0x94a768*/
          v13 = (__m128 *)sub_958590((_DWORD *)v11, &v173, *(this + 3), *(this + 2)); /*0x94a76d*/
          v13[1] = v167; /*0x94a76f*/
          v13[2] = v12; /*0x94a773*/
          v13[3] = v12; /*0x94a777*/
          v13[1].m128_i32[0] = 0x3F800000; /*0x94a780*/
          v13[2].m128_i32[1] = 0x3F800000; /*0x94a783*/
          v13[3].m128_i32[2] = 0x3F800000; /*0x94a786*/
          v13[4] = v12; /*0x94a78d*/
          v13[4] = *v137; /*0x94a794*/
          if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) ) /*0x94a7a6*/
            sub_8A6EE0(a4, 4); /*0x94a7ab*/
          *((_DWORD *)*a4 + (_DWORD)a4[1]) = v13; /*0x94a7b8*/
          a4[1] = (char *)a4[1] + 1; /*0x94a7c3*/
          result = v142 + 1; /*0x94a7cd*/
          v14 = ++v142 < a2->m128_i32[3]; /*0x94a7d1*/
          ++v137; /*0x94a7d7*/
        }
        while ( v14 ); /*0x94a7db*/
      }
      return result; /*0x94a7db*/
    case 0xE:
      v173 = 0; /*0x94ac8a*/
      v174 = 0; /*0x94ac8f*/
      v175 = 0; /*0x94ac97*/
      v44 = a2[2]; /*0x94ac9f*/
      v173.m128_i32[0] = 0x3F800000; /*0x94acac*/
      v174.m128_i32[1] = 0x3F800000; /*0x94acb4*/
      DWORD2(v175) = 0x3F800000; /*0x94acbf*/
      v176 = v44; /*0x94acca*/
      sub_8B1F70(v178, a3, &v173); /*0x94acd2*/
      return (int)sub_94A630(this, (__m128 *)a2[1].m128_i32[0], v178, a4); /*0x94ad00*/
    case 0xF:
      sub_8B1F70(&v173, a3, a2 + 2); /*0x94ad0f*/
      return (int)sub_94A630(this, (__m128 *)a2[1].m128_i32[0], &v173, a4); /*0x94ad3a*/
    case 0x11:
      v23 = *(_DWORD *)(sub_94A560(this, a4) + 0x50); /*0x94aa6c*/
      result = 0; /*0x94aa72*/
      v150 = 0; /*0x94aa76*/
      if ( a2[1].m128_i32[0] > 0 ) /*0x94aa7a*/
      {
        v167.m128_u64[0] = 0x3C23D70A; /*0x94aa80*/
        v167.m128_u64[1] = 0; /*0x94aa8c*/
        v143 = 2; /*0x94aa94*/
        v138 = 0; /*0x94aa9c*/
        do /*0x94abf9*/
        {
          v24 = a2->m128_i32[3]; /*0x94aaa4*/
          v25 = *(_DWORD *)(v23 + 4); /*0x94aaad*/
          v173 = *(__m128 *)(v24 + v138); /*0x94aab0*/
          v26 = *(__m128 *)(v138 + v24 + 0x10); /*0x94aab5*/
          v27 = *(_DWORD *)(v23 + 8) & 0x3FFFFFFF; /*0x94aabf*/
          v174 = v26; /*0x94aac6*/
          if ( v27 < v25 + 1 ) /*0x94aace*/
          {
            v28 = 2 * v27; /*0x94aad0*/
            if ( v25 + 1 >= v28 ) /*0x94aad4*/
              v28 = v25 + 1; /*0x94aad6*/
            sub_8A6E40((const void **)v23, v28, 0x10); /*0x94aadc*/
          }
          v29 = v173; /*0x94aae4*/
          *(_DWORD *)(v23 + 4) = v25 + 1; /*0x94aaec*/
          v30 = (__m128 *)(*(_DWORD *)v23 + 0x10 * v25); /*0x94aafb*/
          *v30 = v29; /*0x94aafd*/
          hkTransform_TransformPosition(v30, a3, v30); /*0x94ab00*/
          v31 = *(_DWORD *)(v23 + 4); /*0x94ab05*/
          v32 = *(_DWORD *)(v23 + 8) & 0x3FFFFFFF; /*0x94ab0e*/
          if ( v32 < v31 + 1 ) /*0x94ab15*/
          {
            v33 = 2 * v32; /*0x94ab17*/
            if ( v31 + 1 >= v33 ) /*0x94ab1b*/
              v33 = v31 + 1; /*0x94ab1d*/
            sub_8A6E40((const void **)v23, v33, 0x10); /*0x94ab23*/
          }
          v34 = _mm_add_ps(v173, v167); /*0x94ab30*/
          *(_DWORD *)(v23 + 4) = v31 + 1; /*0x94ab38*/
          *(__m128 *)(*(_DWORD *)v23 + 0x10 * v31) = v34; /*0x94ab42*/
          v35 = *(_DWORD *)(v23 + 4); /*0x94ab45*/
          v36 = *(_DWORD *)(v23 + 8) & 0x3FFFFFFF; /*0x94ab4e*/
          if ( v36 < v35 + 1 ) /*0x94ab55*/
          {
            v37 = 2 * v36; /*0x94ab57*/
            if ( v35 + 1 >= v37 ) /*0x94ab5b*/
              v37 = v35 + 1; /*0x94ab5d*/
            sub_8A6E40((const void **)v23, v37, 0x10); /*0x94ab63*/
          }
          v38 = v174; /*0x94ab70*/
          v136 = (__m128 *)(*(_DWORD *)v23 + 0x10 * v35); /*0x94ab80*/
          *(_DWORD *)(v23 + 4) = v35 + 1; /*0x94ab82*/
          *v136 = v38; /*0x94ab87*/
          hkTransform_TransformPosition(v136, a3, v136); /*0x94ab8a*/
          v39 = *(_DWORD *)(v23 + 0x10); /*0x94ab8f*/
          v40 = *(_DWORD *)(v23 + 0x14) & 0x3FFFFFFF; /*0x94ab98*/
          if ( v40 < v39 + 1 ) /*0x94ab9f*/
          {
            v41 = 2 * v40; /*0x94aba1*/
            if ( v39 + 1 >= v41 ) /*0x94aba5*/
              v41 = v39 + 1; /*0x94aba7*/
            sub_8A6E40((const void **)(v23 + 0xC), v41, 0xC); /*0x94abb0*/
          }
          *(_DWORD *)(v23 + 0x10) = v39 + 1; /*0x94abbf*/
          v42 = (_DWORD *)(*(_DWORD *)(v23 + 0xC) + 0xC * v39); /*0x94abc8*/
          *v42 = v143 - 2; /*0x94abce*/
          v42[1] = v143 - 1; /*0x94abd3*/
          v42[2] = v143; /*0x94abda*/
          v143 += 3; /*0x94abe4*/
          result = v150 + 1; /*0x94abeb*/
          v14 = ++v150 < a2[1].m128_i32[0]; /*0x94abef*/
          v138 += 0x20; /*0x94abf5*/
        }
        while ( v14 ); /*0x94abf9*/
      }
      return result; /*0x94abf9*/
    case 0x13:
      result = sub_94A560(this, a4); /*0x94b2d1*/
      v94 = *(_DWORD *)(result + 0x50); /*0x94b2dd*/
      v95 = a2->m128_i32[3] - 1; /*0x94b2e0*/
      v91 = a2->m128_i32[3] == 1; /*0x94b2e1*/
      v173 = a2[2]; /*0x94b2e3*/
      v152 = 0; /*0x94b2e8*/
      if ( v95 >= 0 && !v91 ) /*0x94b2f0*/
      {
        do /*0x94b6fe*/
        {
          v140 = 0; /*0x94b2fc*/
          if ( a2[1].m128_i32[0] - 1 > 0 ) /*0x94b304*/
          {
            v96 = (double)v152; /*0x94b30a*/
            v97 = (_DWORD *)(v94 + 0xC); /*0x94b30e*/
            *(float *)&v147 = v96; /*0x94b311*/
            v172 = v96 + fConstant_1; /*0x94b31b*/
            do /*0x94b6e9*/
            {
              v166.m128_f32[1] = ((double (__thiscall *)(__m128 *, __int32, int))*(_DWORD *)(a2->m128_i32[0] + 0x24))( /*0x94b331*/
                                   a2,
                                   v152,
                                   v140);
              v166.m128_i32[0] = v147; /*0x94b342*/
              v153 = (float)v140; /*0x94b346*/
              v98 = a2->m128_i32[0]; /*0x94b34a*/
              v166.m128_f32[2] = v153; /*0x94b34c*/
              v166.m128_i32[3] = 0; /*0x94b351*/
              v162 = v140 + 1; /*0x94b363*/
              v166 = _mm_mul_ps(v166, v173); /*0x94b36e*/
              v168.m128_f32[1] = ((double (__thiscall *)(__m128 *, __int32, int))*(_DWORD *)(v98 + 0x24))( /*0x94b376*/
                                   a2,
                                   v152,
                                   v140 + 1);
              v99 = a2->m128_i32[0]; /*0x94b38c*/
              *(float *)&v163 = v153 + fConstant_1; /*0x94b393*/
              v168.m128_i32[0] = v147; /*0x94b397*/
              v168.m128_f32[2] = *(float *)&v163; /*0x94b39b*/
              v168.m128_i32[3] = 0; /*0x94b39f*/
              v168 = _mm_mul_ps(v168, v173); /*0x94b3b5*/
              v178[0].m128_f32[1] = ((double (__thiscall *)(__m128 *, __int32, int))*(_DWORD *)(v99 + 0x24))( /*0x94b3bd*/
                                      a2,
                                      v152 + 1,
                                      v140);
              v178[0].m128_f32[0] = v172; /*0x94b3d5*/
              v178[0].m128_u64[1] = LODWORD(v153); /*0x94b3dc*/
              v100 = a2->m128_i32[0]; /*0x94b3e3*/
              v178[0] = _mm_mul_ps(v178[0], v173); /*0x94b401*/
              v167.m128_f32[1] = ((double (__thiscall *)(__m128 *, __int32, int))*(_DWORD *)(v100 + 0x24))( /*0x94b40c*/
                                   a2,
                                   v152 + 1,
                                   v140 + 1);
              v101 = *(_DWORD *)(v94 + 4); /*0x94b414*/
              v167.m128_f32[0] = v172; /*0x94b41b*/
              v102 = v101 + 1; /*0x94b41f*/
              v141 = v101; /*0x94b422*/
              v103 = *(_DWORD *)(v94 + 8); /*0x94b426*/
              v167.m128_u64[1] = v163; /*0x94b429*/
              v104 = v103 & 0x3FFFFFFF; /*0x94b43f*/
              v167 = _mm_mul_ps(v167, v173); /*0x94b446*/
              if ( v104 < v102 ) /*0x94b44b*/
              {
                v105 = 2 * v104; /*0x94b451*/
                if ( v141 + 1 >= v105 ) /*0x94b456*/
                  v105 = v141 + 1; /*0x94b458*/
                sub_8A6E40((const void **)v94, v105, 0x10); /*0x94b45e*/
              }
              *(_DWORD *)(v94 + 4) = v141 + 1; /*0x94b470*/
              hkTransform_TransformPosition((__m128 *)(*(_DWORD *)v94 + 0x10 * v141), a3, &v166); /*0x94b480*/
              v154 = *(_DWORD *)(v94 + 4); /*0x94b48b*/
              v106 = *(_DWORD *)(v94 + 8) & 0x3FFFFFFF; /*0x94b492*/
              if ( v106 < v154 + 1 ) /*0x94b499*/
              {
                v107 = 2 * v106; /*0x94b49f*/
                if ( v154 + 1 >= v107 ) /*0x94b4a4*/
                  v107 = v154 + 1; /*0x94b4a6*/
                sub_8A6E40((const void **)v94, v107, 0x10); /*0x94b4ac*/
              }
              *(_DWORD *)(v94 + 4) = v154 + 1; /*0x94b4be*/
              hkTransform_TransformPosition((__m128 *)(*(_DWORD *)v94 + 0x10 * v154), a3, &v168); /*0x94b4ce*/
              v155 = *(_DWORD *)(v94 + 4); /*0x94b4d9*/
              v108 = *(_DWORD *)(v94 + 8) & 0x3FFFFFFF; /*0x94b4e0*/
              if ( v108 < v155 + 1 ) /*0x94b4e7*/
              {
                v109 = 2 * v108; /*0x94b4ed*/
                if ( v155 + 1 >= v109 ) /*0x94b4f2*/
                  v109 = v155 + 1; /*0x94b4f4*/
                sub_8A6E40((const void **)v94, v109, 0x10); /*0x94b4fa*/
              }
              *(_DWORD *)(v94 + 4) = v155 + 1; /*0x94b50c*/
              hkTransform_TransformPosition((__m128 *)(*(_DWORD *)v94 + 0x10 * v155), a3, v178); /*0x94b51f*/
              v156 = *(_DWORD *)(v94 + 4); /*0x94b52a*/
              v110 = *(_DWORD *)(v94 + 8) & 0x3FFFFFFF; /*0x94b531*/
              if ( v110 < v156 + 1 ) /*0x94b538*/
              {
                v111 = 2 * v110; /*0x94b53e*/
                if ( v156 + 1 >= v111 ) /*0x94b543*/
                  v111 = v156 + 1; /*0x94b545*/
                sub_8A6E40((const void **)v94, v111, 0x10); /*0x94b54b*/
              }
              *(_DWORD *)(v94 + 4) = v156 + 1; /*0x94b55d*/
              hkTransform_TransformPosition((__m128 *)(*(_DWORD *)v94 + 0x10 * v156), a3, &v167); /*0x94b56d*/
              v112 = *(_BYTE *)(*(int (__thiscall **)(__m128 *, char *))(a2->m128_i32[0] + 0x28))(a2, &v171); /*0x94b57e*/
              v113 = *(_DWORD *)(v94 + 0x10); /*0x94b580*/
              v91 = v112 == 0; /*0x94b583*/
              v114 = *(_DWORD *)(v94 + 0x14); /*0x94b585*/
              v115 = v113 + 1; /*0x94b588*/
              v164 = v113; /*0x94b58b*/
              if ( v91 ) /*0x94b58f*/
              {
                v124 = v114 & 0x3FFFFFFF; /*0x94b62d*/
                if ( v124 < v115 ) /*0x94b635*/
                {
                  v125 = 2 * v124; /*0x94b637*/
                  if ( v115 >= 2 * v124 ) /*0x94b63c*/
                    v125 = v115; /*0x94b63e*/
                  sub_8A6E40((const void **)(v94 + 0xC), v125, 0xC); /*0x94b644*/
                  v113 = v164; /*0x94b649*/
                }
                v126 = v141; /*0x94b650*/
                *(_DWORD *)(v94 + 0x10) = v113 + 1; /*0x94b657*/
                v127 = (_DWORD *)(*v97 + 0xC * v113); /*0x94b65f*/
                v127[1] = v141 + 1; /*0x94b665*/
                v169 = v141 + 1; /*0x94b668*/
                *v127 = v141; /*0x94b66f*/
                v127[2] = v141 + 2; /*0x94b671*/
                v177 = v141 + 2; /*0x94b674*/
                v128 = *(_DWORD *)(v94 + 0x10); /*0x94b67b*/
                v129 = *(_DWORD *)(v94 + 0x14) & 0x3FFFFFFF; /*0x94b688*/
                v165 = v128; /*0x94b691*/
                if ( v129 < v128 + 1 ) /*0x94b695*/
                {
                  v130 = 2 * v129; /*0x94b69b*/
                  if ( v128 + 1 >= v130 ) /*0x94b69f*/
                    v130 = v128 + 1; /*0x94b6a1*/
                  sub_8A6E40((const void **)(v94 + 0xC), v130, 0xC); /*0x94b6a7*/
                  v126 = v141; /*0x94b6ac*/
                  v128 = v165; /*0x94b6b0*/
                }
                *(_DWORD *)(v94 + 0x10) = v128 + 1; /*0x94b6ba*/
                v131 = (_DWORD *)(*v97 + 0xC * v128); /*0x94b6c2*/
                v132 = v177; /*0x94b6c5*/
                *v131 = v126 + 3; /*0x94b6cf*/
                v133 = v169; /*0x94b6d1*/
                v131[1] = v132; /*0x94b6d5*/
                v131[2] = v133; /*0x94b6d8*/
              }
              else
              {
                v116 = v114 & 0x3FFFFFFF; /*0x94b595*/
                if ( v116 < v115 ) /*0x94b59d*/
                {
                  v117 = 2 * v116; /*0x94b59f*/
                  if ( v115 >= 2 * v116 ) /*0x94b5a4*/
                    v117 = v115; /*0x94b5a6*/
                  sub_8A6E40((const void **)(v94 + 0xC), v117, 0xC); /*0x94b5ac*/
                  v113 = v164; /*0x94b5b1*/
                }
                *(_DWORD *)(v94 + 0x10) = v113 + 1; /*0x94b5bb*/
                v118 = (_DWORD *)(*v97 + 0xC * v113); /*0x94b5c3*/
                v119 = v141; /*0x94b5c6*/
                v118[1] = v141 + 1; /*0x94b5cd*/
                v118[2] = v141 + 3; /*0x94b5d3*/
                *v118 = v141; /*0x94b5d6*/
                v120 = *(_DWORD *)(v94 + 0x10) + 1; /*0x94b5db*/
                v157 = *(_DWORD *)(v94 + 0x10); /*0x94b5de*/
                v121 = *(_DWORD *)(v94 + 0x14) & 0x3FFFFFFF; /*0x94b5e5*/
                if ( v121 < v120 ) /*0x94b5ed*/
                {
                  v122 = 2 * v121; /*0x94b5ef*/
                  if ( v120 >= 2 * v121 ) /*0x94b5f4*/
                    v122 = *(_DWORD *)(v94 + 0x10) + 1; /*0x94b5f6*/
                  sub_8A6E40((const void **)(v94 + 0xC), v122, 0xC); /*0x94b5fc*/
                  v119 = v141; /*0x94b601*/
                }
                *(_DWORD *)(v94 + 0x10) = v157 + 1; /*0x94b60f*/
                v123 = (_DWORD *)(*v97 + 0xC * v157); /*0x94b617*/
                *v123 = v119; /*0x94b61d*/
                v123[1] = v119 + 3; /*0x94b622*/
                v123[2] = v119 + 2; /*0x94b625*/
              }
              v140 = v162; /*0x94b6e5*/
            }
            while ( v162 < a2[1].m128_i32[0] - 1 ); /*0x94b6e9*/
          }
          result = ++v152; /*0x94b6f6*/
        }
        while ( v152 < a2->m128_i32[3] - 1 ); /*0x94b6fe*/
      }
      return result; /*0x94b6fe*/
    case 0x17:
      (*(void (__thiscall **)(__m128 *, __int128 *, int, __m128 *))(a2->m128_i32[0] + 0xC))( /*0x94a80f*/
        a2,
        xmmword_B2F090,
        0x3A83126F,
        v178);
      v15 = _mm_sub_ps(v178[1], v178[0]); /*0x94a825*/
      v173 = 0; /*0x94a828*/
      v166 = _mm_and_ps(v15, (__m128)xmmword_A372D0); /*0x94a83a*/
      if ( v166.m128_f32[0] >= (double)v166.m128_f32[1] ) /*0x94a84c*/
      {
        if ( v166.m128_f32[0] >= (double)v166.m128_f32[2] ) /*0x94a878*/
          v16 = 0; /*0x94a881*/
        else
          v16 = 2; /*0x94a87a*/
      }
      else if ( v166.m128_f32[1] >= (double)v166.m128_f32[2] ) /*0x94a85b*/
      {
        v16 = 1; /*0x94a864*/
      }
      else
      {
        v16 = 2; /*0x94a85d*/
      }
      v17 = unk_BA7D98; /*0x94a883*/
      v167 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), v15); /*0x94a8a4*/
      v18 = _mm_add_ps(v167, v178[0]); /*0x94a8a9*/
      v173.m128_i32[v16] = 0x3F800000; /*0x94a8ae*/
      v168 = v18; /*0x94a8b6*/
      v19 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v17 + 0x10))(v17, 0xA0, 8); /*0x94a8c2*/
      v19[2] = 0xA0; /*0x94a8d7*/
      v7 = sub_94D710(v19, (__m128 *)a2[1].m128_f32, &v173, &v168, &v167); /*0x94a8e5*/
      sub_539980(v7 + 1, a3); /*0x94a8eb*/
      v8 = a4; /*0x94a8f0*/
      result = (unsigned int)a4[2] & 0x3FFFFFFF; /*0x94a8f9*/
      if ( a4[1] == (const void *)result ) /*0x94a900*/
      {
LABEL_18:
        sub_8A6EE0(a4, 4); /*0x94a906*/
        *((_DWORD *)*a4 + (_DWORD)a4[1]) = v7; /*0x94a913*/
        result = (int)a4[1] + 1; /*0x94a91c*/
        a4[1] = (const void *)result; /*0x94a91d*/
      }
      else
      {
LABEL_21:
        *((_DWORD *)*v8 + (_DWORD)v8[1]) = v7; /*0x94a995*/
        v8[1] = (char *)v8[1] + 1; /*0x94a99d*/
      }
      break; /*0x94a932*/
    case 0x19:
      sub_8B1F70(&v173, a3, a2 + 2); /*0x94ad49*/
      result = (int)sub_94A630(this, (__m128 *)a2->m128_i32[3], &v173, a4); /*0x94ad5d*/
      break; /*0x94ad74*/
    default:
      result = unk_BA9510; /*0x94b719*/
      for ( k = 0; k < *(_DWORD *)(unk_BA9510 + 0xC); ++k ) /*0x94b72b*/
      {
        v134 = *(_DWORD *)(result + 8) + 8 * k; /*0x94b739*/
        if ( *(_DWORD *)(v134 + 4) == (*(int (__thiscall **)(__m128 *))(a2->m128_i32[0] + 8))(a2) ) /*0x94b744*/
          (*(void (__cdecl **)(__m128 *, __m128 *, const void **, int *))v134)(a2, a3, a4, this); /*0x94b750*/
        result = unk_BA9510; /*0x94b759*/
      }
      break; /*0x94b768*/
  }
  return result; /*0x94a6e7*/
}
