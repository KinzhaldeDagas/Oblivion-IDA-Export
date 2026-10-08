char *__thiscall sub_934050(char *this, int a2)
{
  char *result; // eax
  char *v3; // ecx
  int v4; // edi

  result = this; /*0x934057*/
  *(_OWORD *)this = *(_OWORD *)a2; /*0x934059*/
  *((_OWORD *)this + 1) = *(_OWORD *)(a2 + 0x10); /*0x934061*/
  *((_WORD *)this + 0x10) = *(_WORD *)(a2 + 0x20); /*0x93406c*/
  v3 = this + 0x22; /*0x934070*/
  v4 = 0xE; /*0x934075*/
  do /*0x934087*/
  {
    *v3 = v3[a2 - (_DWORD)result]; /*0x934083*/
    ++v3; /*0x934085*/
    --v4; /*0x934086*/
  }
  while ( v4 ); /*0x934087*/
  return result; /*0x93408b*/
}
