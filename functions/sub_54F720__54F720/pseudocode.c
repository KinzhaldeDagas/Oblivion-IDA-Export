int __thiscall sub_54F720(_DWORD *this)
{
  int result; // eax

  result = *(this + 1); /*0x54f720*/
  if ( result ) /*0x54f725*/
    return (*(this + 2) - result) / 0x14; /*0x54f73c*/
  return result; /*0x54f727*/
}
