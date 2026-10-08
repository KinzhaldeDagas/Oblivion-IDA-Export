CHAR *__thiscall sub_4EDD90(_DWORD *this)
{
  CHAR *result; // eax

  result = (CHAR *)*(this + 9); /*0x4edd90*/
  if ( !result ) /*0x4edd95*/
    return EmptyString; /*0x4edd97*/
  return result; /*0x4edd9c*/
}
