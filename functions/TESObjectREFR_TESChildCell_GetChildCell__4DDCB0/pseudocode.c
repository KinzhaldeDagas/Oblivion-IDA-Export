BSExtraDataVtbl *__thiscall TESObjectREFR_TESChildCell_GetChildCell(TESChildCELL *this)
{
  TESObjectCELL *v2; // edi

  v2 = *((TESObjectCELL **)this + 0xA);
  if ( !TESObjectREFR_IsPersistent_((TESObjectREFR *)(&this->vtbl + 0xFFFFFFFA))
    && ((int)*(&this->vtbl + 0xFFFFFFFC) & 0x4000) == 0
    || v2 && TESObjectCELL_IsInterior(v2) )
  {
    return (BSExtraDataVtbl *)v2;
  }
  else
  {
    return sub_41FF80((ExtraDataList *)(this + 0xB));
  }
}
