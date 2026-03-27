NiSourceTexture *__thiscall NiSourceTexture::`scalar deleting destructor'(NiSourceTexture *this, char a2)
{
  NiSourceTexture::~NiSourceTexture(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
