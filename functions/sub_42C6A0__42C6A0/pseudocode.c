char __thiscall sub_42C6A0(_DWORD *this, int a2, int a3)
{
  unsigned int v4; // eax

  if ( *(this + 6) ) /*0x42c6a5*/
    return 1; /*0x42c6db*/
  v4 = *(this + 3); /*0x42c6b3*/
  *(this + 7) = *(_DWORD *)(*(this + 0x55) + 0x1C); /*0x42c6b8*/
  *(this + 5) = 0; /*0x42c6bb*/
  *(this + 4) = 0; /*0x42c6be*/
  *(this + 6) = 0; /*0x42c6c1*/
  if ( v4 ) /*0x42c6c4*/
    *(this + 6) = FormHeapAlloc(v4); /*0x42c6cf*/
  *((_BYTE *)this + 0x24) = 1; /*0x42c6d4*/
  return 1; /*0x42c6d7*/
}
