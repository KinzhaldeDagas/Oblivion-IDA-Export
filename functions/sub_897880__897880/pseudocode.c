bool __thiscall sub_897880(NiTriBasedGeomData *this, int a2)
{
  bool result; // al
  float y; // ecx

  result = sub_711D20(this, a2);
  if ( result )
  {
    y = this->members.super.m_kBound.Center.y;
    if ( y == 0.0 )
      return *(_WORD *)(a2 + 0xC) == LOWORD(this->members.super.m_kBound.Center.x) && *(_DWORD *)(a2 + 0x10) == 0;
    else
      return (*(_WORD *)(a2 + 0xC) == LOWORD(this->members.super.m_kBound.Center.x))
           & (*(int (__thiscall **)(float, _DWORD))(*(_DWORD *)LODWORD(y) + 0x2C))(
               COERCE_FLOAT(LODWORD(y)),
               *(_DWORD *)(a2 + 0x10));
  }
  return result;
}
