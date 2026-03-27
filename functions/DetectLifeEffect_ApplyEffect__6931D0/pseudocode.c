char __thiscall DetectLifeEffect_ApplyEffect(float *this)
{
  PlayerCharacter *v2; // eax
  float v4; // [esp+0h] [ebp-4h]

  ValueModifierEffect_Apply(this, v4);
  v2 = (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 8) + 4))(*((_DWORD *)this + 8));
  if ( v2 == TESDataHandler_g_PlayerRef )
  {
    LOBYTE(v2) = TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                   (Actor *)TESDataHandler_g_PlayerRef,
                   kActorVal_DetectLifeRange) > 0;
    byte_B3C0AB = (char)v2;
  }
  return (char)v2;
}
