void *__thiscall sub_9A1E30(NiRenderTargetGroup *this, void *a2)
{
  void (__thiscall ***RenderData)(void *, int); // ecx
  void *result; // eax

  RenderData = (void (__thiscall ***)(void *, int))this->members.RenderData; /*0x9a1e33*/
  if ( RenderData ) /*0x9a1e38*/
  {
    (**RenderData)(RenderData, 1); /*0x9a1e40*/
    result = a2; /*0x9a1e42*/
  }
  this->members.RenderData = a2; /*0x9a1e46*/
  return result; /*0x9a1e49*/
}
