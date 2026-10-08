int __thiscall sub_5369D0(_DWORD *this)
{
  int result; // eax
  int v3; // esi

  result = *(this + 4); /*0x5369d3*/
  if ( result ) /*0x5369d8*/
  {
    do /*0x5369f8*/
    {
      v3 = *(_DWORD *)(result + 4); /*0x5369e4*/
      MemoryHeap_Free_checked((void *)(result - *(unsigned __int8 *)(result - 1))); /*0x5369ef*/
      result = v3; /*0x5369f6*/
    }
    while ( v3 ); /*0x5369f8*/
  }
  *(this + 4) = 0; /*0x5369fb*/
  return result; /*0x536a02*/
}
