unsigned int __thiscall sub_6B96F0(unsigned int *this, const char *a2)
{
  _DWORD *v2; // esi
  unsigned int v3; // edi
  unsigned int result; // eax

  v2 = (_DWORD *)*(this + 5); /*0x6b96f3*/
  v3 = *(this + 7); /*0x6b96f7*/
  result = 0; /*0x6b96fa*/
  if ( !v3 ) /*0x6b96fe*/
    return 0xFFFFFFFF; /*0x6b9742*/
  while ( strcmp(*(const char **)(v2[2] + 8), a2) ) /*0x6b9737*/
  {
    v2 = (_DWORD *)*v2; /*0x6b9739*/
    if ( ++result >= v3 ) /*0x6b9740*/
      return 0xFFFFFFFF; /*0x6b9740*/
  }
  return result; /*0x6b9745*/
}
