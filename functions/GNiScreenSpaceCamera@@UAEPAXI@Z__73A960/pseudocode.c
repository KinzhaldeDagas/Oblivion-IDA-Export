NiScreenSpaceCamera *__thiscall NiScreenSpaceCamera::`scalar deleting destructor'(NiScreenSpaceCamera *this, char a2)
{
  NiScreenSpaceCamera::~NiScreenSpaceCamera(this); /*0x73a963*/
  if ( (a2 & 1) != 0 ) /*0x73a96d*/
    FormHeapFree((unsigned int)this); /*0x73a970*/
  return this; /*0x73a97a*/
}
