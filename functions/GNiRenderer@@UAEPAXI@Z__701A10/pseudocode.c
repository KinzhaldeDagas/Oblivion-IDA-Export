NiRenderer *__thiscall NiRenderer::`scalar deleting destructor'(NiRenderer *this, char a2)
{
  NiRenderer::~NiRenderer(this); /*0x701a13*/
  if ( (a2 & 1) != 0 ) /*0x701a1d*/
    FormHeapFree((unsigned int)this); /*0x701a20*/
  return this; /*0x701a2a*/
}
