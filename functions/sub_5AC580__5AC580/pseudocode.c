int __thiscall sub_5AC580(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 - 2; /*0x5ac584*/
  if ( a2 == 2 ) /*0x5ac587*/
  {
    *(this + 0xA) = a3; /*0x5ac58d*/
    return a3; /*0x5ac589*/
  }
  return result; /*0x5ac590*/
}
