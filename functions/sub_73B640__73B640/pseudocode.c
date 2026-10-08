int __thiscall sub_73B640(NiTriBasedGeomData *this, int a2)
{
  int v2; // edi
  void (__cdecl *v4)(int, char *, int, int *, int); // eax
  int v5; // edi
  int (__cdecl *v6)(int, char *, int, int *, int); // edx
  int v8; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x73b642*/
  sub_71A2A0(this, a2); /*0x73b649*/
  v8 = *(_DWORD *)(v2 + 0x220); /*0x73b661*/
  v4 = *(void (__cdecl **)(int, char *, int, int *, int))(v8 + 8); /*0x73b662*/
  a2 = 2; /*0x73b665*/
  v4(v8, (char *)this + 0x50, 2, &a2, 1); /*0x73b66d*/
  v5 = *(_DWORD *)(v2 + 0x220); /*0x73b66f*/
  v6 = *(int (__cdecl **)(int, char *, int, int *, int))(v5 + 8); /*0x73b675*/
  a2 = 2; /*0x73b686*/
  return v6(v5, (char *)this + 0x52, 2, &a2, 1); /*0x73b693*/
}
