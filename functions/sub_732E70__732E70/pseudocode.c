int __thiscall sub_732E70(NiTriBasedGeomData *this, signed int a2)
{
  signed int v2; // edi
  int (__cdecl *v4)(int, UInt16 *, int, signed int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]

  v2 = a2; /*0x732e72*/
  sub_729450(this, (unsigned int *)a2); /*0x732e79*/
  v4 = *(int (__cdecl **)(int, UInt16 *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x732e84*/
  v6 = *(_DWORD *)(v2 + 0x21C); /*0x732e94*/
  a2 = 2; /*0x732e95*/
  return v4(v6, &this->members.m_usTriangles, 2, &a2, 1); /*0x732ea2*/
}
