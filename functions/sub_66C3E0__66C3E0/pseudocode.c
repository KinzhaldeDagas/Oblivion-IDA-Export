void __userpurge sub_66C3E0(int *a1@<ecx>, int a2@<edi>, unsigned int a3, unsigned int a4, unsigned int a5)
{
  char *v11; // edi
  int DefaultPlayerSpell; // eax
  int v13; // ebx
  TESForm *ActorBaseForm; // eax
  TESForm *v15; // eax
  int v16; // ecx
  int i; // edx
  char v18; // al
  int v19; // eax
  int v20; // eax
  TESForm *v21; // edi
  unsigned __int8 AVi; // bl
  int Health; // eax
  UInt32 v24; // eax
  __int16 v25; // [esp-8h] [ebp-10h]

  Player_LevelUpAttribute_(a1, a2, a3);
  Player_LevelUpAttribute_(a1, a2, a4);
  Player_LevelUpAttribute_(a1, a2, a5);
  v11 = (char *)a1[0x189];
  if ( !v11 )
  {
    DefaultPlayerSpell = Magic_GetDefaultPlayerSpell();
    if ( DefaultPlayerSpell )
      v11 = (char *)(DefaultPlayerSpell + 0x18);
    else
      v11 = 0;
  }
  v13 = a1[0x18A];
  PlayerCharacter_SetCurrentMagicItem(a1, 0);
  if ( a1[0x18A] )
    PlayerCharacter_SetCurrentMagicItem(a1, 0);
  a1[0x18A] = 0;
  PlayerCharacter_SetCurrentMagicItem(a1, 0);
  ActorBaseForm = Actor_GetActorBaseForm((Actor *)a1, 0);
  v25 = TESActorBaseData_GetLevel((TESActorBaseData *)&ActorBaseForm[1].member.refID) + 1;
  v15 = Actor_GetActorBaseForm((Actor *)a1, 0);
  TESActorBaseData_SetLevel(&v15[1].member.refID, v25);
  if ( v11 )
    PlayerCharacter_SetCurrentMagicItem(a1, v11);
  if ( v13 )
    sub_664850(a1, v13);
  sub_65FBB0((unsigned int **)a1);
  v16 = 0;
  for ( i = 0; i < iLevelUpSkillCount; ++i )
  {
    v18 = *((_BYTE *)a1 + v16 + 0x5B8);
    if ( v18 > 0 )
      *((_BYTE *)a1 + v16 + 0x5B8) = v18 - 1;
    if ( ++v16 > 3 )
      v16 = 0;
  }
  a1[0x61] -= iLevelUpSkillCount;
  sub_65D560(a1);
  v19 = a1[0x61];
  a1[0x16F] = 0;
  if ( v19 < iLevelUpSkillCount )
    *((_BYTE *)a1 + 0x1DC) = 0;
  v20 = (*(int (**)(void))(*a1 + 0x170))();
  v21 = (TESForm *)v20;
  if ( v20 )
  {
    AVi = TESAttributes_GetAVi((_BYTE *)(v20 + 0x88), 5);
    Health = TESActorBase_GetHealth(v21);
    v24 = Double_To_SInt32((double)Health + fStatsHealthLevelMult * (double)AVi);
    TESActorBase_SetHealth(v21, v24);
  }
  sub_447300((Sky **)TESDataHandler);
  sub_6772E0();
  if ( trackLevelUps )
    sub_6684B0((TESObjectREFR *)a1);
}
