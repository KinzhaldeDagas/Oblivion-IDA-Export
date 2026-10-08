_RTL_CRITICAL_SECTION_0 *__thiscall MemoryPool_Init(
        _RTL_CRITICAL_SECTION_0 *Dest,
        _RTL_CRITICAL_SECTION_DEBUG_0 *a2,
        unsigned int a3,
        const char *a4)
{
  unsigned int v5; // edi
  LPVOID v6; // eax
  unsigned int i; // eax
  unsigned int v8; // ecx
  SIZE_T v10; // [esp-Ch] [ebp-30h]
  size_t v11; // [esp-4h] [ebp-28h]

  NiInitalizeCriticalSection(Dest + 4); /*0x4022b1*/
  *((_DWORD *)Dest + 0x44) = a3; /*0x4022be*/
  *((_DWORD *)Dest + 0x11) = 0; /*0x4022d1*/
  *((_DWORD *)Dest + 0x45) = 0; /*0x4022d4*/
  *((_DWORD *)Dest + 0x46) = 0; /*0x4022da*/
  *((_DWORD *)Dest + 0x41) = 0; /*0x4022e0*/
  *((_DWORD *)Dest + 0x43) = a3 >> 0xC; /*0x4022e6*/
  *((_DWORD *)Dest + 0x40) = a2; /*0x4022ec*/
  if ( a2 ) /*0x4022f2*/
    *((_DWORD *)Dest + 0x40) = ((unsigned int)&a2->CreatorBackTraceIndex + 1) & 0xFFFFFFFC; /*0x4022fa*/
  *((_DWORD *)Dest + 0x10) = 0; /*0x402306*/
  v5 = 1; /*0x402309*/
  do /*0x402336*/
  {
    HIDWORD(v10) = 0x2000; /*0x402318*/
    LODWORD(v10) = *((_DWORD *)Dest + 0x44); /*0x40231f*/
    v6 = VirtualAlloc((LPVOID)(v5 << 0x18), v10, 4u, HIDWORD(v11)); /*0x402324*/
    *((_DWORD *)Dest + 0x10) = v6; /*0x40232c*/
    if ( v5 >= 0xFF ) /*0x40232f*/
      break; /*0x40232f*/
    ++v5; /*0x402331*/
  }
  while ( !v6 ); /*0x402336*/
  if ( v6 )
  {
    *((_DWORD *)Dest + 0x42) = FormHeapAlloc((unsigned __int64)(a3 >> 0xC) >> 0x1F != 0 ? 0xFFFFFFFF : 2 * (a3 >> 0xC));
    for ( i = 0; i < *((_DWORD *)Dest + 0x43); ++i ) /*0x402363*/
      *(_WORD *)(*((_DWORD *)Dest + 0x42) + 2 * i) = 0xFFFF; /*0x402376*/
    MEMORY[0xB33080][*((_DWORD *)Dest + 0x40) >> 2] = (int)Dest; /*0x402390*/
    v8 = HIBYTE(*((_DWORD *)Dest + 0x44)); /*0x40239f*/
    if ( (*((_DWORD *)Dest + 0x44) & 0xFFFFFF) != 0 ) /*0x4023a7*/
      ++v8; /*0x4023a9*/
    if ( v8 ) /*0x4023b2*/
      memset32((void *)(4 * *((unsigned __int8 *)Dest + 0x43) + 0xB32C80), (int)Dest, v8); /*0x4023bd*/
    LODWORD(v11) = 0x40; /*0x4023c5*/
    if ( a4 ) /*0x4023c7*/
      strncpy((char *)Dest, a4, v11); /*0x4023ca*/
    else
      strncpy((char *)Dest, "Unknown Memory Pool", v11); /*0x4023d2*/
  }
  return Dest; /*0x4023dc*/
}
