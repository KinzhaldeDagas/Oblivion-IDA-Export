void __thiscall BSShader::~BSShader(BSShader *this)
{
  NiD3DPass *Unk070; // ecx

  this->__vftable = (BSShaderVtbl *)&BSShader::`vftable';
  Unk070 = (NiD3DPass *)this->member.Unk070;
  if ( Unk070 )
  {
    if ( Unk070->RefCount-- == 1 )
      sub_7604D0(Unk070);
    this->member.Unk070 = 0;
  }
  sub_76B350(dword_B43104, (NiD3DShaderInterface *)this);
  _LN21(&this->member.Unk070, 4u, 1, (void (__thiscall *)(void *))sub_4027D0);
  sub_76C760((NiD3DShader *)this);
}
