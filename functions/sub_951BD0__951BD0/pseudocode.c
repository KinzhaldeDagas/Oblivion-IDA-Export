int *__thiscall sub_951BD0(int this, _OWORD *a2, _OWORD *a3, _OWORD *a4)
{
  int *result; // eax

  *(_DWORD *)(this + 8) = 4;
  *(_OWORD *)(this + 0x30) = *a2;
  *(_OWORD *)(this + 0x40) = *a3;
  *(_OWORD *)(this + 0x20) = *a4;
  *(_DWORD *)(this + 0x50) = 0;
  *(_OWORD *)(this + 0x70) = a2[1];
  *(_OWORD *)(this + 0x80) = a3[1];
  *(_OWORD *)(this + 0x60) = a4[1];
  *(_DWORD *)(this + 0x90) = 0;
  *(_OWORD *)(this + 0xB0) = a2[2];
  *(_OWORD *)(this + 0xC0) = a3[2];
  *(_OWORD *)(this + 0xA0) = a4[2];
  *(_DWORD *)(this + 0xD0) = 0;
  *(_OWORD *)(this + 0xF0) = a2[3];
  *(_OWORD *)(this + 0x100) = a3[3];
  *(_OWORD *)(this + 0xE0) = a4[3];
  *(_DWORD *)(this + 0x110) = 0;
  result = sub_959480((__m128 *)this);
  *(_DWORD *)(this + 0xC) = 0;
  return result;
}
