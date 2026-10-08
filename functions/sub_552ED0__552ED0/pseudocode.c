char *__thiscall sub_552ED0(char *this)
{
  ArrayConstructor( /*0x552f06*/
    this + 8,
    0x18u,
    4,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  *((_DWORD *)this + 0x1B) = 0; /*0x552f0d*/
  *((_DWORD *)this + 0x1C) = 0; /*0x552f10*/
  *((_DWORD *)this + 0x1D) = 0; /*0x552f13*/
  *((_DWORD *)this + 0x1F) = 0; /*0x552f16*/
  *((_DWORD *)this + 0x20) = 0; /*0x552f19*/
  *((_DWORD *)this + 0x21) = 0; /*0x552f1f*/
  return this; /*0x552f27*/
}
