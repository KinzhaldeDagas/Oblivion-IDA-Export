char __thiscall sub_75E830(const char **this, int a2, _DWORD **a3)
{
  char result; // al

  result = sub_752C40(this, a2, a3);
  *(_DWORD *)(a2 + 0x18) = *(this + 6);
  *(float *)(a2 + 0x1C) = *((float *)this + 7);
  *(float *)(a2 + 0x20) = *((float *)this + 8);
  *(_BYTE *)(a2 + 0x24) = *((_BYTE *)this + 0x24);
  *(float *)(a2 + 0x28) = *((float *)this + 0xA);
  *(float *)(a2 + 0x2C) = *((float *)this + 0xB);
  return result;
}
