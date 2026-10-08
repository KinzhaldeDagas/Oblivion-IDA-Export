// Verified: invokes Weather copy-factory virtual +0x10, then applies input through virtual merge +0x18 with mode 2; used as resolve-copy operation.
TESRegionDataWeather *__thiscall TESRegionDataWeather_ResolveCopyForSelection(
        TESRegionDataWeather *this,
        TESRegionData *source)
{
  TESRegionDataWeather *v2; // esi

  v2 = (TESRegionDataWeather *)((int (__thiscall *)(TESRegionDataWeather *))this->base.vtable->unknown10)(this); /*0x4a500c*/
  ((void (__thiscall *)(TESRegionDataWeather *, TESRegionData *, int))v2->base.vtable->unknown18)(v2, source, 2); /*0x4a5018*/
  return v2; /*0x4a501c*/
}
