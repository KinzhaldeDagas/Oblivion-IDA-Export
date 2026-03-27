int __thiscall sub_732C50(NiTriBasedGeomData *this, signed int a2)
{
  signed int v2; // edi
  int v4; // eax
  int (__cdecl *v5)(int, int, int, signed int *, int); // eax
  int v7; // [esp-18h] [ebp-20h]
  int v8; // [esp-14h] [ebp-1Ch]
  int m_usVertices; // [esp-10h] [ebp-18h]

  v2 = a2;
  sub_729450(this, (unsigned int *)a2);
  v4 = FormHeapAlloc(this->members.super.m_usVertices);
  m_usVertices = this->members.super.m_usVertices;
  *(_DWORD *)&this->members.m_usTriangles = v4;
  v8 = v4;
  v5 = *(int (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4);
  v7 = *(_DWORD *)(v2 + 0x21C);
  a2 = 1;
  return v5(v7, v8, m_usVertices, &a2, 1);
}
