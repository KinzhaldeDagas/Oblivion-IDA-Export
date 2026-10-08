signed int __thiscall sub_7ABA90(_DWORD *this)
{
  signed int result; // eax

  result = *(this + 0x17) - 1 < 0 ? 0 : *(this + 0x17) - 1;
  *(this + 0x17) = result; /*0x7abaa5*/
  if ( result <= 0 ) /*0x7abaa8*/
    *(this + 0x18) = 0; /*0x7abaaa*/
  return result; /*0x7abab1*/
}
