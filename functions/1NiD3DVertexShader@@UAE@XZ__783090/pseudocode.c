void __thiscall NiD3DVertexShader::~NiD3DVertexShader(NiD3DVertexShader *this)
{
  *(_DWORD *)this = &NiD3DVertexShader::`vftable';
  sub_77EFA0((int)this);
  if ( *((_DWORD *)this + 0xC) )
    sub_763090(*((_DWORD *)this + 8), (int)this, (int)this);
  NiD3DShaderProgram::~NiD3DShaderProgram(this);
}
