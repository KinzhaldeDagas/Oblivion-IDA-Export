NiDX9Renderer *__thiscall NiDX9Renderer::`scalar deleting destructor'(NiDX9Renderer *this, char a2)
{
  NiDX9Renderer::~NiDX9Renderer(this); /*0x76bed3*/
  if ( (a2 & 1) != 0 ) /*0x76bedd*/
    FormHeapFree((unsigned int)this); /*0x76bee0*/
  return this; /*0x76beea*/
}
