int __thiscall sub_6E6A40(char *this, signed int a2)
{
  signed int v2; // edi
  int v4; // edi
  int (__cdecl *v5)(int, char *, int, signed int *, int); // ecx

  v2 = a2; /*0x6e6a42*/
  sub_6ED420((NiRenderer *)this, a2); /*0x6e6a49*/
  sub_715420(this + 0x1C, v2); /*0x6e6a52*/
  v4 = *(_DWORD *)(v2 + 0x21C); /*0x6e6a57*/
  v5 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v4 + 4); /*0x6e6a5d*/
  a2 = 4; /*0x6e6a6e*/
  return v5(v4, this + 0x2C, 4, &a2, 1); /*0x6e6a7b*/
}
