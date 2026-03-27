char __thiscall sub_8025F0(BSShader *this)
{
  char result; // al

  result = NiD3DShader::SetRenderer((NiD3DShader *)this, dword_B43104);
  if ( result )
  {
    this->__vftable->Unk098(this);
    this->__vftable->Unk100(this);
    this->__vftable->Unk09C(this);
    sub_76CCA0((unsigned __int16 *)&this->member.super.Passes, 1u);
    return 1;
  }
  return result;
}
