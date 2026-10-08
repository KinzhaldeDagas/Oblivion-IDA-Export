bool __thiscall sub_75AA20(NiTriBasedGeomData *this, int a2)
{
  bool result; // al

  result = sub_752CD0(this, a2); /*0x75aa29*/
  if ( result ) /*0x75aa30*/
    return *(_WORD *)(a2 + 0x18) == LOWORD(this->members.super.m_kBound.Radius); /*0x75aa40*/
  return result; /*0x75aa32*/
}
