char __thiscall sub_77A580(BSShader *this)
{
  unsigned int end; // edx
  int v2; // eax
  NiD3DPass *i; // ecx

  end = this->member.super.Passes.end;
  v2 = 0;
  if ( !this->member.super.Passes.end )
    return 0;
  for ( i = this->member.super.Passes.data; !i->__vftable[4].sub_75FBA0; i = (NiD3DPass *)((char *)i + 4) )
  {
    if ( ++v2 >= end )
      return 0;
  }
  return 1;
}
