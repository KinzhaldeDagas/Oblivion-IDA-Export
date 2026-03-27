TESObjectCELL *__thiscall sub_4EF1F0(TESWorldSpace *this)
{
  TESForm *v2; // eax
  TESForm *v3; // eax

  if ( !this->unk034 )
  {
    v2 = (TESForm *)FormHeapAlloc(0x58u);
    if ( v2 )
      v3 = TESObjectCELL_constr(v2);
    else
      v3 = 0;
    this->unk034 = (TESObjectCELL *)v3;
    sub_4CCBA0((TESObjectCELL *)v3, 1);
    sub_4CA710(this->unk034);
  }
  return this->unk034;
}
