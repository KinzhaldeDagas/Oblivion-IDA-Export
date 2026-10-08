char __thiscall sub_77A550(NiD3DShader *this)
{
  unsigned int end; // edx
  int v2; // eax
  NiD3DPass *i; // ecx

  end = this->member.Passes.end; /*0x77a550*/
  v2 = 0; /*0x77a554*/
  if ( !this->member.Passes.end ) /*0x77a550*/
    return 1; /*0x77a572*/
  for ( i = this->member.Passes.data; i->__vftable[4].sub_75FBA0; i = (NiD3DPass *)((char *)i + 4) ) /*0x77a55b*/
  {
    if ( ++v2 >= end ) /*0x77a570*/
      return 1; /*0x77a570*/
  }
  return 0; /*0x77a574*/
}
