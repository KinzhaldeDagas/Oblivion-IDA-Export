char *__thiscall sub_552D90(char *this)
{
  *this = 0; /*0x552dca*/
  ArrayConstructor(this + 4, 0x78u, 5, (void (__thiscall *)(char *))sub_5527D0, (void (__thiscall *)(void *))sub_551F40); /*0x552dcd*/
  ArrayConstructor( /*0x552def*/
    this + 0x25C,
    0x20u,
    0x14,
    (void (__thiscall *)(char *))unknown_libname_8_0,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  ArrayConstructor( /*0x552e0e*/
    this + 0x4DC,
    0x38u,
    0x19,
    (void (__thiscall *)(char *))sub_552860,
    (void (__thiscall *)(void *))sub_551FD0);
  ArrayConstructor( /*0x552e2d*/
    this + 0xA54,
    0x18u,
    0x14,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  return this; /*0x552e34*/
}
