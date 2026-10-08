int __thiscall sub_533DA0(_BYTE *this, const char *a2, int a3)
{
  _DWORD *v3; // ebx
  unsigned int v4; // eax
  char *v5; // edi

  v3 = (_DWORD *)(*(_DWORD *)&MEMORY[0xB33E90][0xF00] + 8); /*0x533db4*/
  v4 = strlen(a2) + 1; /*0x533dc7*/
  v5 = (char *)(*v3 + *(_DWORD *)&MEMORY[0xB33E90][0xF00] + 0xF); /*0x533dd4*/
  while ( *++v5 ) /*0x533ddf*/
    ; /*0x533dd7*/
  qmemcpy(v5, a2, v4); /*0x533de6*/
  *v3 += strlen(a2); /*0x533e00*/
  *(this + 0xC) = 1; /*0x533e0c*/
  return a3; /*0x533e0a*/
}
