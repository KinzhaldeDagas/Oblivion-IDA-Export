bool __thiscall sub_731F80(NiDepthStencilBuffer *this, void *a2)
{
  bool result; // al

  if ( this->members.data )
    return 1;
  if ( !g_Renderer )
    return 1;
  result = g_Renderer->__vftable->super.CreateDepthStencil((NiRenderer *)g_Renderer, this, a2);
  if ( result )
    return 1;
  return result;
}
