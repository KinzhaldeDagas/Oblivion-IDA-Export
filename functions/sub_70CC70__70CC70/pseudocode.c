int __thiscall sub_70CC70(_DWORD *this)
{
  int v1; // edx
  _DWORD *v2; // eax
  _DWORD *v3; // ecx
  int v4; // edx
  int result; // eax

  v1 = *(this + 0x22); /*0x70cc70*/
  v2 = this + 0x22; /*0x70cc76*/
  v3 = this + 8; /*0x70cc7c*/
  *v3 = v1; /*0x70cc7f*/
  v4 = v2[1]; /*0x70cc81*/
  result = v2[2]; /*0x70cc84*/
  v3[1] = v4; /*0x70cc87*/
  v3[2] = result; /*0x70cc8a*/
  return result; /*0x70cc8d*/
}
