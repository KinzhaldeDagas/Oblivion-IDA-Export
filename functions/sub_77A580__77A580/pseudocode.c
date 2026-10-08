char __thiscall sub_77A580(BSShader *this)
{
  unsigned int end; // edx
  int v2; // eax
  NiD3DPass *i; // ecx

  end = this->member.super.Passes.end; /*0x77a580*/
  v2 = 0; /*0x77a584*/
  if ( !this->member.super.Passes.end ) /*0x77a580*/
    return 0; /*0x77a5a2*/
  for ( i = this->member.super.Passes.data; !i->__vftable[4].sub_75FBA0; i = (NiD3DPass *)((char *)i + 4) ) /*0x77a58b*/
  {
    if ( ++v2 >= end ) /*0x77a5a0*/
      return 0; /*0x77a5a0*/
  }
  return 1; /*0x77a5a4*/
}
