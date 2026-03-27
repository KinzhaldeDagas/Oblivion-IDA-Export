char *__thiscall sub_73D210(char **this, int a2, _DWORD **a3)
{
  char *result; // eax

  sub_725430(this, (float *)a2, a3);
  *(_DWORD *)(a2 + 0x114) = *(this + 0x45);
  *(_DWORD *)(a2 + 0x118) = *(this + 0x46);
  result = *(this + 0x47);
  *(_DWORD *)(a2 + 0x11C) = result;
  *(float *)(a2 + 0x120) = *((float *)this + 0x48);
  *(float *)(a2 + 0x124) = *((float *)this + 0x49);
  return result;
}
