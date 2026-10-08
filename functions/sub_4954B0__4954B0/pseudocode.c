int __thiscall sub_4954B0(_DWORD *this, unsigned int a2)
{
  int result; // eax
  _DWORD *v3; // ecx
  int v4; // edx
  int *v5; // eax
  int v6; // edi

  if ( a2 >= *(this + 0x34) ) /*0x4954bb*/
    return 0; /*0x4954bd*/
  v3 = (_DWORD *)*(this + 0x32); /*0x4954c3*/
  v4 = 0; /*0x4954c9*/
  if ( !v3 ) /*0x4954ce*/
    return 0; /*0x4954e4*/
  while ( 1 ) /*0x4954d0*/
  {
    v5 = v3 + 2; /*0x4954d0*/
    v3 = (_DWORD *)*v3; /*0x4954d3*/
    result = *v5; /*0x4954d5*/
    v6 = v4++; /*0x4954d7*/
    if ( v6 == a2 ) /*0x4954de*/
      break; /*0x4954de*/
    if ( !v3 ) /*0x4954e2*/
      return 0; /*0x4954e2*/
  }
  return result; /*0x4954bf*/
}
