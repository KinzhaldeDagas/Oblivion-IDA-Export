_DWORD *__usercall write_multi_char@<eax>(_DWORD *result@<eax>, char a2, int a3, FILE *File)
{
  _DWORD *v4; // esi

  v4 = result; /*0x997cae*/
  do /*0x997cc3*/
  {
    if ( a3 <= 0 ) /*0x997cc9*/
      break; /*0x997cc9*/
    LOBYTE(result) = a2; /*0x997cb5*/
    --a3; /*0x997cb8*/
    result = (_DWORD *)write_char(File, (int)result, v4); /*0x997cbb*/
  }
  while ( *v4 != 0xFFFFFFFF ); /*0x997cc3*/
  return result; /*0x997ccb*/
}
