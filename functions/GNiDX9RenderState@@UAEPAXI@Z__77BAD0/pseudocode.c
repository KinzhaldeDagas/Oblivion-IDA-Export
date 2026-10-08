NiDX9RenderState *__thiscall NiDX9RenderState::`scalar deleting destructor'(NiDX9RenderState *this, char a2)
{
  this->vtbl = (NiDX9RenderStateVtbl *)&NiDX9RenderState::`vftable'; /*0x77bad3*/
  NiD3DRenderState::~NiD3DRenderState((NiD3DRenderState *)this); /*0x77bad9*/
  if ( (a2 & 1) != 0 ) /*0x77bae3*/
    FormHeapFree((unsigned int)this); /*0x77bae6*/
  return this; /*0x77baf0*/
}
