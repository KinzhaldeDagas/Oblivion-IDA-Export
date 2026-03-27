DWORD *__cdecl _getptd()
{
  DWORD *v0; // esi

  v0 = _getptd_noexit();
  if ( !v0 )
    _amsg_exit(0x10);
  return v0;
}
