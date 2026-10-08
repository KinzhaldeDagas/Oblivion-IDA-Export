void __thiscall sub_8C7F50(_DWORD *this, char a2)
{
  int v3; // esi
  char *v4; // eax
  unsigned int v5; // edi

  if ( a2 ) /*0x8c7f58*/
  {
    v3 = *(this + 3); /*0x8c7f5b*/
    if ( v3 ) /*0x8c7f60*/
    {
      v4 = *(char **)(v3 + 0xC); /*0x8c7f62*/
      *(_DWORD *)(v3 + 8) = &NiTLargeArray<hkNiTriStripsData>::`vftable'; /*0x8c7f67*/
      if ( v4 ) /*0x8c7f6e*/
      {
        v5 = (unsigned int)(v4 + 0xFFFFFFFC); /*0x8c7f74*/
        _LN21(v4, 8u, *((_DWORD *)v4 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x8c7f80*/
        FormHeapFree(v5); /*0x8c7f86*/
      }
      MemoryHeap_Free_checked((void *)(v3 - *(unsigned __int8 *)(v3 - 1))); /*0x8c7f9b*/
    }
    *(this + 3) = 0; /*0x8c7fa0*/
  }
}
