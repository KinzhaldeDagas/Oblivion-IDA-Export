bool __thiscall sub_8A2650(NiTriBasedGeomData *this, int a2)
{
  bool result; // al

  result = sub_89D6F0(this, a2); /*0x8a2659*/
  if ( result ) /*0x8a2660*/
    return *(_DWORD *)(a2 + 0x10) == LODWORD(this->members.super.m_kBound.Center.y); /*0x8a2668*/
  return result; /*0x8a266b*/
}
