bool __thiscall sub_752CD0(NiTriBasedGeomData *this, int a2)
{
  const char *v3; // eax
  const char *v4; // ecx
  bool result; // al

  result = 0;
  if ( sub_700670(this, a2) )
  {
    v3 = *(const char **)&this->members.super.m_usVertices;
    if ( v3 )
    {
      v4 = *(const char **)(a2 + 8);
      if ( v4 )
      {
        if ( !strcmp(v3, v4)
          && LODWORD(this->members.super.m_kBound.Center.x) == *(_DWORD *)(a2 + 0xC)
          && LOBYTE(this->members.super.m_kBound.Center.z) == *(_BYTE *)(a2 + 0x14) )
        {
          return 1;
        }
      }
    }
  }
  return result;
}
