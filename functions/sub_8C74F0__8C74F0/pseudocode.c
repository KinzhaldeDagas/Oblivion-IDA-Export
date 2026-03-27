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
  void (__thiscall ***v51)(_DWORD, int); // esi
  int v52; // [esp-14h] [ebp-338h]
  int v53; // [esp-14h] [ebp-338h]
  int v54; // [esp-4h] [ebp-328h] BYREF
  NiRenderer *v55; // [esp+18h] [ebp-30Ch] BYREF
  int v56; // [esp+1Ch] [ebp-308h] BYREF
  int v57; // [esp+20h] [ebp-304h] BYREF
  char v58; // [esp+27h] [ebp-2FDh] BYREF
  signed int a2; // [esp+28h] [ebp-2FCh]
  int v60; // [esp+2Ch] [ebp-2F8h] BYREF
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

  v3 = a3;
  ValidateRenderTargetGroup = a1->__vftable->ValidateRenderTargetGroup;
  v55 = a1;
  a2 = a3;
  v6 = ((int (__stdcall *)(char *))ValidateRenderTargetGroup)(&v58);
  v7 = *(_DWORD *)(a3 + 4) < 2u;
  v56 = v6;
  if ( v7 )
  {
    v8 = (const char *)(a3 + 8);
    if ( !*(_BYTE *)(a3 + 8) )
      v8 = "Please";
    v99 = &v54;
    sub_8BBFB0((int)v100, 0, v101, 0x200u, 1);
    v54 = (int)" re-export\n";
    v102 = 0;
    v9 = sub_8BBDB0(v100, "File ");
    v10 = sub_8BBDB0(v9, (const char *)(a3 + 0xE0));
    v11 = sub_8BBDB0(v10, " contains an old bhkMeshShape! ");
    v12 = sub_8BBDB0(v11, v8);
    sub_8BBDB0(v12, (const char *)v54);
    (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
      dword_BA7FB0,
      1,
      0x234F2250,
      v101,
      ".\\bhkNiTriStripsShape.cpp",
      0x113);
    v102 = 0xFFFFFFFF;
    sub_8BC000(v100);
    v13 = (unsigned int *)a2;
    sub_7008A0(v55, a2);
    sub_8C6DD0((float *)v62);
    v14 = v13[0x87];
    v15 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v14 + 4);
    v102 = 1;
    v15(v14, v62, 0xC0, 0, 0);
    if ( v56 )
    {
      v16 = v65;
      v17 = TlsIndex;
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
      if ( v65 >= 0 )
      {
        v19 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C);
        if ( !v19 )
          v19 = dword_BA7D9C;
        sub_8A75D0(v19, v63, 4 * v65, 0x14);
        v16 = v65;
      }
      v65 = v16 & 0x40000000 | 0x80000000;
      v20 = v68;
      v63 = 0;
      v64 = 0;
      if ( v68 >= 0 )
      {
        v21 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C);
        if ( !v21 )
          v21 = dword_BA7D9C;
        sub_8A75D0(v21, v66, 4 * v68, 0x14);
        v20 = v68;
      }
      v68 = v20 & 0x40000000 | 0x80000000;
      v22 = v71;
      v66 = 0;
      v67 = 0;
      if ( v71 >= 0 )
      {
        v23 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C);
        if ( !v23 )
          v23 = dword_BA7D9C;
        sub_8A75D0(v23, v69, 4 * v71, 0x14);
        v22 = v71;
      }
      v71 = v22 & 0x40000000 | 0x80000000;
      v24 = v74;
      v69 = 0;
      v70 = 0;
      if ( v74 >= 0 )
      {
        v25 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C);
        if ( !v25 )
          v25 = dword_BA7D9C;
        sub_8A75D0(v25, v72, 4 * v74, 0x14);
        v24 = v74;
      }
      v74 = v24 & 0x40000000 | 0x80000000;
      v26 = v77;
      v72 = 0;
      v73 = 0;
      if ( v77 >= 0 )
      {
        v27 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C);
        if ( !v27 )
          v27 = dword_BA7D9C;
        sub_8A75D0(v27, v75, v77 & 0x3FFFFFFF, 0x14);
        v26 = v77;
      }
      v77 = v26 & 0x40000000 | 0x80000000;
      v28 = v80;
      v75 = 0;
      v76 = 0;
      if ( v80 >= 0 )
      {
        v29 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C);
        if ( !v29 )
          v29 = dword_BA7D9C;
        sub_8A75D0(v29, v78, 4 * v80, 0x14);
        v28 = v80;
      }
      v80 = v28 & 0x40000000 | 0x80000000;
      v30 = v83;
      v78 = 0;
      v79 = 0;
      if ( v83 >= 0 )
      {
        v31 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C);
        if ( !v31 )
          v31 = dword_BA7D9C;
        sub_8A75D0(v31, v81, 4 * v83, 0x14);
        v30 = v83;
      }
      v83 = v30 & 0x40000000 | 0x80000000;
      v32 = v86;
      v81 = 0;
      v82 = 0;
      if ( v86 >= 0 )
      {
        v33 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C);
        if ( !v33 )
          v33 = dword_BA7D9C;
        sub_8A75D0(v33, v84, 4 * v86, 0x14);
        v32 = v86;
      }
      v86 = v32 & 0x40000000 | 0x80000000;
      v34 = v89;
      v84 = 0;
      v85 = 0;
      if ( v89 >= 0 )
      {
        v35 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C);
        if ( !v35 )
          v35 = dword_BA7D9C;
        sub_8A75D0(v35, v87, 4 * v89, 0x14);
        v34 = v89;
      }
      v89 = v34 & 0x40000000 | 0x80000000;
      v36 = v92;
      v87 = 0;
      v88 = 0;
      if ( v92 >= 0 )
      {
        v37 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C);
        if ( !v37 )
          v37 = dword_BA7D9C;
        sub_8A75D0(v37, v90, 4 * v92, 0x14);
        v36 = v92;
      }
      v92 = v36 & 0x40000000 | 0x80000000;
      v38 = v95;
      v90 = 0;
      v91 = 0;
      if ( v95 >= 0 )
      {
        v39 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C);
        if ( !v39 )
          v39 = dword_BA7D9C;
        sub_8A75D0(v39, v93, 4 * v95, 0x14);
        v38 = v95;
      }
      v95 = v38 & 0x40000000 | 0x80000000;
      v40 = v98;
      v93 = 0;
      v94 = 0;
      if ( v98 >= 0 )
      {
        v41 = *(_DWORD *)(ThreadLocalStoragePointer[v17] + 0x19C);
        if ( !v41 )
          v41 = dword_BA7D9C;
        sub_8A75D0(v41, v96, 4 * v98, 0x14);
        v40 = v98;
      }
      v42 = v56;
      *(float *)(v56 + 4) = *(float *)&v62[1];
      v98 = v40 & 0x40000000 | 0x80000000;
      v43 = (NiDynamicEffectState *)v62[0];
      v96 = 0;
      v97 = 0;
      if ( v62[0] >= 0x1F )
      {
        v43 = 0;
        v62[0] = 0;
      }
      v13 = (unsigned int *)a2;
      v55->members.dynamicEffectState = v43;
      *(_DWORD *)v42 = 0;
      *(float *)(v42 + 4) = flt_B2EFC4;
    }
    sub_712AE0(v13);
    v102 = 0xFFFFFFFF;
    return sub_8C6E80(v62);
  }
  else
  {
    sub_8A25C0(a1, a3);
    sub_712AE0((unsigned int *)a3);
    v45 = *(_DWORD *)(a3 + 0x21C);
    v54 = 1;
    v57 = 0.0;
    v52 = v45;
    v46 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v45 + 4);
    v55 = (NiRenderer *)4;
    v46(v52, (int *)&v57, 4, &v55, 1);
    result = v56;
    if ( v56 )
    {
      v55 = 0;
      if ( SLODWORD(v57) > 0 )
      {
        v47 = v56 + 8;
        while ( 1 )
        {
          v60 = 0;
          v61 = 0;
          v48 = *(_DWORD *)(v3 + 0x21C);
          v54 = 1;
          v53 = v48;
          v49 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(v48 + 4);
          v102 = 2;
          v56 = 4;
          v49(v53, &v61, 4, &v56, 1);
          if ( *(_DWORD *)(v3 + 4) < 9u && (v61 & 0x20) != 0 )
            v61 = v61 & 0xFFFF7FDF | 0x8000;
          v50 = *(_DWORD *)(v47 + 0xC);
          if ( v50 >= *(_DWORD *)(v47 + 8) )
            sub_8C69C0((int **)v47, v50 + *(_DWORD *)(v47 + 0x14));
          sub_8C68D0((_DWORD *)v47, v50, &v60);
          v102 = 0xFFFFFFFF;
          if ( v60 )
          {
            v51 = (void (__thiscall ***)(_DWORD, int))v60;
            if ( !InterlockedDecrement((volatile LONG *)(v60 + 4)) )
              (**v51)(v51, 1);
          }
          result = (int)&v55->__vftable + 1;
          v55 = (NiRenderer *)((char *)v55 + 1);
          if ( (int)v55 >= SLODWORD(v57) )
            break;
          v3 = a2;
        }
      }
    }
  }
  return result;
}
