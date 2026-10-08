unsigned int __thiscall sub_734830(int this, _BYTE *a2, _BYTE *a3)
{
  unsigned int v3; // edx
  unsigned int result; // eax

  v3 = 0; /*0x734830*/
  if ( *(_WORD *)(this + 0x10E) ) /*0x734832*/
  {
    do /*0x734861*/
    {
      ++v3; /*0x73484d*/
      *a3 = *a2 - *(_BYTE *)(this + 0x104); /*0x734850*/
      result = *(unsigned __int16 *)(this + 0x10E); /*0x734852*/
      ++a2; /*0x734859*/
      ++a3; /*0x73485c*/
    }
    while ( v3 < result ); /*0x734861*/
  }
  return result; /*0x734865*/
}
