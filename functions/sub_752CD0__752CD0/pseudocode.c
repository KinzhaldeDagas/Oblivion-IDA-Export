bool __thiscall sub_752CD0(NiTriBasedGeomData *this, int a2)
{
  const char *v3; // eax
  const char *v4; // ecx
  bool result; // al

  result = 0; /*0x752d2a*/
  if ( sub_700670(this, a2) ) /*0x752cd9*/
  {
    v3 = *(const char **)&this->members.super.m_usVertices; /*0x752ce2*/
    if ( v3 ) /*0x752ce7*/
    {
      v4 = *(const char **)(a2 + 8); /*0x752ce9*/
      if ( v4 ) /*0x752cee*/
      {
        if ( !strcmp(v3, v4) /*0x752d27*/
          && LODWORD(this->members.super.m_kBound.Center.x) == *(_DWORD *)(a2 + 0xC)
          && LOBYTE(this->members.super.m_kBound.Center.z) == *(_BYTE *)(a2 + 0x14) )
        {
          return 1; /*0x752ce0*/
        }
      }
    }
  }
  return result; /*0x752d29*/
}
