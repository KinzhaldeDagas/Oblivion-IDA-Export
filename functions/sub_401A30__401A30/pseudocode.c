// Coalesces a just-freed entry with adjacent free predecessors/successors, then releases any now-free tail region.
void __thiscall MemoryHeap_CoalesceFreeEntry(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *v4; // edi
  char *v5; // eax

  v2 = a2; /*0x401a32*/
  if ( a2 ) /*0x401a3a*/
  {
    while ( 1 ) /*0x401a40*/
    {
      v4 = (_DWORD *)*v2; /*0x401a40*/
      if ( !*v2 || (v4[1] & 0x40000000) == 0 ) /*0x401a4e*/
        break; /*0x401a4e*/
      MemoryHeap_MergeFreeEntries(this, v4, v2); /*0x401a54*/
      v2 = v4; /*0x401a5b*/
      if ( !v4 ) /*0x401a5d*/
        goto LABEL_5; /*0x401a5d*/
    }
    while ( v2 != (_DWORD *)*(this + 9) ) /*0x401a73*/
    {
      v5 = (char *)v2 + (v2[1] & 0xFFFFFFF); /*0x401a82*/
      if ( (*((_DWORD *)v5 + 3) & 0x40000000) == 0 ) /*0x401a8b*/
        break; /*0x401a8b*/
      MemoryHeap_MergeFreeEntries(this, v2, (_DWORD *)v5 + 2); /*0x401a94*/
    }
  }
LABEL_5:
  MemoryHeap_ReleaseTrailingFreeEntries(this); /*0x401a60*/
}
