int __thiscall sub_6E4AE0(_DWORD *this, int a2, unsigned __int16 a3)
{
  int result; // eax

  if ( a3 ) /*0x6e4ae8*/
  {
    result = a3 - 1; /*0x6e4aea*/
    if ( a3 == 1 ) /*0x6e4aed*/
    {
      *(this + 0x10) = a2; /*0x6e4b02*/
    }
    else
    {
      result = a3 - 2; /*0x6e4aef*/
      if ( a3 == 2 ) /*0x6e4af2*/
      {
        *(this + 0x11) = a2; /*0x6e4af8*/
        return a2; /*0x6e4af4*/
      }
    }
  }
  else
  {
    *(this + 0xF) = a2; /*0x6e4b0c*/
    return a2; /*0x6e4b08*/
  }
  return result; /*0x6e4afb*/
}
