int __thiscall sub_6E5740(NiRenderer *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, UInt32 *, int, signed int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, UInt32 *, int, signed int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x6e5742*/
  sub_6ED420(this, a2); /*0x6e5749*/
  v8 = *(_DWORD *)(v2 + 0x21C); /*0x6e5761*/
  v4 = *(void (__cdecl **)(int, UInt32 *, int, signed int *, int))(v8 + 4); /*0x6e5762*/
  a2 = 4; /*0x6e5765*/
  v4(v8, &this->members.pad014[2], 4, &a2, 1); /*0x6e576d*/
  v5 = *(_DWORD *)(v2 + 0x21C); /*0x6e576f*/
  v6 = *(int (__cdecl **)(int, UInt32 *, int, signed int *, int))(v5 + 4); /*0x6e5775*/
  a2 = 4; /*0x6e5786*/
  return v6(v5, &this->members.pad014[3], 4, &a2, 1); /*0x6e5793*/
}
