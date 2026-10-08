int __thiscall sub_91CE10(char *this)
{
  int result; // eax
  int i; // esi

  result = *((_DWORD *)this + 7); /*0x91ce13*/
  if ( result ) /*0x91ce18*/
  {
    for ( i = 0; i < *(_DWORD *)(result + 0x60); ++i ) /*0x91ce22*/
    {
      sub_91CCA0(this + 0xFFFFFFF8, *(const void ***)(*(_DWORD *)(result + 0x5C) + 4 * i)); /*0x91ce31*/
      result = *((_DWORD *)this + 7); /*0x91ce36*/
    }
  }
  return result; /*0x91ce43*/
}
