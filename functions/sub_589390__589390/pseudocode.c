_DWORD *__thiscall sub_589390(_DWORD *this)
{
  _DWORD *result; // eax
  int v2; // ecx

  result = this; /*0x589390*/
  if ( this ) /*0x589394*/
  {
    while ( 1 ) /*0x589396*/
    {
      v2 = result[4]; /*0x589396*/
      if ( !v2 || !*(_DWORD *)(v2 + 0x10) ) /*0x58939d*/
        break; /*0x58939d*/
      result = (_DWORD *)result[4]; /*0x5893a3*/
    }
  }
  return result; /*0x5893a9*/
}
