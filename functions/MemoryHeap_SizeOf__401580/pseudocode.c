int __thiscall MemoryHeap_SizeOf(int this, unsigned int Memory)
{
  _DWORD *v2; // edx
  unsigned int v3; // esi
  unsigned int v5; // edx

  if ( !*(_BYTE *)(this + 0x16C) ) /*0x401580*/
  {
    v2 = (_DWORD *)MEMORY[0xB32C80][HIBYTE(Memory)]; /*0x401593*/
    if ( v2 ) /*0x40159c*/
    {
      v3 = v2[0x10]; /*0x40159e*/
      if ( Memory >= v3 && Memory < v3 + v2[0x44] ) /*0x4015b1*/
        return v2[0x40]; /*0x4015b3*/
    }
  }
  v5 = *(_DWORD *)(this + 0x18); /*0x4015bd*/
  if ( Memory < v5 || Memory >= v5 + *(_DWORD *)(this + 0xC) ) /*0x4015cb*/
    return _msize((void *)Memory); /*0x4015da*/
  else
    return *(_DWORD *)(Memory - 4) & 0xFFFFFFF; /*0x4015d0*/
}
