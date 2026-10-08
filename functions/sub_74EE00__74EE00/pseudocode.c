int __thiscall sub_74EE00(const char **this, int a2, _DWORD **a3)
{
  int result; // eax

  sub_752C40(this, a2, a3); /*0x74ee0e*/
  *(float *)(a2 + 0x18) = *((float *)this + 6); /*0x74ee16*/
  *(float *)(a2 + 0x1C) = *((float *)this + 7); /*0x74ee1c*/
  *(float *)(a2 + 0x20) = *((float *)this + 8); /*0x74ee22*/
  *(float *)(a2 + 0x24) = *((float *)this + 9); /*0x74ee28*/
  *(float *)(a2 + 0x28) = *((float *)this + 0xA); /*0x74ee2e*/
  *(float *)(a2 + 0x2C) = *((float *)this + 0xB); /*0x74ee34*/
  *(_DWORD *)(a2 + 0x30) = *(this + 0xC); /*0x74ee3a*/
  *(_DWORD *)(a2 + 0x34) = *(this + 0xD); /*0x74ee40*/
  result = (int)*(this + 0xE); /*0x74ee43*/
  *(_DWORD *)(a2 + 0x38) = result; /*0x74ee46*/
  *(_DWORD *)(a2 + 0x3C) = *(this + 0xF); /*0x74ee4c*/
  *(float *)(a2 + 0x40) = *((float *)this + 0x10); /*0x74ee52*/
  *(float *)(a2 + 0x48) = *((float *)this + 0x12); /*0x74ee58*/
  *(float *)(a2 + 0x4C) = *((float *)this + 0x13); /*0x74ee5e*/
  *(float *)(a2 + 0x44) = *((float *)this + 0x11); /*0x74ee64*/
  return result; /*0x74ee67*/
}
