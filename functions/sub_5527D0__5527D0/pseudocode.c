_DWORD *__thiscall sub_5527D0(_DWORD *this)
{
  ArrayConstructor( /*0x552807*/
    (char *)this,
    0x18u,
    2,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  FaceGenMatrix_Construct((FaceGenMatrix *)this + 2); /*0x552817*/
  ArrayConstructor( /*0x552833*/
    (char *)this + 0x48,
    0x18u,
    2,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  return this; /*0x55283a*/
}
