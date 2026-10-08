int __thiscall sub_90D260(_DWORD *this, int a2)
{
  int v2; // eax
  int i; // esi
  int v4; // edx
  _DWORD *v5; // eax
  int v6; // edx

  v2 = *(this + 1); /*0x90d260*/
  for ( i = *(this + 7); v2; i += v4 ) /*0x90d269*/
  {
    v4 = *(_DWORD *)(v2 + 0x1C); /*0x90d270*/
    v2 = *(_DWORD *)(v2 + 4); /*0x90d273*/
  }
  v5 = this; /*0x90d280*/
  v6 = a2 - i; /*0x90d282*/
  while ( 1 ) /*0x90d284*/
  {
    v6 += v5[7]; /*0x90d284*/
    if ( v6 >= 0 ) /*0x90d287*/
      break; /*0x90d287*/
    v5 = (_DWORD *)v5[1]; /*0x90d289*/
    if ( !v5 ) /*0x90d28e*/
      return *(this + 6); /*0x90d294*/
  }
  return v5[6] + 0x14 * v6; /*0x90d293*/
}
