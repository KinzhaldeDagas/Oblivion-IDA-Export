void __thiscall NiD3DPixelShader::~NiD3DPixelShader(NiD3DPixelShader *this)
{
  *(_DWORD *)this = &NiD3DPixelShader::`vftable';
  sub_77EFD0((int)this);
  if ( *((_DWORD *)this + 0xA) )
    sub_7630E0(*((_DWORD *)this + 8), (int)this, (int)this);
  *((_DWORD *)this + 0xA) = 0;
  NiD3DShaderProgram::~NiD3DShaderProgram(this);
}
