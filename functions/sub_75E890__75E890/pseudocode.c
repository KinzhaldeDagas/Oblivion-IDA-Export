bool __thiscall sub_75E890(NiTriBasedGeomData *this, int a2)
{
  if ( !sub_752CD0(this, a2) ) /*0x75e8a0*/
    return 0; /*0x75e8a0*/
  if ( LODWORD(this->members.super.m_kBound.Radius) ) /*0x75e8a2*/
  {
    if ( !*(_DWORD *)(a2 + 0x18) /*0x75e8cd*/
      || *(_DWORD *)(a2 + 0x18)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(this->members.super.m_kBound.Radius)
                                                            + 0x2C))(
            LODWORD(this->members.super.m_kBound.Radius),
            *(_DWORD *)(a2 + 0x18)) )
    {
      return 0; /*0x75e8d1*/
    }
  }
  else if ( *(_DWORD *)(a2 + 0x18) ) /*0x75e8b3*/
  {
    return 0; /*0x75e8b7*/
  }
  return *(float *)&this->members.super.m_pkVertex == *(float *)(a2 + 0x1C) /*0x75e908*/
      && *(float *)&this->members.super.m_pkNormal == *(float *)(a2 + 0x20)
      && *(_BYTE *)(a2 + 0x24) == LOBYTE(this->members.super.m_pkColor)
      && *(float *)&this->members.super.m_pkTexture == *(float *)(a2 + 0x28);
}
