unsigned __int16 __thiscall sub_6D0A80(_DWORD *this, char *a2)
{
  unsigned __int16 v4; // bx
  unsigned int v5; // esi
  int v6; // eax
  Sky *v7; // ecx
  char *Health; // eax

  if ( !a2 ) /*0x6d0a8a*/
    return word_A7A160; /*0x6d0a8c*/
  v4 = 0; /*0x6d0a99*/
  if ( !sub_6D0690(this) ) /*0x6d0a9b*/
    return word_A7A160; /*0x6d0adf*/
  v5 = 0; /*0x6d0aa4*/
  while ( 1 )
  {
    v6 = *(this + 0x14); /*0x6d0aa6*/
    v7 = v5 >= *(_DWORD *)(v6 + 8) ? 0 : (Sky *)(*(_DWORD *)(v6 + 0x10) + 0xC * v5);
    Health = (char *)TESHealthForm_GetHealth(v7); /*0x6d0abc*/
    if ( !j_CRT_strcmp(Health, a2) ) /*0x6d0ac2*/
      break; /*0x6d0ac2*/
    v5 = ++v4; /*0x6d0ad3*/
    if ( v4 >= (unsigned int)sub_6D0690(this) ) /*0x6d0add*/
      return word_A7A160; /*0x6d0add*/
  }
  return v4; /*0x6d0a92*/
}
