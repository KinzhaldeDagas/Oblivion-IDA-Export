bool __thiscall NiD3DShaderInterface::SetRenderer(NiD3DShaderInterface *this, NiDX9Renderer *a2)
{
  NiD3DShaderInterface::SetDX9Renderer(this, a2); /*0x7791a8*/
  this->member.IsRenderSet = 1; /*0x7791af*/
  return 1; /*0x7791b2*/
}
