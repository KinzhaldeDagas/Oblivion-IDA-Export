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
  const void *v76[2]; // [esp+4Ch] [ebp-20h] BYREF
  int v77; // [esp+54h] [ebp-18h]
  void **v78; // [esp+58h] [ebp-14h] BYREF
  __int16 v79; // [esp+5Eh] [ebp-Eh]
  _DWORD **v80; // [esp+60h] [ebp-Ch]
  int v81; // [esp+64h] [ebp-8h]
  int v82; // [esp+68h] [ebp-4h]

  result = a1; /*0x946fb3*/
  v4 = *(_DWORD *)(a1 + 0xC); /*0x946fb5*/
  v5 = 0; /*0x946fb9*/
  v63 = result; /*0x946fbd*/
  if ( v4 ) /*0x946fc1*/
  {
    v6 = *(_DWORD *)(result + 0x1C); /*0x946fc7*/
    v7 = MEMORY[0xBA9DE4]; /*0x946fcd*/
    v8 = 0x80000000; /*0x946fd3*/
    v76[0] = 0; /*0x946fda*/
    v76[1] = 0; /*0x946fde*/
    v77 = 0x80000000; /*0x946fe2*/
    v66 = 0; /*0x946fe6*/
    v67 = 0; /*0x946fea*/
    v68 = 0x80000000; /*0x946fee*/
    v69 = 0; /*0x946ff2*/
    v70 = 0; /*0x946ff6*/
    v71 = 0x80000000; /*0x946ffa*/
    if ( v6 <= 0 ) /*0x946ffe*/
      goto LABEL_26; /*0x946ffe*/
    v9 = *(_DWORD *)(v63 + 0x18); /*0x94700b*/
    while ( *(int *)(*(_DWORD *)v9 + 0xC) <= 0 ) /*0x947016*/
    {
      ++v5; /*0x947018*/
      v9 += 4; /*0x947019*/
      if ( v5 >= v6 ) /*0x94701e*/
        goto LABEL_26; /*0x94701e*/
    }
    v10 = *(_DWORD *)(*(_DWORD *)(v63 + 0x18) + 4 * v5); /*0x947025*/
    v11 = *(_DWORD *)(v10 + 0xC); /*0x947028*/
    v12 = (int *)(v10 + 8); /*0x94702b*/
    if ( v11 > 0 ) /*0x947030*/
    {
      v13 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v7) + 0x19C); /*0x94703c*/
      if ( !v13 ) /*0x947044*/
        v13 = unk_BA7D9C; /*0x947046*/
      v66 = sub_8A7560(v13, 4 * v11, 0x14); /*0x94705b*/
      v8 = v12[1] | v68 & 0x40000000; /*0x947068*/
      v68 = v8; /*0x94706a*/
    }
    v15 = v66; /*0x947071*/
    v16 = 0; /*0x947075*/
    v67 = v12[1]; /*0x947079*/
    v14 = v67; /*0x94706e*/
    v17 = *v12; /*0x94707d*/
    if ( v67 > 0 ) /*0x94707f*/
    {
      do /*0x94708b*/
      {
        v15[v16] = *(_DWORD *)(v17 + 4 * v16); /*0x947084*/
        ++v16; /*0x947088*/
      }
      while ( v16 < v14 ); /*0x94708b*/
      v8 = v68; /*0x94708d*/
    }
    v18 = *(_DWORD *)(*(_DWORD *)(v63 + 0x18) + 4 * v5); /*0x947098*/
    v19 = *(_DWORD *)(v18 + 0x28); /*0x94709f*/
    v20 = (int *)(v18 + 0x24); /*0x9470a2*/
    if ( (v71 & 0x3FFFFFFF) < v19 ) /*0x9470ae*/
    {
      if ( v71 >= 0 ) /*0x9470b2*/
      {
        v21 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v7) + 0x19C); /*0x9470be*/
        if ( !v21 ) /*0x9470c6*/
          v21 = unk_BA7D9C; /*0x9470c8*/
        sub_8A75D0(v21, v69, 4 * v71, 0x14); /*0x9470d9*/
      }
      v22 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v7) + 0x19C); /*0x9470e7*/
      if ( !v22 ) /*0x9470ef*/
        v22 = unk_BA7D9C; /*0x9470f1*/
      v69 = sub_8A7560(v22, 4 * v20[1], 0x14); /*0x947105*/
      v8 = v68; /*0x947117*/
      v71 = v20[1] | v71 & 0x40000000; /*0x94711b*/
    }
    v24 = v69; /*0x947122*/
    v25 = 0; /*0x947126*/
    v70 = v20[1]; /*0x94712a*/
    v23 = v70; /*0x94711f*/
    v26 = *v20; /*0x94712e*/
    if ( v70 > 0 ) /*0x947130*/
    {
      do /*0x94713b*/
      {
        v24[v25] = *(_DWORD *)(v26 + 4 * v25); /*0x947135*/
        ++v25; /*0x947138*/
      }
      while ( v25 < v23 ); /*0x94713b*/
      v8 = v68; /*0x94713d*/
    }
    if ( !v67 ) /*0x947147*/
    {
LABEL_26:
      v27 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v7); /*0x947149*/
      v28 = *(_DWORD *)(v27 + 0x1A0); /*0x947159*/
      v29 = *(_DWORD *)(v27 + 0x1A4); /*0x94715f*/
      if ( (v8 & 0x3FFFFFFF) == 0 ) /*0x947165*/
        sub_8A6EE0((const void **)&v66, 4); /*0x94716e*/
      v66[v67++] = v28; /*0x94717e*/
      if ( v70 == (v71 & 0x3FFFFFFF) ) /*0x947199*/
        sub_8A6EE0((const void **)&v69, 4); /*0x9471a2*/
      v69[v70++] = v29; /*0x9471b2*/
    }
    v30 = (_DWORD *)(v63 + 0x30); /*0x9471c0*/
    v31 = 0; /*0x9471e2*/
    v32 = 0; /*0x9471e4*/
    *(_DWORD *)(v63 + 0x34) = 0; /*0x9471ea*/
    v64 = 0; /*0x9471ed*/
    sub_8B0E10(v75, 0); /*0x9471f1*/
    v72 = 0; /*0x9471fa*/
    v73 = 0; /*0x9471fe*/
    v74 = 0x80000000; /*0x947202*/
    if ( v67 > 0 ) /*0x94720a*/
    {
      v33 = v66; /*0x94720c*/
      v34 = v69; /*0x947210*/
      do /*0x947240*/
      {
        sub_9584F0((unsigned int *)v33[v31], v34[v31], v75); /*0x947221*/
        v34 = v69; /*0x947226*/
        v33 = v66; /*0x94722a*/
        v32 += v69[v31] - v66[v31]; /*0x947234*/
        ++v31; /*0x94723d*/
      }
      while ( v31 < v67 ); /*0x947240*/
      v64 = v32; /*0x947242*/
    }
    v35 = sub_8B0D00(v75); /*0x94724f*/
    sub_8B0D80(v75, &v62, v35); /*0x94725b*/
    while ( v62 ) /*0x947266*/
    {
      if ( v73 == (v74 & 0x3FFFFFFF) ) /*0x947280*/
        sub_8A6EE0((const void **)&v72, 0x10); /*0x947289*/
      v36 = &v72[0x10 * v73++]; /*0x94729e*/
      *(_QWORD *)v36 = sub_8B0D20(v75, v35); /*0x9472b5*/
      *((_DWORD *)v36 + 2) = sub_8B0D30(v75, v35); /*0x9472c4*/
      v35 = sub_8B0D50((int *)v75, v35); /*0x9472cc*/
      sub_8B0D80(v75, &v62, v35); /*0x9472d8*/
    }
    v37 = v30; /*0x9472f2*/
    v81 = v30[1]; /*0x9472f6*/
    v79 = 1; /*0x9472fa*/
    v78 = (void **)&off_A98330; /*0x9472ff*/
    v80 = (_DWORD **)v30; /*0x947303*/
    v82 = 1; /*0x947307*/
    v38 = v81 + 1; /*0x94730e*/
    v39 = v30[2] & 0x3FFFFFFF; /*0x94730f*/
    if ( v39 < v81 + 1 ) /*0x947317*/
    {
      v40 = 2 * v39; /*0x947319*/
      if ( v38 < v40 ) /*0x94731d*/
        v38 = v40; /*0x94731f*/
      sub_8A6E40((const void **)v30, v38, 1); /*0x947324*/
      v37 = v80; /*0x947329*/
    }
    *(_BYTE *)(v37[1] + *v37) = 0; /*0x947335*/
    sub_90BBA0(&v65, dword_A9C288); /*0x947342*/
    sub_9582E0(v32, (int)&v78, (int)&v65, 1, 0, (int)&v72, (char *)unk_BA99D4, v76); /*0x947363*/
    v78 = (void **)&off_A98330; /*0x947374*/
    if ( v82 || (v41 = v80) == 0 ) /*0x947382*/
    {
      v43 = MEMORY[0xBA9DE4]; /*0x9473cd*/
    }
    else
    {
      v42 = (int)v80[2]; /*0x947384*/
      v43 = MEMORY[0xBA9DE4]; /*0x947389*/
      if ( v42 >= 0 ) /*0x94738f*/
      {
        v44 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v43) + 0x19C); /*0x94739b*/
        if ( !v44 ) /*0x9473a3*/
          v44 = unk_BA7D9C; /*0x9473a5*/
        sub_8A75D0(v44, *v80, v42 & 0x3FFFFFFF, 0x14); /*0x9473b6*/
      }
      (*(void (__thiscall **)(int, _DWORD **, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))(unk_BA7D98, v41, 0xC, 0x14); /*0x9473c8*/
    }
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9473d9*/
    v78 = &hkBaseObject::`vftable'; /*0x9473e0*/
    if ( v74 >= 0 ) /*0x9473e8*/
    {
      v46 = *(_DWORD *)(ThreadLocalStoragePointer[v43] + 0x19C); /*0x9473ed*/
      if ( !v46 ) /*0x9473f5*/
        v46 = unk_BA7D9C; /*0x9473f7*/
      sub_8A75D0(v46, v72, 0x10 * v74, 0x14); /*0x94740d*/
    }
    sub_8B0E60(v75); /*0x947416*/
    if ( v32 >= 1 ) /*0x94741e*/
    {
      v50 = *(_DWORD *)(v63 + 0x34); /*0x94749c*/
      v51 = *(_DWORD *)(v63 + 0x28); /*0x94749f*/
      v52 = v67; /*0x9474a8*/
      sub_918440(*(void **)(v63 + 0xC), v51 + v50 + 4 * v67 + v64 + 0xD); /*0x9474b5*/
      sub_9181B0(*(_DWORD ***)(v63 + 0xC), 0xA); /*0x9474c3*/
      sub_918440(*(void **)(v63 + 0xC), v51); /*0x9474d0*/
      if ( v51 > 0 ) /*0x9474d7*/
        sub_918390(*(_DWORD ***)(v63 + 0xC)); /*0x9474e5*/
      v53 = v63; /*0x9474ea*/
      sub_918440(*(void **)(v63 + 0xC), v50); /*0x9474f2*/
      if ( v50 > 0 ) /*0x9474f9*/
        sub_918390(*(_DWORD ***)(v53 + 0xC)); /*0x947503*/
      sub_918440(*(void **)(v53 + 0xC), v52); /*0x94750c*/
      v54 = 0; /*0x947511*/
      if ( v52 > 0 ) /*0x947515*/
      {
        v55 = v63; /*0x947517*/
        do /*0x947551*/
        {
          v56 = v69[v54] - v66[v54]; /*0x947531*/
          sub_918440(*(void **)(v55 + 0xC), LOBYTE(v69[v54]) - LOBYTE(v66[v54])); /*0x947534*/
          if ( v56 > 0 ) /*0x94753b*/
            sub_918390(*(_DWORD ***)(v55 + 0xC)); /*0x947549*/
          ++v54; /*0x94754e*/
        }
        while ( v54 < v52 ); /*0x947551*/
      }
      v57 = MEMORY[0xBA9DE4]; /*0x947559*/
      v58 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x94755f*/
      if ( v71 >= 0 ) /*0x947566*/
      {
        v59 = *(_DWORD *)(v58[v57] + 0x19C); /*0x94756b*/
        if ( !v59 ) /*0x947573*/
          v59 = unk_BA7D9C; /*0x947575*/
        sub_8A75D0(v59, v69, 4 * v71, 0x14); /*0x94758b*/
      }
      if ( v68 >= 0 ) /*0x947596*/
      {
        v60 = *(_DWORD *)(v58[v57] + 0x19C); /*0x94759b*/
        if ( !v60 ) /*0x9475a3*/
          v60 = unk_BA7D9C; /*0x9475a5*/
        sub_8A75D0(v60, v66, 4 * v68, 0x14); /*0x9475bb*/
      }
      result = v77; /*0x9475c0*/
      if ( v77 >= 0 ) /*0x9475c6*/
      {
        v49 = v58[v57]; /*0x9475c8*/
        goto LABEL_85; /*0x9475c8*/
      }
    }
    else
    {
      if ( v71 >= 0 ) /*0x947426*/
      {
        v47 = *(_DWORD *)(ThreadLocalStoragePointer[v43] + 0x19C); /*0x94742b*/
        if ( !v47 ) /*0x947433*/
          v47 = unk_BA7D9C; /*0x947435*/
        sub_8A75D0(v47, v69, 4 * v71, 0x14); /*0x94744b*/
      }
      if ( v68 >= 0 ) /*0x947456*/
      {
        v48 = *(_DWORD *)(ThreadLocalStoragePointer[v43] + 0x19C); /*0x94745b*/
        if ( !v48 ) /*0x947463*/
          v48 = unk_BA7D9C; /*0x947465*/
        sub_8A75D0(v48, v66, 4 * v68, 0x14); /*0x94747b*/
      }
      result = v77; /*0x947480*/
      if ( v77 >= 0 ) /*0x947486*/
      {
        v49 = ThreadLocalStoragePointer[v43]; /*0x94748c*/
LABEL_85:
        v61 = *(_DWORD *)(v49 + 0x19C); /*0x9475cb*/
        if ( !v61 ) /*0x9475d3*/
          v61 = unk_BA7D9C; /*0x9475d5*/
        return sub_8A75D0(v61, (_DWORD *)v76[0], 0x18 * (result & 0x3FFFFFFF), 0x14); /*0x9475ee*/
      }
    }
  }
  return result; /*0x9475f6*/
}
