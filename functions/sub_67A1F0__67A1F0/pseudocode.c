int *__thiscall sub_67A1F0(int *this, char a2)
{
  int v3; // esi

  v3 = *this; /*0x67a1f4*/
  if ( *this ) /*0x67a1f4*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x67a1fe*/
    {
      if ( v3 ) /*0x67a20a*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x67a214*/
    }
  }
  if ( (a2 & 1) != 0 ) /*0x67a21b*/
    FormHeapFree((unsigned int)this); /*0x67a21e*/
  return this; /*0x67a228*/
}
