NiD3DShader *__thiscall sub_76C960(NiD3DShader *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = this->member.Unk050[5]; /*0x76c966*/
  this->__vftable = (NiD3DShaderInterfaceVtbl *)&NiD3DDefaultShader::`vftable'; /*0x76c967*/
  FormHeapFree(v4); /*0x76c96d*/
  NiD3DShader::~NiD3DShader(this); /*0x76c977*/
  if ( (a2 & 1) != 0 ) /*0x76c981*/
    FormHeapFree((unsigned int)this); /*0x76c984*/
  return this; /*0x76c98e*/
}
