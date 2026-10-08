int __thiscall sub_56AB80(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  *this = *a2; /*0x56ab86*/
  *(this + 1) = a2[1]; /*0x56ab8b*/
  *(this + 2) = a2[2]; /*0x56ab91*/
  *(this + 3) = a2[3]; /*0x56ab97*/
  *(this + 4) = a2[4]; /*0x56ab9d*/
  result = a2[5]; /*0x56aba0*/
  *(this + 5) = result; /*0x56aba3*/
  return result; /*0x56aba6*/
}
