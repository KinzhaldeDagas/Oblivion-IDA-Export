int __thiscall sub_54F6A0(_DWORD *this)
{
  int result; // eax

  result = *(this + 1); /*0x54f6a0*/
  if ( result ) /*0x54f6a5*/
    return (*(this + 2) - result) / 0x34; /*0x54f6bc*/
  return result; /*0x54f6a7*/
}
