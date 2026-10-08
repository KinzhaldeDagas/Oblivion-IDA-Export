char __thiscall sub_96EF70(float *this, float *a2)
{
  int v3; // esi
  float *v4; // ebx
  float *v5; // ebp
  float *v6; // edx
  int v7; // ecx

  if ( *a2 != *this || a2[1] != *(this + 1) || a2[2] != *(this + 2) ) /*0x96ef9e*/
    return 0; /*0x96efa0*/
  v3 = 0; /*0x96efa9*/
  v4 = this + 3; /*0x96efab*/
  v5 = a2 + 0xC; /*0x96efae*/
  v6 = a2 + 4; /*0x96efb1*/
  v7 = (char *)this - (char *)a2; /*0x96efb4*/
  while ( v6[0xFFFFFFFF] == *v4 /*0x96efee*/
       && *v6 == *(float *)((char *)v6 + v7)
       && v6[1] == v4[2]
       && *v5 == *(float *)((char *)v5 + v7) )
  {
    ++v3; /*0x96eff0*/
    ++v5; /*0x96eff3*/
    v6 += 3; /*0x96eff6*/
    v4 += 3; /*0x96eff9*/
    if ( v3 >= 3 ) /*0x96efff*/
      return 1; /*0x96f007*/
  }
  return 0; /*0x96efa2*/
}
