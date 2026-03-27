bool __thiscall sub_4A41A0(_DWORD *this)
{
  int v1; // eax
  unsigned __int16 v2; // cx
  bool result; // al

  v1 = *(this + 2);
  result = 0;
  if ( v1 )
  {
    v2 = *(_WORD *)(v1 + 8);
    if ( v2 == 0xFFFF ? strlen(*(const char **)(v1 + 4)) : v2 )
      return 1;
  }
  return result;
}
