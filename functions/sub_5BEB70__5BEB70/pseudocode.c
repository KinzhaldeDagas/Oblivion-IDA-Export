bool __usercall sub_5BEB70@<al>(int a1@<ecx>, double a2@<st1>, double a3@<st0>)
{
  bool result; // al
  TESForm *ActorBaseForm; // eax
  double v6; // [esp+14h] [ebp-8h]
  double v7; // [esp+14h] [ebp-8h]

  result = 0; /*0x5bec60*/
  if ( flt_A46B10 <= (double)*(float *)(a1 + 0x7C) || *(_DWORD *)(a1 + 0x28) == 2 ) /*0x5beb8a*/
  {
    ActorBaseForm = Actor_GetActorBaseForm(*(Actor **)(a1 + 0xD8), 1); /*0x5beb9b*/
    if ( !(*(unsigned __int8 (__thiscall **)(UInt32 *))(ActorBaseForm[1].member.refID + 0x10))(&ActorBaseForm[1].member.refID) /*0x5bebdf*/
      && InterfaceManager_MenuModeHasFocus(0x40A)
      && ((*(int (__thiscall **)(_DWORD, PlayerCharacter *))(**(_DWORD **)(a1 + 0xD8) + 0x224))(
            *(_DWORD *)(a1 + 0xD8),
            reference) < 0x64
       || *(_DWORD *)(a1 + 0x28) == 2) )
    {
      v6 = (double)((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, int, double@<st0>, double@<st1>))reference->vtbl->super.GetActorValue)( /*0x5bec0b*/
                     reference,
                     0x20,
                     a3,
                     a2);
      v7 = (v6 /*0x5bec3d*/
          - (double)(*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(a1 + 0xD8) + 0x284))(
                      *(_DWORD *)(a1 + 0xD8),
                      0x20))
         * dbl_A2FAA0
         + (double)(int)stru_B38E80.value;
      if ( (double)(*(int (__thiscall **)(_DWORD, PlayerCharacter *))(**(_DWORD **)(a1 + 0xD8) + 0x224))( /*0x5bec5a*/
                     *(_DWORD *)(a1 + 0xD8),
                     reference) <= v7
        || *(_DWORD *)(a1 + 0x28) == 2 )
      {
        return 1; /*0x5beb8a*/
      }
    }
  }
  return result; /*0x5beb8e*/
}
