bool __thiscall sub_42BA10(float *this, int a2)
{
  return *(_DWORD *)this != *(_DWORD *)a2
      || sub_8AA390(this + 1, (float *)(a2 + 4))
      || sub_8AA390(this + 4, (float *)(a2 + 0x10));
}
