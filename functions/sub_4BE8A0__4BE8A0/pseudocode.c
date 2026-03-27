void sub_4BE8A0()
{
  _DWORD *v0; // eax
  int v1; // esi

  if ( !dword_B35B90 )
  {
    v0 = (_DWORD *)FormHeapAlloc(0x1Cu);
    v1 = (int)v0;
    if ( v0 )
      sub_4BE200(v0, 2u, 0x25, 0xC);
    else
      v1 = 0;
    dword_B35B90 = v1;
  }
}
