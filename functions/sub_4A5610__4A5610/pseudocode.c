TESRegionDataWeather *__thiscall TESRegionDataWeather_ctor(TESRegionDataWeather *self)
{
  TESRegionData_InitializeBase(&self->base); /*0x4a5638*/
  self->base.vtable = (TESRegionDataVtable *)&TESRegionDataWeather::`vftable'; /*0x4a5648*/
  sub_4EED50((unsigned int *)&self->weatherList); /*0x4a564e*/
  return self; /*0x4a5655*/
}
