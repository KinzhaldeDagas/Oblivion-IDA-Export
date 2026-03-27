NiExtraDataController *sub_6E26A0()
{
  NiExtraDataController *v0; // eax
  NiExtraDataController *v1; // esi

  v0 = (NiExtraDataController *)FormHeapAlloc(0x50u);
  v1 = v0;
  if ( !v0 )
    return 0;
  NiExtraDataController::NiExtraDataController(v0);
  *(_DWORD *)v1 = &NiFloatsExtraDataPoint3Controller::`vftable';
  *((_DWORD *)v1 + 0x12) = 0xFFFFFFFF;
  *((_DWORD *)v1 + 0x13) = 0;
  return v1;
}
