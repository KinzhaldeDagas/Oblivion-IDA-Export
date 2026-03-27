void *__thiscall sub_9A1E30(NiRenderTargetGroup *this, void *a2)
{
  void (__thiscall ***RenderData)(void *, int); // ecx
  void *result; // eax

  RenderData = (void (__thiscall ***)(void *, int))this->members.RenderData;
  if ( RenderData )
  {
    (**RenderData)(RenderData, 1);
    result = a2;
  }
  this->members.RenderData = a2;
  return result;
}
