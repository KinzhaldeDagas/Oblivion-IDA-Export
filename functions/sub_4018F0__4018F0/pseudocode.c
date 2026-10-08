// Merges two adjacent free blocks: unlinks both, increases the first block's size by second+header, fixes trailing/last-block links, then reinserts it.
unsigned int __thiscall MemoryHeap_MergeFreeEntries(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  signed int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // ecx
  signed int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // ecx

  v3 = (a2[1] & 0xFFFFFFFu) / *(this + 1) - 1; /*0x401903*/
  if ( v3 < *(this + 0xC) ) /*0x401909*/
    v4 = (_DWORD *)(*(this + 0xD) + 8 * v3); /*0x401913*/
  else
    v4 = this + 0xF; /*0x40190b*/
  MemoryHeap_RemoveFreeEntry(this, v4, a2); /*0x401918*/
  v6 = (a3[1] & 0xFFFFFFFu) / v5[1] - 1; /*0x40192e*/
  if ( v6 < v5[0xC] ) /*0x401934*/
    v7 = (_DWORD *)(v5[0xD] + 8 * v6); /*0x40193e*/
  else
    v7 = v5 + 0xF; /*0x401936*/
  MemoryHeap_RemoveFreeEntry(v5, v7, a3); /*0x401944*/
  a2[1] = a2[1] & 0xF0000000 | ((a3[1] & 0xFFFFFFF) + (a2[1] & 0xFFFFFFF) + 8); /*0x401968*/
  if ( a3 == (_DWORD *)v8[9] ) /*0x40196f*/
  {
    --v8[7]; /*0x401971*/
    v8[9] = a2; /*0x401976*/
  }
  else
  {
    *(_DWORD *)((char *)a3 + (a3[1] & 0xFFFFFFF) + 8) = a2; /*0x40198b*/
    --v8[7]; /*0x40198f*/
  }
  return MemoryHeap_InsertFreeEntry(v8, a2); /*0x40197e*/
}
