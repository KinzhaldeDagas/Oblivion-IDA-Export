int __thiscall sub_732E70(NiTriBasedGeomData *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, UInt16 *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2;
  sub_729450(this, (unsigned int *)a2);
  v4 = *(int (__cdecl **)(int, UInt16 *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v6 = *(_DWORD *)(v2 + 0x21C);
  a2 = 2;
  return v4(v6, &this->members.m_usTriangles, 2, &a2, 1);
}
