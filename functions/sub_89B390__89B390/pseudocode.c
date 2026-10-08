void __thiscall sub_89B390(_DWORD *this, int a2, int a3)
{
  char **v4; // ecx
  int v5; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // ebx
  _DWORD *v12; // ecx
  int v13; // esi
  _DWORD *v14; // eax
  char *v15; // ebx
  int v16; // ecx
  int v17; // esi
  _DWORD *v18; // ecx
  unsigned __int64 v19; // rax
  int v20; // ecx
  int v21; // eax
  _DWORD *v22; // ecx
  unsigned __int64 v23; // rax
  bool v24; // zf
  _DWORD *v25; // ecx
  unsigned __int64 v26; // rax
  _DWORD *v27; // ecx
  _DWORD *v28; // eax
  int v29; // eax
  int v30; // [esp+Ch] [ebp-24h]
  int i; // [esp+10h] [ebp-20h]
  _DWORD v32[2]; // [esp+14h] [ebp-1Ch] BYREF
  int v33; // [esp+1Ch] [ebp-14h]
  _DWORD *v34; // [esp+20h] [ebp-10h] BYREF
  int v35; // [esp+24h] [ebp-Ch]
  signed int v36; // [esp+28h] [ebp-8h]
  _DWORD *v37; // [esp+2Ch] [ebp-4h]

  if ( *(this + 0x22) ) /*0x89b396*/
  {
    LOBYTE(v33) = a3; /*0x89b3ac*/
    v4 = (char **)*(this + 0x20); /*0x89b3b0*/
    LOBYTE(v32[0]) = 0x13; /*0x89b3b7*/
    v32[1] = a2; /*0x89b3bc*/
    sub_8D8830(v4, (int)v32); /*0x89b3c0*/
  }
  else
  {
    v5 = MEMORY[0xBA9DE4]; /*0x89b3cd*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x89b3d5*/
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x89b3dc*/
    *(this + 0x22) = 1; /*0x89b3df*/
    if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x89b3f5*/
    {
      v8 = v7; /*0x89b3f7*/
      v9 = *(_DWORD **)(v7 + 0x1A4); /*0x89b3f9*/
      *v9 = "LtUpdateFilterOnPhantom"; /*0x89b3ff*/
      v9[3] = "broadphase"; /*0x89b405*/
      v10 = __rdtsc(); /*0x89b40c*/
      v9[1] = v10; /*0x89b416*/
      *(_DWORD *)(v8 + 0x1A4) = v9 + 4; /*0x89b41c*/
    }
    v11 = ThreadLocalStoragePointer[v5]; /*0x89b422*/
    v12 = *(_DWORD **)(v11 + 0x19C); /*0x89b425*/
    v13 = *(this + 0xA9); /*0x89b42b*/
    v34 = 0; /*0x89b435*/
    v35 = 0; /*0x89b439*/
    v36 = 0x80000000; /*0x89b43d*/
    v30 = v11; /*0x89b445*/
    if ( !v12 ) /*0x89b449*/
      v12 = (_DWORD *)unk_BA7D9C; /*0x89b44b*/
    v14 = (_DWORD *)v12[8]; /*0x89b451*/
    v15 = (char *)v14 + ((8 * v13 + 0x10) & 0xFFFFFFF0); /*0x89b45e*/
    if ( (unsigned int)v15 > v12[0xB] ) /*0x89b464*/
      v14 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v12 + 0xC))(v12, (8 * v13 + 0x10) & 0xFFFFFFF0); /*0x89b46e*/
    else
      v12[8] = v15; /*0x89b466*/
    v16 = *(this + 0x19); /*0x89b475*/
    v34 = v14; /*0x89b478*/
    v37 = v14; /*0x89b47c*/
    v36 = v13 | 0x80000000; /*0x89b48b*/
    (*(void (__thiscall **)(int, int, _DWORD **))(*(_DWORD *)v16 + 0x2C))(v16, a2 + 0x28, &v34); /*0x89b495*/
    v17 = v30; /*0x89b4ad*/
    if ( *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] /*0x89b4b1*/
                                                                                      + 0x1A8) )
    {
      v18 = *(_DWORD **)(v30 + 0x1A4); /*0x89b4b3*/
      *v18 = "StUpdateOverlaps"; /*0x89b4b9*/
      v19 = __rdtsc(); /*0x89b4bf*/
      v18[1] = v19; /*0x89b4c9*/
      *(_DWORD *)(v30 + 0x1A4) = v18 + 3; /*0x89b4cf*/
    }
    v20 = 0; /*0x89b4d9*/
    for ( i = 0; v20 < v35; i = v20 ) /*0x89b4e1*/
    {
      v21 = v34[2 * v20 + 1]; /*0x89b4e7*/
      if ( v21 != a2 + 0x28 ) /*0x89b4ed*/
      {
        sub_898760(a2, v21 + *(char *)(v21 + 5), *(this + 0x1E)); /*0x89b4fd*/
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x89b502*/
        v20 = i; /*0x89b509*/
        v17 = v30; /*0x89b50d*/
      }
      ++v20; /*0x89b518*/
    }
    if ( a3 ) /*0x89b527*/
    {
      if ( *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] /*0x89b53e*/
                                                                                        + 0x1A8) )
      {
        v22 = *(_DWORD **)(v17 + 0x1A4); /*0x89b540*/
        *v22 = "StcollectionFilter"; /*0x89b546*/
        v23 = __rdtsc(); /*0x89b54c*/
        v22[1] = v23; /*0x89b556*/
        *(_DWORD *)(v17 + 0x1A4) = v22 + 3; /*0x89b55c*/
      }
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x28))(a2); /*0x89b568*/
    }
    v24 = (*(this + 0x22))-- == 1; /*0x89b56b*/
    if ( v24 ) /*0x89b571*/
    {
      if ( *(this + 0x21) ) /*0x89b573*/
      {
        if ( !*((_BYTE *)this + 0x90) ) /*0x89b57d*/
          sub_899210((int)this); /*0x89b589*/
      }
    }
    if ( *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] + 0x1A4) < *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] /*0x89b5a3*/
                                                                                      + 0x1A8) )
    {
      v25 = *(_DWORD **)(v17 + 0x1A4); /*0x89b5a5*/
      *v25 = "lt"; /*0x89b5ab*/
      v26 = __rdtsc(); /*0x89b5b1*/
      v25[1] = v26; /*0x89b5bb*/
      *(_DWORD *)(v17 + 0x1A4) = v25 + 3; /*0x89b5c1*/
    }
    v27 = *(_DWORD **)(v17 + 0x19C); /*0x89b5c7*/
    v28 = v37; /*0x89b5cf*/
    if ( !v27 ) /*0x89b5d3*/
      v27 = (_DWORD *)unk_BA7D9C; /*0x89b5d5*/
    v24 = v37 == (_DWORD *)v27[0xA]; /*0x89b5db*/
    v27[8] = v37; /*0x89b5de*/
    if ( v24 ) /*0x89b5e1*/
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v27 + 0x10))(v27, v28); /*0x89b5e6*/
    if ( v36 >= 0 ) /*0x89b5ef*/
    {
      v29 = *(_DWORD *)(v17 + 0x19C); /*0x89b5f1*/
      if ( !v29 ) /*0x89b5f9*/
        v29 = unk_BA7D9C; /*0x89b5fb*/
      sub_8A75D0(v29, v34, 8 * v36, 0x14); /*0x89b613*/
    }
  }
}
