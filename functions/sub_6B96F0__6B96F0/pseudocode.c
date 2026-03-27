unsigned int __thiscall sub_6B96F0(unsigned int *this, const char *a2)
{
  _DWORD *v2; // esi
  unsigned int v3; // edi
  unsigned int result; // eax

  v2 = (_DWORD *)*(this + 5);
  v3 = *(this + 7);
  result = 0;
  if ( !v3 )
    return 0xFFFFFFFF;
  while ( strcmp(*(const char **)(v2[2] + 8), a2) )
  {
    v2 = (_DWORD *)*v2;
    if ( ++result >= v3 )
      return 0xFFFFFFFF;
  }
  return result;
}
