void *__thiscall sub_980D25(void *this)
{
  int v1; // edx
  void *result; // eax
  int v3; // ecx

  v1 = dword_BA9C50;
  result = this;
  v3 = dword_BA9C10;
  dword_BA9C54 = (int)&dword_BA9C10;
  *(int *)((char *)&dword_BA9C3C + *(_DWORD *)(v3 + 4)) = v1;
  *(int *)((char *)&dword_BA9C10 + *(_DWORD *)(dword_BA9C10 + 4) + 0x10) |= 2u;
  return result;
}
