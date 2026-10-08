// Returns morphData->targetCount (+0x08) as UInt16, or zero when morphData is absent.
unsigned __int16 __thiscall NiGeomMorpherController_GetInterpolatorCount(NiGeomMorpherController *this)
{
  NiMorphData *morphData; // eax

  morphData = this->morphData; /*0x6d0a40*/
  if ( morphData ) /*0x6d0a45*/
    return *((_WORD *)morphData + 4); /*0x6d0a47*/
  else
    return 0; /*0x6d0a4c*/
}
