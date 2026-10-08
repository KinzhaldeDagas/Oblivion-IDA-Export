const char *__thiscall sub_6DEB00(_BYTE *this)
{
  const char *result; // eax

  switch ( *(this + 0x40) & 7 ) /*0x6deb0c*/
  {
    case 0: /*0x6deb0c*/
      result = (const char *)&off_A7B018; /*0x6deb13*/
      break; /*0x6deb18*/
    case 1: /*0x6deb0c*/
      result = "DIFF"; /*0x6deb19*/
      break; /*0x6deb1e*/
    case 2: /*0x6deb0c*/
      result = "SPEC"; /*0x6deb1f*/
      break; /*0x6deb24*/
    case 3: /*0x6deb0c*/
      result = "SELF_ILLUM"; /*0x6deb25*/
      break; /*0x6deb2a*/
    default:
      JUMPOUT(0x6DEB2B); /*0x6deb2b*/
  }
  return result; /*0x6deb18*/
}
