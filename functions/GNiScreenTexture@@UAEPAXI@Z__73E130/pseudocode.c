NiScreenTexture *__thiscall NiScreenTexture::`scalar deleting destructor'(NiScreenTexture *this, char a2)
{
  NiScreenTexture::~NiScreenTexture(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
