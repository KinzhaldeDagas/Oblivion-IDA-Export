char __thiscall sub_6ED370(NiTriBasedGeomData *this, int a2)
{
  float z; // ecx
  float Radius; // ecx

  if ( !sub_89D6F0(this, a2) ) /*0x6ed380*/
    return 0; /*0x6ed380*/
  if ( *(float *)(a2 + 0xC) == this->members.super.m_kBound.Center.x /*0x6ed39e*/
    && *(float *)(a2 + 0x10) == this->members.super.m_kBound.Center.y )
  {
    return 1; /*0x6ed3a4*/
  }
  z = this->members.super.m_kBound.Center.z; /*0x6ed3a7*/
  if ( z != 0.0 ) /*0x6ed3ac*/
  {
    if ( !*(_DWORD *)(a2 + 0x14) /*0x6ed3cb*/
      || !(*(unsigned __int8 (__thiscall **)(float, _DWORD))(*(_DWORD *)LODWORD(z) + 0x2C))(
            COERCE_FLOAT(LODWORD(z)),
            *(_DWORD *)(a2 + 0x14)) )
    {
      return 0; /*0x6ed3cf*/
    }
    goto LABEL_11; /*0x6ed3cf*/
  }
  if ( !*(_DWORD *)(a2 + 0x14) ) /*0x6ed3b8*/
  {
LABEL_11:
    Radius = this->members.super.m_kBound.Radius; /*0x6ed3d1*/
    if ( Radius != 0.0 ) /*0x6ed3d6*/
    {
      if ( *(_DWORD *)(a2 + 0x18) ) /*0x6ed3d8*/
        (*(void (__thiscall **)(float, _DWORD))(*(_DWORD *)LODWORD(Radius) + 0x2C))( /*0x6ed3f5*/
          COERCE_FLOAT(LODWORD(Radius)),
          *(_DWORD *)(a2 + 0x18));
    }
  }
  return 0; /*0x6ed3a0*/
}
