// Generic BSShader initialization used by SpeedTreeFrondShader vtable +0x84: sets renderer, invokes setup/check virtuals, and allocates one pass slot through sub_76CCA0.
char __thiscall sub_8025F0(BSShader *this)
{
  char result; // al

  result = NiD3DShader::SetRenderer((NiD3DShader *)this, unk_B43104); /*0x8025f9*/
  if ( result ) /*0x802600*/
  {
    this->__vftable->Unk098(this); /*0x80260e*/
    this->__vftable->Unk100(this); /*0x80261a*/
    this->__vftable->Unk09C(this); /*0x802626*/
    sub_76CCA0((unsigned __int16 *)&this->member.super.Passes, 1u); /*0x80262d*/
    return 1; /*0x802632*/
  }
  return result; /*0x802602*/
}
