char __thiscall sub_752C40(const char **this, int a2, _DWORD **a3)
{
  const char *v4; // ebp
  unsigned int v5; // kr00_4
  char *v6; // eax
  char result; // al

  sub_700770(this, a2, a3); /*0x752c50*/
  v4 = *(this + 2); /*0x752c58*/
  FormHeapFree(*(_DWORD *)(a2 + 8)); /*0x752c5c*/
  v5 = strlen(v4); /*0x752c66*/
  v6 = (char *)FormHeapAlloc(v5 + 1); /*0x752c7f*/
  *(_DWORD *)(a2 + 8) = v6; /*0x752c87*/
  strcpy_s(v6, v5 + 1, v4); /*0x752c8a*/
  *(_DWORD *)(a2 + 0xC) = *(this + 3); /*0x752c95*/
  result = *((_BYTE *)this + 0x14); /*0x752c98*/
  *(_BYTE *)(a2 + 0x14) = result; /*0x752c9c*/
  return result; /*0x752c9b*/
}
