char __thiscall sub_42C310(_DWORD *this, int a2, int a3)
{
  unsigned int v5; // eax

  if ( *(this + 6) ) /*0x42c315*/
    return 1; /*0x42c31a*/
  v5 = *(this + 3); /*0x42c329*/
  *(this + 7) = *(_DWORD *)(*(this + 0x55) + 0x1C); /*0x42c32e*/
  *(this + 5) = 0; /*0x42c331*/
  *(this + 4) = 0; /*0x42c334*/
  *(this + 6) = 0; /*0x42c337*/
  if ( v5 ) /*0x42c33a*/
    *(this + 6) = FormHeapAlloc(v5); /*0x42c345*/
  *((_BYTE *)this + 0x24) = 1; /*0x42c34a*/
  return 1; /*0x42c31c*/
}
