NiSourceTexture *__thiscall NiSourceCubeMap::`scalar deleting destructor'(NiSourceTexture *this, char a2)
{
  NiSourceCubeMap::~NiSourceCubeMap(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
