int __thiscall NiTStringMap_SetValue(_BYTE *this, int a2, char *Src, int a4)
{
  unsigned int v4; // kr00_4
  char *v5; // eax
  int result; // eax

  if ( *(this + 0x10) ) /*0x6c4f80*/
  {
    v4 = strlen(Src); /*0x6c4f8f*/
    v5 = (char *)FormHeapAlloc(v4 + 1); /*0x6c4fa1*/
    *(_DWORD *)(a2 + 4) = v5; /*0x6c4fad*/
    strcpy_s(v5, v4 + 1, Src); /*0x6c4fb0*/
    result = a4; /*0x6c4fb5*/
  }
  else
  {
    result = a2; /*0x6c4fc5*/
    *(_DWORD *)(a2 + 4) = Src; /*0x6c4fd1*/
  }
  *(_DWORD *)(a2 + 8) = a4; /*0x6c4fbc*/
  return result; /*0x6c4fc2*/
}
