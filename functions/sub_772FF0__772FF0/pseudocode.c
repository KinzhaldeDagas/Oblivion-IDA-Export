int __thiscall sub_772FF0(_DWORD *this, int a2, int a3, char a4)
{
  int result; // eax

  result = *(unsigned __int16 *)(2 * a2 + 0xB427E0); /*0x772ff4*/
  if ( (unsigned __int16)result < 8u ) /*0x773000*/
  {
    result = (unsigned __int16)result; /*0x773010*/
    if ( a4 ) /*0x773013*/
    {
      if ( *((_BYTE *)this + (unsigned __int16)result + 0x2C) ) /*0x773015*/
      {
        *(this + (unsigned __int16)result + 3) = a3; /*0x77301c*/
      }
      else
      {
        if ( *((_BYTE *)this + (unsigned __int16)result + 0x5C) ) /*0x773024*/
        {
          *((_BYTE *)this + (unsigned __int16)result + 0x5C) = 0; /*0x773030*/
          *((_BYTE *)this + (unsigned __int16)result + 0x2C) = 1; /*0x773035*/
          *(this + (unsigned __int16)result + 3) = a3; /*0x773039*/
          --*(this + 0xD); /*0x77303d*/
          ++*(this + 1); /*0x773041*/
        }
        *((_BYTE *)this + (unsigned __int16)result + 0x2C) = 1; /*0x773044*/
        *(this + (unsigned __int16)result + 3) = a3; /*0x773048*/
        ++*(this + 1); /*0x77304c*/
      }
    }
    else if ( *((_BYTE *)this + (unsigned __int16)result + 0x5C) ) /*0x773053*/
    {
      *(this + (unsigned __int16)result + 0xF) = a3; /*0x77305a*/
    }
    else
    {
      if ( *((_BYTE *)this + (unsigned __int16)result + 0x2C) ) /*0x773062*/
      {
        *((_BYTE *)this + (unsigned __int16)result + 0x2C) = 0; /*0x77306e*/
        *((_BYTE *)this + (unsigned __int16)result + 0x5C) = 1; /*0x773073*/
        *(this + (unsigned __int16)result + 0xF) = a3; /*0x773077*/
        ++*(this + 0xD); /*0x77307b*/
        --*(this + 1); /*0x77307e*/
      }
      *((_BYTE *)this + (unsigned __int16)result + 0x5C) = 1; /*0x773082*/
      *(this + (unsigned __int16)result + 0xF) = a3; /*0x773086*/
      ++*(this + 0xD); /*0x77308a*/
    }
  }
  return result; /*0x773021*/
}
