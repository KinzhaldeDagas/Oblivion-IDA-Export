NiD3DShader *__thiscall sub_76C960(NiD3DShader *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = this->member.Unk050[5];
  this->__vftable = (NiD3DShaderInterfaceVtbl *)&NiD3DDefaultShader::`vftable';
  FormHeapFree(v4);
  NiD3DShader::~NiD3DShader(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
