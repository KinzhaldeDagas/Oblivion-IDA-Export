void __thiscall sub_8BD910(_DWORD *this, char a2)
{
  int v3; // eax

  if ( a2 )
  {
    v3 = *(this + 3);
    if ( v3 )
      MemoryHeap_Free_checked((void *)(v3 - *(unsigned __int8 *)(v3 - 1)));
    *(this + 3) = 0;
  }
}
