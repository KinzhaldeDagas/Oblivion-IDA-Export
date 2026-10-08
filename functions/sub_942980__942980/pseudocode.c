int __thiscall sub_942980(_DWORD *this, int a2, int a3)
{
  int result; // eax

  result = a2 + 2 * *(this + 2) + 2; /*0x942989*/
  *(_DWORD *)(*this + 4 * result) = a3; /*0x942991*/
  return result; /*0x942994*/
}
