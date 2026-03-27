ExtraCell3D *__thiscall ExtraCell3D::`scalar deleting destructor'(ExtraCell3D *this, char a2)
{
  ExtraCell3D::~ExtraCell3D(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
