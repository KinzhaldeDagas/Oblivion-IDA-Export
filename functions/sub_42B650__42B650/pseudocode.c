int __thiscall sub_42B650(TESObjectREFR **this, BSStringT *a2)
{
  TESObjectREFR *v2; // ecx

  v2 = *this;
  if ( v2 )
    return GetTeleportCellName(v2, a2);
  else
    return BSStringT_Set(a2, EmptyString, 0);
}
