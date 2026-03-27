void __thiscall sub_89B630(int *this, int a2, int a3, int a4)
{
  int v5; // ecx
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

  if ( *(this + 0x22) )
  {
    v53[1] = a2;
    v54[0] = a3;
    v5 = *(this + 0x20);
    LOBYTE(v53[0]) = 0x12;
    v54[1] = a4;
    sub_8D8830(v5, (int)v53);
  }
  else
  {
    v6 = TlsIndex;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    v8 = ThreadLocalStoragePointer[TlsIndex];
    if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) )
    {
      v9 = ThreadLocalStoragePointer[v6];
      v10 = *(_DWORD **)(v8 + 0x1A4);
      *v10 = "LtUpdateFilterOnEntity";
      v10[3] = "init";
      v11 = __rdtsc();
      v10[1] = v11;
      *(_DWORD *)(v9 + 0x1A4) = v10 + 4;
    }
    v12 = *(this + 0x22) + 1;
    v55 = &v58;
    *(this + 0x22) = v12;
    v56 = 0;
    v57 = 0x80000080;
    if ( !a3 )
    {
      v13 = ThreadLocalStoragePointer[v6];
      if ( *(_DWORD *)(v13 + 0x1A4) < *(_DWORD *)(v13 + 0x1A8) )
      {
        v14 = ThreadLocalStoragePointer[v6];
        v15 = *(_DWORD **)(v13 + 0x1A4);
        *v15 = "Stbroadphase";
        v16 = __rdtsc();
        v15[1] = v16;
        *(_DWORD *)(v14 + 0x1A4) = v15 + 3;
      }
      (*(void (__thiscall **)(_DWORD, int, char **))(*(_DWORD *)*(this + 0x19) + 0x2C))(*(this + 0x19), a2 + 0x28, &v55);
      v17 = ThreadLocalStoragePointer[v6];
      if ( *(_DWORD *)(v17 + 0x1A4) < *(_DWORD *)(v17 + 0x1A8) )
      {
        v18 = ThreadLocalStoragePointer[v6];
        v19 = *(_DWORD **)(v17 + 0x1A4);
        *v19 = "Stphantom";
        v20 = __rdtsc();
        v19[1] = v20;
        *(_DWORD *)(v18 + 0x1A4) = v19 + 3;
      }
      for ( i = 0; i < v56; ++i )
      {
        v22 = *(_DWORD *)&v55[8 * i + 4] + *(char *)(*(_DWORD *)&v55[8 * i + 4] + 5);
        if ( *(_BYTE *)(v22 + 0x18) == 2 )
        {
          v23 = v22 + *(_DWORD *)(v22 + 0x10);
          if ( v23 )
          {
            sub_898760(v23, a2 + 0x14, *(this + 0x1E));
            if ( a4 )
              (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 0x28))(v23);
            --v56;
            v24 = v55;
            *(_DWORD *)&v55[8 * i] = *(_DWORD *)&v55[8 * v56];
            *(_DWORD *)&v55[8 * i-- + 4] = *(_DWORD *)&v24[8 * v56 + 4];
          }
          ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
        }
      }
      v59 = &v62;
      v25 = *(_DWORD *)(a2 + 0x3C);
      v26 = 0;
      v27 = 0x80000080;
      v60 = 0;
      v61 = 0x80000080;
      if ( v25 > 0 )
      {
        while ( 1 )
        {
          if ( v60 == (v27 & 0x3FFFFFFF) )
            sub_8A6EE0((int)&v59, 8);
          v28 = &v59[8 * v60++];
          *(_DWORD *)v28 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0x38) + 8 * v26) + 0x14) + 0x14;
          *((_DWORD *)v28 + 1) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0x38) + 8 * v26++) + 0x18) + 0x14;
          if ( v26 >= *(_DWORD *)(a2 + 0x3C) )
            break;
          v27 = v61;
        }
      }
      sub_8D84F0((int)&v59, (int *)&v55);
      if ( v61 >= 0 )
      {
        v29 = *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 0x19C);
        if ( !v29 )
          v29 = dword_BA7D9C;
        sub_8A75D0(v29, v59, 8 * v61, 0x14);
      }
      v6 = TlsIndex;
    }
    v30 = ThreadLocalStoragePointer[v6];
    if ( *(_DWORD *)(v30 + 0x1A4) < *(_DWORD *)(v30 + 0x1A8) )
    {
      v31 = ThreadLocalStoragePointer[v6];
      v32 = *(_DWORD **)(v30 + 0x1A4);
      *v32 = "StcheckAgts";
      v33 = __rdtsc();
      v32[1] = v33;
      *(_DWORD *)(v31 + 0x1A4) = v32 + 3;
    }
    v50 = *(unsigned __int16 *)(a2 + 0x2E);
    v34 = 0;
    if ( *(int *)(a2 + 0x3C) > 0 )
    {
      do
      {
        v35 = (int *)(*(_DWORD *)(a2 + 0x38) + 8 * v34);
        if ( *(_BYTE *)(**(int (__thiscall ***)(int, char *, int, int))(*(this + 0x1E) + 8))(
                         *(this + 0x1E) + 8,
                         (char *)&v52 + 3,
                         a2 + 0x14,
                         v35[1])
          && *(_BYTE *)(*(unsigned __int16 *)(v35[1] + 0x1A) + 8 * v50 + *(this + 0x1F) + 0x19D4) )
        {
          if ( a4 == 1 )
            sub_8E6560(*v35, (_DWORD *)*(this + 0x1D));
        }
        else
        {
          sub_8E7920((_DWORD *)*v35);
          --v34;
          *(_BYTE *)(*(_DWORD *)(a2 + 0x54) + 0x26) = 1;
        }
        ++v34;
      }
      while ( v34 < *(_DWORD *)(a2 + 0x3C) );
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    }
    v36 = TlsIndex;
    if ( v56 <= 0 )
    {
      v41 = this;
    }
    else
    {
      v37 = ThreadLocalStoragePointer[v36];
      if ( *(_DWORD *)(v37 + 0x1A4) < *(_DWORD *)(v37 + 0x1A8) )
      {
        v38 = ThreadLocalStoragePointer[v36];
        v39 = *(_DWORD **)(v37 + 0x1A4);
        *v39 = "StaddAgts";
        v40 = __rdtsc();
        v39[1] = v40;
        *(_DWORD *)(v38 + 0x1A4) = v39 + 3;
      }
      v41 = this;
      v42 = *(this + 0x1E);
      if ( v42 )
        v43 = (int (__thiscall ***)(_DWORD, int *, int, int))(v42 + 8);
      else
        v43 = 0;
      sub_8D8370((_DWORD **)*(this + 0x1A), v55, v56, v43);
    }
    if ( v41[0x22]-- == 1 )
    {
      if ( v41[0x21] )
      {
        if ( !*((_BYTE *)v41 + 0x90) )
          sub_899210((int)v41);
      }
    }
    if ( v57 >= 0 )
    {
      v45 = *(_DWORD *)(ThreadLocalStoragePointer[v36] + 0x19C);
      if ( !v45 )
        v45 = dword_BA7D9C;
      sub_8A75D0(v45, v55, 8 * v57, 0x14);
    }
    v46 = ThreadLocalStoragePointer[v36];
    if ( *(_DWORD *)(v46 + 0x1A4) < *(_DWORD *)(v46 + 0x1A8) )
    {
      v47 = ThreadLocalStoragePointer[v36];
      v48 = *(_DWORD **)(v46 + 0x1A4);
      *v48 = "lt";
      v49 = __rdtsc();
      v48[1] = v49;
      *(_DWORD *)(v47 + 0x1A4) = v48 + 3;
    }
  }
}
