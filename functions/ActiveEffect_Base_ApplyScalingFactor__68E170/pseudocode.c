void __thiscall ActiveEffect_Base_ApplyScalingFactor(_DWORD *this, int a2)
{
  int v3; // ecx
  double v4; // st7

  v3 = *(_DWORD *)(*(_DWORD *)(*(this + 3) + 0x1C) + 0x58); /*0x68e179*/
  if ( (v3 & 0x180) == 0x180 ) /*0x68e18a*/
  {
    ActiveEffect_Base_ApplyScalingFactor_::Done(a2); /*0x68e18a*/
  }
  else
  {
    v4 = *(float *)&a2; /*0x68e196*/
    if ( *(float *)&a2 == 1.0 ) /*0x68e19b*/
    {
      ActiveEffect_Base_ApplyScalingFactor_::Done_(a2); /*0x68e19b*/
    }
    else if ( (v3 & 0x100) != 0 ) /*0x68e1a3*/
    {
      ActiveEffect_Base_ApplyScalingFactor_::ScaleDuration((int)this, v4, a2); /*0x68e1a4*/
    }
    else
    {
      ActiveEffect_Base_ApplyScalingFactor_::ScaleMagnitude((int)this, v4, a2); /*0x68e1a3*/
    }
  }
}
