unsigned int __thiscall sub_57DDE0(int this)
{
  unsigned int result; // eax
  bool v2; // zf

  result = *(_DWORD *)&MEMORY[0xB33E90][0x10]; /*0x57dde0*/
  if ( (unsigned int)(*(_DWORD *)&MEMORY[0xB33E90][0x10] - *(_DWORD *)(this + 0x10)) > 0x1F4 ) /*0x57ddf0*/
  {
    v2 = *(_BYTE *)(this + 8) == 0; /*0x57ddf2*/
    *(_DWORD *)(this + 0x10) = result; /*0x57ddf6*/
    *(_BYTE *)(this + 8) = v2; /*0x57ddfc*/
  }
  return result; /*0x57ddff*/
}
