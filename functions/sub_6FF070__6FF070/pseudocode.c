bool __thiscall sub_6FF070(NiTriBasedGeomData *this, int a2)
{
  bool result; // al

  result = sub_752CD0(this, a2); /*0x6ff079*/
  if ( result ) /*0x6ff080*/
    return *(float *)&this->members.super.m_pkNormal == *(float *)(a2 + 0x20); /*0x6ff08f*/
  return result; /*0x6ff091*/
}
