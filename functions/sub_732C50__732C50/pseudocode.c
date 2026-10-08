int __thiscall sub_732C50(NiTriBasedGeomData *this, signed int a2)
{
  signed int v2; // edi
  int v4; // eax
  int (__cdecl *v5)(int, int, int, signed int *, int); // eax
  int v7; // [esp-18h] [ebp-20h]
  int v8; // [esp-14h] [ebp-1Ch]
  int m_usVertices; // [esp-10h] [ebp-18h]

  v2 = a2; /*0x732c52*/
  sub_729450(this, (unsigned int *)a2); /*0x732c59*/
  v4 = FormHeapAlloc(this->members.super.m_usVertices); /*0x732c63*/
  m_usVertices = this->members.super.m_usVertices; /*0x732c73*/
  *(_DWORD *)&this->members.m_usTriangles = v4; /*0x732c74*/
  v8 = v4; /*0x732c7d*/
  v5 = *(int (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4); /*0x732c7e*/
  v7 = *(_DWORD *)(v2 + 0x21C); /*0x732c81*/
  a2 = 1; /*0x732c82*/
  return v5(v7, v8, m_usVertices, &a2, 1); /*0x732c8f*/
}
