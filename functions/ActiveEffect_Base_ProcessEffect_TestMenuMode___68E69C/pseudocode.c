int __usercall ActiveEffect_Base_ProcessEffect_::TestMenuMode_@<eax>(
        int a1@<esi>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double st7_0@<st0>,
        int a5,
        float a6)
{
  if ( (PlayerCharacter *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>))(**(_DWORD **)(a1 + 0x20) /*0x68e6b0*/
                                                                                                + 4))(
                            *(_DWORD *)(a1 + 0x20),
                            st7_0,
                            a4) != reference
    || !InterfaceManager_IsMenuMode() )
  {
    return ActiveEffect_Base_ProcessEffect_::PlayHitSound(); /*0x68e6ae*/
  }
  *(_DWORD *)(a1 + 0x14) |= 0x20u; /*0x68e6b9*/
  return ActiveEffect_Base_ProcessEffect_::ApplyEffect(a1, a2, a3, a4, a5, a6);
}
