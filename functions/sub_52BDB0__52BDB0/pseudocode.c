int __thiscall sub_52BDB0(int this, unsigned int a2)
{
  int v3; // esi
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax

  if ( a2 >= 2 )
    return 0;
  v3 = this + 0x18 * a2;
  LOWORD(v4) = *(_WORD *)(v3 + 0xB8);
  if ( (_WORD)v4 == 0xFFFF )
    v4 = strlen(*(const char **)(v3 + 0xB4));
  else
    v4 = (unsigned __int16)v4;
  if ( v4 )
    return v3 + 0xB0;
  LOWORD(v5) = *(_WORD *)(this + 0xB8);
  if ( (_WORD)v5 == 0xFFFF )
    v5 = strlen(*(const char **)(this + 0xB4));
  else
    v5 = (unsigned __int16)v5;
  if ( v5 )
    return this + 0xB0;
  LOWORD(v6) = *(_WORD *)(this + 0xD0);
  if ( (_WORD)v6 == 0xFFFF )
    v6 = strlen(*(const char **)(this + 0xCC));
  else
    v6 = (unsigned __int16)v6;
  if ( v6 )
    return this + 0xC8;
  else
    return 0;
}
