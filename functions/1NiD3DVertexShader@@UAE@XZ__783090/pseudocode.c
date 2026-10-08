// MoonSugarEffect decode: NiD3DVertexShader destructor. Removes shader-program-factory mapping, clears/release-binds the live vertex shader through renderer state, releases the D3D handle, then destructs base program.
void __thiscall NiD3DVertexShader::~NiD3DVertexShader(NiD3DVertexShader *this)
{
  *(_DWORD *)this = &NiD3DVertexShader::`vftable'; /*0x783094*/
  sub_77EFA0((int)this); /*0x78309a*/
  if ( *((_DWORD *)this + 0xC) ) /*0x7830a2*/
    sub_763090(*((_DWORD *)this + 8), (int)this, (int)this); /*0x7830ac*/
  NiD3DShaderProgram::~NiD3DShaderProgram(this); /*0x7830b4*/
}
