char __thiscall sub_4D1E10(TESObjectCELL *this, float *a2, float *a3)
{
  TESObjectLAND *v3; // eax

  v3 = sub_4CE3C0(this);
  if ( v3 )
    return sub_4C5B50(v3, a2, a3);
  *a3 = 0.0;
  return 0;
}
