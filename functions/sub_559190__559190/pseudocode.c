char __thiscall sub_559190(char ***this)
{
  int v2; // eax
  unsigned __int16 v4; // cx
  unsigned int v5; // eax
  _DWORD *v6; // eax
  char *v7; // eax

  v2 = (int)*(this + 2); /*0x5591b4*/
  if ( !v2 ) /*0x5591b9*/
    return 0; /*0x5591b9*/
  if ( !*(_DWORD *)(v2 + 8) ) /*0x5591ce*/
  {
    v4 = *(_WORD *)(v2 + 4); /*0x5591d4*/
    if ( v4 == 0xFFFF ) /*0x5591dd*/
      v5 = strlen(*(const char **)v2); /*0x5591e1*/
    else
      v5 = v4; /*0x5591f1*/
    if ( !v5 ) /*0x5591f6*/
      return 0; /*0x5591cd*/
    v6 = (_DWORD *)FormHeapAlloc(0x24u); /*0x5591fa*/
    if ( v6 ) /*0x559210*/
      v7 = (char *)sub_558770(v6, **(this + 2)); /*0x55921a*/
    else
      v7 = 0; /*0x559221*/
    (*(this + 2))[2] = v7; /*0x559226*/
  }
  return 1; /*0x5591bd*/
}
