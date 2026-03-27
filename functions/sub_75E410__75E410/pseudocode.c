errno_t __thiscall sub_75E410(const char **this, int a2, _DWORD **a3)
{
  const char *v4; // ebx
  unsigned int v5; // kr00_4
  char *v6; // eax

  sub_6CE2C0(this, a2, a3);
  v4 = *(this + 0x10);
  FormHeapFree(*(_DWORD *)(a2 + 0x40));
  v5 = strlen(v4);
  v6 = (char *)FormHeapAlloc(v5 + 1);
  *(_DWORD *)(a2 + 0x40) = v6;
  return strcpy_s(v6, v5 + 1, v4);
}
