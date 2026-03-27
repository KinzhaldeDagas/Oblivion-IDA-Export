int __usercall ActiveEffect_Base_ProcessEffect_::TestMenuMode_@<eax>(
        int a1@<esi>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>)
{
  if ( (PlayerCharacter *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>))(**(_DWORD **)(a1 + 0x20)
                                                                                                + 4))(
                            *(_DWORD *)(a1 + 0x20),
                            a5,
                            a4) != TESDataHandler_g_PlayerRef
    || !InterfaceManager_IsMenuMode() )
  {
    return ActiveEffect_Base_ProcessEffect_::PlayHitSound();
  }
  *(_DWORD *)(a1 + 0x14) |= 0x20u;
  return ActiveEffect_Base_ProcessEffect_::ApplyEffect(a1, a2, a3, a4);
}
