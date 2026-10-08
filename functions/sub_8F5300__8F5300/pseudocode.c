char *__thiscall sub_8F5300(char *this, _OWORD *a2, int a3)
{
  char *result; // eax
  char *v5; // esi
  int v6; // ecx

  result = this; /*0x8f5307*/
  *((_WORD *)this + 3) = 1; /*0x8f5309*/
  *((_DWORD *)this + 2) = 0; /*0x8f530f*/
  *(_DWORD *)this = &off_A9B328; /*0x8f5316*/
  if ( a3 > 0 ) /*0x8f531c*/
  {
    v5 = this + 0x10; /*0x8f5323*/
    v6 = a3; /*0x8f5326*/
    do /*0x8f533d*/
    {
      *(_OWORD *)v5 = *a2++; /*0x8f5333*/
      v5 += 0x10; /*0x8f5339*/
      --v6; /*0x8f533c*/
    }
    while ( v6 ); /*0x8f533d*/
  }
  *((_DWORD *)result + 3) = a3; /*0x8f5340*/
  return result; /*0x8f5343*/
}
