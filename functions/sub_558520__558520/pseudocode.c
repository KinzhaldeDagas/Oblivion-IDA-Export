char __thiscall sub_558520(_DWORD *this)
{
  int v2; // edx
  unsigned int v4; // eax

  v2 = *(this + 3);
  if ( !v2 )
    return 0;
  if ( !*(_DWORD *)(v2 + 8) )
  {
    LOWORD(v4) = *(_WORD *)(v2 + 4);
    if ( (_WORD)v4 == 0xFFFF )
      v4 = strlen(*(const char **)v2);
    else
      v4 = (unsigned __int16)v4;
    if ( !v4 )
      return 0;
    *(_DWORD *)(*(this + 3) + 8) = sub_557C80(*(char **)v2);
  }
  return 1;
}
