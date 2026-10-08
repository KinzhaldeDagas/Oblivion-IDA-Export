int __thiscall sub_919D40(char *this)
{
  int result; // eax
  int v3; // edi
  int i; // esi

  result = *((_DWORD *)this + 7); /*0x919d43*/
  if ( result ) /*0x919d48*/
  {
    v3 = *(_DWORD *)(result + 0x60); /*0x919d4c*/
    for ( i = 0; i < v3; ++i ) /*0x919d53*/
      result = sub_91C620(this + 0xFFFFFFF8, *(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 7) + 0x5C) + 4 * i)); /*0x919d6c*/
  }
  return result; /*0x919d79*/
}
