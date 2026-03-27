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

  NiInitalizeCriticalSection(Dest + 4);
  *((_DWORD *)Dest + 0x44) = a3;
  *((_DWORD *)Dest + 0x11) = 0;
  *((_DWORD *)Dest + 0x45) = 0;
  *((_DWORD *)Dest + 0x46) = 0;
  *((_DWORD *)Dest + 0x41) = 0;
  *((_DWORD *)Dest + 0x43) = a3 >> 0xC;
  *((_DWORD *)Dest + 0x40) = a2;
  if ( a2 )
    *((_DWORD *)Dest + 0x40) = ((unsigned int)&a2->CreatorBackTraceIndex + 1) & 0xFFFFFFFC;
  *((_DWORD *)Dest + 0x10) = 0;
  v5 = 1;
  do
  {
    HIDWORD(v10) = 0x2000;
    LODWORD(v10) = *((_DWORD *)Dest + 0x44);
    v6 = VirtualAlloc((LPVOID)(v5 << 0x18), v10, 4u, HIDWORD(v11));
    *((_DWORD *)Dest + 0x10) = v6;
    if ( v5 >= 0xFF )
      break;
    ++v5;
  }
  while ( !v6 );
  if ( v6 )
  {
    *((_DWORD *)Dest + 0x42) = FormHeapAlloc((unsigned __int64)(a3 >> 0xC) >> 0x1F != 0 ? 0xFFFFFFFF : 2 * (a3 >> 0xC));
    for ( i = 0; i < *((_DWORD *)Dest + 0x43); ++i )
      *(_WORD *)(*((_DWORD *)Dest + 0x42) + 2 * i) = 0xFFFF;
    g_HeapPoolsBySize[*((_DWORD *)Dest + 0x40) >> 2] = (int)Dest;
    v8 = HIBYTE(*((_DWORD *)Dest + 0x44));
    if ( (*((_DWORD *)Dest + 0x44) & 0xFFFFFF) != 0 )
      ++v8;
    if ( v8 )
      memset32((void *)(4 * *((unsigned __int8 *)Dest + 0x43) + 0xB32C80), (int)Dest, v8);
    LODWORD(v11) = 0x40;
    if ( a4 )
      strncpy((char *)Dest, a4, v11);
    else
      strncpy((char *)Dest, "Unknown Memory Pool", v11);
  }
  return Dest;
}
