TESObjectCELL *__thiscall TESObjectREFR_TESChildCell_GetChildCell(TESChildCELL *this)
{
  TESObjectCELL *v2; // edi

  v2 = *((TESObjectCELL **)this + 0xA); /*0x4ddcb4*/
  if ( !TESObjectREFR_IsPersistent((TESObjectREFR *)(&this->vtbl + 0xFFFFFFFA)) /*0x4ddcd3*/
    && ((int)*(&this->vtbl + 0xFFFFFFFC) & 0x4000) == 0
    || v2 && TESObjectCELL_IsInterior(v2) )
  {
    return v2; /*0x4ddce6*/
  }
  else
  {
    return (TESObjectCELL *)ExtraDataList_GetPersistentCell((ExtraDataList *)(this + 0xB)); /*0x4ddce1*/
  }
}
