NiRenderedTexture *__thiscall NiRenderedTexture::`scalar deleting destructor'(NiRenderedTexture *this, char a2)
{
  NiRenderedTexture::~NiRenderedTexture(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
