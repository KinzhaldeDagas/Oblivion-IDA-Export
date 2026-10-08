int __thiscall sub_73B5E0(NiTriBasedGeomData *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, char *, int, signed int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x73b5e2*/
  sub_71A130(this, a2); /*0x73b5e9*/
  v8 = *(_DWORD *)(v2 + 0x21C); /*0x73b601*/
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v8 + 4); /*0x73b602*/
  a2 = 2; /*0x73b605*/
  v4(v8, (char *)this + 0x50, 2, &a2, 1); /*0x73b60d*/
  v5 = *(_DWORD *)(v2 + 0x21C); /*0x73b60f*/
  v6 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v5 + 4); /*0x73b615*/
  a2 = 2; /*0x73b626*/
  return v6(v5, (char *)this + 0x52, 2, &a2, 1); /*0x73b633*/
}
