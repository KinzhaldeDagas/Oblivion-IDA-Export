void __thiscall sub_76C760(NiD3DShader *this)
{
  unsigned int v2; // [esp-4h] [ebp-8h]

  v2 = this->member.Unk050[5];
  this->__vftable = (NiD3DShaderInterfaceVtbl *)&NiD3DDefaultShader::`vftable';
  FormHeapFree(v2);
  NiD3DShader::~NiD3DShader(this);
}
