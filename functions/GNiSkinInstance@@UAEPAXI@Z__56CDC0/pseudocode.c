NiSkinInstance *__thiscall NiSkinInstance::`scalar deleting destructor'(NiSkinInstance *this, char a2)
{
  NiSkinInstance::~NiSkinInstance(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
