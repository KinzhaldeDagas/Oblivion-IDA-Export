LONG __thiscall sub_5563B0(int this)
{
  LONG result; // eax

  if ( *(_BYTE *)(this + 4) ) /*0x5563b0*/
    return InterlockedCompareExchange(*(volatile LONG **)this, 0, 1); /*0x5563bd*/
  return result; /*0x5563c3*/
}
