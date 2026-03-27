bool __thiscall NiSourceCubeTexture::LoadTexture(NiSourceCubeMap *this)
{
  bool result; // al

  if ( !g_Renderer )
    return 1;
  result = g_Renderer->__vftable->super.CreateSourceCubeMap((NiRenderer *)g_Renderer, this);
  if ( result )
    return 1;
  return result;
}
