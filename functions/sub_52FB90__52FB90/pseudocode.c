CHAR *__thiscall sub_52FB90(_DWORD *this)
{
  CHAR *result; // eax

  result = (CHAR *)*(this + 0xD); /*0x52fb90*/
  if ( !result ) /*0x52fb95*/
    return EmptyString; /*0x52fb97*/
  return result; /*0x52fb9c*/
}
