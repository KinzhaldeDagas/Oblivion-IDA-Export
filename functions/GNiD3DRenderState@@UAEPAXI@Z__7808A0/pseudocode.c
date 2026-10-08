NiD3DRenderState *__thiscall NiD3DRenderState::`scalar deleting destructor'(NiD3DRenderState *this, char a2)
{
  NiD3DRenderState::~NiD3DRenderState(this); /*0x7808a3*/
  if ( (a2 & 1) != 0 ) /*0x7808ad*/
    FormHeapFree((unsigned int)this); /*0x7808b0*/
  return this; /*0x7808ba*/
}
