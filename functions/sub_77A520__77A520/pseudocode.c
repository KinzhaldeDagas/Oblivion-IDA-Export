char __thiscall sub_77A520(NiD3DShader *this)
{
  unsigned int end; // edx
  int v2; // eax
  NiD3DPass *i; // ecx

  end = this->member.Passes.end;
  v2 = 0;
  if ( !this->member.Passes.end )
    return 0;
  for ( i = this->member.Passes.data; !i->__vftable[5].sub_75FD90; i = (NiD3DPass *)((char *)i + 4) )
  {
    if ( ++v2 >= end )
      return 0;
  }
  return 1;
}
