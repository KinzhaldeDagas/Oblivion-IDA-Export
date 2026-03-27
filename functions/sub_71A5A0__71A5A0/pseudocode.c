char *__thiscall sub_71A5A0(char **this, int a2, _DWORD **a3)
{
  char *result; // eax

  sub_708B00(this, a2, a3);
  *(float *)(a2 + 0xDC) = *((float *)this + 0x37);
  *(_DWORD *)(a2 + 0xE0) = *(this + 0x38);
  *(_DWORD *)(a2 + 0xE4) = *(this + 0x39);
  *(_DWORD *)(a2 + 0xE8) = *(this + 0x3A);
  *(_DWORD *)(a2 + 0xEC) = *(this + 0x3B);
  *(_DWORD *)(a2 + 0xF0) = *(this + 0x3C);
  *(_DWORD *)(a2 + 0xF4) = *(this + 0x3D);
  *(_DWORD *)(a2 + 0xF8) = *(this + 0x3E);
  *(_DWORD *)(a2 + 0xFC) = *(this + 0x3F);
  result = *(this + 0x40);
  *(_DWORD *)(a2 + 0x100) = result;
  return result;
}
