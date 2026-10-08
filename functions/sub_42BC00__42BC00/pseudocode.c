int __thiscall sub_42BC00(_DWORD *this)
{
  int result; // eax

  result = *(this + 0xC); /*0x42bc00*/
  if ( result == 0xFFFFFFFF ) /*0x42bc06*/
    return *(this + 0x52); /*0x42bc08*/
  return result; /*0x42bc0e*/
}
