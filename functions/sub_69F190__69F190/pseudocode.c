char __thiscall sub_69F190(TESObjectREFR *this)
{
  TESObjectCELL *ParentCell; // eax

  ParentCell = TESObjectREFR_GetParentCell(this);
  if ( TESObjectCELL_IsProcessLevel_LowHigh(ParentCell, 1) )
    return 1;
  if ( this )
    this->vtbl->super.Destroy((TESForm *)this, 1);
  return 0;
}
