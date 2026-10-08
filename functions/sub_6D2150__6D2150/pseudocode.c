MEF_RefPointerArray16 *__thiscall sub_6D2150(void ***this, _DWORD **a2)
{
  NiFlipController *v3; // eax
  MEF_RefPointerArray16 *v4; // esi

  v3 = (NiFlipController *)FormHeapAlloc(0x5Cu); /*0x6d2177*/
  v4 = 0; /*0x6d2183*/
  if ( v3 ) /*0x6d218b*/
    v4 = (MEF_RefPointerArray16 *)NiFlipController::NiFlipController(v3); /*0x6d2194*/
  sub_6D1C80(this, v4, a2); /*0x6d21a6*/
  return v4; /*0x6d21ad*/
}
