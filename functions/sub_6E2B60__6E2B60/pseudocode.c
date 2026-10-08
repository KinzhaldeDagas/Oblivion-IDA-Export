int __thiscall sub_6E2B60(char **this)
{
  int result; // eax
  char *v3; // ebx
  unsigned int v4; // kr00_4
  char *v5; // eax
  int v6; // [esp-10h] [ebp-14h]

  result = (int)*(this + 0x13); /*0x6e2b63*/
  if ( !result ) /*0x6e2b68*/
  {
    FormHeapFree(0); /*0x6e2b6c*/
    v3 = *(this + 0x10); /*0x6e2b71*/
    *(this + 0x13) = 0; /*0x6e2b79*/
    if ( v3 ) /*0x6e2b80*/
    {
      v4 = strlen(v3); /*0x6e2b84*/
      v5 = (char *)FormHeapAlloc(v4 + 0xF); /*0x6e2b97*/
      v6 = (int)*(this + 0x12); /*0x6e2b9f*/
      *(this + 0x13) = v5; /*0x6e2ba8*/
      sub_6C5D40((va_list)(v4 + 0xF), v5, __PAIR64__("%s[%d]", v4 + 0xF), v3, v6); /*0x6e2bab*/
    }
    return (int)*(this + 0x13); /*0x6e2bb4*/
  }
  return result; /*0x6e2bb8*/
}
