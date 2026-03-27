int __thiscall sub_5369D0(_DWORD *this)
{
  int result; // eax
  int v3; // esi

  result = *(this + 4);
  if ( result )
  {
    do
    {
      v3 = *(_DWORD *)(result + 4);
      MemoryHeap_Free_checked((void *)(result - *(unsigned __int8 *)(result - 1)));
      result = v3;
    }
    while ( v3 );
  }
  *(this + 4) = 0;
  return result;
}
