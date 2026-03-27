TESObjectCELL *__thiscall sub_42B460(TESObjectREFR **this)
{
  TESObjectREFR *v1; // ecx

  v1 = *this;
  if ( v1 )
    return TESObjectREFR_GetParentCell(v1);
  else
    return 0;
}
