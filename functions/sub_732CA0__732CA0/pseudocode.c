int __thiscall sub_732CA0(NiTriBasedGeomData *this, int a2)
{
  _DWORD *v2; // edi
  int (__cdecl *v4)(int, int, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]
  int v7; // [esp-10h] [ebp-18h]
  int m_usVertices; // [esp-Ch] [ebp-14h]

  v2 = (_DWORD *)a2;
  sub_7299A0(this, (_DWORD *)a2);
  m_usVertices = this->members.super.m_usVertices;
  v4 = *(int (__cdecl **)(int, int, int, int *, int))(v2[0x88] + 8);
  v7 = *(_DWORD *)&this->members.m_usTriangles;
  v6 = v2[0x88];
  a2 = 1;
  return v4(v6, v7, m_usVertices, &a2, 1);
}
