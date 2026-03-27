int __thiscall sub_73B640(NiTriBasedGeomData *this, int a2)
{
  _DWORD *v2; // edi
  void (__cdecl *v4)(int, char *, int, int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, char *, int, int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = (_DWORD *)a2;
  sub_71A2A0(this, a2);
  v8 = v2[0x88];
  v4 = *(void (__cdecl **)(int, char *, int, int *, int))(v8 + 8);
  a2 = 2;
  v4(v8, (char *)this + 0x50, 2, &a2, 1);
  v5 = v2[0x88];
  v6 = *(int (__cdecl **)(int, char *, int, int *, int))(v5 + 8);
  a2 = 2;
  return v6(v5, (char *)this + 0x52, 2, &a2, 1);
}
