bool __thiscall sub_6FE020(NiTriBasedGeomData *this, int a2)
{
  char *v3; // esi

  return sub_700670(this, a2)
      && (v3 = *(char **)&this->members.super.m_usVertices) != 0
      && *(_DWORD *)(a2 + 8)
      && _strcmp(v3, *(char **)(a2 + 8)) == 0;
}
