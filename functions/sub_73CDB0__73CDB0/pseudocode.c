char __thiscall sub_73CDB0(unsigned int *this, int a2)
{
  unsigned int v3; // ebp
  int v4; // ebx
  int v5; // esi

  if ( !a2 ) /*0x73cdb7*/
    return 0; /*0x73cdbc*/
  v3 = *(this + 3); /*0x73cdc0*/
  if ( v3 != *(_DWORD *)(a2 + 0xC) ) /*0x73cdc6*/
    return 0; /*0x73cdcc*/
  v4 = *(this + 4); /*0x73cdd0*/
  if ( v4 ) /*0x73cdd5*/
  {
    if ( *(_DWORD *)(a2 + 0x10) ) /*0x73cdd7*/
      goto LABEL_10; /*0x73cddb*/
    return 0; /*0x73cdec*/
  }
  if ( *(_DWORD *)(a2 + 0x10) ) /*0x73cde1*/
    return 0; /*0x73cde5*/
LABEL_10:
  if ( !v4 ) /*0x73cdf2*/
    return 1; /*0x73cdf2*/
  v5 = 0; /*0x73cdf4*/
  if ( !v3 ) /*0x73cdf8*/
    return 1; /*0x73ce66*/
  while ( !*(_DWORD *)(v4 + 4 * v5) ) /*0x73ce05*/
  {
    if ( *(_DWORD *)(*(_DWORD *)(a2 + 0x10) + 4 * v5) ) /*0x73ce17*/
      return 0; /*0x73ce1b*/
LABEL_18:
    if ( ++v5 >= v3 ) /*0x73ce5e*/
      return 1; /*0x73ce5e*/
  }
  if ( *(_DWORD *)(*(_DWORD *)(a2 + 0x10) + 4 * v5) /*0x73ce34*/
    && !strcmp(*(const char **)(v4 + 4 * v5), *(const char **)(*(_DWORD *)(a2 + 0x10) + 4 * v5)) )
  {
    goto LABEL_18; /*0x73ce57*/
  }
  return 0; /*0x73cdbb*/
}
