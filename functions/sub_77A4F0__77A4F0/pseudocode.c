char __thiscall sub_77A4F0(NiD3DShader *this)
{
  unsigned int end; // edx
  int v2; // eax
  NiD3DPass *i; // ecx

  end = this->member.Passes.end; /*0x77a4f0*/
  v2 = 0; /*0x77a4f4*/
  if ( !this->member.Passes.end ) /*0x77a4f0*/
    return 1; /*0x77a512*/
  for ( i = this->member.Passes.data; i->__vftable[5].sub_75FD90; i = (NiD3DPass *)((char *)i + 4) ) /*0x77a4fb*/
  {
    if ( ++v2 >= end ) /*0x77a510*/
      return 1; /*0x77a510*/
  }
  return 0; /*0x77a514*/
}
