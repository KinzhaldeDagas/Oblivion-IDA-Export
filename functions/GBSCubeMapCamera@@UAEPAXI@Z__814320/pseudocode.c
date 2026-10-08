BSCubeMapCamera *__thiscall BSCubeMapCamera::`scalar deleting destructor'(BSCubeMapCamera *this, char a2)
{
  BSCubeMapCamera::~BSCubeMapCamera(this); /*0x814323*/
  if ( (a2 & 1) != 0 ) /*0x81432d*/
    FormHeapFree((unsigned int)this); /*0x814330*/
  return this; /*0x81433a*/
}
