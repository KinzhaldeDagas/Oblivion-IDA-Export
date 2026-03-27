void __thiscall sub_4F03D0(TESObjectCELL **this, TESObjectREFR *a2)
{
  TESObjectCELL *v2; // ecx

  if ( a2 )
  {
    v2 = *(this + 0xD);
    if ( v2 )
      sub_4CECD0(v2, a2);
  }
}
