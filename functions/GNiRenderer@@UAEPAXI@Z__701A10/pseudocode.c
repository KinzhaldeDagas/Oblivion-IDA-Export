NiRenderer *__thiscall NiRenderer::`scalar deleting destructor'(NiRenderer *this, char a2)
{
  NiRenderer::~NiRenderer(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
