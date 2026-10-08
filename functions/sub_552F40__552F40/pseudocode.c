void __thiscall sub_552F40(_DWORD *this)
{
  unsigned int v2; // eax
  int v3; // eax

  v2 = *(this + 0x1F); /*0x552f6a*/
  if ( v2 ) /*0x552f75*/
    FormHeapFree(v2); /*0x552f78*/
  *(this + 0x1F) = 0; /*0x552f83*/
  *(this + 0x20) = 0; /*0x552f86*/
  *(this + 0x21) = 0; /*0x552f8c*/
  v3 = *(this + 0x1B); /*0x552f92*/
  if ( v3 ) /*0x552f97*/
  {
    sub_552D60(v3, *(this + 0x1C)); /*0x552fa0*/
    FormHeapFree(*(this + 0x1B)); /*0x552fa9*/
  }
  *(this + 0x1B) = 0; /*0x552fbe*/
  *(this + 0x1C) = 0; /*0x552fc1*/
  *(this + 0x1D) = 0; /*0x552fc4*/
  _LN21((char *)this + 8, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x552fcf*/
}
