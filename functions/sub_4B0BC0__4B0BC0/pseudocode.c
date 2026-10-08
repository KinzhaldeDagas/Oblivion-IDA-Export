int __thiscall sub_4B0BC0(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  *(this + 0x3E) = *a2; /*0x4b0bc6*/
  *(this + 0x3F) = a2[1]; /*0x4b0bcf*/
  result = a2[2]; /*0x4b0bd5*/
  ++*(this + 0x2E); /*0x4b0bd8*/
  *(this + 0x40) = result; /*0x4b0bdf*/
  return result; /*0x4b0be5*/
}
