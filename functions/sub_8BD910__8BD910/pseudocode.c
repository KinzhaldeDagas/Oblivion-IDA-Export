void __thiscall sub_8BD910(_DWORD *this, char a2)
{
  int v3; // eax

  if ( a2 ) /*0x8bd918*/
  {
    v3 = *(this + 3); /*0x8bd91a*/
    if ( v3 ) /*0x8bd91f*/
      MemoryHeap_Free_checked((void *)(v3 - *(unsigned __int8 *)(v3 - 1))); /*0x8bd92d*/
    *(this + 3) = 0; /*0x8bd932*/
  }
}
