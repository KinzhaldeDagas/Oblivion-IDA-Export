bool __thiscall sub_60E320(TESObjectREFR *this)
{
  TESObjectCELL *ParentCell; // eax

  if ( !TESObjectREFR_GetParentCell(this) )
    return 0;
  ParentCell = TESObjectREFR_GetParentCell(this);
  return sub_4CABC0((ExtraDataList *)ParentCell, (Actor *)this);
}
