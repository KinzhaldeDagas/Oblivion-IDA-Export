NiFlipController *__thiscall sub_6D2150(_DWORD *this, int a2)
{
  NiFlipController *v3; // eax
  NiFlipController *v4; // esi

  v3 = (NiFlipController *)FormHeapAlloc(0x5Cu);
  v4 = 0;
  if ( v3 )
    v4 = NiFlipController::NiFlipController(v3);
  sub_6D1C80(this, (int)v4, a2);
  return v4;
}
