char __thiscall sub_4D1E10(TESObjectCELL *this, float *a2, float *a3)
{
  TESObjectLAND *v3; // eax

  v3 = sub_4CE3C0(this); /*0x4d1e13*/
  if ( v3 ) /*0x4d1e1a*/
    return sub_4C5B50(v3, a2, a3); /*0x4d1e1f*/
  *a3 = 0.0; /*0x4d1e2a*/
  return 0; /*0x4d1e1c*/
}
