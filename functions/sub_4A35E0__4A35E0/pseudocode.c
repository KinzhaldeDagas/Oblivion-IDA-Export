TESRegionDataGrass *__thiscall TESRegionDataGrass_ctor(TESRegionDataGrass *self)
{
  TESRegionGrassObjectList *v2; // eax
  TESRegionGrassObjectList *v3; // eax

  TESRegionData_InitializeBase(&self->base); /*0x4a360a*/
  self->base.vtable = (TESRegionDataVtable *)&TESRegionDataGrass::`vftable'; /*0x4a3619*/
  v2 = (TESRegionGrassObjectList *)FormHeapAlloc(0x14u); /*0x4a361f*/
  if ( v2 ) /*0x4a3632*/
    v3 = TESRegionGrassObjectList_ctor(v2, 1u); /*0x4a3638*/
  else
    v3 = 0; /*0x4a363f*/
  self->grassObjects = v3; /*0x4a3641*/
  return self; /*0x4a3646*/
}
