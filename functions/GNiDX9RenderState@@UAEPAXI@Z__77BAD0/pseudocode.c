NiDX9RenderState *__thiscall NiDX9RenderState::`scalar deleting destructor'(NiDX9RenderState *this, char a2)
{
  this->vtbl = (NiDX9RenderStateVtbl *)&NiDX9RenderState::`vftable';
  NiD3DRenderState::~NiD3DRenderState((NiD3DRenderState *)this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
