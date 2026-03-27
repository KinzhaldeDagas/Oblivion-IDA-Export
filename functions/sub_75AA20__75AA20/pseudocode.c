bool __thiscall sub_75AA20(NiTriBasedGeomData *this, int a2)
{
  bool result; // al

  result = sub_752CD0(this, a2);
  if ( result )
    return *(_WORD *)(a2 + 0x18) == LOWORD(this->members.super.m_kBound.Radius);
  return result;
}
