int __thiscall sub_482120(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  *(this + 0x3B) = *a2; /*0x482126*/
  *(this + 0x3C) = a2[1]; /*0x48212f*/
  result = a2[2]; /*0x482135*/
  ++*(this + 0x2E); /*0x482138*/
  *(this + 0x3D) = result; /*0x48213f*/
  return result; /*0x482145*/
}
