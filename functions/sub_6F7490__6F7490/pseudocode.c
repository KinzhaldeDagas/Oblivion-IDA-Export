unsigned int __thiscall sub_6F7490(int this, unsigned int a2)
{
  unsigned int v2; // eax
  FILE *v4; // eax

  v2 = **(_DWORD **)(this + 0x20);
  if ( v2 && **(_DWORD **)(this + 0x10) < v2 && (a2 == 0xFFFFFFFF || *(unsigned __int8 *)(v2 - 1) == a2) )
  {
    ++**(_DWORD **)(this + 0x30);
    --**(_DWORD **)(this + 0x20);
    return a2 != 0xFFFFFFFF ? a2 : 0;
  }
  else
  {
    v4 = *(FILE **)(this + 0x4C);
    if ( !v4 || a2 == 0xFFFFFFFF || *(_DWORD *)(this + 0x3C) || ungetc((unsigned __int8)a2, v4) == 0xFFFFFFFF )
      return 0xFFFFFFFF;
    else
      return a2;
  }
}
