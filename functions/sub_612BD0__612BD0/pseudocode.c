// Attempts to start the selected attack animation group; on success it saves the prior mode, sets combat mode +0x74 to 0, and records the chosen attack group at +0x50. Private register-carried inputs are retained.
void __userpurge sub_612BD0(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        char a7)
{
  _DWORD *v8; // eax

  if ( a6 != 0xFF ) /*0x612bde*/
  {
    if ( *(_DWORD *)(a1 + 0x74) ) /*0x612be0*/
    {
      if ( !a7 ) /*0x612beb*/
      {
        v8 = (_DWORD *)(*(int (__usercall **)@<eax>(double@<st0>, double@<st1>))(**(_DWORD **)(a1 + 0x3C) + 0x164))( /*0x612c00*/
                         a5,
                         a4);
        ActorAnimData_ClearSlot(v8, 3, 0.0); /*0x612c04*/
      }
      if ( PlayerCharacter_TryStartAttackAnimGroup(*(PlayerCharacter **)(a1 + 0x3C), a2, a3, a6, a4, a5, a6) ) /*0x612c0d*/
      {
        *(_DWORD *)(a1 + 0x78) = *(_DWORD *)(a1 + 0x74); /*0x612c19*/
        *(_DWORD *)(a1 + 0x74) = 0; /*0x612c1c*/
        *(_DWORD *)(a1 + 0x50) = a6; /*0x612c23*/
      }
    }
  }
}
