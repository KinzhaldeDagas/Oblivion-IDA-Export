NiTexture *__thiscall NiTexture::`scalar deleting destructor'(NiTexture *this, char a2)
{
  NiTexture::~NiTexture(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
