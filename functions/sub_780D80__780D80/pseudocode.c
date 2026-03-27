NiD3DShaderProgram *__thiscall sub_780D80(NiD3DShaderProgram *this, int a2)
{
  NiD3DShaderProgram::NiD3DShaderProgram(this, a2);
  *((_BYTE *)this + 0x28) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *(_DWORD *)this = &NiD3DVertexShader::`vftable';
  return this;
}
