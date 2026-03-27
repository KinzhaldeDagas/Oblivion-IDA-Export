char *__thiscall sub_70D050(char **this, int a2, _DWORD **a3)
{
  char *result; // eax
  size_t v5; // [esp-4h] [ebp-14h]

  sub_707E90(this, (NiGeometry *)a2, a3);
  LODWORD(v5) = 0x40;
  memcpy((void *)(a2 + 0xAC), this + 0x2B, v5);
  *(_DWORD *)(a2 + 0x88) = *(this + 0x22);
  *(_DWORD *)(a2 + 0x8C) = *(this + 0x23);
  *(_DWORD *)(a2 + 0x90) = *(this + 0x24);
  qmemcpy((void *)(a2 + 0xEC), this + 0x3B, 0x1Cu);
  *(_DWORD *)(a2 + 0x110) = *(this + 0x44);
  *(_DWORD *)(a2 + 0x114) = *(this + 0x45);
  *(_DWORD *)(a2 + 0x118) = *(this + 0x46);
  result = *(this + 0x47);
  *(_DWORD *)(a2 + 0x11C) = result;
  *(float *)(a2 + 0x120) = *((float *)this + 0x48);
  *(float *)(a2 + 0x108) = *((float *)this + 0x42);
  *(float *)(a2 + 0x10C) = *((float *)this + 0x43);
  return result;
}
