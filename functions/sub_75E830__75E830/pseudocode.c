char __thiscall sub_75E830(const char **this, int a2, _DWORD **a3)
{
  char result; // al

  result = sub_752C40(this, a2, a3); /*0x75e83e*/
  *(_DWORD *)(a2 + 0x18) = *(this + 6); /*0x75e846*/
  *(float *)(a2 + 0x1C) = *((float *)this + 7); /*0x75e84c*/
  *(float *)(a2 + 0x20) = *((float *)this + 8); /*0x75e852*/
  *(_BYTE *)(a2 + 0x24) = *((_BYTE *)this + 0x24); /*0x75e858*/
  *(float *)(a2 + 0x28) = *((float *)this + 0xA); /*0x75e85e*/
  *(float *)(a2 + 0x2C) = *((float *)this + 0xB); /*0x75e864*/
  return result; /*0x75e867*/
}
