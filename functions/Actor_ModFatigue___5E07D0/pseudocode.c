// Applies only a negative Fatigue delta. Requires the actor AV path, reads Fatigue AV 0x0A, clamps damage so Fatigue cannot fall below zero, then calls the actor DamageAV float virtual. Nonnegative deltas and actors with no positive Fatigue are ignored.
void __thiscall Actor_ApplyNegativeFatigueDeltaClamped(Actor *this, float delta)
{
  double v3; // st7
  float v4; // [esp+10h] [ebp-4h]

  if ( delta < 0.0 ) /*0x5e07df*/
  {
    if ( ((unsigned __int8 (__thiscall *)(Actor *))this->vtbl->Unk_9E)(this) ) /*0x5e07e9*/
    {
      v4 = this->vtbl->GetAV_F(this, kActorVal_Fatigue); /*0x5e07fd*/
      v3 = v4; /*0x5e080b*/
      if ( v4 > 0.0 ) /*0x5e0810*/
      {
        if ( delta + v3 < dbl_A2FC68 ) /*0x5e0827*/
          delta = -v3; /*0x5e082b*/
        ((void (__thiscall *)(Actor *, int, _DWORD, _DWORD))this->vtbl->DamageAV_F)(this, 0xA, LODWORD(delta), 0); /*0x5e0849*/
      }
    }
  }
}
