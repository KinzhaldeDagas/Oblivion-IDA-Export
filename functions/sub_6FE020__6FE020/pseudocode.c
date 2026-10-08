bool __thiscall sub_6FE020(NiTriBasedGeomData *this, int a2)
{
  const char *v3; // esi

  return sub_700670(this, a2) /*0x6fe04e*/
      && (v3 = *(const char **)&this->members.super.m_usVertices) != 0
      && *(_DWORD *)(a2 + 8)
      && CRT_StricmpLocaleDispatch(v3, *(const char **)(a2 + 8)) == 0;
}
