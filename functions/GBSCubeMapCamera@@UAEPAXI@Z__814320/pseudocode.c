BSCubeMapCamera *__thiscall BSCubeMapCamera::`scalar deleting destructor'(BSCubeMapCamera *this, char a2)
{
  BSCubeMapCamera::~BSCubeMapCamera(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
