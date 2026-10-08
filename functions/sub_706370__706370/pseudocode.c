bool __thiscall sub_706370(NiTriBasedGeomData *this, int a2)
{
  __int16 v3; // ax
  __int16 Radius_low; // cx
  bool result; // al

  result = 0; /*0x7063a1*/
  if ( sub_6D7E00(this, a2) ) /*0x706379*/
  {
    v3 = *(_WORD *)(a2 + 0x18); /*0x706382*/
    Radius_low = LOWORD(this->members.super.m_kBound.Radius); /*0x706386*/
    if ( (((unsigned __int8)Radius_low ^ (unsigned __int8)v3) & 0x30) == 0 /*0x706397*/
      && (((unsigned __int8)Radius_low ^ (unsigned __int8)v3) & 8) == 0 )
    {
      return 1; /*0x706380*/
    }
  }
  return result; /*0x706399*/
}
