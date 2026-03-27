double __thiscall TESObjectCELL_GetWaterHeight(ExtraDataList *this)
{
  if ( (*((_BYTE *)this + 0x24) & 2) != 0 )
    return GetCellWaterHeight(this + 2);
  else
    return flt_A3B888;
}
