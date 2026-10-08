signed int __thiscall sub_8B1570(int *this, unsigned int a2)
{
  signed int v2; // esi
  signed int v3; // eax
  int v4; // edx

  v2 = *(this + 2); /*0x8b1581*/
  v3 = v2 & (0x9E3779B1 * (a2 >> 4)); /*0x8b1587*/
  v4 = *(_DWORD *)(*this + 4 * v3); /*0x8b1589*/
  if ( v4 ) /*0x8b158e*/
  {
    while ( v4 != a2 ) /*0x8b1592*/
    {
      v3 = v2 & (v3 + 1); /*0x8b1595*/
      v4 = *(_DWORD *)(*this + 4 * v3); /*0x8b1597*/
      if ( !v4 ) /*0x8b159c*/
        goto LABEL_4; /*0x8b159c*/
    }
  }
  else
  {
LABEL_4:
    v3 = v2 + 1; /*0x8b159e*/
  }
  if ( v3 > v2 ) /*0x8b15a6*/
    return 1; /*0x8b15b3*/
  sub_8B0FA0(this, v3); /*0x8b15a9*/
  return 0; /*0x8b15a1*/
}
