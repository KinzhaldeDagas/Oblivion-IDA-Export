NiRenderedCubeMap *__thiscall NiRenderedCubeMap::`scalar deleting destructor'(NiRenderedCubeMap *this, char a2)
{
  NiRenderedCubeMap::~NiRenderedCubeMap(this); /*0x9a1cc3*/
  if ( (a2 & 1) != 0 ) /*0x9a1ccd*/
    FormHeapFree((unsigned int)this); /*0x9a1cd0*/
  return this; /*0x9a1cda*/
}
