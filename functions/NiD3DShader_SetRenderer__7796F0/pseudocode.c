char __thiscall NiD3DShader::SetRenderer(NiD3DShader *this, NiDX9Renderer *a2)
{
  if ( !a2 )
    return 0;
  NiD3DShaderInterface::SetRenderer((NiD3DShaderInterface *)this, a2);
  this->member.super.IsRenderSet = 1;
  return 1;
}
