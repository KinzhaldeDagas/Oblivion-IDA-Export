int __thiscall sub_42B650(TESObjectREFR **this, BSStringT *a2)
{
  TESObjectREFR *v2; // ecx

  v2 = *this; /*0x42b650*/
  if ( v2 ) /*0x42b654*/
    return GetTeleportCellName(v2, a2); /*0x42b656*/
  else
    return BSStringT_Set(a2, EmptyString, 0); /*0x42b666*/
}
