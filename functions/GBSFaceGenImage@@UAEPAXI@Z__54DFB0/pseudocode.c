BSFaceGenImage *__thiscall BSFaceGenImage::`scalar deleting destructor'(BSFaceGenImage *this, char a2)
{
  BSFaceGenImage::~BSFaceGenImage(this); /*0x54dfb3*/
  if ( (a2 & 1) != 0 ) /*0x54dfbd*/
    FormHeapFree((unsigned int)this); /*0x54dfc0*/
  return this; /*0x54dfca*/
}
