bool __thiscall sub_6FAC70(NiTriBasedGeomData *this, int a2)
{
  bool result; // al

  result = sub_752CD0(this, a2); /*0x6fac79*/
  if ( result ) /*0x6fac80*/
    return *(float *)(a2 + 0x18) == this->members.super.m_kBound.Radius; /*0x6fac8f*/
  return result; /*0x6fac91*/
}
