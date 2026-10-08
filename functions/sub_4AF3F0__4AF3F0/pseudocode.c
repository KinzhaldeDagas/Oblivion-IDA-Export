CHAR *__thiscall sub_4AF3F0(_DWORD *this)
{
  CHAR *result; // eax

  result = (CHAR *)*(this + 0xA); /*0x4af3f0*/
  if ( !result ) /*0x4af3f5*/
    return EmptyString; /*0x4af3f7*/
  return result; /*0x4af3fc*/
}
