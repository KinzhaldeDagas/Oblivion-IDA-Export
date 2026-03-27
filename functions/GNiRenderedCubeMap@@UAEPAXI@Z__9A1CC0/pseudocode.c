NiRenderedCubeMap *__thiscall NiRenderedCubeMap::`scalar deleting destructor'(NiRenderedCubeMap *this, char a2)
{
  NiRenderedCubeMap::~NiRenderedCubeMap(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
