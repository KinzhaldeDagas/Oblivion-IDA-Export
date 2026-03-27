void __thiscall sub_498F40(float *this)
{
  TESForm *v2; // eax

  v2 = sub_65E5E0((TESObjectREFR *)TESDataHandler_g_PlayerRef, flt_A3765C);
  if ( v2 )
    *(this + 0x11) = TESObjectCELL_GetWaterHeight(v2);
  else
    *(this + 0x11) = 0.0;
}
