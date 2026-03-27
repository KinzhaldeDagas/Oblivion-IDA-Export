NiD3DRenderState *__thiscall NiD3DRenderState::`scalar deleting destructor'(NiD3DRenderState *this, char a2)
{
  NiD3DRenderState::~NiD3DRenderState(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
