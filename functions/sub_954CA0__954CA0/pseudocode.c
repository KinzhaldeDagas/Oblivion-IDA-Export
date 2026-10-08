unsigned int __thiscall sub_954CA0(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  char v4; // dl
  unsigned int v5; // ecx
  int v6; // esi
  int v7; // ebx
  unsigned int v8; // edx
  unsigned int result; // eax
  int i; // ecx

  v2 = *(this + 4) - *(this + 3); /*0x954cb1*/
  v3 = *(this + 6) - *(this + 5); /*0x954cb3*/
  if ( v2 <= v3 ) /*0x954cb7*/
    v2 = v3; /*0x954cb9*/
  if ( v2 <= *(this + 8) - *(this + 7) ) /*0x954cc3*/
    v2 = *(this + 8) - *(this + 7); /*0x954cc5*/
  v4 = 0; /*0x954cc7*/
  v5 = v2; /*0x954ccb*/
  if ( v2 ) /*0x954ccd*/
  {
    do /*0x954cd5*/
    {
      v5 >>= 1; /*0x954cd0*/
      ++v4; /*0x954cd2*/
    }
    while ( v5 ); /*0x954cd5*/
  }
  v6 = 0xFFFFFFFF; /*0x954ce1*/
  v7 = 3; /*0x954ce4*/
  v8 = v2 + (1 << (v4 - 4)); /*0x954ce9*/
  do /*0x954d06*/
  {
    result = v8; /*0x954cf0*/
    for ( i = 0; result; ++i ) /*0x954cf6*/
      result >>= 1; /*0x954cf8*/
    if ( i > v6 ) /*0x954d01*/
      v6 = i; /*0x954d03*/
    --v7; /*0x954d05*/
  }
  while ( v7 ); /*0x954d06*/
  if ( v6 <= 0x18 ) /*0x954d0b*/
  {
    *(this + 2) = v6; /*0x954d19*/
  }
  else
  {
    *(this + 2) = 0x18; /*0x954d12*/
    return 0x18; /*0x954d0d*/
  }
  return result; /*0x954d15*/
}
