// Verified: Sound region data allocation size 0x14 and constructor anchor for its Oblivion vtable; Fallout layout is larger and not transferable.
TESRegionDataSound *__thiscall TESRegionDataSound_ctor(TESRegionDataSound *self)
{
  TESRegionData_InitializeBase(&self->base); /*0x4a55c3*/
  self->base.vtable = (TESRegionDataVtable *)&TESRegionDataSound::`vftable'; /*0x4a55ca*/
  self->sounds.record = 0; /*0x4a55d0*/
  self->sounds.next = 0; /*0x4a55d3*/
  self->unknown08 = 0; /*0x4a55d6*/
  return self; /*0x4a55db*/
}
