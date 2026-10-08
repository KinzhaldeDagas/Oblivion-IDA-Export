int __thiscall sub_718730(NiRenderer *this, int a2)
{
  int v2; // edi
  void (__cdecl *v4)(int, UInt32 *, int, int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, char *, int, int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x718732*/
  sub_700AC0(this, (unsigned int *)a2); /*0x718739*/
  if ( *(_DWORD *)(v2 + 0xD8) >= 0xA000102u ) /*0x718748*/
  {
    v8 = *(_DWORD *)(v2 + 0x21C); /*0x71876e*/
    v4 = *(void (__cdecl **)(int, UInt32 *, int, int *, int))(v8 + 4); /*0x71876f*/
    a2 = 2; /*0x718772*/
    v4(v8, &this->members.pad014[1], 2, &a2, 1); /*0x71877a*/
  }
  else
  {
    LOWORD(this->members.pad014[1]) = *(_WORD *)(v2 + 0x25C) & 0x3FFF; /*0x718755*/
  }
  v5 = *(_DWORD *)(v2 + 0x21C); /*0x71877f*/
  v6 = *(int (__cdecl **)(int, char *, int, int *, int))(v5 + 4); /*0x718785*/
  a2 = 1; /*0x718796*/
  return v6(v5, (char *)&this->members.pad014[1] + 2, 1, &a2, 1); /*0x7187a3*/
}
