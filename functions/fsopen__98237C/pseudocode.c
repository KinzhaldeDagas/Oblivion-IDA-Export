FILE *__cdecl _fsopen(const char *Filename, const char *Mode, int ShFlag)
{
  int v4; // eax
  CPPEH_RECORD ms_exc; // [esp+14h] [ebp-18h] BYREF
  const char *Filenamea; // [esp+34h] [ebp+8h]

  if ( !Filename || !Mode || !*Mode )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
LABEL_11:
    JUMPOUT(0x982430);
  }
  v4 = _getstream();
  Filenamea = (const char *)v4;
  if ( !v4 )
  {
    *_errno() = 0x18;
    goto LABEL_11;
  }
  ms_exc.registration.TryLevel = 0;
  if ( !*Filename )
  {
    *_errno() = 0x16;
    _local_unwind4(&__security_cookie, &ms_exc.registration, 0xFFFFFFFE);
    goto LABEL_11;
  }
  _openfile(Filename, Mode, ShFlag, v4);
  ms_exc.registration.TryLevel = 0xFFFFFFFE;
  _unlock_file();
  return _fsopen_::_LN13_2(Filenamea);
}
