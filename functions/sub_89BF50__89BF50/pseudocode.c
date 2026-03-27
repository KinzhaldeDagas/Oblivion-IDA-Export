void __thiscall sub_89BF50(int this, int a2, int a3)
{
  int v4; // ecx
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

  if ( *(_DWORD *)(this + 0x88) )
  {
    BYTE2(v42) = a3;
    v4 = *(_DWORD *)(this + 0x80);
    LOBYTE(v42) = 0x14;
    BYTE1(v42) = a2;
    sub_8D8830(v4, (int)&v42);
  }
  else
  {
    v5 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
    *(_BYTE *)(this + 0x90) = 1;
    if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
    {
      v6 = v5;
      v7 = *(_DWORD **)(v5 + 0x1A4);
      *v7 = "TtUpdateFilterOnWorld";
      v8 = __rdtsc();
      v43 = v8;
      v7[1] = v8;
      *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
    }
    if ( a2 )
    {
      v26 = 0;
      ++*(_DWORD *)(this + 0x88);
      v46[0] = this + 0x38;
      v46[1] = this + 0x44;
      v43 = 0;
      do
      {
        v27 = (_DWORD *)v46[v26];
        v47 = &v50;
        v28 = 0x80000020;
        v48 = 0;
        v49 = 0x80000020;
        v29 = v27[1] <= 0;
        v41 = 0;
        v45 = v27;
        if ( !v29 )
        {
          do
          {
            v30 = *(_DWORD *)(*v27 + 4 * v41);
            v31 = 0;
            v48 = 0;
            v32 = *(_DWORD *)(v30 + 0x48);
            v33 = 0;
            if ( v32 > 0 )
            {
              do
              {
                v34 = *(_DWORD *)(*(_DWORD *)(v30 + 0x44) + 4 * v33++);
                v42 = v33;
                if ( v33 == v32 )
                  v35 = *(_DWORD *)(v30 + 0x54);
                else
                  v35 = *(unsigned __int16 *)(v30 + 0x5A);
                v36 = v34 + v35;
                if ( v34 < v36 )
                {
                  do
                  {
                    if ( *(_BYTE *)(**(int (__thiscall ***)(int, char *, _DWORD, _DWORD))(*(_DWORD *)(this + 0x78) + 8))(
                                     *(_DWORD *)(this + 0x78) + 8,
                                     &v44,
                                     *(_DWORD *)(v34 + 0x14),
                                     *(_DWORD *)(v34 + 0x18))
                      && *(_BYTE *)(*(unsigned __int16 *)(*(_DWORD *)(v34 + 0x18) + 0x1A)
                                  + 8 * *(unsigned __int16 *)(*(_DWORD *)(v34 + 0x14) + 0x1A)
                                  + *(_DWORD *)(this + 0x7C)
                                  + 0x19D4) )
                    {
                      if ( a3 == 1 )
                        sub_8E6560(v34, *(_DWORD **)(this + 0x74));
                    }
                    else
                    {
                      if ( v48 == (v49 & 0x3FFFFFFF) )
                        sub_8A6EE0((int)&v47, 4);
                      *(_DWORD *)&v47[4 * v48++] = v34;
                      *(_BYTE *)(v30 + 0x26) = 1;
                    }
                    v34 += *(unsigned __int8 *)(v34 + 3);
                  }
                  while ( v34 < v36 );
                  v31 = v48;
                  v33 = v42;
                }
                v32 = *(_DWORD *)(v30 + 0x48);
              }
              while ( v33 < v32 );
              if ( v31 )
              {
                do
                {
                  v37 = *(_DWORD **)&v47[4 * v31 - 4];
                  v48 = v31 - 1;
                  sub_8E7920(v37);
                  v31 = v48;
                }
                while ( v48 );
              }
              v28 = v49;
              v27 = v45;
            }
            ++v41;
          }
          while ( v41 < v27[1] );
          v26 = v43;
        }
        if ( v28 >= 0 )
        {
          v38 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
          if ( !v38 )
            v38 = dword_BA7D9C;
          sub_8A75D0(v38, v47, 4 * v28, 0x14);
        }
        v43 = ++v26;
      }
      while ( v26 < 2 );
      --*(_DWORD *)(this + 0x88);
    }
    else
    {
      v9 = 0;
      for ( i = 0; v9 < *(_DWORD *)(this + 0x3C); i = v9 )
      {
        v10 = *(_DWORD *)(*(_DWORD *)(this + 0x38) + 4 * v9);
        v11 = *(_DWORD *)(v10 + 0x38);
        v12 = (_DWORD *)(v10 + 0x34);
        v13 = 0;
        if ( v11 > 0 )
        {
          do
            sub_89B630((int *)this, *(_DWORD *)(*v12 + 4 * v13++), 0, a3);
          while ( v13 < v12[1] );
          v9 = i;
        }
        ++v9;
      }
      v14 = 0;
      for ( j = 0; v14 < *(_DWORD *)(this + 0x48); j = v14 )
      {
        v15 = *(_DWORD *)(*(_DWORD *)(this + 0x44) + 4 * v14);
        v16 = *(_DWORD *)(v15 + 0x38);
        v17 = (_DWORD *)(v15 + 0x34);
        v18 = 0;
        if ( v16 > 0 )
        {
          do
            sub_89B630((int *)this, *(_DWORD *)(*v17 + 4 * v18++), 0, a3);
          while ( v18 < v17[1] );
          v14 = j;
        }
        ++v14;
      }
      for ( k = 0; k < *(_DWORD *)(this + 0xBC); ++k )
        sub_89B390((_DWORD *)this, *(_DWORD *)(*(_DWORD *)(this + 0xB8) + 4 * k), a3);
    }
    v20 = *(_DWORD *)(this + 0x88);
    *(_BYTE *)(this + 0x90) = 0;
    if ( !v20 )
    {
      if ( *(_DWORD *)(this + 0x84) )
        sub_899210(this);
    }
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    v22 = ThreadLocalStoragePointer[TlsIndex];
    if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) )
    {
      v23 = ThreadLocalStoragePointer[TlsIndex];
      v24 = *(_DWORD **)(v22 + 0x1A4);
      *v24 = "Et";
      v25 = __rdtsc();
      v42 = v25;
      v24[1] = v25;
      *(_DWORD *)(v23 + 0x1A4) = v24 + 3;
    }
  }
}
