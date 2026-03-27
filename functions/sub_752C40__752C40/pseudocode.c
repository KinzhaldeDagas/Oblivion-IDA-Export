char __thiscall sub_752C40(const char **this, int a2, _DWORD **a3)
{
  const char *v4; // ebp
  unsigned int v5; // kr00_4
  char *v6; // eax
  char result; // al

  sub_700770(this, a2, a3);
  v4 = *(this + 2);
  FormHeapFree(*(_DWORD *)(a2 + 8));
  v5 = strlen(v4);
  v6 = (char *)FormHeapAlloc(v5 + 1);
  *(_DWORD *)(a2 + 8) = v6;
  strcpy_s(v6, v5 + 1, v4);
  *(_DWORD *)(a2 + 0xC) = *(this + 3);
  result = *((_BYTE *)this + 0x14);
  *(_BYTE *)(a2 + 0x14) = result;
  return result;
}
