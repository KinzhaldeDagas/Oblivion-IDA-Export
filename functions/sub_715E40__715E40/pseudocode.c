int __thiscall sub_715E40(NiTriBasedGeomData *this, int arg0)
{
  int result; // eax
  NiAdditionalGeometryData *m_spAdditionalGeomData; // ecx

  result = sub_700750(this, arg0); /*0x715e49*/
  m_spAdditionalGeomData = this->members.super.m_spAdditionalGeomData; /*0x715e4e*/
  if ( m_spAdditionalGeomData ) /*0x715e53*/
    return (*(int (__thiscall **)(NiAdditionalGeometryData *, int))(*(_DWORD *)m_spAdditionalGeomData + 0x38))( /*0x715e5b*/
             m_spAdditionalGeomData,
             arg0);
  return result; /*0x715e5d*/
}
