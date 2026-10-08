void __thiscall sub_89C8E0(_DWORD *this, int *a2, int a3)
{
  char **v4; // ecx
  int v5; // ecx
  _DWORD *ThreadLocalStoragePointer; // ebp
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // ebp
  _DWORD *v12; // ecx
  _DWORD *v13; // edx
  char *v14; // esi
  _DWORD *v15; // eax
  int *v16; // ecx
  int *v17; // edx
  int v18; // eax
  _DWORD *v19; // ecx
  unsigned __int64 v20; // rax
  _DWORD *v21; // ecx
  int v22; // edi
  _DWORD *v23; // edx
  char *v24; // ebp
  _DWORD *v25; // eax
  int v26; // ecx
  _DWORD *v27; // edi
  int v28; // esi
  _DWORD *v29; // ecx
  unsigned __int64 v30; // rax
  _DWORD *v31; // eax
  _DWORD *v32; // ecx
  bool v33; // zf
  int v34; // ecx
  _DWORD *v35; // ecx
  unsigned __int64 v36; // rax
  int *i; // esi
  int v38; // eax
  _DWORD *v39; // ecx
  unsigned __int64 v40; // rax
  _DWORD *v41; // ecx
  _DWORD *v42; // eax
  int v43; // ecx
  int v44; // [esp+10h] [ebp-2Ch]
  int *v45; // [esp+18h] [ebp-24h]
  _DWORD *v46; // [esp+1Ch] [ebp-20h] BYREF
  int *v47; // [esp+20h] [ebp-1Ch]
  signed int v48; // [esp+24h] [ebp-18h]
  _DWORD *v49; // [esp+28h] [ebp-14h]
  _DWORD *v50; // [esp+2Ch] [ebp-10h] BYREF
  int v51; // [esp+30h] [ebp-Ch]
  signed int v52; // [esp+34h] [ebp-8h]
  _DWORD *v53; // [esp+38h] [ebp-4h]

  if ( a3 >= 1 ) /*0x89c8ee*/
  {
    if ( *(this + 0x22) ) /*0x89c8f4*/
    {
      v4 = (char **)*(this + 0x20); /*0x89c907*/
      LOBYTE(v46) = 7; /*0x89c90d*/
      v47 = a2; /*0x89c912*/
      LOWORD(v48) = a3; /*0x89c916*/
      sub_8D8830(v4, (int)&v46); /*0x89c91b*/
    }
    else
    {
      v5 = MEMORY[0xBA9DE4]; /*0x89c928*/
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x89c92f*/
      v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x89c936*/
      *(this + 0x22) = 1; /*0x89c93a*/
      if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x89c951*/
      {
        v8 = v7; /*0x89c953*/
        v9 = *(_DWORD **)(v7 + 0x1A4); /*0x89c955*/
        *v9 = "LtRemEntities"; /*0x89c95b*/
        v9[3] = "Init+CallBck"; /*0x89c961*/
        v10 = __rdtsc(); /*0x89c968*/
        v9[1] = v10; /*0x89c972*/
        *(_DWORD *)(v8 + 0x1A4) = v9 + 4; /*0x89c978*/
        v5 = MEMORY[0xBA9DE4]; /*0x89c97e*/
      }
      v11 = ThreadLocalStoragePointer[v5]; /*0x89c984*/
      v12 = *(_DWORD **)(v11 + 0x19C); /*0x89c988*/
      v50 = 0; /*0x89c992*/
      v51 = 0; /*0x89c996*/
      v52 = 0x80000000; /*0x89c99a*/
      v44 = v11; /*0x89c9a2*/
      if ( !v12 ) /*0x89c9a6*/
        v12 = (_DWORD *)unk_BA7D9C; /*0x89c9a8*/
      v13 = (_DWORD *)v12[8]; /*0x89c9ae*/
      v14 = (char *)v13 + ((4 * a3 + 0x10) & 0xFFFFFFF0); /*0x89c9bb*/
      if ( (unsigned int)v14 > v12[0xB] ) /*0x89c9c1*/
      {
        v15 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v12 + 0xC))(v12, (4 * a3 + 0x10) & 0xFFFFFFF0); /*0x89c9cd*/
      }
      else
      {
        v12[8] = v14; /*0x89c9c3*/
        v15 = v13; /*0x89c9c6*/
      }
      v52 = a3 | 0x80000000; /*0x89c9d8*/
      v16 = a2; /*0x89c9dc*/
      v17 = &a2[a3]; /*0x89c9e0*/
      v50 = v15; /*0x89c9e5*/
      v53 = v15; /*0x89c9e9*/
      v45 = v17; /*0x89c9ed*/
      if ( a2 != v17 ) /*0x89c9f1*/
      {
        do /*0x89ca16*/
        {
          if ( *(_DWORD *)(*v16 + 0x14) ) /*0x89c9f5*/
            v50[v51++] = *v16 + 0x28; /*0x89ca0a*/
          ++v16; /*0x89ca11*/
        }
        while ( v16 != v17 ); /*0x89ca16*/
      }
      v18 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x89ca24*/
      if ( *(_DWORD *)(v18 + 0x1A4) < *(_DWORD *)(v18 + 0x1A8) ) /*0x89ca33*/
      {
        v19 = *(_DWORD **)(v11 + 0x1A4); /*0x89ca35*/
        *v19 = "StBroadPhase"; /*0x89ca3b*/
        v20 = __rdtsc(); /*0x89ca41*/
        v19[1] = v20; /*0x89ca4b*/
        *(_DWORD *)(v11 + 0x1A4) = v19 + 3; /*0x89ca51*/
      }
      v21 = *(_DWORD **)(v11 + 0x19C); /*0x89ca57*/
      v22 = *(this + 0xA9); /*0x89ca5d*/
      v46 = 0; /*0x89ca67*/
      v47 = 0; /*0x89ca6b*/
      v48 = 0x80000000; /*0x89ca6f*/
      if ( !v21 ) /*0x89ca77*/
        v21 = (_DWORD *)unk_BA7D9C; /*0x89ca79*/
      v23 = (_DWORD *)v21[8]; /*0x89ca7f*/
      v24 = (char *)v23 + ((8 * v22 + 0x10) & 0xFFFFFFF0); /*0x89ca8f*/
      if ( (unsigned int)v24 > v21[0xB] ) /*0x89ca94*/
      {
        v25 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v21 + 0xC))(v21, (8 * v22 + 0x10) & 0xFFFFFFF0); /*0x89caa0*/
      }
      else
      {
        v21[8] = v24; /*0x89ca96*/
        v25 = v23; /*0x89ca99*/
      }
      v26 = *(this + 0x19); /*0x89caa3*/
      v46 = v25; /*0x89cab5*/
      v48 = v22 | 0x80000000; /*0x89cab9*/
      v49 = v25; /*0x89cabd*/
      (*(void (__thiscall **)(int, _DWORD **, _DWORD **))(*(_DWORD *)v26 + 0x14))(v26, &v50, &v46); /*0x89cac4*/
      v27 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x89cac7*/
      v28 = MEMORY[0xBA9DE4]; /*0x89cace*/
      if ( *(_DWORD *)(v27[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(v27[MEMORY[0xBA9DE4]] + 0x1A8) ) /*0x89cae7*/
      {
        v29 = *(_DWORD **)(v44 + 0x1A4); /*0x89cae9*/
        *v29 = "StDelAgents"; /*0x89caef*/
        v30 = __rdtsc(); /*0x89caf5*/
        v29[1] = v30; /*0x89caff*/
        *(_DWORD *)(v44 + 0x1A4) = v29 + 3; /*0x89cb05*/
      }
      sub_8D83E0((_DWORD **)*(this + 0x1A), v46, (int)v47); /*0x89cb18*/
      v31 = *(_DWORD **)(v44 + 0x19C); /*0x89cb1d*/
      v32 = v49; /*0x89cb25*/
      if ( !v31 ) /*0x89cb29*/
        v31 = (_DWORD *)unk_BA7D9C; /*0x89cb2b*/
      v33 = v49 == (_DWORD *)v31[0xA]; /*0x89cb30*/
      v31[8] = v49; /*0x89cb33*/
      if ( v33 ) /*0x89cb36*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v31 + 0x10))(v31, v32); /*0x89cb3d*/
      if ( v48 >= 0 ) /*0x89cb46*/
      {
        v34 = *(_DWORD *)(v44 + 0x19C); /*0x89cb48*/
        if ( !v34 ) /*0x89cb50*/
          v34 = unk_BA7D9C; /*0x89cb52*/
        sub_8A75D0(v34, v46, 8 * v48, 0x14); /*0x89cb68*/
      }
      if ( (int)*(this + 0x2D) >= 4 ) /*0x89cb74*/
        sub_8D3690(*(this + 2), (int)this, (int)a2, a3); /*0x89cb83*/
      if ( *(_DWORD *)(v27[v28] + 0x1A4) < *(_DWORD *)(v27[v28] + 0x1A8) ) /*0x89cb97*/
      {
        v35 = *(_DWORD **)(v44 + 0x1A4); /*0x89cb99*/
        *v35 = "StRemoveCb"; /*0x89cb9f*/
        v36 = __rdtsc(); /*0x89cba5*/
        v35[1] = v36; /*0x89cbaf*/
        *(_DWORD *)(v44 + 0x1A4) = v35 + 3; /*0x89cbb5*/
      }
      for ( i = a2; i != v45; ++i ) /*0x89cbc5*/
      {
        sub_8DC410(*i, (int)this, *i); /*0x89cbcb*/
        sub_8DC1C0(*i); /*0x89cbd3*/
        sub_8CBE90((int)this, *i); /*0x89cbdc*/
        if ( !*(_WORD *)(*i + 4) ) /*0x89cbe6*/
          (*(void (__thiscall **)(int))(*(_DWORD *)*i + 0x10))(*i); /*0x89cbef*/
        sub_8BC730((int (__thiscall ***)(int (__stdcall ***)(signed int), int))*i); /*0x89cbf4*/
      }
      v38 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x89cc0d*/
      if ( *(_DWORD *)(v38 + 0x1A4) < *(_DWORD *)(v38 + 0x1A8) ) /*0x89cc1c*/
      {
        v39 = *(_DWORD **)(v44 + 0x1A4); /*0x89cc1e*/
        *v39 = "lt"; /*0x89cc24*/
        v40 = __rdtsc(); /*0x89cc2a*/
        v39[1] = v40; /*0x89cc34*/
        *(_DWORD *)(v44 + 0x1A4) = v39 + 3; /*0x89cc3a*/
      }
      v33 = (*(this + 0x22))-- == 1; /*0x89cc40*/
      if ( v33 ) /*0x89cc46*/
      {
        if ( *(this + 0x21) ) /*0x89cc48*/
        {
          if ( !*((_BYTE *)this + 0x90) ) /*0x89cc52*/
            sub_899210((int)this); /*0x89cc5e*/
        }
      }
      v41 = *(_DWORD **)(v44 + 0x19C); /*0x89cc63*/
      v42 = v53; /*0x89cc6b*/
      if ( !v41 ) /*0x89cc6f*/
        v41 = (_DWORD *)unk_BA7D9C; /*0x89cc71*/
      v33 = v53 == (_DWORD *)v41[0xA]; /*0x89cc77*/
      v41[8] = v53; /*0x89cc7a*/
      if ( v33 ) /*0x89cc7d*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v41 + 0x10))(v41, v42); /*0x89cc82*/
      if ( v52 >= 0 ) /*0x89cc8b*/
      {
        v43 = *(_DWORD *)(v44 + 0x19C); /*0x89cc8d*/
        if ( !v43 ) /*0x89cc95*/
          v43 = unk_BA7D9C; /*0x89cc97*/
        sub_8A75D0(v43, v50, 4 * v52, 0x14); /*0x89ccad*/
      }
    }
  }
}
