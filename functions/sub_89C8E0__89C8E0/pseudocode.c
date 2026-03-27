void __thiscall sub_89C8E0(_DWORD *this, int *a2, int a3)
{
  int v4; // ecx
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
  int v16; // ecx
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

  if ( a3 >= 1 )
  {
    if ( *(this + 0x22) )
    {
      v4 = *(this + 0x20);
      LOBYTE(v46) = 7;
      v47 = a2;
      LOWORD(v48) = a3;
      sub_8D8830(v4, (int)&v46);
    }
    else
    {
      v5 = TlsIndex;
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
      v7 = ThreadLocalStoragePointer[TlsIndex];
      *(this + 0x22) = 1;
      if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
      {
        v8 = v7;
        v9 = *(_DWORD **)(v7 + 0x1A4);
        *v9 = "LtRemEntities";
        v9[3] = "Init+CallBck";
        v10 = __rdtsc();
        v9[1] = v10;
        *(_DWORD *)(v8 + 0x1A4) = v9 + 4;
        v5 = TlsIndex;
      }
      v11 = ThreadLocalStoragePointer[v5];
      v12 = *(_DWORD **)(v11 + 0x19C);
      v50 = 0;
      v51 = 0;
      v52 = 0x80000000;
      v44 = v11;
      if ( !v12 )
        v12 = (_DWORD *)dword_BA7D9C;
      v13 = (_DWORD *)v12[8];
      v14 = (char *)v13 + ((4 * a3 + 0x10) & 0xFFFFFFF0);
      if ( (unsigned int)v14 > v12[0xB] )
      {
        v15 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v12 + 0xC))(v12, (4 * a3 + 0x10) & 0xFFFFFFF0);
      }
      else
      {
        v12[8] = v14;
        v15 = v13;
      }
      v52 = a3 | 0x80000000;
      v16 = (int)a2;
      v17 = &a2[a3];
      v50 = v15;
      v53 = v15;
      v45 = v17;
      if ( a2 != v17 )
      {
        do
        {
          if ( *(_DWORD *)(*(_DWORD *)v16 + 0x14) )
            v50[v51++] = *(_DWORD *)v16 + 0x28;
          v16 += 4;
        }
        while ( (int *)v16 != v17 );
      }
      v18 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      if ( *(_DWORD *)(v18 + 0x1A4) < *(_DWORD *)(v18 + 0x1A8) )
      {
        v19 = *(_DWORD **)(v11 + 0x1A4);
        *v19 = "StBroadPhase";
        v20 = __rdtsc();
        v19[1] = v20;
        *(_DWORD *)(v11 + 0x1A4) = v19 + 3;
      }
      v21 = *(_DWORD **)(v11 + 0x19C);
      v22 = *(this + 0xA9);
      v46 = 0;
      v47 = 0;
      v48 = 0x80000000;
      if ( !v21 )
        v21 = (_DWORD *)dword_BA7D9C;
      v23 = (_DWORD *)v21[8];
      v24 = (char *)v23 + ((8 * v22 + 0x10) & 0xFFFFFFF0);
      if ( (unsigned int)v24 > v21[0xB] )
      {
        v25 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v21 + 0xC))(v21, (8 * v22 + 0x10) & 0xFFFFFFF0);
      }
      else
      {
        v21[8] = v24;
        v25 = v23;
      }
      v26 = *(this + 0x19);
      v46 = v25;
      v48 = v22 | 0x80000000;
      v49 = v25;
      (*(void (__thiscall **)(int, _DWORD **, _DWORD **))(*(_DWORD *)v26 + 0x14))(v26, &v50, &v46);
      v27 = NtCurrentTeb()->ThreadLocalStoragePointer;
      v28 = TlsIndex;
      if ( *(_DWORD *)(v27[TlsIndex] + 0x1A4) < *(_DWORD *)(v27[TlsIndex] + 0x1A8) )
      {
        v29 = *(_DWORD **)(v44 + 0x1A4);
        *v29 = "StDelAgents";
        v30 = __rdtsc();
        v29[1] = v30;
        *(_DWORD *)(v44 + 0x1A4) = v29 + 3;
      }
      sub_8D83E0((_DWORD **)*(this + 0x1A), v46, (int)v47);
      v31 = *(_DWORD **)(v44 + 0x19C);
      v32 = v49;
      if ( !v31 )
        v31 = (_DWORD *)dword_BA7D9C;
      v33 = v49 == (_DWORD *)v31[0xA];
      v31[8] = v49;
      if ( v33 )
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v31 + 0x10))(v31, v32);
      if ( v48 >= 0 )
      {
        v34 = *(_DWORD *)(v44 + 0x19C);
        if ( !v34 )
          v34 = dword_BA7D9C;
        sub_8A75D0(v34, v46, 8 * v48, 0x14);
      }
      if ( (int)*(this + 0x2D) >= 4 )
        sub_8D3690(*(this + 2), (int)this, (int)a2, a3);
      if ( *(_DWORD *)(v27[v28] + 0x1A4) < *(_DWORD *)(v27[v28] + 0x1A8) )
      {
        v35 = *(_DWORD **)(v44 + 0x1A4);
        *v35 = "StRemoveCb";
        v36 = __rdtsc();
        v35[1] = v36;
        *(_DWORD *)(v44 + 0x1A4) = v35 + 3;
      }
      for ( i = a2; i != v45; ++i )
      {
        sub_8DC410(*i, (int)this, *i);
        sub_8DC1C0(*i);
        sub_8CBE90((int)this, *i);
        if ( !*(_WORD *)(*i + 4) )
          (*(void (__thiscall **)(int))(*(_DWORD *)*i + 0x10))(*i);
        sub_8BC730((int (__stdcall ***)(signed int))*i);
      }
      v38 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      if ( *(_DWORD *)(v38 + 0x1A4) < *(_DWORD *)(v38 + 0x1A8) )
      {
        v39 = *(_DWORD **)(v44 + 0x1A4);
        *v39 = "lt";
        v40 = __rdtsc();
        v39[1] = v40;
        *(_DWORD *)(v44 + 0x1A4) = v39 + 3;
      }
      v33 = (*(this + 0x22))-- == 1;
      if ( v33 )
      {
        if ( *(this + 0x21) )
        {
          if ( !*((_BYTE *)this + 0x90) )
            sub_899210((int)this);
        }
      }
      v41 = *(_DWORD **)(v44 + 0x19C);
      v42 = v53;
      if ( !v41 )
        v41 = (_DWORD *)dword_BA7D9C;
      v33 = v53 == (_DWORD *)v41[0xA];
      v41[8] = v53;
      if ( v33 )
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v41 + 0x10))(v41, v42);
      if ( v52 >= 0 )
      {
        v43 = *(_DWORD *)(v44 + 0x19C);
        if ( !v43 )
          v43 = dword_BA7D9C;
        sub_8A75D0(v43, v50, 4 * v52, 0x14);
      }
    }
  }
}
