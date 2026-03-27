_BYTE *__thiscall sub_773100(_DWORD *this, int a2, int a3, char a4, char a5)
{
  _BYTE *result; // eax

  result = (_BYTE *)*(unsigned __int16 *)(2 * a2 + 0xB427B0);
  if ( (unsigned __int16)result >= 5u )
    return result;
  result = (_BYTE *)(unsigned __int16)result;
  if ( !a4 )
  {
    if ( *((_BYTE *)this + (unsigned __int16)result + 0xA4) )
    {
      *(this + (unsigned __int16)result + 0x24) = a3;
      goto LABEL_12;
    }
    if ( *((_BYTE *)this + (unsigned __int16)result + 0x80) )
    {
      *((_BYTE *)this + (unsigned __int16)result + 0x80) = 0;
      --*(this + 0x19);
      if ( *((_BYTE *)this + (unsigned __int16)result + 0xB0) )
        --*(this + 0x2B);
      *((_BYTE *)this + (unsigned __int16)result + 0xB0) = 0;
    }
    *((_BYTE *)this + (unsigned __int16)result + 0xA4) = 1;
    *(this + (unsigned __int16)result + 0x24) = a3;
    ++*(this + 0x22);
LABEL_23:
    if ( a5 )
      ++*(this + 0x2B);
    *((_BYTE *)this + (unsigned __int16)result + 0xB0) = a5;
    return result;
  }
  if ( !*((_BYTE *)this + (unsigned __int16)result + 0x80) )
  {
    if ( *((_BYTE *)this + (unsigned __int16)result + 0xA4) )
    {
      *((_BYTE *)this + (unsigned __int16)result + 0xA4) = 0;
      --*(this + 0x22);
      if ( *((_BYTE *)this + (unsigned __int16)result + 0xB0) )
        --*(this + 0x2B);
      *((_BYTE *)this + (unsigned __int16)result + 0xB0) = 0;
    }
    *((_BYTE *)this + (unsigned __int16)result + 0x80) = 1;
    *(this + (unsigned __int16)result + 0x1B) = a3;
    ++*(this + 0x19);
    goto LABEL_23;
  }
  *(this + (unsigned __int16)result + 0x1B) = a3;
LABEL_12:
  result = (char *)this + (unsigned __int16)result + 0xB0;
  if ( a5 )
  {
    if ( !*result )
    {
      ++*(this + 0x2B);
      *result = a5;
      return result;
    }
  }
  else if ( *result )
  {
    --*(this + 0x2B);
  }
  *result = a5;
  return result;
}
