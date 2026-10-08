char __thiscall sub_6CCD10(NiTriBasedGeomData *this, int a2)
{
  char v4; // al
  unsigned __int8 v5; // bl

  if ( !sub_89D6F0(this, a2) ) /*0x6ccd19*/
    return 0; /*0x6ccd19*/
  v4 = BYTE1(this->members.super.m_kBound.Center.x); /*0x6ccd29*/
  if ( v4 != *(_BYTE *)(a2 + 0xD) ) /*0x6ccd2f*/
    return 0; /*0x6ccd26*/
  v5 = 0; /*0x6ccd32*/
  if ( v4 ) /*0x6ccd36*/
  {
    while ( sub_6CCC50( /*0x6ccd5e*/
              (float *)(0x18 * v5 + LODWORD(this->members.super.m_kBound.Center.z)),
              (float *)(0x18 * v5 + *(_DWORD *)(a2 + 0x14))) )
    {
      if ( ++v5 >= BYTE1(this->members.super.m_kBound.Center.x) ) /*0x6ccd66*/
        goto LABEL_7; /*0x6ccd66*/
    }
  }
  else
  {
LABEL_7:
    if ( LOBYTE(this->members.super.m_kBound.Center.x) == *(_BYTE *)(a2 + 0xC) /*0x6ccdcc*/
      && *(float *)(a2 + 0x1C) == *(float *)&this->members.super.m_pkVertex
      && BYTE2(this->members.super.m_kBound.Center.x) == *(_BYTE *)(a2 + 0xE)
      && HIBYTE(this->members.super.m_kBound.Center.x) == *(_BYTE *)(a2 + 0xF)
      && (!LODWORD(this->members.super.m_kBound.Radius)
       || (*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)LODWORD(this->members.super.m_kBound.Radius)
                                                            + 0x2C))(
            LODWORD(this->members.super.m_kBound.Radius),
            *(_DWORD *)(a2 + 0x18)))
      && LODWORD(this->members.super.m_kBound.Radius) == *(_DWORD *)(a2 + 0x18)
      && *(float *)(a2 + 0x20) == *(float *)&this->members.super.m_pkNormal
      && LOBYTE(this->members.super.m_kBound.Center.y) == *(_BYTE *)(a2 + 0x10)
      && BYTE1(this->members.super.m_kBound.Center.y) == *(_BYTE *)(a2 + 0x11) )
    {
      return 1; /*0x6ccdd3*/
    }
  }
  return 0; /*0x6ccd22*/
}
