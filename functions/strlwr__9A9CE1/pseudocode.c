char *__cdecl _strlwr(char *String)
{
  int v1; // edi
  int v2; // esi
  char *result; // eax
  char *i; // edx
  char v5; // cl
  localeinfo_struct_0 *v6; // [esp+0h] [ebp-4h]

  if ( dword_BA9E10[0] ) /*0x9a9cea*/
  {
    _strlwr_s_l(String, 0xFFFFFFFF, v6); /*0x9a9d35*/
    return String; /*0x9a9d3a*/
  }
  else
  {
    result = String; /*0x9a9cec*/
    if ( String ) /*0x9a9cf2*/
    {
      for ( i = String; *i; ++i ) /*0x9a9d10*/
      {
        v5 = *i; /*0x9a9d16*/
        if ( *i >= 0x41 && v5 <= 0x5A ) /*0x9a9d20*/
          *i = v5 + 0x20; /*0x9a9d25*/
      }
    }
    else
    {
      *_errno() = 0x16; /*0x9a9cfe*/
      _invalid_parameter(0, v1, v2); /*0x9a9d04*/
      return 0; /*0x9a9d0c*/
    }
  }
  return result; /*0x9a9d0e*/
}
