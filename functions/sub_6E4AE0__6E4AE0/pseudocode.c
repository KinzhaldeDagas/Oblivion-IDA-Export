int __thiscall sub_6E4AE0(_DWORD *this, int a2, unsigned __int16 a3)
{
  int result; // eax

  if ( a3 )
  {
    result = a3 - 1;
    if ( a3 == 1 )
    {
      *(this + 0x10) = a2;
    }
    else
    {
      result = a3 - 2;
      if ( a3 == 2 )
      {
        *(this + 0x11) = a2;
        return a2;
      }
    }
  }
  else
  {
    *(this + 0xF) = a2;
    return a2;
  }
  return result;
}
