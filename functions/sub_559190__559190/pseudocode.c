char __thiscall sub_559190(char ***this)
{
  int v2; // eax
  unsigned __int16 v4; // cx
  unsigned int v5; // eax
  _DWORD *v6; // eax
  char *v7; // eax

  v2 = (int)*(this + 2);
  if ( !v2 )
    return 0;
  if ( !*(_DWORD *)(v2 + 8) )
  {
    v4 = *(_WORD *)(v2 + 4);
    if ( v4 == 0xFFFF )
      v5 = strlen(*(const char **)v2);
    else
      v5 = v4;
    if ( !v5 )
      return 0;
    v6 = (_DWORD *)FormHeapAlloc(0x24u);
    if ( v6 )
      v7 = (char *)sub_558770(v6, **(this + 2));
    else
      v7 = 0;
    (*(this + 2))[2] = v7;
  }
  return 1;
}
