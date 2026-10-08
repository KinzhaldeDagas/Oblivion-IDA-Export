void __thiscall sub_551F40(unsigned int *this)
{
  _LN21((char *)this + 0x48, 0x18u, 2, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x551f7d*/
  if ( *(this + 0xF) ) /*0x551f82*/
    FormHeapFree(*(this + 0xF)); /*0x551f8a*/
  *(this + 0xF) = 0; /*0x551f9c*/
  *(this + 0x10) = 0; /*0x551fa3*/
  *(this + 0x11) = 0; /*0x551faa*/
  _LN21((char *)this, 0x18u, 2, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x551fb9*/
}
