int __thiscall sub_5966B0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  if ( a2 == 1 )
  {
    *(this + 0xA) = a3;
    return a3;
  }
  else
  {
    result = a2 - 2;
    if ( a2 == 2 )
    {
      *(this + 0xB) = a3;
    }
    else
    {
      result = a2 - 3;
      if ( a2 == 3 )
      {
        *(this + 0xC) = a3;
        return a3;
      }
    }
  }
  return result;
}
