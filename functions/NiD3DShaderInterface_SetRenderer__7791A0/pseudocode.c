bool __thiscall NiD3DShaderInterface::SetRenderer(NiD3DShaderInterface *this, NiDX9Renderer *a2)
{
  NiD3DShaderInterface::SetDX9Renderer(this, a2);
  this->member.IsRenderSet = 1;
  return 1;
}
