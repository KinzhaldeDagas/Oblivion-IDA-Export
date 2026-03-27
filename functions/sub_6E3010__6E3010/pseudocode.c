NiExtraDataController *sub_6E3010()
{
  NiExtraDataController *v0; // esi
  NiExtraDataController *result; // eax

  v0 = (NiExtraDataController *)FormHeapAlloc(0x48u);
  result = 0;
  if ( v0 )
  {
    NiExtraDataController::NiExtraDataController(v0);
    *(_DWORD *)v0 = &NiFloatExtraDataController::`vftable';
    return v0;
  }
  return result;
}
