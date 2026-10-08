int __thiscall sub_44FA50(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  *(this + 0xFE) = *a2; /*0x44fa56*/
  result = a2[1]; /*0x44fa5c*/
  *(this + 0xFF) = result; /*0x44fa5f*/
  return result; /*0x44fa65*/
}
