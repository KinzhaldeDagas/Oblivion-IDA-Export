char __thiscall sub_429560(BSExtraData *this, BSExtraData *a2)
{
  _DWORD *v3; // esi
  _DWORD *v4; // ecx

  v3 = OblivionDynamicCast( /*0x42957d*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
         &ExtraRagDollData `RTTI Type Descriptor',
         0);
  if ( !v3 || BSExtraData_CompareTo(this, a2) ) /*0x429589*/
    return 1; /*0x429590*/
  v4 = *((_DWORD **)this + 3); /*0x429592*/
  if ( v4 ) /*0x429597*/
  {
    if ( sub_497270(v4, v3[3]) ) /*0x4295aa*/
      return 1; /*0x4295b8*/
  }
  else if ( v3[3] ) /*0x429599*/
  {
    return 1; /*0x4295a3*/
  }
  return 0; /*0x42959e*/
}
