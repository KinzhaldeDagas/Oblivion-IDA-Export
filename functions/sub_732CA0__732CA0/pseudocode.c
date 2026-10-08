int __thiscall sub_732CA0(NiTriBasedGeomData *this, int a2)
{
  int v2; // edi
  int (__cdecl *v4)(int, int, int, int *, int); // edx
  int v6; // [esp-14h] [ebp-1Ch]
  int v7; // [esp-10h] [ebp-18h]
  int m_usVertices; // [esp-Ch] [ebp-14h]

  v2 = a2; /*0x732ca2*/
  sub_7299A0(this, (_DWORD *)a2); /*0x732ca9*/
  m_usVertices = this->members.super.m_usVertices; /*0x732cc2*/
  v4 = *(int (__cdecl **)(int, int, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x732cc3*/
  v7 = *(_DWORD *)&this->members.m_usTriangles; /*0x732cc6*/
  v6 = *(_DWORD *)(v2 + 0x220); /*0x732cc7*/
  a2 = 1; /*0x732cc8*/
  return v4(v6, v7, m_usVertices, &a2, 1); /*0x732cd5*/
}
