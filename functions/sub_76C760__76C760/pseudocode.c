void __thiscall sub_76C760(NiD3DShader *this)
{
  unsigned int v2; // [esp-4h] [ebp-8h]

  v2 = this->member.Unk050[5]; /*0x76c766*/
  this->__vftable = (NiD3DShaderInterfaceVtbl *)&NiD3DDefaultShader::`vftable'; /*0x76c767*/
  FormHeapFree(v2); /*0x76c76d*/
  NiD3DShader::~NiD3DShader(this); /*0x76c778*/
}
