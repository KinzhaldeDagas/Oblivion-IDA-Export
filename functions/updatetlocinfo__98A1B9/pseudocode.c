int __updatetlocinfo()
{
  DWORD *v0; // esi
  DWORD *v1; // eax
  volatile LONG *v3; // [esp+10h] [ebp-1Ch]

  v0 = _getptd(); /*0x98a1ca*/
  if ( (dword_B318B0 & v0[0x1C]) != 0 && v0[0x1B] ) /*0x98a1d6*/
  {
    v1 = _getptd(); /*0x98a1dc*/
    return __updatetlocinfo_::_LN12_3(v1[0x1B]); /*0x98a1e2*/
  }
  else
  {
    _lock(0xC); /*0x98a1fa*/
    v3 = _updatetlocinfoEx_nolock((volatile LONG **)v0 + 0x1B, (volatile LONG *)off_B31998); /*0x98a212*/
    _unlock(0xC); /*0x98a225*/
    return __updatetlocinfo_::_LN12_3((int)v3); /*0x98a221*/
  }
}
