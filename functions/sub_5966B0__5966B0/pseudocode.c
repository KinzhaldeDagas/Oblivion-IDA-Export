int __thiscall sub_5966B0(_DWORD *this, int a2, int a3)
{
  int result; // eax

  if ( a2 == 1 ) /*0x5966b7*/
  {
    *(this + 0xA) = a3; /*0x5966db*/
    return a3; /*0x5966d7*/
  }
  else
  {
    result = a2 - 2; /*0x5966b9*/
    if ( a2 == 2 ) /*0x5966bc*/
    {
      *(this + 0xB) = a3; /*0x5966d1*/
    }
    else
    {
      result = a2 - 3; /*0x5966be*/
      if ( a2 == 3 ) /*0x5966c1*/
      {
        *(this + 0xC) = a3; /*0x5966c7*/
        return a3; /*0x5966c3*/
      }
    }
  }
  return result; /*0x5966ca*/
}
