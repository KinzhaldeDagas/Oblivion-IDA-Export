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
  int a1; // [esp+1Ch] [ebp-24h] BYREF
  int v22; // [esp+20h] [ebp-20h]
  int v23; // [esp+24h] [ebp-1Ch]
  int v24; // [esp+28h] [ebp-18h]
  int v25; // [esp+2Ch] [ebp-14h]
  int v26; // [esp+30h] [ebp-10h]
  int v27; // [esp+3Ch] [ebp-4h]
  unsigned int v28; // [esp+44h] [ebp+4h]

  v8 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x7205cb*/
  v9 = 0; /*0x7205db*/
  v27 = 0; /*0x7205df*/
  if ( v8 ) /*0x7205e3*/
    v9 = (volatile LONG *)NiPixelData::NiPixelData( /*0x720602*/
                            v8,
                            **(_DWORD **)(a2 + 0x54),
                            **(_DWORD **)(a2 + 0x58),
                            a2 + 8,
                            *(_DWORD *)(a2 + 0x60),
                            6);
  pixelData = this->members.pixelData; /*0x720604*/
  v27 = 0xFFFFFFFF; /*0x720609*/
  if ( pixelData != (NiPixelData *)v9 ) /*0x720611*/
  {
    if ( pixelData ) /*0x720615*/
    {
      if ( !InterlockedDecrement((volatile LONG *)pixelData + 1) ) /*0x72061b*/
        (**(void (__thiscall ***)(NiPixelData *, int))pixelData)(pixelData, 1); /*0x720631*/
    }
    this->members.pixelData = (NiPixelData *)v9; /*0x720635*/
    if ( v9 ) /*0x720638*/
      InterlockedIncrement(v9 + 1); /*0x72063e*/
  }
  ArrayConstructor( /*0x720657*/
    (char *)&a1,
    4u,
    6,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  v11 = InterlockedDecrement; /*0x720662*/
  v27 = 1; /*0x720668*/
  if ( a1 != a2 ) /*0x720670*/
  {
    if ( a1 ) /*0x720674*/
    {
      v12 = (void (__thiscall ***)(_DWORD, int))a1; /*0x720676*/
      if ( !v11((volatile LONG *)(a1 + 4)) ) /*0x72067c*/
        (**v12)(v12, 1); /*0x72068e*/
    }
    a1 = a2; /*0x720692*/
    if ( a2 ) /*0x720696*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x72069c*/
  }
  if ( v22 != a3 ) /*0x7206ac*/
  {
    if ( v22 ) /*0x7206b0*/
    {
      v13 = (void (__thiscall ***)(_DWORD, int))v22; /*0x7206b2*/
      if ( !v11((volatile LONG *)(v22 + 4)) ) /*0x7206b8*/
        (**v13)(v13, 1); /*0x7206ca*/
    }
    v22 = a3; /*0x7206ce*/
    if ( a3 ) /*0x7206d2*/
      InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x7206d8*/
  }
  if ( v23 != a4 ) /*0x7206e8*/
  {
    if ( v23 ) /*0x7206ec*/
    {
      v14 = (void (__thiscall ***)(_DWORD, int))v23; /*0x7206ee*/
      if ( !v11((volatile LONG *)(v23 + 4)) ) /*0x7206f4*/
        (**v14)(v14, 1); /*0x720706*/
    }
    v23 = a4; /*0x72070a*/
    if ( a4 ) /*0x72070e*/
      InterlockedIncrement((volatile LONG *)(a4 + 4)); /*0x720714*/
  }
  if ( v24 != a5 ) /*0x720724*/
  {
    if ( v24 ) /*0x720728*/
    {
      v15 = (void (__thiscall ***)(_DWORD, int))v24; /*0x72072a*/
      if ( !v11((volatile LONG *)(v24 + 4)) ) /*0x720730*/
        (**v15)(v15, 1); /*0x720742*/
    }
    v24 = a5; /*0x720746*/
    if ( a5 ) /*0x72074a*/
      InterlockedIncrement((volatile LONG *)(a5 + 4)); /*0x720750*/
  }
  if ( v25 != a6 ) /*0x720760*/
  {
    if ( v25 ) /*0x720764*/
    {
      v16 = (void (__thiscall ***)(_DWORD, int))v25; /*0x720766*/
      if ( !v11((volatile LONG *)(v25 + 4)) ) /*0x72076c*/
        (**v16)(v16, 1); /*0x72077e*/
    }
    v25 = a6; /*0x720782*/
    if ( a6 ) /*0x720786*/
      InterlockedIncrement((volatile LONG *)(a6 + 4)); /*0x72078c*/
  }
  if ( v26 != a7 ) /*0x72079c*/
  {
    if ( v26 ) /*0x7207a0*/
    {
      v17 = (void (__thiscall ***)(_DWORD, int))v26; /*0x7207a2*/
      if ( !v11((volatile LONG *)(v26 + 4)) ) /*0x7207a8*/
        (**v17)(v17, 1); /*0x7207ba*/
    }
    v26 = a7; /*0x7207be*/
    if ( a7 ) /*0x7207c2*/
      InterlockedIncrement((volatile LONG *)(a7 + 4)); /*0x7207c8*/
  }
  v28 = 0; /*0x7207ce*/
  p_a1 = &a1; /*0x7207d6*/
  do /*0x720841*/
  {
    v19 = *p_a1; /*0x7207e0*/
    for ( i = 0; i < *(_DWORD *)(*p_a1 + 0x60); ++i ) /*0x7207e4*/
    {
      memcpy( /*0x72081e*/
        (void *)(*((_DWORD *)this->members.pixelData + 0x14)
               + *(_DWORD *)(*((_DWORD *)this->members.pixelData + 0x17) + 4 * i)
               + v28
               * *(_DWORD *)(*((_DWORD *)this->members.pixelData + 0x17)
                           + 4 * *((_DWORD *)this->members.pixelData + 0x18))),
        (const void *)(*(_DWORD *)(v19 + 0x50) + *(_DWORD *)(*(_DWORD *)(v19 + 0x5C) + 4 * i)),
        *(_DWORD *)(*(_DWORD *)(v19 + 0x5C) + 4 * i + 4) - *(_DWORD *)(*(_DWORD *)(v19 + 0x5C) + 4 * i));
      v19 = *p_a1; /*0x720823*/
    }
    ++p_a1; /*0x720837*/
    ++v28; /*0x72083d*/
  }
  while ( v28 < 6 ); /*0x720841*/
  v27 = 0xFFFFFFFF; /*0x720851*/
  _LN21((char *)&a1, 4u, 6, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x720859*/
}
