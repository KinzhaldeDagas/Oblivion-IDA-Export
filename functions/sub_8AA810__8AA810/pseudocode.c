NiTimeController *__thiscall sub_8AA810(NiTimeController *this)
{
  double v2; // st7

  NiTimeController::NiTimeController(this); /*0x8aa834*/
  v2 = kTerrainLODQuadRayDirectionZ; /*0x8aa839*/
  this->vtbl = (NiTimeControllerVtbl *)&bhkBlendController::`vftable'; /*0x8aa841*/
  *((_DWORD *)this + 0x12) = 0; /*0x8aa847*/
  *((_DWORD *)this + 0x13) = 0; /*0x8aa84a*/
  *((_DWORD *)this + 0x14) = 0; /*0x8aa84d*/
  *((_DWORD *)this + 0x11) = 0; /*0x8aa850*/
  *((_DWORD *)this + 0x10) = &NiTLargeArray<BLENDKEY>::`vftable'; /*0x8aa853*/
  *((_DWORD *)this + 0x15) = 1; /*0x8aa85a*/
  *((float *)this + 0x16) = v2; /*0x8aa861*/
  *((_DWORD *)this + 0xF) = 0; /*0x8aa864*/
  *((float *)this + 0x17) = v2; /*0x8aa867*/
  *((_DWORD *)this + 0x18) = 0; /*0x8aa86a*/
  *((_DWORD *)this + 0x15) = 4; /*0x8aa86d*/
  return this; /*0x8aa876*/
}
