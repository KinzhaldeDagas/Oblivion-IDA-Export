char __thiscall sub_77A520(NiD3DShader *this)
{
  unsigned int end; // edx
  int v2; // eax
  NiD3DPass *i; // ecx

  end = this->member.Passes.end; /*0x77a520*/
  v2 = 0; /*0x77a524*/
  if ( !this->member.Passes.end ) /*0x77a520*/
    return 0; /*0x77a542*/
  for ( i = this->member.Passes.data; !i->__vftable[5].sub_75FD90; i = (NiD3DPass *)((char *)i + 4) ) /*0x77a52b*/
  {
    if ( ++v2 >= end ) /*0x77a540*/
      return 0; /*0x77a540*/
  }
  return 1; /*0x77a544*/
}
