_BYTE *__thiscall sub_773100(_DWORD *this, int a2, int a3, char a4, char a5)
{
  _BYTE *result; // eax

  result = (_BYTE *)*(unsigned __int16 *)(2 * a2 + 0xB427B0); /*0x773104*/
  if ( (unsigned __int16)result >= 5u ) /*0x773110*/
    return result; /*0x773110*/
  result = (_BYTE *)(unsigned __int16)result; /*0x77311c*/
  if ( !a4 ) /*0x77311f*/
  {
    if ( *((_BYTE *)this + (unsigned __int16)result + 0xA4) ) /*0x773184*/
    {
      *(this + (unsigned __int16)result + 0x24) = a3; /*0x773192*/
      goto LABEL_12; /*0x773192*/
    }
    if ( *((_BYTE *)this + (unsigned __int16)result + 0x80) ) /*0x7731cc*/
    {
      *((_BYTE *)this + (unsigned __int16)result + 0x80) = 0; /*0x7731d9*/
      --*(this + 0x19); /*0x7731e1*/
      if ( *((_BYTE *)this + (unsigned __int16)result + 0xB0) ) /*0x7731e4*/
        --*(this + 0x2B); /*0x7731ee*/
      *((_BYTE *)this + (unsigned __int16)result + 0xB0) = 0; /*0x7731f4*/
    }
    *((_BYTE *)this + (unsigned __int16)result + 0xA4) = 1; /*0x773205*/
    *(this + (unsigned __int16)result + 0x24) = a3; /*0x77320c*/
    ++*(this + 0x22); /*0x773213*/
LABEL_23:
    if ( a5 ) /*0x77321f*/
      ++*(this + 0x2B); /*0x773221*/
    *((_BYTE *)this + (unsigned __int16)result + 0xB0) = a5; /*0x773227*/
    return result; /*0x773227*/
  }
  if ( !*((_BYTE *)this + (unsigned __int16)result + 0x80) ) /*0x773129*/
  {
    if ( *((_BYTE *)this + (unsigned __int16)result + 0xA4) ) /*0x773135*/
    {
      *((_BYTE *)this + (unsigned __int16)result + 0xA4) = 0; /*0x773142*/
      --*(this + 0x22); /*0x77314a*/
      if ( *((_BYTE *)this + (unsigned __int16)result + 0xB0) ) /*0x773150*/
        --*(this + 0x2B); /*0x77315a*/
      *((_BYTE *)this + (unsigned __int16)result + 0xB0) = 0; /*0x773160*/
    }
    *((_BYTE *)this + (unsigned __int16)result + 0x80) = 1; /*0x773171*/
    *(this + (unsigned __int16)result + 0x1B) = a3; /*0x773178*/
    ++*(this + 0x19); /*0x77317c*/
    goto LABEL_23; /*0x77317f*/
  }
  *(this + (unsigned __int16)result + 0x1B) = a3; /*0x77312f*/
LABEL_12:
  result = (char *)this + (unsigned __int16)result + 0xB0; /*0x773199*/
  if ( a5 ) /*0x7731a6*/
  {
    if ( !*result ) /*0x7731a8*/
    {
      ++*(this + 0x2B); /*0x7731ad*/
      *result = a5; /*0x7731b4*/
      return result; /*0x7731b7*/
    }
  }
  else if ( *result ) /*0x7731ba*/
  {
    --*(this + 0x2B); /*0x7731bf*/
  }
  *result = a5; /*0x7731c6*/
  return result; /*0x7731b7*/
}
