char __thiscall NiD3DShaderProg::SetRebderer(NiD3DShader *this, NiDX9Renderer *a2)
{
  char result; // al

  if ( this->member.super.IsRenderSet != 1 || a2 != this->member.super.D3DRenderer )
  {
    result = NiD3DShader::SetRenderer(this, a2);
    if ( !result )
      return result;
    TESTexture::ClearComponentReferences(this);
  }
  return 1;
}
