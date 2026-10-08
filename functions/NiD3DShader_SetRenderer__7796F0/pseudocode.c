char __thiscall NiD3DShader::SetRenderer(NiD3DShader *this, NiDX9Renderer *a2)
{
  if ( !a2 ) /*0x7796f9*/
    return 0; /*0x7796fb*/
  NiD3DShaderInterface::SetRenderer((NiD3DShaderInterface *)this, a2); /*0x779702*/
  this->member.super.IsRenderSet = 1; /*0x779709*/
  return 1; /*0x7796fd*/
}
