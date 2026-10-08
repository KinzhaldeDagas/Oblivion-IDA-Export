// MapMarkerData constructor zeros TESFullName storage, FNAM flags byte, and TNAM u16 type. unused0D is not explicitly initialized.
MapMarkerData *__thiscall MapMarkerData_ctor(MapMarkerData *this)
{
  this->fullName.vtbl = (BaseFormComponentVtbl *)&TESFullName::`vftable'; /*0x42b3f4*/
  this->fullName.name.m_data = 0; /*0x42b3fa*/
  this->fullName.name.m_dataLen = 0; /*0x42b3fd*/
  this->fullName.name.m_bufLen = 0; /*0x42b401*/
  this->flags = 0; /*0x42b405*/
  this->markerType = 0; /*0x42b408*/
  return this; /*0x42b40c*/
}
