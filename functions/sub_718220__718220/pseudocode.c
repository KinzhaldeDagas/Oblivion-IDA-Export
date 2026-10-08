bool __thiscall sub_718220(NiTriBasedGeomData *this, int a2)
{
  unsigned int v3; // eax
  unsigned int Radius_low; // ecx
  bool result; // al

  result = 0; /*0x718294*/
  if ( sub_6D7E00(this, a2) ) /*0x718229*/
  {
    if ( ((*(_BYTE *)(a2 + 0x18) ^ LOBYTE(this->members.super.m_kBound.Radius)) & 1) == 0 ) /*0x71823a*/
    {
      v3 = *(unsigned __int16 *)(a2 + 0x18); /*0x71823c*/
      Radius_low = LOWORD(this->members.super.m_kBound.Radius); /*0x718240*/
      if ( (((unsigned __int8)Radius_low ^ (unsigned __int8)*(_WORD *)(a2 + 0x18)) & 0x1E) == 0 /*0x71828a*/
        && ((Radius_low ^ v3) & 0x1E0) == 0
        && (((unsigned __int8)(Radius_low >> 9) ^ (unsigned __int8)(v3 >> 9)) & 1) == 0
        && ((Radius_low ^ v3) & 0x1C00) == 0
        && BYTE2(this->members.super.m_kBound.Radius) == *(_BYTE *)(a2 + 0x1A)
        && (((unsigned __int8)(Radius_low >> 0xD) ^ (unsigned __int8)(v3 >> 0xD)) & 1) == 0 )
      {
        return 1; /*0x718230*/
      }
    }
  }
  return result; /*0x71828c*/
}
