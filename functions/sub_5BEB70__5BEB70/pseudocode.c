bool __usercall sub_5BEB70@<al>(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  bool result; // al
  TESForm *ActorBaseForm; // eax
  double v8; // [esp+14h] [ebp-8h]
  double v9; // [esp+14h] [ebp-8h]

  result = 0;
  if ( flt_A46B10 <= (double)*(float *)(a1 + 0x7C) || *(_DWORD *)(a1 + 0x28) == 2 )
  {
    ActorBaseForm = Actor_GetActorBaseForm(*(Actor **)(a1 + 0xD8), 1);
    if ( !(*(unsigned __int8 (__thiscall **)(UInt32 *))(ActorBaseForm[1].member.refID + 0x10))(&ActorBaseForm[1].member.refID)
      && InterfaceManager_MenuModeHasFocus(0x40A)
      && ((*(int (__thiscall **)(_DWORD, PlayerCharacter *))(**(_DWORD **)(a1 + 0xD8) + 0x224))(
            *(_DWORD *)(a1 + 0xD8),
            TESDataHandler_g_PlayerRef) < 0x64
       || *(_DWORD *)(a1 + 0x28) == 2) )
    {
      v8 = (double)((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, int, double@<st0>, double@<st1>))TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue)(
                     TESDataHandler_g_PlayerRef,
                     0x20,
                     a3,
                     a2);
      v9 = (v8
          - (double)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0xD8) + 0x284))(
                      *(_DWORD *)(a1 + 0xD8),
                      0x20))
         * dbl_A2FAA0
         + (double)dword_B38E80;
      if ( (double)(*(int (__thiscall **)(_DWORD, PlayerCharacter *))(**(_DWORD **)(a1 + 0xD8) + 0x224))(
                     *(_DWORD *)(a1 + 0xD8),
                     TESDataHandler_g_PlayerRef) <= v9
        || *(_DWORD *)(a1 + 0x28) == 2 )
      {
        return 1;
      }
    }
  }
  return result;
}
