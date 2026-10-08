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

  v3 = MEMORY[0xBA9DE4]; /*0x91e9b1*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91e9b9*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91e9c0*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x91e9d5*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91e9d7*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x91e9d9*/
    *v7 = "TthkBroadphaseViewer"; /*0x91e9df*/
    v8 = __rdtsc(); /*0x91e9e5*/
    v7[1] = v8; /*0x91e9ef*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x91e9f5*/
  }
  v9 = *(_DWORD *)(a2 + 0x64); /*0x91e9fe*/
  v46 = &v49; /*0x91ea05*/
  v47 = 0; /*0x91ea0d*/
  v48 = 0x80000400; /*0x91ea15*/
  (*(void (__thiscall **)(int, char **))(*(_DWORD *)v9 + 0x20))(v9, &v46); /*0x91ea20*/
  v10 = v47; /*0x91ea27*/
  if ( v47 > *(this + 2) )
  {
    v11 = (const void **)(this + 1); /*0x91ea34*/
    v12 = *(this + 2); /*0x91ea37*/
    v38 = v47; /*0x91ea3c*/
    v39 = v12; /*0x91ea40*/
    if ( v47 >= v12 )
    {
      v15 = *(this + 3); /*0x91ea6d*/
      v36 = v15; /*0x91ea7a*/
      if ( v47 > (v15 & 0x3FFFFFFF) )
      {
        v16 = 2 * (v15 & 0x3FFFFFFF); /*0x91ea84*/
        if ( v47 >= v16 ) /*0x91ea88*/
          v16 = v47; /*0x91ea8a*/
        v45 = (char *)*v11; /*0x91ea90*/
        *v11 = 0; /*0x91ea94*/
        *(this + 2) = 0; /*0x91ea9a*/
        *(this + 3) = 0x80000000; /*0x91eaa1*/
        if ( v16 > 0 )
        {
          sub_8A6E40(v11, v16 < 0 ? 0 : v16, 0x80);
          v10 = v47; /*0x91eac0*/
          v12 = v39; /*0x91eac4*/
        }
        v17 = *v11; /*0x91eacd*/
        if ( v12 > 0 ) /*0x91eacf*/
        {
          v18 = (char *)(v45 - v17); /*0x91ead5*/
          v19 = *v11; /*0x91ead7*/
          v44 = (char *)(v45 - v17); /*0x91ead9*/
          v33 = v12; /*0x91eadd*/
          do /*0x91eb0a*/
          {
            if ( v19 ) /*0x91eae3*/
            {
              sub_9193A0(v19, (int)&v18[(_DWORD)v19]); /*0x91eaea*/
              v10 = v47; /*0x91eaef*/
              v12 = v39; /*0x91eaf3*/
              v18 = v44; /*0x91eaf7*/
            }
            v19 += 0x40; /*0x91eaff*/
            --v33; /*0x91eb06*/
          }
          while ( v33 ); /*0x91eb0a*/
          v15 = v36; /*0x91eb0c*/
        }
        *(this + 2) = v12; /*0x91eb12*/
        if ( v12 > 0 ) /*0x91eb15*/
        {
          v20 = v45; /*0x91eb17*/
          v34 = v12; /*0x91eb1b*/
          do /*0x91eb37*/
          {
            (**(void (__thiscall ***)(char *, _DWORD))v20)(v20, 0); /*0x91eb26*/
            v20 += 0x80; /*0x91eb2c*/
            --v34; /*0x91eb33*/
          }
          while ( v34 ); /*0x91eb37*/
          v10 = v47; /*0x91eb39*/
          v12 = v39; /*0x91eb3d*/
        }
        if ( v15 >= 0 ) /*0x91eb43*/
        {
          v21 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91eb55*/
          if ( !v21 ) /*0x91eb5d*/
            v21 = unk_BA7D9C; /*0x91eb5f*/
          sub_8A75D0(v21, v45, v15 << 7, 0x14); /*0x91eb77*/
          v10 = v47; /*0x91eb7c*/
          v12 = v39; /*0x91eb80*/
        }
      }
      if ( v12 < v38 ) /*0x91eb8c*/
      {
        v22 = (char *)*v11 + 0x80 * v12; /*0x91eb93*/
        v35 = v38 - v12; /*0x91eb99*/
        do /*0x91ebbe*/
        {
          if ( v22 ) /*0x91eba2*/
          {
            sub_949300(v22); /*0x91eba6*/
            v10 = v47; /*0x91ebab*/
          }
          v22 += 0x40; /*0x91ebb3*/
          --v35; /*0x91ebba*/
        }
        while ( v35 ); /*0x91ebbe*/
      }
    }
    else
    {
      v13 = v47 << 7; /*0x91ea48*/
      v14 = v12 - v47; /*0x91ea4d*/
      do /*0x91ea62*/
      {
        (**(void (__thiscall ***)(int, _DWORD))((char *)*v11 + v13))((int)*v11 + v13, 0); /*0x91ea59*/
        v13 += 0x80; /*0x91ea5b*/
        --v14; /*0x91ea61*/
      }
      while ( v14 ); /*0x91ea62*/
      v10 = v47; /*0x91ea64*/
    }
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91ebc4*/
    *(this + 2) = v38; /*0x91ebcb*/
    v3 = MEMORY[0xBA9DE4]; /*0x91ebce*/
  }
  v41 = 0; /*0x91ebd8*/
  v42 = 0; /*0x91ebdc*/
  v43 = 0x80000000; /*0x91ebe0*/
  v37 = v10; /*0x91ebe8*/
  if ( v10 > 0 )
  {
    sub_8A6E40((const void **)&v41, v10 < 0 ? 0 : v10, 4);
    v10 = v47; /*0x91ec07*/
  }
  v23 = v10 - 1; /*0x91ec0e*/
  v42 = v37; /*0x91ec13*/
  if ( v23 >= 0 ) /*0x91ec17*/
  {
    v24 = v23 << 7; /*0x91ec1d*/
    v25 = 0x20 * v23; /*0x91ec20*/
    do /*0x91ec59*/
    {
      sub_9492E0((_OWORD *)(v24 + *(this + 1)), &v46[v25], &v46[v25 + 0x10]); /*0x91ec38*/
      v41[v23--] = v24 + *(this + 1); /*0x91ec4a*/
      v25 -= 0x20; /*0x91ec4e*/
      v24 -= 0x80; /*0x91ec51*/
    }
    while ( v23 >= 0 ); /*0x91ec59*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91ec5b*/
    v3 = MEMORY[0xBA9DE4]; /*0x91ec62*/
  }
  (*(void (__thiscall **)(_DWORD, _DWORD **, unsigned int, int))(*(_DWORD *)*(this + 0xFFFFFFFC) + 0x24))( /*0x91ec81*/
    *(this + 0xFFFFFFFC),
    &v41,
    0xFFFF0000,
    unk_BA8460);
  v26 = ThreadLocalStoragePointer[v3]; /*0x91ec84*/
  if ( *(_DWORD *)(v26 + 0x1A4) < *(_DWORD *)(v26 + 0x1A8) ) /*0x91ec93*/
  {
    v27 = ThreadLocalStoragePointer[v3]; /*0x91ec95*/
    v28 = *(_DWORD **)(v26 + 0x1A4); /*0x91ec97*/
    *v28 = "Et"; /*0x91ec9d*/
    v29 = __rdtsc(); /*0x91eca3*/
    v28[1] = v29; /*0x91ecad*/
    *(_DWORD *)(v27 + 0x1A4) = v28 + 3; /*0x91ecb3*/
  }
  if ( v43 >= 0 ) /*0x91ecbf*/
  {
    v30 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x91ecc4*/
    if ( !v30 ) /*0x91eccc*/
      v30 = unk_BA7D9C; /*0x91ecce*/
    sub_8A75D0(v30, v41, 4 * v43, 0x14); /*0x91ece4*/
  }
  result = v48; /*0x91ece9*/
  if ( v48 >= 0 ) /*0x91ecef*/
  {
    v32 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x91ecf4*/
    if ( !v32 ) /*0x91ecfc*/
      v32 = unk_BA7D9C; /*0x91ecfe*/
    return sub_8A75D0(v32, v46, 0x20 * v48, 0x14); /*0x91ed14*/
  }
  return result; /*0x91ed19*/
}
