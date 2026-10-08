// Verified: allocates 16-byte TESRegionDataWeather copy and delegates field/list copy initialization to TESRegionDataWeather_CopyFrom.
TESRegionDataWeather *__thiscall TESRegionDataWeather_CreateCopy(TESRegionDataWeather *source)
{
  TESRegionDataWeather *v2; // eax

  v2 = (TESRegionDataWeather *)FormHeapAlloc(0x10u); /*0x4a5736*/
  if ( v2 ) /*0x4a574c*/
    return TESRegionDataWeather_CopyFrom(v2, source); /*0x4a5751*/
  else
    return 0; /*0x4a5767*/
}
