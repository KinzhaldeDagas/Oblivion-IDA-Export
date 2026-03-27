LONG __thiscall sub_5563B0(int this)
{
  LONG result; // eax

  if ( *(_BYTE *)(this + 4) )
    return InterlockedCompareExchange(*(volatile LONG **)this, 0, 1);
  return result;
}
