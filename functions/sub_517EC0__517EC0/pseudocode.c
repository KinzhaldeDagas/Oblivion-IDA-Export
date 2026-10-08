CHAR *__thiscall sub_517EC0(_DWORD *this)
{
  CHAR *result; // eax

  result = (CHAR *)*(this + 0xC); /*0x517ec0*/
  if ( !result ) /*0x517ec5*/
    return EmptyString; /*0x517ec7*/
  return result; /*0x517ecc*/
}
