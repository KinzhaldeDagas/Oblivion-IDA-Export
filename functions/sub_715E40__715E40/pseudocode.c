int __thiscall sub_715E40(NiTriBasedGeomData *this, int arg0)
{
  int result; // eax
  NiAdditionalGeometryData *m_spAdditionalGeomData; // ecx

  result = sub_700750(this, arg0);
  m_spAdditionalGeomData = this->members.super.m_spAdditionalGeomData;
  if ( m_spAdditionalGeomData )
    return (*(int (__thiscall **)(NiAdditionalGeometryData *, int))(*(_DWORD *)m_spAdditionalGeomData + 0x38))(
             m_spAdditionalGeomData,
             arg0);
  return result;
}
