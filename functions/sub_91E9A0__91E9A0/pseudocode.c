int __thiscall sub_91E9A0(_DWORD *this, int a2, int a3)
{
  int v3; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  int v9; // ecx
  int v10; // esi
  const void **v11; // ebx
  int v12; // eax
  int v13; // edi
  int v14; // esi
  int v15; // edi
  int v16; // ecx
  _BYTE *v17; // edx
  char *v18; // ecx
  _WORD *v19; // edi
  char *v20; // esi
  int v21; // eax
  _WORD *v22; // edi
  int v23; // esi
  int v24; // edi
  int v25; // ebx
  int v26; // eax
  int v27; // esi
  _DWORD *v28; // ecx
  unsigned __int64 v29; // rax
  int v30; // ecx
  int result; // eax
  int v32; // ecx
  int v33; // [esp+10h] [ebp-8040h]
  int v34; // [esp+10h] [ebp-8040h]
  int v35; // [esp+10h] [ebp-8040h]
  int v36; // [esp+14h] [ebp-803Ch]
  int v37; // [esp+14h] [ebp-803Ch]
  int v38; // [esp+18h] [ebp-8038h]
  int v39; // [esp+1Ch] [ebp-8034h]
  _DWORD *v41; // [esp+24h] [ebp-802Ch] BYREF
  int v42; // [esp+28h] [ebp-8028h]
  int v43; // [esp+2Ch] [ebp-8024h]
  char *v44; // [esp+30h] [ebp-8020h]
  char *v45; // [esp+34h] [ebp-801Ch]
  char *v46; // [esp+40h] [ebp-8010h] BYREF
  int v47; // [esp+44h] [ebp-800Ch]
  int v48; // [esp+48h] [ebp-8008h]
  char v49; // [esp+50h] [ebp-8000h] BYREF

  v3 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TthkBroadphaseViewer";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v9 = *(_DWORD *)(a2 + 0x64);
  v46 = &v49;
  v47 = 0;
  v48 = 0x80000400;
  (*(void (__thiscall **)(int, char **))(*(_DWORD *)v9 + 0x20))(v9, &v46);
  v10 = v47;
  if ( v47 > *(this + 2) )
  {
    v11 = (const void **)(this + 1);
    v12 = *(this + 2);
    v38 = v47;
    v39 = v12;
    if ( v47 >= v12 )
    {
      v15 = *(this + 3);
      v36 = v15;
      if ( v47 > (v15 & 0x3FFFFFFF) )
      {
        v16 = 2 * (v15 & 0x3FFFFFFF);
        if ( v47 >= v16 )
          v16 = v47;
        v45 = (char *)*v11;
        *v11 = 0;
        *(this + 2) = 0;
        *(this + 3) = 0x80000000;
        if ( v16 > 0 )
        {
          sub_8A6E40(v11, v16 < 0 ? 0 : v16, 0x80);
          v10 = v47;
          v12 = v39;
        }
        v17 = *v11;
        if ( v12 > 0 )
        {
          v18 = (char *)(v45 - v17);
          v19 = *v11;
          v44 = (char *)(v45 - v17);
          v33 = v12;
          do
          {
            if ( v19 )
            {
              sub_9193A0(v19, (int)&v18[(_DWORD)v19]);
              v10 = v47;
              v12 = v39;
              v18 = v44;
            }
            v19 += 0x40;
            --v33;
          }
          while ( v33 );
          v15 = v36;
        }
        *(this + 2) = v12;
        if ( v12 > 0 )
        {
          v20 = v45;
          v34 = v12;
          do
          {
            (**(void (__thiscall ***)(char *, _DWORD))v20)(v20, 0);
            v20 += 0x80;
            --v34;
          }
          while ( v34 );
          v10 = v47;
          v12 = v39;
        }
        if ( v15 >= 0 )
        {
          v21 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
          if ( !v21 )
            v21 = dword_BA7D9C;
          sub_8A75D0(v21, v45, v15 << 7, 0x14);
          v10 = v47;
          v12 = v39;
        }
      }
      if ( v12 < v38 )
      {
        v22 = (char *)*v11 + 0x80 * v12;
        v35 = v38 - v12;
        do
        {
          if ( v22 )
          {
            sub_949300(v22);
            v10 = v47;
          }
          v22 += 0x40;
          --v35;
        }
        while ( v35 );
      }
    }
    else
    {
      v13 = v47 << 7;
      v14 = v12 - v47;
      do
      {
        (**(void (__thiscall ***)(int, _DWORD))((char *)*v11 + v13))((int)*v11 + v13, 0);
        v13 += 0x80;
        --v14;
      }
      while ( v14 );
      v10 = v47;
    }
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    *(this + 2) = v38;
    v3 = TlsIndex;
  }
  v41 = 0;
  v42 = 0;
  v43 = 0x80000000;
  v37 = v10;
  if ( v10 > 0 )
  {
    sub_8A6E40((const void **)&v41, v10 < 0 ? 0 : v10, 4);
    v10 = v47;
  }
  v23 = v10 - 1;
  v42 = v37;
  if ( v23 >= 0 )
  {
    v24 = v23 << 7;
    v25 = 0x20 * v23;
    do
    {
      sub_9492E0((_OWORD *)(v24 + *(this + 1)), &v46[v25], &v46[v25 + 0x10]);
      v41[v23--] = v24 + *(this + 1);
      v25 -= 0x20;
      v24 -= 0x80;
    }
    while ( v23 >= 0 );
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    v3 = TlsIndex;
  }
  (*(void (__thiscall **)(_DWORD, _DWORD **, unsigned int, int))(*(_DWORD *)*(this + 0xFFFFFFFC) + 0x24))(
    *(this + 0xFFFFFFFC),
    &v41,
    0xFFFF0000,
    dword_BA8460);
  v26 = ThreadLocalStoragePointer[v3];
  if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) )
  {
    v27 = ThreadLocalStoragePointer[v3];
    v28 = *(_DWORD **)(v26 + 0x1A4);
    *v28 = "Et";
    v29 = __rdtsc();
    v28[1] = v29;
    *(_DWORD *)(v27 + 0x1A4) = v28 + 3;
  }
  if ( v43 >= 0 )
  {
    v30 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v30 )
      v30 = dword_BA7D9C;
    sub_8A75D0(v30, v41, 4 * v43, 0x14);
  }
  result = v48;
  if ( v48 >= 0 )
  {
    v32 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v32 )
      v32 = dword_BA7D9C;
    return sub_8A75D0(v32, v46, 0x20 * v48, 0x14);
  }
  return result;
}
