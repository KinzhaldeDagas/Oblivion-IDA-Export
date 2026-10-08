bool __thiscall sub_897880(NiTriBasedGeomData *this, int a2)
{
  bool result; // al
  float y; // ecx

  result = sub_711D20(this, a2); /*0x897889*/
  if ( result ) /*0x897890*/
  {
    y = this->members.super.m_kBound.Center.y; /*0x897892*/
    if ( y == 0.0 ) /*0x897897*/
      return *(_WORD *)(a2 + 0xC) == LOWORD(this->members.super.m_kBound.Center.x) && *(_DWORD *)(a2 + 0x10) == 0; /*0x8978c8*/
    else
      return (*(_WORD *)(a2 + 0xC) == LOWORD(this->members.super.m_kBound.Center.x)) /*0x8978b0*/
           & (*(int (__thiscall **)(float, _DWORD))(*(_DWORD *)LODWORD(y) + 0x2C))(
               COERCE_FLOAT(LODWORD(y)),
               *(_DWORD *)(a2 + 0x10));
  }
  return result; /*0x8978ac*/
}
