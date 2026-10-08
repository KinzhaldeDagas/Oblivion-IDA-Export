unsigned int __thiscall sub_712BC0(unsigned int *this, int a2)
{
  int v2; // eax
  unsigned int *v3; // esi
  unsigned int v4; // eax
  unsigned int result; // eax

  v2 = *(this + 0x8E); /*0x712bc0*/
  v3 = this + 0x8D; /*0x712bcd*/
  if ( *(this + 0x8F) == v2 ) /*0x712bd3*/
  {
    if ( v2 ) /*0x712bd7*/
      v4 = 2 * v2; /*0x712bd9*/
    else
      v4 = 1; /*0x712bdd*/
    sub_6E8CA0(this + 0x8D, v4); /*0x712be5*/
  }
  result = v3[2]; /*0x712bea*/
  *(_DWORD *)(*v3 + 4 * result) = a2; /*0x712bf3*/
  ++v3[2]; /*0x712bf6*/
  return result; /*0x712bfa*/
}
