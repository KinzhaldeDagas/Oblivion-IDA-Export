void __thiscall sub_89BF50(int this, int a2, int a3)
{
  char **v4; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // eax
  int v10; // esi
  int v11; // ecx
  _DWORD *v12; // esi
  int v13; // edi
  int v14; // eax
  int v15; // esi
  int v16; // ecx
  _DWORD *v17; // esi
  int v18; // edi
  int k; // esi
  int v20; // eax
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v22; // eax
  int v23; // esi
  _DWORD *v24; // ecx
  unsigned __int64 v25; // rax
  int v26; // edi
  _DWORD *v27; // esi
  int v28; // ebx
  bool v29; // cc
  int v30; // edi
  int v31; // ecx
  int v32; // eax
  int v33; // edx
  unsigned int v34; // esi
  int v35; // ebx
  unsigned int v36; // ebx
  _DWORD *v37; // eax
  int v38; // eax
  int i; // [esp+Ch] [ebp-ACh]
  int j; // [esp+Ch] [ebp-ACh]
  int v41; // [esp+Ch] [ebp-ACh]
  int v42; // [esp+10h] [ebp-A8h] BYREF
  int v43; // [esp+18h] [ebp-A0h]
  char v44; // [esp+1Fh] [ebp-99h] BYREF
  _DWORD *v45; // [esp+20h] [ebp-98h]
  _DWORD v46[2]; // [esp+24h] [ebp-94h]
  char *v47; // [esp+2Ch] [ebp-8Ch] BYREF
  int v48; // [esp+30h] [ebp-88h]
  unsigned int v49; // [esp+34h] [ebp-84h]
  char v50; // [esp+38h] [ebp-80h] BYREF

  if ( *(_DWORD *)(this + 0x88) ) /*0x89bf59*/
  {
    BYTE2(v42) = a3; /*0x89bf75*/
    v4 = *(char ***)(this + 0x80); /*0x89bf79*/
    LOBYTE(v42) = 0x14; /*0x89bf80*/
    BYTE1(v42) = a2; /*0x89bf85*/
    sub_8D8830(v4, (int)&v42); /*0x89bf89*/
  }
  else
  {
    v5 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x89bfa5*/
    *(_BYTE *)(this + 0x90) = 1; /*0x89bfa9*/
    if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x89bfbd*/
    {
      v6 = v5; /*0x89bfbf*/
      v7 = *(_DWORD **)(v5 + 0x1A4); /*0x89bfc1*/
      *v7 = "TtUpdateFilterOnWorld"; /*0x89bfc7*/
      v8 = __rdtsc(); /*0x89bfcd*/
      v43 = v8; /*0x89bfcf*/
      v7[1] = v8; /*0x89bfd7*/
      *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x89bfdd*/
    }
    if ( a2 ) /*0x89bfed*/
    {
      v26 = 0; /*0x89c13b*/
      ++*(_DWORD *)(this + 0x88); /*0x89c13d*/
      v46[0] = this + 0x38; /*0x89c143*/
      v46[1] = this + 0x44; /*0x89c147*/
      v43 = 0; /*0x89c14b*/
      do /*0x89c2f1*/
      {
        v27 = (_DWORD *)v46[v26]; /*0x89c150*/
        v47 = &v50; /*0x89c158*/
        v28 = 0x80000020; /*0x89c15e*/
        v48 = 0; /*0x89c163*/
        v49 = 0x80000020; /*0x89c167*/
        v29 = v27[1] <= 0; /*0x89c16b*/
        v41 = 0; /*0x89c16e*/
        v45 = v27; /*0x89c172*/
        if ( !v29 ) /*0x89c176*/
        {
          do /*0x89c2a4*/
          {
            v30 = *(_DWORD *)(*v27 + 4 * v41); /*0x89c186*/
            v31 = 0; /*0x89c189*/
            v48 = 0; /*0x89c18b*/
            v32 = *(_DWORD *)(v30 + 0x48); /*0x89c18f*/
            v33 = 0; /*0x89c192*/
            if ( v32 > 0 ) /*0x89c196*/
            {
              do /*0x89c264*/
              {
                v34 = *(_DWORD *)(*(_DWORD *)(v30 + 0x44) + 4 * v33++); /*0x89c1a3*/
                v42 = v33; /*0x89c1a9*/
                if ( v33 == v32 ) /*0x89c1ad*/
                  v35 = *(_DWORD *)(v30 + 0x54); /*0x89c1af*/
                else
                  v35 = *(unsigned __int16 *)(v30 + 0x5A); /*0x89c1b4*/
                v36 = v34 + v35; /*0x89c1b8*/
                if ( v34 < v36 ) /*0x89c1bc*/
                {
                  do /*0x89c251*/
                  {
                    if ( *(_BYTE *)(**(int (__thiscall ***)(int, char *, _DWORD, _DWORD))(*(_DWORD *)(this + 0x78) + 8))( /*0x89c1f2*/
                                     *(_DWORD *)(this + 0x78) + 8,
                                     &v44,
                                     *(_DWORD *)(v34 + 0x14),
                                     *(_DWORD *)(v34 + 0x18))
                      && *(_BYTE *)(*(unsigned __int16 *)(*(_DWORD *)(v34 + 0x18) + 0x1A)
                                  + 8 * *(unsigned __int16 *)(*(_DWORD *)(v34 + 0x14) + 0x1A)
                                  + *(_DWORD *)(this + 0x7C)
                                  + 0x19D4) )
                    {
                      if ( a3 == 1 ) /*0x89c23a*/
                        sub_8E6560(v34, *(_DWORD **)(this + 0x74)); /*0x89c241*/
                    }
                    else
                    {
                      if ( v48 == (v49 & 0x3FFFFFFF) ) /*0x89c20c*/
                        sub_8A6EE0((const void **)&v47, 4); /*0x89c215*/
                      *(_DWORD *)&v47[4 * v48++] = v34; /*0x89c225*/
                      *(_BYTE *)(v30 + 0x26) = 1; /*0x89c22c*/
                    }
                    v34 += *(unsigned __int8 *)(v34 + 3); /*0x89c24d*/
                  }
                  while ( v34 < v36 ); /*0x89c251*/
                  v31 = v48; /*0x89c257*/
                  v33 = v42; /*0x89c25b*/
                }
                v32 = *(_DWORD *)(v30 + 0x48); /*0x89c25f*/
              }
              while ( v33 < v32 ); /*0x89c264*/
              if ( v31 ) /*0x89c26c*/
              {
                do /*0x89c28c*/
                {
                  v37 = *(_DWORD **)&v47[4 * v31 - 4]; /*0x89c274*/
                  v48 = v31 - 1; /*0x89c27a*/
                  sub_8E7920(v37); /*0x89c27e*/
                  v31 = v48; /*0x89c283*/
                }
                while ( v48 ); /*0x89c28c*/
              }
              v28 = v49; /*0x89c28e*/
              v27 = v45; /*0x89c292*/
            }
            ++v41; /*0x89c2a0*/
          }
          while ( v41 < v27[1] ); /*0x89c2a4*/
          v26 = v43; /*0x89c2aa*/
        }
        if ( v28 >= 0 ) /*0x89c2b0*/
        {
          v38 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x89c2c2*/
          if ( !v38 ) /*0x89c2ca*/
            v38 = unk_BA7D9C; /*0x89c2cc*/
          sub_8A75D0(v38, v47, 4 * v28, 0x14); /*0x89c2e4*/
        }
        v43 = ++v26; /*0x89c2ed*/
      }
      while ( v26 < 2 ); /*0x89c2f1*/
      --*(_DWORD *)(this + 0x88); /*0x89c2f7*/
    }
    else
    {
      v9 = 0; /*0x89bffd*/
      for ( i = 0; v9 < *(_DWORD *)(this + 0x3C); i = v9 ) /*0x89c005*/
      {
        v10 = *(_DWORD *)(*(_DWORD *)(this + 0x38) + 4 * v9); /*0x89c00a*/
        v11 = *(_DWORD *)(v10 + 0x38); /*0x89c00d*/
        v12 = (_DWORD *)(v10 + 0x34); /*0x89c010*/
        v13 = 0; /*0x89c013*/
        if ( v11 > 0 ) /*0x89c017*/
        {
          do /*0x89c036*/
            sub_89B630((int *)this, *(_DWORD *)(*v12 + 4 * v13++), 0, a3); /*0x89c02b*/
          while ( v13 < v12[1] ); /*0x89c036*/
          v9 = i; /*0x89c038*/
        }
        ++v9; /*0x89c03f*/
      }
      v14 = 0; /*0x89c04b*/
      for ( j = 0; v14 < *(_DWORD *)(this + 0x48); j = v14 ) /*0x89c053*/
      {
        v15 = *(_DWORD *)(*(_DWORD *)(this + 0x44) + 4 * v14); /*0x89c058*/
        v16 = *(_DWORD *)(v15 + 0x38); /*0x89c05b*/
        v17 = (_DWORD *)(v15 + 0x34); /*0x89c05e*/
        v18 = 0; /*0x89c061*/
        if ( v16 > 0 ) /*0x89c065*/
        {
          do /*0x89c07d*/
            sub_89B630((int *)this, *(_DWORD *)(*v17 + 4 * v18++), 0, a3); /*0x89c072*/
          while ( v18 < v17[1] ); /*0x89c07d*/
          v14 = j; /*0x89c07f*/
        }
        ++v14; /*0x89c086*/
      }
      for ( k = 0; k < *(_DWORD *)(this + 0xBC); ++k ) /*0x89c099*/
        sub_89B390((_DWORD *)this, *(_DWORD *)(*(_DWORD *)(this + 0xB8) + 4 * k), a3); /*0x89c0ad*/
    }
    v20 = *(_DWORD *)(this + 0x88); /*0x89c0bd*/
    *(_BYTE *)(this + 0x90) = 0; /*0x89c0c5*/
    if ( !v20 ) /*0x89c0cd*/
    {
      if ( *(_DWORD *)(this + 0x84) ) /*0x89c0cf*/
        sub_899210(this); /*0x89c0db*/
    }
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x89c0e0*/
    v22 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x89c0ed*/
    if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) ) /*0x89c0fc*/
    {
      v23 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x89c0fe*/
      v24 = *(_DWORD **)(v22 + 0x1A4); /*0x89c100*/
      *v24 = "Et"; /*0x89c106*/
      v25 = __rdtsc(); /*0x89c10c*/
      v42 = v25; /*0x89c10e*/
      v24[1] = v25; /*0x89c116*/
      *(_DWORD *)(v23 + 0x1A4) = v24 + 3; /*0x89c11c*/
    }
  }
}
