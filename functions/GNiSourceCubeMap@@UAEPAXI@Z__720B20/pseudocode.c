NiSourceTexture *__thiscall NiSourceCubeMap::`scalar deleting destructor'(NiSourceTexture *this, char a2)
{
  NiSourceCubeMap::~NiSourceCubeMap(this); /*0x720b23*/
  if ( (a2 & 1) != 0 ) /*0x720b2d*/
    FormHeapFree((unsigned int)this); /*0x720b30*/
  return this; /*0x720b3a*/
}
