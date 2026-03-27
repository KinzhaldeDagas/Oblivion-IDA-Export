NiRenderTargetGroup *__thiscall NiRenderTargetGroup::`scalar deleting destructor'(NiRenderTargetGroup *this, char a2)
{
  NiRenderTargetGroup::~NiRenderTargetGroup(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
