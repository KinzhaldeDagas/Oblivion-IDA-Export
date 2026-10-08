NiBoneLODController *sub_6E9030()
{
  NiBoneLODController *v0; // eax

  v0 = (NiBoneLODController *)FormHeapAlloc(0x70u); /*0x6e9053*/
  if ( v0 ) /*0x6e9069*/
    return NiBoneLODController::NiBoneLODController(v0); /*0x6e906d*/
  else
    return 0; /*0x6e9082*/
}
