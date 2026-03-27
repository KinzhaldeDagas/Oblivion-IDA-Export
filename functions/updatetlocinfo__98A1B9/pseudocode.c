int __updatetlocinfo()
{
  int v0; // esi

  v0 = _getptd();
  if ( (dword_B318B0 & *(_DWORD *)(v0 + 0x70)) != 0 && *(_DWORD *)(v0 + 0x6C) )
  {
    _getptd();
    return __updatetlocinfo_::_LN12_3();
  }
  else
  {
    _lock(0xC);
    _updatetlocinfoEx_nolock((volatile LONG **)(v0 + 0x6C), (volatile LONG *)off_B31998);
    _unlock(0xC);
    return __updatetlocinfo_::_LN12_3();
  }
}
