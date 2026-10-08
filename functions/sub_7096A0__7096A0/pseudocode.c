int __thiscall sub_7096A0(char **this, int a2, int a3)
{
  int result; // eax

  sub_700A60(this, (NiObjectNET *)a2, a3); /*0x7096ae*/
  *(_DWORD *)(a2 + 0x1C) = *(this + 7); /*0x7096b6*/
  *(_DWORD *)(a2 + 0x20) = *(this + 8); /*0x7096bc*/
  *(_DWORD *)(a2 + 0x24) = *(this + 9); /*0x7096c2*/
  *(_DWORD *)(a2 + 0x28) = *(this + 0xA); /*0x7096c8*/
  *(_DWORD *)(a2 + 0x2C) = *(this + 0xB); /*0x7096ce*/
  *(_DWORD *)(a2 + 0x30) = *(this + 0xC); /*0x7096d4*/
  *(_DWORD *)(a2 + 0x34) = *(this + 0xD); /*0x7096da*/
  *(_DWORD *)(a2 + 0x38) = *(this + 0xE); /*0x7096e0*/
  *(_DWORD *)(a2 + 0x3C) = *(this + 0xF); /*0x7096e6*/
  *(_DWORD *)(a2 + 0x40) = *(this + 0x10); /*0x7096ec*/
  *(_DWORD *)(a2 + 0x44) = *(this + 0x11); /*0x7096f2*/
  result = (int)*(this + 0x12); /*0x7096f5*/
  *(_DWORD *)(a2 + 0x48) = result; /*0x7096f8*/
  *(float *)(a2 + 0x4C) = *((float *)this + 0x13); /*0x7096fe*/
  *(float *)(a2 + 0x50) = *((float *)this + 0x14); /*0x709704*/
  return result; /*0x709707*/
}
