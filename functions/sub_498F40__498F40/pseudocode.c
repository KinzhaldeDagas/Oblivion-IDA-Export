void __thiscall sub_498F40(float *this)
{
  TESForm *v2; // eax

  v2 = sub_65E5E0((TESObjectREFR *)reference, flt_A3765C); /*0x498f53*/
  if ( v2 ) /*0x498f5a*/
    *(this + 0x11) = TESObjectCELL_GetWaterHeight((ExtraDataList *)v2); /*0x498f63*/
  else
    *(this + 0x11) = 0.0; /*0x498f6a*/
}
