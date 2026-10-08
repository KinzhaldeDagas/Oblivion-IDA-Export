NiRenderTargetGroup *__thiscall NiRenderTargetGroup::`scalar deleting destructor'(NiRenderTargetGroup *this, char a2)
{
  NiRenderTargetGroup::~NiRenderTargetGroup(this); /*0x9a2113*/
  if ( (a2 & 1) != 0 ) /*0x9a211d*/
    FormHeapFree((unsigned int)this); /*0x9a2120*/
  return this; /*0x9a212a*/
}
