int __thiscall sub_6E2B60(char **this)
{
  int result; // eax
  char *v3; // ebx
  unsigned int v4; // kr00_4
  char *v5; // eax
  int v6; // [esp-10h] [ebp-14h]

  result = (int)*(this + 0x13);
  if ( !result )
  {
    FormHeapFree(0);
    v3 = *(this + 0x10);
    *(this + 0x13) = 0;
    if ( v3 )
    {
      v4 = strlen(v3);
      v5 = (char *)FormHeapAlloc(v4 + 0xF);
      v6 = (int)*(this + 0x12);
      *(this + 0x13) = v5;
      sub_6C5D40((va_list)(v4 + 0xF), v5, __PAIR64__("%s[%d]", v4 + 0xF), v3, v6);
    }
    return (int)*(this + 0x13);
  }
  return result;
}
