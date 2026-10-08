int __thiscall sub_404D30(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  *(this + 0x44) = *a2; /*0x404d36*/
  *(this + 0x45) = a2[1]; /*0x404d3f*/
  *(this + 0x46) = a2[2]; /*0x404d48*/
  result = a2[3]; /*0x404d4e*/
  *(this + 0x47) = result; /*0x404d51*/
  return result; /*0x404d57*/
}
