int __thiscall sub_772FF0(_DWORD *this, int a2, int a3, char a4)
{
  int result; // eax

  result = *(unsigned __int16 *)(2 * a2 + 0xB427E0);
  if ( (unsigned __int16)result < 8u )
  {
    result = (unsigned __int16)result;
    if ( a4 )
    {
      if ( *((_BYTE *)this + (unsigned __int16)result + 0x2C) )
      {
        *(this + (unsigned __int16)result + 3) = a3;
      }
      else
      {
        if ( *((_BYTE *)this + (unsigned __int16)result + 0x5C) )
        {
          *((_BYTE *)this + (unsigned __int16)result + 0x5C) = 0;
          *((_BYTE *)this + (unsigned __int16)result + 0x2C) = 1;
          *(this + (unsigned __int16)result + 3) = a3;
          --*(this + 0xD);
          ++*(this + 1);
        }
        *((_BYTE *)this + (unsigned __int16)result + 0x2C) = 1;
        *(this + (unsigned __int16)result + 3) = a3;
        ++*(this + 1);
      }
    }
    else if ( *((_BYTE *)this + (unsigned __int16)result + 0x5C) )
    {
      *(this + (unsigned __int16)result + 0xF) = a3;
    }
    else
    {
      if ( *((_BYTE *)this + (unsigned __int16)result + 0x2C) )
      {
        *((_BYTE *)this + (unsigned __int16)result + 0x2C) = 0;
        *((_BYTE *)this + (unsigned __int16)result + 0x5C) = 1;
        *(this + (unsigned __int16)result + 0xF) = a3;
        ++*(this + 0xD);
        --*(this + 1);
      }
      *((_BYTE *)this + (unsigned __int16)result + 0x5C) = 1;
      *(this + (unsigned __int16)result + 0xF) = a3;
      ++*(this + 0xD);
    }
  }
  return result;
}
