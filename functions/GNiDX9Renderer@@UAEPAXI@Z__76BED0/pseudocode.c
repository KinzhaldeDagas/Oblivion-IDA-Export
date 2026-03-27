NiDX9Renderer *__thiscall NiDX9Renderer::`scalar deleting destructor'(NiDX9Renderer *this, char a2)
{
  NiDX9Renderer::~NiDX9Renderer(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
