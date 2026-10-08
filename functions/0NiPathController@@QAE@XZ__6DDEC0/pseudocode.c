NiPathController *__thiscall NiPathController::NiPathController(NiPathController *this, int *a2)
{
  NiTimeController *v3; // eax
  int v4; // esi
  double v5; // st7

  v3 = (NiTimeController *)FormHeapAlloc(0x6Cu); /*0x6ddee8*/
  v4 = (int)v3; /*0x6ddeed*/
  if ( v3 ) /*0x6ddefe*/
  {
    NiTimeController::NiTimeController(v3); /*0x6ddf02*/
    *(_DWORD *)v4 = &NiPathController::`vftable'; /*0x6ddf07*/
    *(_DWORD *)(v4 + 0x48) = 0; /*0x6ddf0d*/
    *(_DWORD *)(v4 + 0x4C) = 0; /*0x6ddf10*/
    *(float *)(v4 + 0x58) = 0.0; /*0x6ddf15*/
    *(_DWORD *)(v4 + 0x40) = 0; /*0x6ddf18*/
    *(float *)(v4 + 0x5C) = 0.0; /*0x6ddf1b*/
    *(_DWORD *)(v4 + 0x44) = 0; /*0x6ddf1e*/
    *(float *)(v4 + 0x64) = 0.0; /*0x6ddf21*/
    *(_DWORD *)(v4 + 0x68) = 1; /*0x6ddf24*/
    v5 = kTerrainLODQuadRayDirectionZ; /*0x6ddf2b*/
    *(_WORD *)(v4 + 0x60) = 0; /*0x6ddf31*/
    *(float *)(v4 + 0x54) = v5; /*0x6ddf35*/
    *(_DWORD *)(v4 + 0x50) = 0; /*0x6ddf38*/
    *(_WORD *)(v4 + 0x3C) = 3; /*0x6ddf3b*/
  }
  else
  {
    v4 = 0; /*0x6ddf43*/
  }
  sub_6DDC60((float *)this, v4, a2); /*0x6ddf55*/
  return (NiPathController *)v4; /*0x6ddf5c*/
}
