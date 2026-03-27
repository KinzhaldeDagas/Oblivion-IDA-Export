double __thiscall GetFarPlane(SceneGraph *this)
{
  double result; // st7
  TESObjectCELL *v2; // ecx
  TESObjectCELL *currentInteriorCell; // ecx
  double v4; // st7
  float v5; // [esp+0h] [ebp-4h]
  float v6; // [esp+0h] [ebp-4h]

  if ( this->IsMinFarPlaneDistance )
    return (float)20480.0;
  if ( !sub_4E9F40() )
  {
    if ( TES && (currentInteriorCell = TES->currentInteriorCell) != 0 && TES->sky->unk0DC == 1 )
    {
      v6 = sub_4C9A60((int)currentInteriorCell);
      if ( v6 > 0.0 && *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B03124) >= (double)v6 )
        return (float)(flt_B0311C + (v6 - flt_B0311C) * ((flt_B0312C - 0.0) / (1.0 - 0.0)));
      v4 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B03124);
    }
    else
    {
      v4 = flt_B03124;
    }
    v6 = v4;
    return (float)(flt_B0311C + (v6 - flt_B0311C) * ((flt_B0312C - 0.0) / (1.0 - 0.0)));
  }
  if ( !TES )
    return (float)283840.0;
  v2 = TES->currentInteriorCell;
  if ( !v2 || TES->sky->unk0DC != 1 )
    return (float)283840.0;
  v5 = sub_4C9A60((int)v2);
  result = v5;
  if ( v5 <= 0.0 || result > 283840.0 )
    return (float)283840.0;
  return result;
}
