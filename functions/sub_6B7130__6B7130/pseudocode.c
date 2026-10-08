int __thiscall sub_6B7130(int this, char a2)
{
  int result; // eax

  result = 0; /*0x6b7130*/
  if ( a2 ) /*0x6b7139*/
  {
    if ( *(_BYTE *)(this + 0x4A) ) /*0x6b713b*/
      return result; /*0x6b713e*/
    *(_BYTE *)(this + 0x4A) = 1; /*0x6b7140*/
    *(_WORD *)(this + 0x46) = 0x2710; /*0x6b7144*/
  }
  else
  {
    if ( !*(_BYTE *)(this + 0x4A) ) /*0x6b714f*/
      return result; /*0x6b714f*/
    *(_BYTE *)(this + 0x4A) = 0; /*0x6b7151*/
    *(_WORD *)(this + 0x46) = 0; /*0x6b7154*/
  }
  sub_6B6F20((float *)this, *(float *)(this + 0x3C)); /*0x6b715f*/
  return sub_6B6F20((float *)this, *(float *)(this + 0x3C)); /*0x6b7172*/
}
