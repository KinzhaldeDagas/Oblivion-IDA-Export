char __usercall DetectLifeEffect_RemoveEffect@<al>(_DWORD *this@<ecx>, double a2@<st0>)
{
  PlayerCharacter *v3; // eax

  ValueModifierEffect_Remove(a2);
  v3 = (PlayerCharacter *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 8) + 4))(*(this + 8));
  if ( v3 == TESDataHandler_g_PlayerRef )
  {
    LOBYTE(v3) = TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                   (Actor *)TESDataHandler_g_PlayerRef,
                   kActorVal_DetectLifeRange) > 0;
    byte_B3C0AB = (char)v3;
  }
  return (char)v3;
}
