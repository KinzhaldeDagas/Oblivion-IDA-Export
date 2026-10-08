int __fastcall sub_8C74F0(NiRenderer *a1, int edx0, signed int a3)
{
  signed int v3; // esi
  bool (__thiscall *ValidateRenderTargetGroup)(NiRenderer *, NiRenderTargetGroup *); // edx
  int v6; // eax
  bool v7; // cf
  const char *v8; // esi
  int **v9; // eax
  int **v10; // eax
  int **v11; // eax
  int **v12; // eax
  unsigned int *v13; // esi
  unsigned int v14; // eax
  void (__cdecl *v15)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // edx
  signed int v16; // eax
  int v17; // esi
  _DWORD *ThreadLocalStoragePointer; // edi
  int v19; // ecx
  signed int v20; // eax
  int v21; // ecx
  signed int v22; // eax
  int v23; // ecx
  signed int v24; // eax
  int v25; // ecx
  signed int v26; // eax
  int v27; // ecx
  signed int v28; // eax
  int v29; // ecx
  signed int v30; // eax
  int v31; // ecx
  signed int v32; // eax
  int v33; // ecx
  signed int v34; // eax
  int v35; // ecx
  signed int v36; // eax
  int v37; // ecx
  signed int v38; // eax
  int v39; // ecx
  signed int v40; // eax
  int v41; // ecx
  int v42; // ecx
  NiDynamicEffectState *v43; // eax
  int result; // eax
  int v45; // eax
  void (__cdecl *v46)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // eax
  int v47; // edi
  int v48; // eax
  void (__cdecl *v49)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // eax
  unsigned int v50; // esi
  void (__thiscall ***v51)(void *, int); // esi
  int v52; // [esp-14h] [ebp-338h]
  int v53; // [esp-14h] [ebp-338h]
  int v54; // [esp-4h] [ebp-328h] BYREF
  NiRenderer *v55; // [esp+18h] [ebp-30Ch] BYREF
  int v56; // [esp+1Ch] [ebp-308h] BYREF
  int v57; // [esp+20h] [ebp-304h] BYREF
  char v58; // [esp+27h] [ebp-2FDh] BYREF
  signed int a2; // [esp+28h] [ebp-2FCh]
  void *slot; // [esp+2Ch] [ebp-2F8h] BYREF
  unsigned int v61; // [esp+30h] [ebp-2F4h] BYREF
  int v62[9]; // [esp+34h] [ebp-2F0h] BYREF
  _DWORD *v63; // [esp+58h] [ebp-2CCh]
  int v64; // [esp+5Ch] [ebp-2C8h]
  signed int v65; // [esp+60h] [ebp-2C4h]
  _DWORD *v66; // [esp+64h] [ebp-2C0h]
  int v67; // [esp+68h] [ebp-2BCh]
  signed int v68; // [esp+6Ch] [ebp-2B8h]
  _DWORD *v69; // [esp+70h] [ebp-2B4h]
  int v70; // [esp+74h] [ebp-2B0h]
  signed int v71; // [esp+78h] [ebp-2ACh]
  _DWORD *v72; // [esp+7Ch] [ebp-2A8h]
  int v73; // [esp+80h] [ebp-2A4h]
  signed int v74; // [esp+84h] [ebp-2A0h]
  _DWORD *v75; // [esp+88h] [ebp-29Ch]
  int v76; // [esp+8Ch] [ebp-298h]
  signed int v77; // [esp+90h] [ebp-294h]
  _DWORD *v78; // [esp+94h] [ebp-290h]
  int v79; // [esp+98h] [ebp-28Ch]
  signed int v80; // [esp+9Ch] [ebp-288h]
  _DWORD *v81; // [esp+A0h] [ebp-284h]
  int v82; // [esp+A4h] [ebp-280h]
  signed int v83; // [esp+A8h] [ebp-27Ch]
  _DWORD *v84; // [esp+ACh] [ebp-278h]
  int v85; // [esp+B0h] [ebp-274h]
  signed int v86; // [esp+B4h] [ebp-270h]
  _DWORD *v87; // [esp+B8h] [ebp-26Ch]
  int v88; // [esp+BCh] [ebp-268h]
  signed int v89; // [esp+C0h] [ebp-264h]
  _DWORD *v90; // [esp+C4h] [ebp-260h]
  int v91; // [esp+C8h] [ebp-25Ch]
  signed int v92; // [esp+CCh] [ebp-258h]
  _DWORD *v93; // [esp+D0h] [ebp-254h]
  int v94; // [esp+D4h] [ebp-250h]
  signed int v95; // [esp+D8h] [ebp-24Ch]
  _DWORD *v96; // [esp+DCh] [ebp-248h]
  int v97; // [esp+E0h] [ebp-244h]
  signed int v98; // [esp+E4h] [ebp-240h]
  int *v99; // [esp+FCh] [ebp-228h]
  int *v100[3]; // [esp+100h] [ebp-224h] BYREF
  char v101[516]; // [esp+10Ch] [ebp-218h] BYREF
  int v102; // [esp+320h] [ebp-4h]

  v3 = a3; /*0x8c7530*/
  ValidateRenderTargetGroup = a1->__vftable->ValidateRenderTargetGroup; /*0x8c7537*/
  v55 = a1; /*0x8c7541*/
  a2 = a3; /*0x8c7545*/
  v6 = ((int (__stdcall *)(char *))ValidateRenderTargetGroup)(&v58); /*0x8c7549*/
  v7 = *(_DWORD *)(a3 + 4) < 2u; /*0x8c754b*/
  v56 = v6; /*0x8c754f*/
  if ( v7 ) /*0x8c7553*/
  {
    v8 = (const char *)(a3 + 8); /*0x8c755f*/
    if ( !*(_BYTE *)(a3 + 8) ) /*0x8c7564*/
      v8 = "Please"; /*0x8c7568*/
    v99 = &v54; /*0x8c7570*/
    sub_8BBFB0((int)v100, 0, v101, 0x200u, 1); /*0x8c758e*/
    v54 = (int)" re-export\n"; /*0x8c7593*/
    v102 = 0; /*0x8c75ab*/
    v9 = sub_8BBDB0(v100, "File "); /*0x8c75b2*/
    v10 = sub_8BBDB0(v9, (const char *)(a3 + 0xE0)); /*0x8c75b9*/
    v11 = sub_8BBDB0(v10, " contains an old bhkMeshShape! "); /*0x8c75c0*/
    v12 = sub_8BBDB0(v11, v8); /*0x8c75c7*/
    sub_8BBDB0(v12, (const char *)v54); /*0x8c75ce*/
    (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x8c75f7*/
      unk_BA7FB0,
      1,
      0x234F2250,
      v101,
      ".\\bhkNiTriStripsShape.cpp",
      0x113);
    v102 = 0xFFFFFFFF; /*0x8c7600*/
    sub_8BC000(v100); /*0x8c760b*/
    v13 = (unsigned int *)a2; /*0x8c7610*/
    sub_7008A0(v55, a2); /*0x8c7619*/
    sub_8C6DD0((float *)v62); /*0x8c7622*/
    v14 = v13[0x87]; /*0x8c7627*/
    v15 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v14 + 4); /*0x8c762d*/
    v102 = 1; /*0x8c763d*/
    v15(v14, v62, 0xC0, 0, 0); /*0x8c7648*/
    if ( v56 ) /*0x8c7651*/
    {
      v16 = v65; /*0x8c7657*/
      v17 = MEMORY[0xBA9DE4]; /*0x8c765d*/
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8c7663*/
      if ( v65 >= 0 ) /*0x8c766a*/
      {
        v19 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C); /*0x8c766f*/
        if ( !v19 ) /*0x8c7677*/
          v19 = unk_BA7D9C; /*0x8c7679*/
        sub_8A75D0(v19, v63, 4 * v65, 0x14); /*0x8c7690*/
        v16 = v65; /*0x8c7695*/
      }
      v65 = v16 & 0x40000000 | 0x80000000; /*0x8c76a3*/
      v20 = v68; /*0x8c76a7*/
      v63 = 0; /*0x8c76ad*/
      v64 = 0; /*0x8c76b1*/
      if ( v68 >= 0 ) /*0x8c76b5*/
      {
        v21 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C); /*0x8c76ba*/
        if ( !v21 ) /*0x8c76c2*/
          v21 = unk_BA7D9C; /*0x8c76c4*/
        sub_8A75D0(v21, v66, 4 * v68, 0x14); /*0x8c76db*/
        v20 = v68; /*0x8c76e0*/
      }
      v68 = v20 & 0x40000000 | 0x80000000; /*0x8c76ee*/
      v22 = v71; /*0x8c76f2*/
      v66 = 0; /*0x8c76f8*/
      v67 = 0; /*0x8c76fc*/
      if ( v71 >= 0 ) /*0x8c7700*/
      {
        v23 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C); /*0x8c7705*/
        if ( !v23 ) /*0x8c770d*/
          v23 = unk_BA7D9C; /*0x8c770f*/
        sub_8A75D0(v23, v69, 4 * v71, 0x14); /*0x8c7726*/
        v22 = v71; /*0x8c772b*/
      }
      v71 = v22 & 0x40000000 | 0x80000000; /*0x8c7739*/
      v24 = v74; /*0x8c773d*/
      v69 = 0; /*0x8c7746*/
      v70 = 0; /*0x8c774a*/
      if ( v74 >= 0 ) /*0x8c774e*/
      {
        v25 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C); /*0x8c7753*/
        if ( !v25 ) /*0x8c775b*/
          v25 = unk_BA7D9C; /*0x8c775d*/
        sub_8A75D0(v25, v72, 4 * v74, 0x14); /*0x8c7774*/
        v24 = v74; /*0x8c7779*/
      }
      v74 = v24 & 0x40000000 | 0x80000000; /*0x8c778a*/
      v26 = v77; /*0x8c7791*/
      v72 = 0; /*0x8c779a*/
      v73 = 0; /*0x8c779e*/
      if ( v77 >= 0 ) /*0x8c77a5*/
      {
        v27 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C); /*0x8c77aa*/
        if ( !v27 ) /*0x8c77b2*/
          v27 = unk_BA7D9C; /*0x8c77b4*/
        sub_8A75D0(v27, v75, v77 & 0x3FFFFFFF, 0x14); /*0x8c77ca*/
        v26 = v77; /*0x8c77cf*/
      }
      v77 = v26 & 0x40000000 | 0x80000000; /*0x8c77e0*/
      v28 = v80; /*0x8c77e7*/
      v75 = 0; /*0x8c77f0*/
      v76 = 0; /*0x8c77f7*/
      if ( v80 >= 0 ) /*0x8c77fe*/
      {
        v29 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C); /*0x8c7803*/
        if ( !v29 ) /*0x8c780b*/
          v29 = unk_BA7D9C; /*0x8c780d*/
        sub_8A75D0(v29, v78, 4 * v80, 0x14); /*0x8c7827*/
        v28 = v80; /*0x8c782c*/
      }
      v80 = v28 & 0x40000000 | 0x80000000; /*0x8c783d*/
      v30 = v83; /*0x8c7844*/
      v78 = 0; /*0x8c784d*/
      v79 = 0; /*0x8c7854*/
      if ( v83 >= 0 ) /*0x8c785b*/
      {
        v31 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C); /*0x8c7860*/
        if ( !v31 ) /*0x8c7868*/
          v31 = unk_BA7D9C; /*0x8c786a*/
        sub_8A75D0(v31, v81, 4 * v83, 0x14); /*0x8c7884*/
        v30 = v83; /*0x8c7889*/
      }
      v83 = v30 & 0x40000000 | 0x80000000; /*0x8c789a*/
      v32 = v86; /*0x8c78a1*/
      v81 = 0; /*0x8c78aa*/
      v82 = 0; /*0x8c78b1*/
      if ( v86 >= 0 ) /*0x8c78b8*/
      {
        v33 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C); /*0x8c78bd*/
        if ( !v33 ) /*0x8c78c5*/
          v33 = unk_BA7D9C; /*0x8c78c7*/
        sub_8A75D0(v33, v84, 4 * v86, 0x14); /*0x8c78e1*/
        v32 = v86; /*0x8c78e6*/
      }
      v86 = v32 & 0x40000000 | 0x80000000; /*0x8c78f7*/
      v34 = v89; /*0x8c78fe*/
      v84 = 0; /*0x8c7907*/
      v85 = 0; /*0x8c790e*/
      if ( v89 >= 0 ) /*0x8c7915*/
      {
        v35 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C); /*0x8c791a*/
        if ( !v35 ) /*0x8c7922*/
          v35 = unk_BA7D9C; /*0x8c7924*/
        sub_8A75D0(v35, v87, 4 * v89, 0x14); /*0x8c793e*/
        v34 = v89; /*0x8c7943*/
      }
      v89 = v34 & 0x40000000 | 0x80000000; /*0x8c7954*/
      v36 = v92; /*0x8c795b*/
      v87 = 0; /*0x8c7964*/
      v88 = 0; /*0x8c796b*/
      if ( v92 >= 0 ) /*0x8c7972*/
      {
        v37 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C); /*0x8c7977*/
        if ( !v37 ) /*0x8c797f*/
          v37 = unk_BA7D9C; /*0x8c7981*/
        sub_8A75D0(v37, v90, 4 * v92, 0x14); /*0x8c799b*/
        v36 = v92; /*0x8c79a0*/
      }
      v92 = v36 & 0x40000000 | 0x80000000; /*0x8c79b1*/
      v38 = v95; /*0x8c79b8*/
      v90 = 0; /*0x8c79c1*/
      v91 = 0; /*0x8c79c8*/
      if ( v95 >= 0 ) /*0x8c79cf*/
      {
        v39 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C); /*0x8c79d4*/
        if ( !v39 ) /*0x8c79dc*/
          v39 = unk_BA7D9C; /*0x8c79de*/
        sub_8A75D0(v39, v93, 4 * v95, 0x14); /*0x8c79f8*/
        v38 = v95; /*0x8c79fd*/
      }
      v95 = v38 & 0x40000000 | 0x80000000; /*0x8c7a0e*/
      v40 = v98; /*0x8c7a15*/
      v93 = 0; /*0x8c7a1e*/
      v94 = 0; /*0x8c7a25*/
      if ( v98 >= 0 ) /*0x8c7a2c*/
      {
        v41 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C); /*0x8c7a31*/
        if ( !v41 ) /*0x8c7a39*/
          v41 = unk_BA7D9C; /*0x8c7a3b*/
        sub_8A75D0(v41, v96, 4 * v98, 0x14); /*0x8c7a55*/
        v40 = v98; /*0x8c7a5a*/
      }
      v42 = v56; /*0x8c7a65*/
      *(float *)(v56 + 4) = *(float *)&v62[1]; /*0x8c7a6e*/
      v98 = v40 & 0x40000000 | 0x80000000; /*0x8c7a76*/
      v43 = (NiDynamicEffectState *)v62[0]; /*0x8c7a7d*/
      v96 = 0; /*0x8c7a84*/
      v97 = 0; /*0x8c7a8b*/
      if ( v62[0] >= 0x1F ) /*0x8c7a92*/
      {
        v43 = 0; /*0x8c7a94*/
        v62[0] = 0; /*0x8c7a96*/
      }
      v13 = (unsigned int *)a2; /*0x8c7a9e*/
      v55->members.dynamicEffectState = v43; /*0x8c7aa2*/
      *(_DWORD *)v42 = 0; /*0x8c7aa5*/
      *(float *)(v42 + 4) = flt_B2EFC4; /*0x8c7aad*/
    }
    sub_712AE0(v13); /*0x8c7ab2*/
    v102 = 0xFFFFFFFF; /*0x8c7abb*/
    return sub_8C6E80(v62); /*0x8c7ac6*/
  }
  else
  {
    sub_8A25C0(a1, a3); /*0x8c7ad3*/
    sub_712AE0((unsigned int *)a3); /*0x8c7ada*/
    v45 = *(_DWORD *)(a3 + 0x21C); /*0x8c7adf*/
    v54 = 1; /*0x8c7ae5*/
    v57 = 0.0; /*0x8c7af5*/
    v52 = v45; /*0x8c7af9*/
    v46 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v45 + 4); /*0x8c7afa*/
    v55 = (NiRenderer *)4; /*0x8c7afd*/
    v46(v52, (int *)&v57, 4, &v55, 1); /*0x8c7b05*/
    result = v56; /*0x8c7b07*/
    if ( v56 ) /*0x8c7b10*/
    {
      v55 = 0; /*0x8c7b1a*/
      if ( SLODWORD(v57) > 0 ) /*0x8c7b1e*/
      {
        v47 = v56 + 8; /*0x8c7b24*/
        while ( 1 ) /*0x8c7b34*/
        {
          slot = 0; /*0x8c7b34*/
          v61 = 0; /*0x8c7b38*/
          v48 = *(_DWORD *)(v3 + 0x21C); /*0x8c7b3c*/
          v54 = 1; /*0x8c7b42*/
          v53 = v48; /*0x8c7b50*/
          v49 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v48 + 4); /*0x8c7b51*/
          v102 = 2; /*0x8c7b54*/
          v56 = 4; /*0x8c7b5f*/
          v49(v53, &v61, 4, &v56, 1); /*0x8c7b67*/
          if ( *(_DWORD *)(v3 + 4) < 9u && (v61 & 0x20) != 0 ) /*0x8c7b78*/
            v61 = v61 & 0xFFFF7FDF | 0x8000; /*0x8c7b82*/
          v50 = *(_DWORD *)(v47 + 0xC); /*0x8c7b86*/
          if ( v50 >= *(_DWORD *)(v47 + 8) ) /*0x8c7b8c*/
            sub_8C69C0((int **)v47, v50 + *(_DWORD *)(v47 + 0x14)); /*0x8c7b96*/
          sub_8C68D0((_DWORD *)v47, v50, (int *)&slot); /*0x8c7ba3*/
          v102 = 0xFFFFFFFF; /*0x8c7bae*/
          if ( slot ) /*0x8c7bb9*/
          {
            v51 = (void (__thiscall ***)(void *, int))slot; /*0x8c7bbb*/
            if ( !InterlockedDecrement((volatile LONG *)slot + 1) ) /*0x8c7bc1*/
              (**v51)(v51, 1); /*0x8c7bd7*/
          }
          result = (int)&v55->__vftable + 1; /*0x8c7bdd*/
          v55 = (NiRenderer *)((char *)v55 + 1); /*0x8c7be4*/
          if ( (int)v55 >= SLODWORD(v57) ) /*0x8c7be8*/
            break; /*0x8c7be8*/
          v3 = a2; /*0x8c7b30*/
        }
      }
    }
  }
  return result; /*0x8c7bee*/
}
