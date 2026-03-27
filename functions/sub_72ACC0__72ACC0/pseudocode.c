int __thiscall sub_72ACC0(NiTriBasedGeomData *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, char *, int, signed int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, char *, int, signed int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_71FEC0(this, a2);
  v8 = *(_DWORD *)(v2 + 0x21C);
  v4 = *(void (__cdecl **)(int, char *, int, signed int *, int))(v8 + 4);
  a2 = 2;
  v4(v8, (char *)this + 0x58, 2, &a2, 1);
  v5 = *(_DWORD *)(v2 + 0x21C);
  v6 = *(int (__cdecl **)(int, char *, int, signed int *, int))(v5 + 4);
  a2 = 2;
  return v6(v5, (char *)this + 0x5A, 2, &a2, 1);
}
