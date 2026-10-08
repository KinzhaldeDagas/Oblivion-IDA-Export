// Fog interior decode: GetFarPlane uses TESObjectCELL::LightingData fogClipDistance (+0x20) for interior mode 1 when available.
double __thiscall GetFarPlane(SceneGraph *this)
{
  double result; // st7
  TESObjectCELL *v2; // ecx
  TESObjectCELL *currentInteriorCell; // ecx
  double v4; // st7
  float v5; // [esp+0h] [ebp-4h]
  float v6; // [esp+0h] [ebp-4h]

  if ( this->IsMinFarPlaneDistance ) /*0x410ee1*/
    return (float)20480.0; /*0x410ef7*/
  if ( !sub_4E9F40() )                          // Fog interior decode: non-4E9F40 far-plane path can substitute interior fogClipDistance before applying far-plane scaling. /*0x410f04*/
  {                                             // Fog interior decode: currentInteriorCell and Sky::unk0DC == 1 gate for fogClipDistance far-plane override.
    if ( MEMORY[0xB333A0] /*0x410f75*/
      && (currentInteriorCell = MEMORY[0xB333A0]->currentInteriorCell) != 0
      && MEMORY[0xB333A0]->sky->unk0DC == 1 )
    {
      v6 = sub_4C9A60((int)currentInteriorCell);// Fog interior decode: read current cell fogClipDistance via 0x4C9A60. /*0x410f7c*/
      if ( v6 > 0.0 && *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B03124) >= (double)v6 ) /*0x410fa1*/
        return (float)(flt_B0311C + (v6 - flt_B0311C) * ((flt_B0312C - 0.0) / (1.0 - 0.0)));// Fog interior decode: when fogClipDistance is positive and within the configured far limit, use it as far-plane input. /*0x410fa1*/
      v4 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B03124); /*0x410fad*/
    }
    else
    {
      v4 = flt_B03124; /*0x410fb1*/
    }
    v6 = v4; /*0x410fb7*/
    return (float)(flt_B0311C + (v6 - flt_B0311C) * ((flt_B0312C - 0.0) / (1.0 - 0.0))); /*0x410fe0*/
  }
  if ( !MEMORY[0xB333A0] ) /*0x410f08*/
    return (float)283840.0; /*0x410f08*/
  v2 = MEMORY[0xB333A0]->currentInteriorCell; /*0x410f0a*/
  if ( !v2 || MEMORY[0xB333A0]->sky->unk0DC != 1 ) /*0x410f1b*/
    return (float)283840.0; /*0x410f5b*/
  v5 = sub_4C9A60((int)v2);                     // Fog interior decode: 4E9F40 path reads interior fogClipDistance directly for mode 1. /*0x410f22*/
  result = v5; /*0x410f2e*/
  if ( v5 <= 0.0 || result > 283840.0 )         // Fog interior decode: reject non-positive or over-283840 fogClipDistance before returning default far plane. /*0x410f42*/
    return (float)283840.0; /*0x410f4d*/
  return result; /*0x410ef7*/
}
