signed int __thiscall sub_42BC10(unsigned int *this, unsigned int *a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  unsigned int v4; // esi
  unsigned int v5; // eax

  v2 = *this; /*0x42bc14*/
  v3 = *(this + 1); /*0x42bc16*/
  v4 = *a2; /*0x42bc1a*/
  v5 = a2[1]; /*0x42bc1c*/
  if ( v3 > v5 ) /*0x42bc21*/
    return 1; /*0x42bc21*/
  if ( v3 < v5 || v2 < v4 ) /*0x42bc27*/
    return 0xFFFFFFFF; /*0x42bc2d*/
  return __PAIR64__(v3, v2) > __PAIR64__(v5, v4); /*0x42bc43*/
}
