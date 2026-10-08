bool __thiscall sub_731F80(NiDepthStencilBuffer *this, void *a2)
{
  bool result; // al

  if ( this->members.data ) /*0x731f80*/
    return 1; /*0x731f80*/
  if ( !renderer ) /*0x731f86*/
    return 1; /*0x731f86*/
  result = renderer->__vftable->super.CreateDepthStencil((NiRenderer *)renderer, this, a2); /*0x731fa0*/
  if ( result ) /*0x731fa5*/
    return 1; /*0x731faa*/
  return result; /*0x731fa7*/
}
