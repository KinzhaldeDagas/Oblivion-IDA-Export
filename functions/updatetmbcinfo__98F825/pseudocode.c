int __updatetmbcinfo()
{
  DWORD *v0; // edi
  volatile LONG *v2; // esi

  v0 = _getptd();
  if ( (dword_B318B0 & v0[0x1C]) != 0 && v0[0x1B] )
    return __updatetmbcinfo_::_LN14_7();
  _lock(0xD);
  v2 = (volatile LONG *)v0[0x1A];
  if ( v2 != lpAddend )
  {
    if ( v2 )
    {
      if ( !InterlockedDecrement(v2) && v2 != &dword_B31390 )
        free((void *)v2);
    }
    v0[0x1A] = (DWORD)lpAddend;
    InterlockedIncrement(lpAddend);
  }
  _unlock(0xD);
  return __updatetmbcinfo_::_LN14_7();
}
