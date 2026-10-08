int __thiscall sub_74E160(const char **this, int a2, _DWORD **a3)
{
  int result; // eax

  sub_752C40(this, a2, a3); /*0x74e16e*/
  *(float *)(a2 + 0x18) = *((float *)this + 6); /*0x74e176*/
  *(float *)(a2 + 0x1C) = *((float *)this + 7); /*0x74e17f*/
  *(_BYTE *)(a2 + 0x35) = *((_BYTE *)this + 0x35); /*0x74e185*/
  *(float *)(a2 + 0x20) = *((float *)this + 8); /*0x74e18b*/
  *(float *)(a2 + 0x24) = *((float *)this + 9); /*0x74e194*/
  *(_BYTE *)(a2 + 0x34) = *((_BYTE *)this + 0x34); /*0x74e19a*/
  *(_DWORD *)(a2 + 0x28) = *(this + 0xA); /*0x74e19f*/
  *(_DWORD *)(a2 + 0x2C) = *(this + 0xB); /*0x74e1a4*/
  result = (int)*(this + 0xC); /*0x74e1a7*/
  *(_DWORD *)(a2 + 0x30) = result; /*0x74e1ab*/
  return result; /*0x74e1aa*/
}
