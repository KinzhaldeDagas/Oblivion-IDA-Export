BSFaceGenImage *__thiscall BSFaceGenImage::`scalar deleting destructor'(BSFaceGenImage *this, char a2)
{
  BSFaceGenImage::~BSFaceGenImage(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
