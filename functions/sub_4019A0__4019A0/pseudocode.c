// Releases consecutive free blocks at the high end of the heap backing buffer, reducing committed heap usage and updating the tail pointer.
void __thiscall MemoryHeap_ReleaseTrailingFreeEntries(_DWORD *this)
{
  _DWORD *i; // esi
  unsigned int v2; // eax
  int v3; // eax
  _DWORD *v4; // eax
  int v5; // eax
  unsigned int v6; // edx
  int v7; // eax

  for ( i = (_DWORD *)*(this + 9); i; *(this + 9) = i ) /*0x4019a6*/
  {
    if ( (i[1] & 0x40000000) == 0 ) /*0x4019bb*/
      break; /*0x4019bb*/
    v2 = i[1] & 0xFFFFFFF; /*0x4019c3*/
    if ( (_DWORD *)((char *)i + v2 + 8) != (_DWORD *)(*(this + 4) + *(this + 6)) ) /*0x4019ce*/
      break; /*0x4019ce*/
    v3 = v2 / *(this + 1) - 1; /*0x4019d5*/
    if ( v3 < *(this + 0xC) ) /*0x4019db*/
      v4 = (_DWORD *)(*(this + 0xD) + 8 * v3); /*0x4019e5*/
    else
      v4 = this + 0xF; /*0x4019dd*/
    MemoryHeap_RemoveFreeEntry(this, v4, i); /*0x4019ea*/
    v5 = i[1]; /*0x4019ef*/
    --*(this + 7); /*0x4019f2*/
    v6 = 0xFFFFFFF8 - (v5 & 0xFFFFFFF); /*0x401a00*/
    v7 = *(this + 8); /*0x401a02*/
    *(this + 4) += v6; /*0x401a05*/
    if ( v7 == *(this + 9) ) /*0x401a0b*/
    {
      *(this + 9) = 0; /*0x401a19*/
      *(this + 8) = 0; /*0x401a20*/
      return; /*0x401a20*/
    }
    i = (_DWORD *)*i; /*0x401a0d*/
  }
}
