NiBoneLODController *sub_6E9030()
{
  NiBoneLODController *v0; // eax

  v0 = (NiBoneLODController *)FormHeapAlloc(0x70u);
  if ( v0 )
    return NiBoneLODController::NiBoneLODController(v0);
  else
    return 0;
}
