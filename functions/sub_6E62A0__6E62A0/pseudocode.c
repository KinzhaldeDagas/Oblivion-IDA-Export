int __thiscall sub_6E62A0(NiRenderer *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, UInt32 *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6e62a2*/
  sub_6E5740(this, a2); /*0x6e62a9*/
  v4 = *(int (__cdecl **)(int, UInt32 *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x6e62b4*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x6e62c4*/
  a2 = 4; /*0x6e62c5*/
  return v4(v6, &this->members.pad014[4], 8, &a2, 1); /*0x6e62d2*/
}
