void __thiscall NiD3DPixelShader::~NiD3DPixelShader(NiD3DPixelShader *this)
{
  *(_DWORD *)this = &NiD3DPixelShader::`vftable'; /*0x782e44*/
  sub_77EFD0((int)this); /*0x782e4a*/
  if ( *((_DWORD *)this + 0xA) ) /*0x782e52*/
    sub_7630E0(*((_DWORD *)this + 8), (int)this, (int)this); /*0x782e5c*/
  *((_DWORD *)this + 0xA) = 0; /*0x782e61*/
  NiD3DShaderProgram::~NiD3DShaderProgram(this); /*0x782e6b*/
}
