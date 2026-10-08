bool __thiscall sub_711D20(NiTriBasedGeomData *this, int a2)
{
  if ( !sub_700670(this, a2) ) /*0x711d29*/
    return 0; /*0x711d30*/
  if ( *(_DWORD *)&this->members.super.m_usVertices ) /*0x711d39*/
    return a2 != 0; /*0x711d36*/
  return !a2; /*0x711d4a*/
}
