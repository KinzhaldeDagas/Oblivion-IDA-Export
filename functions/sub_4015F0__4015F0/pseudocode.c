// Marks a block free, appends it to the size-selected doubly linked free list, updates free-list statistics, and records the bin's active count.
unsigned int __thiscall MemoryHeap_InsertFreeEntry(_DWORD *this, _DWORD *a2)
{
  unsigned int v2; // eax
  int v3; // eax
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // edx
  int v7; // eax
  unsigned int result; // eax
  int v9; // ecx

  a2[1] |= 0x40000000u; /*0x4015f5*/
  v2 = a2[1] & 0xFFFFFFF; /*0x4015ff*/
  a2[3] = 0; /*0x401606*/
  a2[2] = 0; /*0x40160d*/
  v3 = v2 / *(this + 1) - 1; /*0x401618*/
  if ( v3 < *(this + 0xC) ) /*0x40161e*/
    v4 = (_DWORD *)(*(this + 0xD) + 8 * v3); /*0x401628*/
  else
    v4 = this + 0xF; /*0x401620*/
  v5 = v4[1]; /*0x40162b*/
  if ( v5 ) /*0x401630*/
  {
    a2[2] = v5; /*0x401632*/
    v6 = *(_DWORD *)(v5 + 0xC); /*0x401635*/
    a2[3] = v6; /*0x40163a*/
    if ( v6 ) /*0x40163d*/
      *(_DWORD *)(v6 + 8) = a2; /*0x40163f*/
    *(_DWORD *)(v5 + 0xC) = a2; /*0x401642*/
  }
  else
  {
    *v4 = a2; /*0x401647*/
  }
  v4[1] = a2; /*0x401649*/
  v7 = ++*(this + 0xA); /*0x401650*/
  if ( v7 > *(this + 0xB) ) /*0x401656*/
    *(this + 0xB) = v7; /*0x401658*/
  result = a2[1] & 0xFFFFFFF; /*0x40165e*/
  if ( result <= 0x1000 ) /*0x40166a*/
  {
    result = (int)(result - *(this + 1)) / 0x100; /*0x401678*/
    if ( result != 0xFFFFFFFF ) /*0x40167e*/
    {
      v9 = *(this + 0x11); /*0x401680*/
      ++*(_DWORD *)(v9 + 8 * result); /*0x401683*/
      return v9 + 8 * result; /*0x401687*/
    }
  }
  return result; /*0x401668*/
}
