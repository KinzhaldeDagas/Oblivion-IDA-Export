int __thiscall sub_42B4B0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ecx
  int result; // eax

  *this = *a2; /*0x42b4b6*/
  *(this + 1) = a2[1]; /*0x42b4bb*/
  *(this + 2) = a2[2]; /*0x42b4c1*/
  *(this + 3) = a2[3]; /*0x42b4c7*/
  v2 = this + 4; /*0x42b4d0*/
  *v2 = a2[4]; /*0x42b4d3*/
  v2[1] = a2[5]; /*0x42b4d8*/
  result = a2[6]; /*0x42b4db*/
  v2[2] = result; /*0x42b4de*/
  return result; /*0x42b4e1*/
}
