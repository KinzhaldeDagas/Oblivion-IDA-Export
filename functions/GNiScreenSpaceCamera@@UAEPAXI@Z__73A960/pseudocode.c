NiScreenSpaceCamera *__thiscall NiScreenSpaceCamera::`scalar deleting destructor'(NiScreenSpaceCamera *this, char a2)
{
  NiScreenSpaceCamera::~NiScreenSpaceCamera(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
