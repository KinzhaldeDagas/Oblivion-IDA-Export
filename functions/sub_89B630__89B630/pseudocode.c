void __thiscall sub_89B630(int *this, int a2, int a3, int a4)
{
  char **v5; // ecx
  int v6; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v8; // eax
  int v9; // esi
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // ecx
  int v13; // eax
  int v14; // esi
  _DWORD *v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // eax
  int v18; // esi
  _DWORD *v19; // ecx
  unsigned __int64 v20; // rax
  int i; // ebx
  int v22; // eax
  int v23; // edi
  char *v24; // edx
  int v25; // ecx
  int v26; // esi
  unsigned int v27; // eax
  char *v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // esi
  _DWORD *v32; // ecx
  unsigned __int64 v33; // rax
  int v34; // ebx
  int *v35; // esi
  int v36; // ebx
  int v37; // eax
  int v38; // esi
  _DWORD *v39; // ecx
  unsigned __int64 v40; // rax
  int *v41; // esi
  int v42; // eax
  int (__thiscall ***v43)(_DWORD, int *, int, int); // eax
  int v45; // eax
  int v46; // eax
  int v47; // esi
  _DWORD *v48; // ecx
  unsigned __int64 v49; // rax
  int v50; // [esp+14h] [ebp-834h]
  int v52; // [esp+1Ch] [ebp-82Ch] BYREF
  _DWORD v53[2]; // [esp+20h] [ebp-828h] BYREF
  _BYTE v54[8]; // [esp+28h] [ebp-820h]
  char *v55; // [esp+30h] [ebp-818h] BYREF
  int v56; // [esp+34h] [ebp-814h]
  int v57; // [esp+38h] [ebp-810h]
  char v58; // [esp+3Ch] [ebp-80Ch] BYREF
  char *v59; // [esp+43Ch] [ebp-40Ch] BYREF
  int v60; // [esp+440h] [ebp-408h]
  int v61; // [esp+444h] [ebp-404h]
  char v62; // [esp+448h] [ebp-400h] BYREF

  if ( *(this + 0x22) ) /*0x89b639*/
  {
    v53[1] = a2; /*0x89b65c*/
    v54[0] = a3; /*0x89b664*/
    v5 = (char **)*(this + 0x20); /*0x89b668*/
    LOBYTE(v53[0]) = 0x12; /*0x89b66f*/
    v54[1] = a4; /*0x89b674*/
    sub_8D8830(v5, (int)v53); /*0x89b678*/
  }
  else
  {
    v6 = MEMORY[0xBA9DE4]; /*0x89b688*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x89b690*/
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x89b697*/
    if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) ) /*0x89b6a6*/
    {
      v9 = ThreadLocalStoragePointer[v6]; /*0x89b6a8*/
      v10 = *(_DWORD **)(v8 + 0x1A4); /*0x89b6aa*/
      *v10 = "LtUpdateFilterOnEntity"; /*0x89b6b0*/
      v10[3] = "init"; /*0x89b6b6*/
      v11 = __rdtsc(); /*0x89b6bd*/
      v10[1] = v11; /*0x89b6c7*/
      *(_DWORD *)(v9 + 0x1A4) = v10 + 4; /*0x89b6cd*/
    }
    v12 = *(this + 0x22) + 1; /*0x89b6dd*/
    v55 = &v58; /*0x89b6de*/
    *(this + 0x22) = v12; /*0x89b6eb*/
    v56 = 0; /*0x89b6f8*/
    v57 = 0x80000080; /*0x89b700*/
    if ( !a3 ) /*0x89b708*/
    {
      v13 = ThreadLocalStoragePointer[v6]; /*0x89b70e*/
      if ( *(_DWORD *)(v13 + 0x1A4) < *(_DWORD *)(v13 + 0x1A8) ) /*0x89b71d*/
      {
        v14 = ThreadLocalStoragePointer[v6]; /*0x89b71f*/
        v15 = *(_DWORD **)(v13 + 0x1A4); /*0x89b721*/
        *v15 = "Stbroadphase"; /*0x89b727*/
        v16 = __rdtsc(); /*0x89b72d*/
        v15[1] = v16; /*0x89b737*/
        *(_DWORD *)(v14 + 0x1A4) = v15 + 3; /*0x89b73d*/
      }
      (*(void (__thiscall **)(_DWORD, int, char **))(*(_DWORD *)*(this + 0x19) + 0x2C))(*(this + 0x19), a2 + 0x28, &v55); /*0x89b755*/
      v17 = ThreadLocalStoragePointer[v6]; /*0x89b758*/
      if ( *(_DWORD *)(v17 + 0x1A4) < *(_DWORD *)(v17 + 0x1A8) ) /*0x89b767*/
      {
        v18 = ThreadLocalStoragePointer[v6]; /*0x89b769*/
        v19 = *(_DWORD **)(v17 + 0x1A4); /*0x89b76b*/
        *v19 = "Stphantom"; /*0x89b771*/
        v20 = __rdtsc(); /*0x89b777*/
        v19[1] = v20; /*0x89b781*/
        *(_DWORD *)(v18 + 0x1A4) = v19 + 3; /*0x89b787*/
      }
      for ( i = 0; i < v56; ++i ) /*0x89b795*/
      {
        v22 = *(_DWORD *)&v55[8 * i + 4] + *(char *)(*(_DWORD *)&v55[8 * i + 4] + 5); /*0x89b7ac*/
        if ( *(_BYTE *)(v22 + 0x18) == 2 ) /*0x89b7b2*/
        {
          v23 = v22 + *(_DWORD *)(v22 + 0x10); /*0x89b7b7*/
          if ( v23 ) /*0x89b7b9*/
          {
            sub_898760(v23, a2 + 0x14, *(this + 0x1E)); /*0x89b7c6*/
            if ( a4 ) /*0x89b7d7*/
              (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 0x28))(v23); /*0x89b7dd*/
            --v56; /*0x89b7e9*/
            v24 = v55; /*0x89b7ed*/
            *(_DWORD *)&v55[8 * i] = *(_DWORD *)&v55[8 * v56]; /*0x89b7f2*/
            *(_DWORD *)&v55[8 * i-- + 4] = *(_DWORD *)&v24[8 * v56 + 4]; /*0x89b801*/
          }
          ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x89b806*/
        }
      }
      v59 = &v62; /*0x89b81d*/
      v25 = *(_DWORD *)(a2 + 0x3C); /*0x89b824*/
      v26 = 0; /*0x89b827*/
      v27 = 0x80000080; /*0x89b82b*/
      v60 = 0; /*0x89b830*/
      v61 = 0x80000080; /*0x89b837*/
      if ( v25 > 0 ) /*0x89b83e*/
      {
        while ( 1 ) /*0x89b850*/
        {
          if ( v60 == (v27 & 0x3FFFFFFF) ) /*0x89b85e*/
            sub_8A6EE0((const void **)&v59, 8); /*0x89b86a*/
          v28 = &v59[8 * v60++]; /*0x89b880*/
          *(_DWORD *)v28 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0x38) + 8 * v26) + 0x14) + 0x14; /*0x89b897*/
          *((_DWORD *)v28 + 1) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0x38) + 8 * v26++) + 0x18) + 0x14; /*0x89b8a5*/
          if ( v26 >= *(_DWORD *)(a2 + 0x3C) ) /*0x89b8ae*/
            break; /*0x89b8ae*/
          v27 = v61; /*0x89b842*/
        }
      }
      sub_8D84F0((const void **)&v59, (int *)&v55); /*0x89b8bd*/
      if ( v61 >= 0 ) /*0x89b8ce*/
      {
        v29 = *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] + 0x19C); /*0x89b8d9*/
        if ( !v29 ) /*0x89b8e1*/
          v29 = unk_BA7D9C; /*0x89b8e3*/
        sub_8A75D0(v29, v59, 8 * v61, 0x14); /*0x89b8fc*/
      }
      v6 = MEMORY[0xBA9DE4]; /*0x89b901*/
    }
    v30 = ThreadLocalStoragePointer[v6]; /*0x89b907*/
    if ( *(_DWORD *)(v30 + 0x1A4) < *(_DWORD *)(v30 + 0x1A8) ) /*0x89b916*/
    {
      v31 = ThreadLocalStoragePointer[v6]; /*0x89b918*/
      v32 = *(_DWORD **)(v30 + 0x1A4); /*0x89b91a*/
      *v32 = "StcheckAgts"; /*0x89b920*/
      v33 = __rdtsc(); /*0x89b926*/
      v32[1] = v33; /*0x89b930*/
      *(_DWORD *)(v31 + 0x1A4) = v32 + 3; /*0x89b936*/
    }
    v50 = *(unsigned __int16 *)(a2 + 0x2E); /*0x89b940*/
    v34 = 0; /*0x89b947*/
    if ( *(int *)(a2 + 0x3C) > 0 ) /*0x89b94b*/
    {
      do /*0x89b9cb*/
      {
        v35 = (int *)(*(_DWORD *)(a2 + 0x38) + 8 * v34); /*0x89b95b*/
        if ( *(_BYTE *)(**(int (__thiscall ***)(int, char *, int, int))(*(this + 0x1E) + 8))( /*0x89b98d*/
                         *(this + 0x1E) + 8,
                         (char *)&v52 + 3,
                         a2 + 0x14,
                         v35[1])
          && *(_BYTE *)(*(unsigned __int16 *)(v35[1] + 0x1A) + 8 * v50 + *(this + 0x1F) + 0x19D4) )
        {
          if ( a4 == 1 ) /*0x89b9b4*/
            sub_8E6560(*v35, (_DWORD *)*(this + 0x1D)); /*0x89b9bd*/
        }
        else
        {
          sub_8E7920((_DWORD *)*v35); /*0x89b99a*/
          --v34; /*0x89b9a5*/
          *(_BYTE *)(*(_DWORD *)(a2 + 0x54) + 0x26) = 1; /*0x89b9a6*/
        }
        ++v34; /*0x89b9c8*/
      }
      while ( v34 < *(_DWORD *)(a2 + 0x3C) ); /*0x89b9cb*/
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x89b9cd*/
    }
    v36 = MEMORY[0xBA9DE4]; /*0x89b9da*/
    if ( v56 <= 0 ) /*0x89b9e0*/
    {
      v41 = this; /*0x89ba3e*/
    }
    else
    {
      v37 = ThreadLocalStoragePointer[v36]; /*0x89b9e2*/
      if ( *(_DWORD *)(v37 + 0x1A4) < *(_DWORD *)(v37 + 0x1A8) ) /*0x89b9f1*/
      {
        v38 = ThreadLocalStoragePointer[v36]; /*0x89b9f3*/
        v39 = *(_DWORD **)(v37 + 0x1A4); /*0x89b9f5*/
        *v39 = "StaddAgts"; /*0x89b9fb*/
        v40 = __rdtsc(); /*0x89ba01*/
        v39[1] = v40; /*0x89ba0b*/
        *(_DWORD *)(v38 + 0x1A4) = v39 + 3; /*0x89ba11*/
      }
      v41 = this; /*0x89ba17*/
      v42 = *(this + 0x1E); /*0x89ba1b*/
      if ( v42 ) /*0x89ba20*/
        v43 = (int (__thiscall ***)(_DWORD, int *, int, int))(v42 + 8); /*0x89ba22*/
      else
        v43 = 0; /*0x89ba27*/
      sub_8D8370((_DWORD **)*(this + 0x1A), v55, v56, v43); /*0x89ba37*/
    }
    if ( v41[0x22]-- == 1 ) /*0x89ba42*/
    {
      if ( v41[0x21] ) /*0x89ba4a*/
      {
        if ( !*((_BYTE *)v41 + 0x90) ) /*0x89ba54*/
          sub_899210((int)v41); /*0x89ba60*/
      }
    }
    if ( v57 >= 0 ) /*0x89ba6b*/
    {
      v45 = *(_DWORD *)(ThreadLocalStoragePointer[v36] + 0x19C); /*0x89ba70*/
      if ( !v45 ) /*0x89ba78*/
        v45 = unk_BA7D9C; /*0x89ba7a*/
      sub_8A75D0(v45, v55, 8 * v57, 0x14); /*0x89ba92*/
    }
    v46 = ThreadLocalStoragePointer[v36]; /*0x89ba97*/
    if ( *(_DWORD *)(v46 + 0x1A4) < *(_DWORD *)(v46 + 0x1A8) ) /*0x89baa6*/
    {
      v47 = ThreadLocalStoragePointer[v36]; /*0x89baa8*/
      v48 = *(_DWORD **)(v46 + 0x1A4); /*0x89baaa*/
      *v48 = "lt"; /*0x89bab0*/
      v49 = __rdtsc(); /*0x89bab6*/
      v48[1] = v49; /*0x89bac0*/
      *(_DWORD *)(v47 + 0x1A4) = v48 + 3; /*0x89bac6*/
    }
  }
}
