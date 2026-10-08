CHAR *__thiscall sub_4EF3B0(_DWORD *this)
{
  CHAR *result; // eax

  result = (CHAR *)*(this + 0x30); /*0x4ef3b0*/
  if ( !result ) /*0x4ef3b8*/
    return EmptyString; /*0x4ef3ba*/
  return result; /*0x4ef3bf*/
}
