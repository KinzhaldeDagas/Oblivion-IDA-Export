unsigned int __thiscall sub_6F7490(int this, unsigned int a2)
{
  unsigned int v2; // eax
  FILE *v4; // eax

  v2 = **(_DWORD **)(this + 0x20); /*0x6f7493*/
  if ( v2 && **(_DWORD **)(this + 0x10) < v2 && (a2 == 0xFFFFFFFF || *(unsigned __int8 *)(v2 - 1) == a2) )
  {
    ++**(_DWORD **)(this + 0x30); /*0x6f74b5*/
    --**(_DWORD **)(this + 0x20); /*0x6f74bb*/
    return a2 != 0xFFFFFFFF ? a2 : 0;
  }
  else
  {
    v4 = *(FILE **)(this + 0x4C); /*0x6f74cd*/
    if ( !v4 || a2 == 0xFFFFFFFF || *(_DWORD *)(this + 0x3C) || ungetc((unsigned __int8)a2, v4) == 0xFFFFFFFF ) /*0x6f74ef*/
      return 0xFFFFFFFF; /*0x6f74f7*/
    else
      return a2; /*0x6f74f1*/
  }
}
