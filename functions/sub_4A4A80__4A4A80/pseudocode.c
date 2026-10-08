// Verified: Map region data constructor initializes base and assigns Map vtable; mapName defaults to 'Default Region Name'.
TESRegionDataMap *__thiscall TESRegionDataMap_ctor(TESRegionDataMap *self)
{
  TESRegionData_InitializeBase(&self->base); /*0x4a4aa8*/
  self->base.vtable = (TESRegionDataVtable *)&TESRegionDataMap::`vftable'; /*0x4a4ab2*/
  self->mapName.m_data = 0; /*0x4a4abc*/
  self->mapName.m_dataLen = 0; /*0x4a4abe*/
  self->mapName.m_bufLen = 0; /*0x4a4ac2*/
  BSStringT_Set(&self->mapName, "Default Region Name", 0); /*0x4a4ad1*/
  return self; /*0x4a4ad8*/
}
