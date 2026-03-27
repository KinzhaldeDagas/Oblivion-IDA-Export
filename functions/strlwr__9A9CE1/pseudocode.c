char *__cdecl _strlwr(char *String)
{
  int v1; // edi
  int v2; // esi
  char *result; // eax
  char *i; // edx
  char v5; // cl
  localeinfo_struct_0 *v6; // [esp+0h] [ebp-4h]

  if ( dword_BA9E10 )
  {
    _strlwr_s_l(String, 0xFFFFFFFF, v6);
    return String;
  }
  else
  {
    result = String;
    if ( String )
    {
      for ( i = String; *i; ++i )
      {
        v5 = *i;
        if ( *i >= 0x41 && v5 <= 0x5A )
          *i = v5 + 0x20;
      }
    }
    else
    {
      *_errno() = 0x16;
      _invalid_parameter(0, v1, v2);
      return 0;
    }
  }
  return result;
}
