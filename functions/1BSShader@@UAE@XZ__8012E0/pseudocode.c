//
// DX11 lifetime audit 2026-10-01: BSShader+70 is a strong NiD3DPass owner. Destruction decrements the NON-ATOMIC pass counter at +60 and calls 7604D0 on zero before clearing the field. This is not a +4 NiRefObject. Root/object retention does not establish exclusion for pass writers.
void __thiscall BSShader::~BSShader(BSShader *this)
{
  NiD3DPass *Unk070; // ecx

  this->__vftable = (BSShaderVtbl *)&BSShader::`vftable'; /*0x801309*/
  Unk070 = (NiD3DPass *)this->member.Unk070; /*0x80130f*/
  if ( Unk070 ) /*0x80131f*/
  {
    if ( Unk070->RefCount-- == 1 ) /*0x801321*/
      NiD3DPass_ReleaseToPool(Unk070); /*0x801327*/
    this->member.Unk070 = 0; /*0x80132c*/
  }
  sub_76B350(unk_B43104, (NiD3DShaderInterface *)this); /*0x801339*/
  _LN21((char *)&this->member.Unk070, 4u, 1, (void (__thiscall *)(void *))sub_4027D0); /*0x80134d*/
  sub_76C760((NiD3DShader *)this); /*0x80135c*/
}
