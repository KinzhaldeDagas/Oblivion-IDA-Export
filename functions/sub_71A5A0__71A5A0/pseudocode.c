char *__thiscall sub_71A5A0(char **this, int a2, _DWORD **a3)
{
  char *result; // eax

  sub_708B00(this, a2, a3); /*0x71a5ae*/
  *(float *)(a2 + 0xDC) = *((float *)this + 0x37); /*0x71a5b9*/
  *(_DWORD *)(a2 + 0xE0) = *(this + 0x38); /*0x71a5c5*/
  *(_DWORD *)(a2 + 0xE4) = *(this + 0x39); /*0x71a5d1*/
  *(_DWORD *)(a2 + 0xE8) = *(this + 0x3A); /*0x71a5dd*/
  *(_DWORD *)(a2 + 0xEC) = *(this + 0x3B); /*0x71a5e9*/
  *(_DWORD *)(a2 + 0xF0) = *(this + 0x3C); /*0x71a5f5*/
  *(_DWORD *)(a2 + 0xF4) = *(this + 0x3D); /*0x71a601*/
  *(_DWORD *)(a2 + 0xF8) = *(this + 0x3E); /*0x71a619*/
  *(_DWORD *)(a2 + 0xFC) = *(this + 0x3F); /*0x71a61e*/
  result = *(this + 0x40); /*0x71a621*/
  *(_DWORD *)(a2 + 0x100) = result; /*0x71a625*/
  return result; /*0x71a624*/
}
