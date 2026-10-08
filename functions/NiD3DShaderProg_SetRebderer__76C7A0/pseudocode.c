char __thiscall NiD3DShaderProg::SetRebderer(NiD3DShader *this, NiDX9Renderer *a2)
{
  char result; // al

  if ( this->member.super.IsRenderSet != 1 || a2 != this->member.super.D3DRenderer ) /*0x76c7b0*/
  {
    result = NiD3DShader::SetRenderer(this, a2); /*0x76c7b3*/
    if ( !result ) /*0x76c7ba*/
      return result; /*0x76c7ba*/
    Shared_NoOpVirtual_60D0A0(this); /*0x76c7c2*/
  }
  return 1; /*0x76c7bc*/
}
