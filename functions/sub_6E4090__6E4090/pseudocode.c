NiExtraDataController *sub_6E4090()
{
  NiExtraDataController *v0; // esi
  NiExtraDataController *result; // eax

  v0 = (NiExtraDataController *)FormHeapAlloc(0x48u);
  result = 0;
  if ( v0 )
  {
    NiExtraDataController::NiExtraDataController(v0);
    *(_DWORD *)v0 = &NiColorExtraDataController::`vftable';
    return v0;
  }
  return result;
}
