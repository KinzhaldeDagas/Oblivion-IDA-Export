BSRenderedTexture *__thiscall BSRenderedTexture::`scalar deleting destructor'(BSRenderedTexture *this, char a2)
{
  BSRenderedTexture::~BSRenderedTexture(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
