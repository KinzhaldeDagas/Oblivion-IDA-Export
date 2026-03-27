int __thiscall MemoryHeap_SizeOf(int this, unsigned int Memory)
{
  _DWORD *v2; // edx
  unsigned int v3; // esi
  unsigned int v5; // edx

  if ( !*(_BYTE *)(this + 0x16C) )
  {
    v2 = (_DWORD *)g_HeapPoolByAddress[HIBYTE(Memory)];
    if ( v2 )
    {
      v3 = v2[0x10];
      if ( Memory >= v3 && Memory < v3 + v2[0x44] )
        return v2[0x40];
    }
  }
  v5 = *(_DWORD *)(this + 0x18);
  if ( Memory < v5 || Memory >= v5 + *(_DWORD *)(this + 0xC) )
    return _msize((void *)Memory);
  else
    return *(_DWORD *)(Memory - 4) & 0xFFFFFFF;
}
