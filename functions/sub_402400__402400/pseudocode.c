void __thiscall sub_402400(_RTL_CRITICAL_SECTION_0 *this)
{
  void *v2; // eax
  int v3; // ecx
  DWORD v4; // [esp+0h] [ebp-4h]

  v2 = *((void **)this + 0x10);
  if ( v2 )
  {
    VirtualFree(v2, 0x800000000000uLL, v4);
    g_HeapPoolsBySize[*((_DWORD *)this + 0x40) >> 2] = 0;
    v3 = HIBYTE(*((_DWORD *)this + 0x44));
    if ( (*((_DWORD *)this + 0x44) & 0xFFFFFF) != 0 )
      ++v3;
    if ( v3 )
      memset((void *)(4 * *((unsigned __int8 *)this + 0x43) + 0xB32C80), 0, 4 * v3);
  }
  FormHeapFree(*((_DWORD *)this + 0x42));
  NiDeleteCriticalSection(this + 4);
}
