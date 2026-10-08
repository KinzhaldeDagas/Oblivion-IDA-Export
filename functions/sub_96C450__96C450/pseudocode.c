int __thiscall sub_96C450(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ecx
  int result; // eax

  v2 = this + 1; /*0x96c45a*/
  *v2 = a2[1]; /*0x96c45d*/
  v2[1] = a2[2]; /*0x96c462*/
  v2[2] = a2[3]; /*0x96c468*/
  result = a2[4]; /*0x96c46b*/
  v2[3] = result; /*0x96c46e*/
  return result; /*0x96c471*/
}
