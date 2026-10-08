char __thiscall sub_6EB540(NiTriBasedGeomData *this, int a2)
{
  char result; // al

  result = sub_6CCD10(this, a2); /*0x6eb549*/
  if ( result ) /*0x6eb550*/
    return this->members.super.m_ucKeepFlags == *(_BYTE *)(a2 + 0x30); /*0x6eb55e*/
  return result; /*0x6eb552*/
}
