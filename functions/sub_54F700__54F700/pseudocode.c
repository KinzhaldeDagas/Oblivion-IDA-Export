int __thiscall sub_54F700(_DWORD *this)
{
  int result; // eax

  result = *(this + 1); /*0x54f700*/
  if ( result ) /*0x54f705*/
    return (*(this + 2) - result) / 6; /*0x54f719*/
  return result; /*0x54f707*/
}
