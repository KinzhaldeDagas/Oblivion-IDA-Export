NiFlipController *sub_6D21D0()
{
  NiFlipController *v0; // eax

  v0 = (NiFlipController *)FormHeapAlloc(0x5Cu);
  if ( v0 )
    return NiFlipController::NiFlipController(v0);
  else
    return 0;
}
