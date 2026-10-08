unsigned __int16 __thiscall sub_6CFB80(int this, const char *a2)
{
  unsigned __int16 result; // ax
  unsigned __int16 v3; // si
  int v4; // edi

  if ( !a2 ) /*0x6cfb87*/
    return word_A7A160; /*0x6cfb89*/
  v3 = *(_WORD *)(this + 0x44); /*0x6cfb95*/
  result = 0; /*0x6cfb99*/
  if ( !v3 ) /*0x6cfb9f*/
    return word_A7A160; /*0x6cfbe8*/
  v4 = *(_DWORD *)(this + 0x40); /*0x6cfba1*/
  while ( !*(_DWORD *)(v4 + 4 * result) || strcmp(*(const char **)(*(_DWORD *)(v4 + 4 * result) + 8), a2) ) /*0x6cfbde*/
  {
    if ( ++result >= v3 ) /*0x6cfbe6*/
      return word_A7A160; /*0x6cfbe6*/
  }
  return result; /*0x6cfb8f*/
}
