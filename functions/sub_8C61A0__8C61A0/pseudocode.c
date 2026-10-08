void __thiscall sub_8C61A0(_DWORD *this, char a2)
{
  int v3; // edi
  int v4; // esi

  if ( a2 ) /*0x8c61a8*/
  {
    v3 = *(this + 3); /*0x8c61ab*/
    if ( v3 ) /*0x8c61b0*/
    {
      v4 = *(_DWORD *)(v3 + 4); /*0x8c61b3*/
      if ( v4 ) /*0x8c61b8*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x8c61be*/
          (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x8c61d4*/
      }
      MemoryHeap_Free_checked((void *)(v3 - *(unsigned __int8 *)(v3 - 1))); /*0x8c61e2*/
    }
    *(this + 3) = 0; /*0x8c61e8*/
  }
}
