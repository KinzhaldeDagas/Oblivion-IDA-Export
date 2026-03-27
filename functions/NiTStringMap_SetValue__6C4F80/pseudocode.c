int __thiscall NiTStringMap_SetValue(_BYTE *this, int a2, char *Src, int a4)
{
  unsigned int v4; // kr00_4
  char *v5; // eax
  int result; // eax

  if ( *(this + 0x10) )
  {
    v4 = strlen(Src);
    v5 = (char *)FormHeapAlloc(v4 + 1);
    *(_DWORD *)(a2 + 4) = v5;
    strcpy_s(v5, v4 + 1, Src);
    result = a4;
  }
  else
  {
    result = a2;
    *(_DWORD *)(a2 + 4) = Src;
  }
  *(_DWORD *)(a2 + 8) = a4;
  return result;
}
