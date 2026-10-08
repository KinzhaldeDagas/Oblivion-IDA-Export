int __thiscall sub_945C10(SOCKET *this)
{
  int result; // eax

  result = *(this + 8); /*0x945c13*/
  if ( result != 0xFFFFFFFF ) /*0x945c19*/
  {
    result = closesocket_0(*(this + 8)); /*0x945c1c*/
    *(this + 8) = 0xFFFFFFFF; /*0x945c21*/
  }
  return result; /*0x945c28*/
}
