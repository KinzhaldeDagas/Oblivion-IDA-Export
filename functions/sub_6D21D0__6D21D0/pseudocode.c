NiFlipController *sub_6D21D0()
{
  NiFlipController *v0; // eax

  v0 = (NiFlipController *)FormHeapAlloc(0x5Cu); /*0x6d21f3*/
  if ( v0 ) /*0x6d2209*/
    return NiFlipController::NiFlipController(v0); /*0x6d220d*/
  else
    return 0; /*0x6d2222*/
}
