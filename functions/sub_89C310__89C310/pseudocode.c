void __thiscall sub_89C310(_DWORD *this, int a2, int a3, int a4)
{
  char **v5; // ecx
  int v6; // ebx
  _DWORD *ThreadLocalStoragePointer; // ebp
  int v8; // eax
  int v9; // esi
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // ebp
  _DWORD *v13; // ecx
  _DWORD *v14; // edx
  char *v15; // esi
  _DWORD *v16; // eax
  _DWORD *v17; // ecx
  _DWORD *v18; // edx
  char *v19; // ebp
  _DWORD *v20; // eax
  char v21; // al
  int v22; // eax
  const void **v23; // eax
  const void **v24; // ebp
  int v25; // eax
  int v26; // ecx
  int v27; // ecx
  int v28; // ebx
  int v29; // esi
  char v30; // al
  const void **v31; // ecx
  const void **v32; // esi
  _DWORD *v33; // ecx
  int v34; // esi
  _DWORD *v35; // edx
  char *v36; // ebp
  _DWORD *v37; // eax
  int v38; // ebx
  _DWORD *v39; // esi
  _DWORD *v40; // ecx
  unsigned __int64 v41; // rax
  _DWORD *v42; // ecx
  unsigned __int64 v43; // rax
  int v44; // eax
  int (__thiscall ***v45)(_DWORD, int *, int, int); // eax
  unsigned __int64 v46; // rax
  _DWORD *v47; // ecx
  int j; // esi
  int v49; // ebp
  bool v50; // zf
  _DWORD *v51; // edx
  _DWORD *v52; // ecx
  unsigned __int64 v53; // rax
  _DWORD *v54; // ecx
  _DWORD *v55; // eax
  int v56; // ecx
  _DWORD *v57; // ecx
  _DWORD *v58; // eax
  int v59; // ecx
  _DWORD *v60; // ecx
  _DWORD *v61; // eax
  int v62; // ecx
  _DWORD *v63; // [esp+10h] [ebp-60h]
  char v64; // [esp+27h] [ebp-49h]
  int v65; // [esp+28h] [ebp-48h]
  float i; // [esp+2Ch] [ebp-44h]
  _DWORD v67[2]; // [esp+30h] [ebp-40h] BYREF
  __int16 v68; // [esp+38h] [ebp-38h]
  char v69; // [esp+3Ah] [ebp-36h]
  _DWORD *v70; // [esp+40h] [ebp-30h] BYREF
  int v71; // [esp+44h] [ebp-2Ch]
  signed int v72; // [esp+48h] [ebp-28h]
  _DWORD *v73; // [esp+4Ch] [ebp-24h]
  _DWORD *v74; // [esp+50h] [ebp-20h] BYREF
  int v75; // [esp+54h] [ebp-1Ch]
  signed int v76; // [esp+58h] [ebp-18h]
  _DWORD *v77; // [esp+5Ch] [ebp-14h]
  _DWORD *v78; // [esp+60h] [ebp-10h] BYREF
  int v79; // [esp+64h] [ebp-Ch]
  signed int v80; // [esp+68h] [ebp-8h]
  _DWORD *v81; // [esp+6Ch] [ebp-4h]

  if ( a3 ) /*0x89c31c*/
  {
    if ( *(this + 0x22) ) /*0x89c322*/
    {
      v68 = a3; /*0x89c334*/
      v67[1] = a2; /*0x89c33d*/
      v5 = (char **)*(this + 0x20); /*0x89c341*/
      LOBYTE(v67[0]) = 6; /*0x89c348*/
      v69 = a4; /*0x89c34d*/
      sub_8D8830(v5, (int)v67); /*0x89c351*/
    }
    else
    {
      v6 = MEMORY[0xBA9DE4]; /*0x89c35e*/
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x89c365*/
      v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x89c36c*/
      if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) ) /*0x89c37d*/
      {
        v9 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x89c37f*/
        v10 = *(_DWORD **)(v8 + 0x1A4); /*0x89c381*/
        *v10 = "LtAddEntities"; /*0x89c387*/
        v10[3] = "init"; /*0x89c38d*/
        v11 = __rdtsc(); /*0x89c394*/
        v10[1] = v11; /*0x89c39e*/
        *(_DWORD *)(v9 + 0x1A4) = v10 + 4; /*0x89c3a4*/
      }
      v12 = ThreadLocalStoragePointer[v6]; /*0x89c3b0*/
      ++*(this + 0x22); /*0x89c3b7*/
      v13 = *(_DWORD **)(v12 + 0x19C); /*0x89c3bd*/
      v70 = 0; /*0x89c3c5*/
      v71 = 0; /*0x89c3c9*/
      v72 = 0x80000000; /*0x89c3cd*/
      v65 = v12; /*0x89c3d5*/
      if ( !v13 ) /*0x89c3d9*/
        v13 = (_DWORD *)unk_BA7D9C; /*0x89c3db*/
      v14 = (_DWORD *)v13[8]; /*0x89c3e5*/
      v15 = (char *)v14 + ((4 * a3 + 0x10) & 0xFFFFFFF0); /*0x89c3f2*/
      if ( (unsigned int)v15 > v13[0xB] ) /*0x89c3f8*/
      {
        v16 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v13 + 0xC))(v13, (4 * a3 + 0x10) & 0xFFFFFFF0); /*0x89c404*/
      }
      else
      {
        v13[8] = v15; /*0x89c3fa*/
        v16 = v14; /*0x89c3fd*/
      }
      v17 = *(_DWORD **)(v12 + 0x19C); /*0x89c407*/
      v70 = v16; /*0x89c40d*/
      v73 = v16; /*0x89c413*/
      v72 = a3 | 0x80000000; /*0x89c421*/
      v74 = 0; /*0x89c425*/
      v75 = 0; /*0x89c429*/
      v76 = 0x80000000; /*0x89c42d*/
      if ( !v17 ) /*0x89c435*/
        v17 = (_DWORD *)unk_BA7D9C; /*0x89c437*/
      v18 = (_DWORD *)v17[8]; /*0x89c43d*/
      v19 = (char *)v18 + ((0x20 * a3 + 0x10) & 0xFFFFFFF0); /*0x89c44b*/
      if ( (unsigned int)v19 > v17[0xB] ) /*0x89c451*/
      {
        v20 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v17 + 0xC))( /*0x89c45d*/
                          v17,
                          (0x20 * a3 + 0x10) & 0xFFFFFFF0);
      }
      else
      {
        v17[8] = v19; /*0x89c453*/
        v20 = v18; /*0x89c456*/
      }
      v74 = v20; /*0x89c460*/
      v77 = v20; /*0x89c464*/
      v21 = *((_BYTE *)this + 0xA4); /*0x89c468*/
      v76 = a3 | 0x80000000; /*0x89c470*/
      v64 = 0; /*0x89c474*/
      if ( v21 ) /*0x89c479*/
      {
        v22 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x6C, 0x2F); /*0x89c487*/
        *(_WORD *)(v22 + 4) = 0x6C; /*0x89c48d*/
        v23 = (const void **)sub_8DE400((_DWORD *)v22, (int)this); /*0x89c493*/
        v24 = v23; /*0x89c498*/
        if ( a4 == 1 ) /*0x89c49f*/
        {
          *((_WORD *)v23 + 0x10) = *((_WORD *)this + 0x1E); /*0x89c4a5*/
          *((_BYTE *)v23 + 0x26) = 1; /*0x89c4a9*/
          *((_BYTE *)v23 + 0x29) = 1; /*0x89c4ad*/
          *((_BYTE *)v23 + 0x28) = 1; /*0x89c4b1*/
        }
        else
        {
          *((_WORD *)v23 + 0x10) = *((_WORD *)this + 0x24); /*0x89c4bb*/
          *((_BYTE *)v23 + 0x26) = 1; /*0x89c4bf*/
          *((_BYTE *)v23 + 0x29) = 0; /*0x89c4c3*/
          *((_BYTE *)v23 + 0x28) = 0; /*0x89c4c7*/
        }
      }
      else
      {
        v24 = *(const void ***)*(this + 0xE); /*0x89c4d0*/
        v25 = (int)v24[0xE] + a3; /*0x89c4db*/
        v26 = (unsigned int)v24[0xF] & 0x3FFFFFFF; /*0x89c4dd*/
        if ( v26 < v25 ) /*0x89c4e5*/
        {
          v27 = 2 * v26; /*0x89c4e7*/
          if ( v25 < v27 ) /*0x89c4eb*/
            v25 = v27; /*0x89c4ed*/
          sub_8A6E40(v24 + 0xD, v25, 4); /*0x89c4f3*/
        }
      }
      v28 = 0; /*0x89c50b*/
      for ( i = *(float *)(*(this + 0x1D) + 8) * kHeadBodyNormalMatchRadius; v28 < a3; ++v28 ) /*0x89c513*/
      {
        v29 = *(_DWORD *)(a2 + 4 * v28); /*0x89c524*/
        sub_8BC720((_WORD *)v29); /*0x89c529*/
        if ( !*(_DWORD *)(v29 + 0x1C) ) /*0x89c52e*/
          *(_DWORD *)(v29 + 0x1C) = (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 0xC))(v29); /*0x89c53c*/
        sub_8DD0C0(0.0, 0, *(_DWORD *)(v29 + 0x50) + 0x10); /*0x89c54a*/
        v30 = *(_BYTE *)(v29 + 0x91); /*0x89c54f*/
        *(_DWORD *)(v29 + 8) = this; /*0x89c55a*/
        if ( v30 ) /*0x89c55e*/
        {
          v31 = (const void **)*(this + 0xC); /*0x89c560*/
        }
        else
        {
          v64 = 1; /*0x89c565*/
          v31 = v24; /*0x89c56a*/
        }
        sub_8DDE30(v31, v29); /*0x89c56c*/
        if ( *(_DWORD *)(v29 + 0x14) ) /*0x89c571*/
        {
          v63 = &v74[8 * v75++]; /*0x89c586*/
          (*(void (__thiscall **)(_DWORD, _DWORD, float, _DWORD *))(**(_DWORD **)(v29 + 0x14) + 0xC))( /*0x89c599*/
            *(_DWORD *)(v29 + 0x14),
            *(_DWORD *)(v29 + 0x1C),
            COERCE_FLOAT(LODWORD(i)),
            v63);
          v70[v71++] = v29 + 0x28; /*0x89c5a7*/
        }
      }
      if ( *((_BYTE *)this + 0xA4) ) /*0x89c5bb*/
      {
        if ( v64 ) /*0x89c5cb*/
        {
          v32 = (const void **)(this + 0xE); /*0x89c5d2*/
          if ( a4 != 1 ) /*0x89c5d5*/
            v32 = (const void **)(this + 0x11); /*0x89c5d7*/
          if ( v32[1] == (const void *)((unsigned int)v32[2] & 0x3FFFFFFF) ) /*0x89c5e7*/
            sub_8A6EE0(v32, 4); /*0x89c5ec*/
          *((_DWORD *)*v32 + (_DWORD)v32[1]) = v24; /*0x89c5f9*/
          v32[1] = (char *)v32[1] + 1; /*0x89c5fc*/
        }
        else
        {
          (*(void (__thiscall **)(const void **, int))*v24)(v24, 1); /*0x89c608*/
        }
      }
      v33 = *(_DWORD **)(v65 + 0x19C); /*0x89c60e*/
      v34 = *(this + 0xA9); /*0x89c614*/
      v78 = 0; /*0x89c61e*/
      v79 = 0; /*0x89c622*/
      v80 = 0x80000000; /*0x89c626*/
      if ( !v33 ) /*0x89c62e*/
        v33 = (_DWORD *)unk_BA7D9C; /*0x89c630*/
      v35 = (_DWORD *)v33[8]; /*0x89c636*/
      v36 = (char *)v35 + ((8 * v34 + 0x10) & 0xFFFFFFF0); /*0x89c646*/
      if ( (unsigned int)v36 > v33[0xB] ) /*0x89c64b*/
      {
        v37 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v33 + 0xC))(v33, (8 * v34 + 0x10) & 0xFFFFFFF0); /*0x89c657*/
      }
      else
      {
        v33[8] = v36; /*0x89c64d*/
        v37 = v35; /*0x89c650*/
      }
      v38 = MEMORY[0xBA9DE4]; /*0x89c65a*/
      v80 = v34 | 0x80000000; /*0x89c66a*/
      v39 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x89c66e*/
      v78 = v37; /*0x89c675*/
      v81 = v37; /*0x89c679*/
      if ( *(_DWORD *)(v39[v38] + 0x1A4) < *(_DWORD *)(v39[v38] + 0x1A8) ) /*0x89c68c*/
      {
        v40 = *(_DWORD **)(v65 + 0x1A4); /*0x89c68e*/
        *v40 = "StBroadphase"; /*0x89c694*/
        v41 = __rdtsc(); /*0x89c69a*/
        v40[1] = v41; /*0x89c6a4*/
        *(_DWORD *)(v65 + 0x1A4) = v40 + 3; /*0x89c6aa*/
      }
      (*(void (__thiscall **)(_DWORD, _DWORD **, _DWORD **, _DWORD **))(*(_DWORD *)*(this + 0x19) + 0xC))( /*0x89c6c4*/
        *(this + 0x19),
        &v70,
        &v74,
        &v78);
      if ( *(_DWORD *)(v39[v38] + 0x1A4) < *(_DWORD *)(v39[v38] + 0x1A8) ) /*0x89c6d6*/
      {
        v42 = *(_DWORD **)(v65 + 0x1A4); /*0x89c6d8*/
        *v42 = "StCreateAgents"; /*0x89c6de*/
        v43 = __rdtsc(); /*0x89c6e4*/
        v42[1] = v43; /*0x89c6ee*/
        *(_DWORD *)(v65 + 0x1A4) = v42 + 3; /*0x89c6f4*/
      }
      v44 = *(this + 0x1E); /*0x89c6fa*/
      if ( v44 ) /*0x89c6ff*/
        v45 = (int (__thiscall ***)(_DWORD, int *, int, int))(v44 + 8); /*0x89c701*/
      else
        v45 = 0; /*0x89c706*/
      sub_8D8370((_DWORD **)*(this + 0x1A), v78, v79, v45); /*0x89c716*/
      LODWORD(v46) = v39[v38]; /*0x89c71b*/
      if ( *(_DWORD *)(v46 + 0x1A4) < *(_DWORD *)(v46 + 0x1A8) ) /*0x89c72a*/
      {
        v47 = *(_DWORD **)(v65 + 0x1A4); /*0x89c72c*/
        *v47 = "StAddedCb"; /*0x89c732*/
        v46 = __rdtsc(); /*0x89c738*/
        v47[1] = v46; /*0x89c742*/
        *(_DWORD *)(v65 + 0x1A4) = v47 + 3; /*0x89c748*/
      }
      for ( j = 0; j < a3; ++j ) /*0x89c756*/
      {
        v49 = *(_DWORD *)(a2 + 4 * j); /*0x89c75c*/
        sub_8DC380(v46, (int)this, v49); /*0x89c761*/
        LODWORD(v46) = sub_8DBEF0(v49); /*0x89c767*/
      }
      v50 = (*(this + 0x22))-- == 1; /*0x89c774*/
      if ( v50 ) /*0x89c77a*/
      {
        if ( *(this + 0x21) ) /*0x89c77c*/
        {
          if ( !*((_BYTE *)this + 0x90) ) /*0x89c786*/
            sub_899210((int)this); /*0x89c792*/
        }
      }
      v51 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x89c797*/
      if ( *(_DWORD *)(v51[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v51[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x89c7b6*/
      {
        v52 = *(_DWORD **)(v65 + 0x1A4); /*0x89c7b8*/
        *v52 = "lt"; /*0x89c7be*/
        v53 = __rdtsc(); /*0x89c7c4*/
        v52[1] = v53; /*0x89c7ce*/
        *(_DWORD *)(v65 + 0x1A4) = v52 + 3; /*0x89c7d4*/
      }
      v54 = *(_DWORD **)(v65 + 0x19C); /*0x89c7da*/
      v55 = v81; /*0x89c7e2*/
      if ( !v54 ) /*0x89c7e6*/
        v54 = (_DWORD *)unk_BA7D9C; /*0x89c7e8*/
      v50 = v81 == (_DWORD *)v54[0xA]; /*0x89c7ee*/
      v54[8] = v81; /*0x89c7f1*/
      if ( v50 ) /*0x89c7f4*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v54 + 0x10))(v54, v55); /*0x89c7f9*/
      if ( v80 >= 0 ) /*0x89c802*/
      {
        v56 = *(_DWORD *)(v65 + 0x19C); /*0x89c804*/
        if ( !v56 ) /*0x89c80c*/
          v56 = unk_BA7D9C; /*0x89c80e*/
        sub_8A75D0(v56, v78, 8 * v80, 0x14); /*0x89c824*/
      }
      v57 = *(_DWORD **)(v65 + 0x19C); /*0x89c829*/
      v58 = v77; /*0x89c831*/
      if ( !v57 ) /*0x89c835*/
        v57 = (_DWORD *)unk_BA7D9C; /*0x89c837*/
      v50 = v77 == (_DWORD *)v57[0xA]; /*0x89c83d*/
      v57[8] = v77; /*0x89c840*/
      if ( v50 ) /*0x89c843*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v57 + 0x10))(v57, v58); /*0x89c848*/
      if ( v76 >= 0 ) /*0x89c851*/
      {
        v59 = *(_DWORD *)(v65 + 0x19C); /*0x89c853*/
        if ( !v59 ) /*0x89c85b*/
          v59 = unk_BA7D9C; /*0x89c85d*/
        sub_8A75D0(v59, v74, 0x20 * v76, 0x14); /*0x89c873*/
      }
      v60 = *(_DWORD **)(v65 + 0x19C); /*0x89c878*/
      v61 = v73; /*0x89c880*/
      if ( !v60 ) /*0x89c884*/
        v60 = (_DWORD *)unk_BA7D9C; /*0x89c886*/
      v50 = v73 == (_DWORD *)v60[0xA]; /*0x89c88c*/
      v60[8] = v73; /*0x89c88f*/
      if ( v50 ) /*0x89c892*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v60 + 0x10))(v60, v61); /*0x89c897*/
      if ( v72 >= 0 ) /*0x89c8a0*/
      {
        v62 = *(_DWORD *)(v65 + 0x19C); /*0x89c8a2*/
        if ( !v62 ) /*0x89c8aa*/
          v62 = unk_BA7D9C; /*0x89c8ac*/
        sub_8A75D0(v62, v70, 4 * v72, 0x14); /*0x89c8c2*/
      }
    }
  }
}
