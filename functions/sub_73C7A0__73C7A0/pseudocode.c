char __thiscall sub_73C7A0(unsigned int *this, _DWORD *a2)
{
  unsigned int v3; // ebp
  int v4; // ebx
  int v5; // esi

  if ( !a2 ) /*0x73c7a7*/
    return 0; /*0x73c7ac*/
  v3 = *(this + 3); /*0x73c7b0*/
  if ( v3 != a2[3] || *(this + 5) != a2[5] ) /*0x73c7be*/
    return 0; /*0x73c7c4*/
  v4 = *(this + 4); /*0x73c7c8*/
  if ( v4 ) /*0x73c7cd*/
  {
    if ( a2[4] ) /*0x73c7cf*/
      goto LABEL_11; /*0x73c7d3*/
    return 0; /*0x73c7e4*/
  }
  if ( a2[4] ) /*0x73c7d9*/
    return 0; /*0x73c7dd*/
LABEL_11:
  if ( !v4 ) /*0x73c7ea*/
    return 1; /*0x73c7ea*/
  v5 = 0; /*0x73c7ec*/
  if ( !v3 ) /*0x73c7f0*/
    return 1; /*0x73c856*/
  while ( !*(_DWORD *)(v4 + 4 * v5) ) /*0x73c7f7*/
  {
    if ( *(_DWORD *)(a2[4] + 4 * v5) ) /*0x73c809*/
      return 0; /*0x73c80d*/
LABEL_19:
    if ( ++v5 >= v3 ) /*0x73c84e*/
      return 1; /*0x73c84e*/
  }
  if ( *(_DWORD *)(a2[4] + 4 * v5) && !strcmp(*(const char **)(v4 + 4 * v5), *(const char **)(a2[4] + 4 * v5)) ) /*0x73c824*/
    goto LABEL_19; /*0x73c847*/
  return 0; /*0x73c7ab*/
}
