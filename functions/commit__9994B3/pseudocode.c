int __cdecl _commit(int a1)
{
  int v1; // edi
  int v2; // esi
  void *osfhandle; // eax
  DWORD LastError; // [esp+14h] [ebp-1Ch]

  if ( a1 == 0xFFFFFFFE )
  {
    *_errno() = 9;
    return 0xFFFFFFFF;
  }
  if ( a1 < 0
    || a1 >= uNumber
    || (v1 = 4 * (a1 >> 5) + 0xBAAAC0, v2 = 0x28 * (a1 & 0x1F), (*(_BYTE *)(v2 + dword_BAAAC0[a1 >> 5] + 4) & 1) == 0) )
  {
    *_errno() = 9;
    _invalid_parameter(0, v1, v2);
    return 0xFFFFFFFF;
  }
  __lock_fhandle(a1);
  if ( (*(_BYTE *)(v2 + dword_BAAAC0[a1 >> 5] + 4) & 1) == 0 )
    goto LABEL_14;
  osfhandle = (void *)_get_osfhandle(a1);
  if ( FlushFileBuffers(osfhandle) )
    LastError = 0;
  else
    LastError = GetLastError();
  if ( LastError )
  {
    *__doserrno() = LastError;
LABEL_14:
    *_errno() = 9;
    return _commit_::_good_25045();
  }
  return _commit_::_good_25045();
}
