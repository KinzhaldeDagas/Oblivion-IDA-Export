CHAR *__thiscall sub_4F9630(_DWORD *this)
{
  CHAR *result; // eax

  result = (CHAR *)*(this + 6); /*0x4f9630*/
  if ( !result ) /*0x4f9635*/
    return EmptyString; /*0x4f9637*/
  return result; /*0x4f963c*/
}
