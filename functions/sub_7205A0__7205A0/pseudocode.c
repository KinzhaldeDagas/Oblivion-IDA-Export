void __thiscall sub_7205A0(NiSourceTexture *this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  NiPixelData *v8; // eax
  volatile LONG *v9; // ebx
  NiPixelData *pixelData; // edi
  LONG (__stdcall *v11)(volatile LONG *); // ebx
  void (__thiscall ***v12)(_DWORD, int); // edi
  void (__thiscall ***v13)(_DWORD, int); // esi
  void (__thiscall ***v14)(_DWORD, int); // esi
  void (__thiscall ***v15)(_DWORD, int); // esi
  void (__thiscall ***v16)(_DWORD, int); // esi
  void (__thiscall ***v17)(_DWORD, int); // esi
  int *p_a1; // ebx
  int v19; // ecx
  unsigned int i; // esi
  size_t v21; // [esp+0h] [ebp-40h]
  int a1; // [esp+1Ch] [ebp-24h] BYREF
  int v23; // [esp+20h] [ebp-20h]
  int v24; // [esp+24h] [ebp-1Ch]
  int v25; // [esp+28h] [ebp-18h]
  int v26; // [esp+2Ch] [ebp-14h]
  int v27; // [esp+30h] [ebp-10h]
  int v28; // [esp+3Ch] [ebp-4h]
  unsigned int v29; // [esp+44h] [ebp+4h]

  v8 = (NiPixelData *)FormHeapAlloc(0x70u);
  v9 = 0;
  v28 = 0;
  if ( v8 )
    v9 = (volatile LONG *)NiPixelData::NiPixelData(
                            v8,
                            **(_DWORD **)(a2 + 0x54),
                            **(_DWORD **)(a2 + 0x58),
                            a2 + 8,
                            *(_DWORD *)(a2 + 0x60),
                            6);
  pixelData = this->members.pixelData;
  v28 = 0xFFFFFFFF;
  if ( pixelData != (NiPixelData *)v9 )
  {
    if ( pixelData )
    {
      if ( !InterlockedDecrement((volatile LONG *)pixelData + 1) )
        (**(void (__thiscall ***)(NiPixelData *, int))pixelData)(pixelData, 1);
    }
    this->members.pixelData = (NiPixelData *)v9;
    if ( v9 )
      InterlockedIncrement(v9 + 1);
  }
  ArrayConstructor(
    &a1,
    4u,
    6,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  v11 = InterlockedDecrement;
  v28 = 1;
  if ( a1 != a2 )
  {
    if ( a1 )
    {
      v12 = (void (__thiscall ***)(_DWORD, int))a1;
      if ( !v11((volatile LONG *)(a1 + 4)) )
        (**v12)(v12, 1);
    }
    a1 = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  if ( v23 != a3 )
  {
    if ( v23 )
    {
      v13 = (void (__thiscall ***)(_DWORD, int))v23;
      if ( !v11((volatile LONG *)(v23 + 4)) )
        (**v13)(v13, 1);
    }
    v23 = a3;
    if ( a3 )
      InterlockedIncrement((volatile LONG *)(a3 + 4));
  }
  if ( v24 != a4 )
  {
    if ( v24 )
    {
      v14 = (void (__thiscall ***)(_DWORD, int))v24;
      if ( !v11((volatile LONG *)(v24 + 4)) )
        (**v14)(v14, 1);
    }
    v24 = a4;
    if ( a4 )
      InterlockedIncrement((volatile LONG *)(a4 + 4));
  }
  if ( v25 != a5 )
  {
    if ( v25 )
    {
      v15 = (void (__thiscall ***)(_DWORD, int))v25;
      if ( !v11((volatile LONG *)(v25 + 4)) )
        (**v15)(v15, 1);
    }
    v25 = a5;
    if ( a5 )
      InterlockedIncrement((volatile LONG *)(a5 + 4));
  }
  if ( v26 != a6 )
  {
    if ( v26 )
    {
      v16 = (void (__thiscall ***)(_DWORD, int))v26;
      if ( !v11((volatile LONG *)(v26 + 4)) )
        (**v16)(v16, 1);
    }
    v26 = a6;
    if ( a6 )
      InterlockedIncrement((volatile LONG *)(a6 + 4));
  }
  if ( v27 != a7 )
  {
    if ( v27 )
    {
      v17 = (void (__thiscall ***)(_DWORD, int))v27;
      if ( !v11((volatile LONG *)(v27 + 4)) )
        (**v17)(v17, 1);
    }
    v27 = a7;
    if ( a7 )
      InterlockedIncrement((volatile LONG *)(a7 + 4));
  }
  v29 = 0;
  p_a1 = &a1;
  do
  {
    v19 = *p_a1;
    for ( i = 0; i < *(_DWORD *)(*p_a1 + 0x60); ++i )
    {
      LODWORD(v21) = *(_DWORD *)(*(_DWORD *)(v19 + 0x5C) + 4 * i + 4) - *(_DWORD *)(*(_DWORD *)(v19 + 0x5C) + 4 * i);
      memcpy(
        (void *)(*((_DWORD *)this->members.pixelData + 0x14)
               + *(_DWORD *)(*((_DWORD *)this->members.pixelData + 0x17) + 4 * i)
               + v29
               * *(_DWORD *)(*((_DWORD *)this->members.pixelData + 0x17)
                           + 4 * *((_DWORD *)this->members.pixelData + 0x18))),
        (const void *)(*(_DWORD *)(v19 + 0x50) + *(_DWORD *)(*(_DWORD *)(v19 + 0x5C) + 4 * i)),
        v21);
      v19 = *p_a1;
    }
    ++p_a1;
    ++v29;
  }
  while ( v29 < 6 );
  v28 = 0xFFFFFFFF;
  _LN21(&a1, 4u, 6, (void (__thiscall *)(void *))sub_7016A0);
}
