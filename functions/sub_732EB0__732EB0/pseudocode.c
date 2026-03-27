int __thiscall sub_732EB0(NiTriBasedGeomData *this, int a2)
{
  int v2; // edi
  int (__cdecl *v4)(int, UInt16 *, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_7299A0(this, (_DWORD *)a2);
  v4 = *(int (__cdecl **)(int, UInt16 *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8);
  v6 = *(_DWORD *)(v2 + 0x220);
  a2 = 2;
  return v4(v6, &this->members.m_usTriangles, 2, &a2, 1);
}
