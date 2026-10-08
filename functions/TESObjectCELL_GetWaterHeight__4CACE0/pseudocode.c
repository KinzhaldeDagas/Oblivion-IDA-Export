double __thiscall TESObjectCELL_GetWaterHeight(ExtraDataList *this)
{
  if ( (*((_BYTE *)this + 0x24) & 2) != 0 ) /*0x4cace8*/
    return GetCellWaterHeight(this + 2); /*0x4cacf4*/
  else
    return flt_A3B888; /*0x4cacea*/
}
