char __userpurge Player_EquipPotion_@<al>(
        Actor *a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        void *a5)
{
  int v7; // eax
  PlayerCharacter *v8; // ecx
  SInt32 v9; // eax
  int v10; // ebp

  v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)a5 + 0x18))(a5); /*0x6665f2*/
  v8 = (PlayerCharacter *)a1; /*0x6665f7*/
  if ( v7 != 7 ) /*0x6665f9*/
    goto LABEL_4; /*0x6665f9*/
  v9 = a1->vtbl->GetActorValue(a1, kActorVal_Alchemy); /*0x666606*/
  v10 = Calc_AlchemyMaxPotions(v9); /*0x666613*/
  if ( Player_GetNumberActivePotions_(a1) < v10 ) /*0x66661d*/
  {
    BSSimpleList_PushFront((_DWORD *)a1[1].members.unk0E8[3], (int)a5); /*0x666626*/
    v8 = (PlayerCharacter *)a1; /*0x66662b*/
LABEL_4:
    sub_5E45F0(v8, st5_0, a3, a4, a5, 1); /*0x66662d*/
    MagicTarget_ProcessEffectsFromItem(&a1->members.magicTarget, a5); /*0x666639*/
    return 1; /*0x666643*/
  }
  ShowUIMessageBox( /*0x666659*/
    (char *)MEMORY[0xB388F0].value,
    st5_0,
    a3,
    a4,
    (char *)MEMORY[0xB388F0].value,
    0,
    1,
    (char *)MEMORY[0xB38CF0].value,
    0);
  return 0; /*0x66663e*/
}
