// Destroys one small allocation pool: releases its 4 KiB pages, removes its registry entry, clears page metadata, frees its table, and deletes its lock.
void __thiscall MemoryPool_Destroy(_RTL_CRITICAL_SECTION_0 *this)
{
  void *v2; // eax
  int v3; // ecx
  DWORD v4; // [esp+0h] [ebp-4h]

  v2 = *((void **)this + 0x10); /*0x402403*/
  if ( v2 ) /*0x402408*/
  {
    VirtualFree(v2, 0x800000000000uLL, v4); /*0x402412*/
    MEMORY[0xB33080][*((_DWORD *)this + 0x40) >> 2] = 0; /*0x402421*/
    v3 = HIBYTE(*((_DWORD *)this + 0x44)); /*0x402434*/
    if ( (*((_DWORD *)this + 0x44) & 0xFFFFFF) != 0 ) /*0x40243c*/
      ++v3; /*0x40243e*/
    if ( v3 ) /*0x402447*/
      memset((void *)(4 * *((unsigned __int8 *)this + 0x43) + 0xB32C80), 0, 4 * v3); /*0x402453*/
  }
  FormHeapFree(*((_DWORD *)this + 0x42)); /*0x40245d*/
  NiDeleteCriticalSection(this + 4); /*0x40246c*/
}
