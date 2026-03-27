int __thiscall sub_533DA0(_BYTE *this, const char *a2, int a3)
{
  _DWORD *v3; // ebx
  unsigned int v4; // eax
  char *v5; // edi

  v3 = (_DWORD *)(dword_B34D90 + 8);
  v4 = strlen(a2) + 1;
  v5 = (char *)(*v3 + dword_B34D90 + 0xF);
  while ( *++v5 )
    ;
  qmemcpy(v5, a2, v4);
  *v3 += strlen(a2);
  *(this + 0xC) = 1;
  return a3;
}
