int __thiscall ActiveEffect_Base_ApplyScalingFactor(_DWORD *this, int a2)
{
  int v2; // ecx

  v2 = *(_DWORD *)(*(_DWORD *)(*(this + 3) + 0x1C) + 0x58);
  if ( (v2 & 0x180) == 0x180 )
    return ActiveEffect_Base_ApplyScalingFactor_::Done(a2);
  if ( *(float *)&a2 == 1.0 )
    return ActiveEffect_Base_ApplyScalingFactor_::Done_(a2);
  if ( (v2 & 0x100) != 0 )
    return ActiveEffect_Base_ApplyScalingFactor_::ScaleDuration(a2);
  return ActiveEffect_Base_ApplyScalingFactor_::ScaleMagnitude(a2);
}
