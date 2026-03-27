char __userpurge Player_EquipPotion_@<al>(
        PlayerCharacter *a1@<ecx>,
        char a2@<bpl>,
        double st5_0@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        void *a6)
{
  int v7; // eax
  PlayerCharacter *v8; // ecx
  int v9; // eax
  int v10; // ebp

  v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)a6 + 0x18))(a6);
  v8 = a1;
  if ( v7 != 7 )
    goto LABEL_4;
  v9 = a1->vtbl->super.GetActorValue((Actor *)a1, kActorVal_Alchemy);
  v10 = Calc_AlchemyMaxPotions(v9);
  if ( Player_GetNumberActivePotions_(a1) < v10 )
  {
    BSSimpleList_PushFront((_DWORD *)a1->unk1F8, (int)a6);
    v8 = a1;
LABEL_4:
    sub_5E45F0(v8, st5_0, a4, a5, a6, 1);
    MagicTarget_ProcessEffectsFromItem(&a1->super.super.magicTarget, a6);
    return 1;
  }
  ShowUIMessageBox(
    (char *)sMaxPotionsExceeded,
    a2,
    st5_0,
    a4,
    a5,
    (const char *)sMaxPotionsExceeded,
    0,
    1,
    (const char *)sOk,
    0);
  return 0;
}
