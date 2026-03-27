char *__thiscall sub_60E3D0(Actor *this)
{
  int v1; // ebx
  int i; // esi
  TESForm *ActorBaseForm; // eax
  int v5; // edi
  char GroupOffsetFromAV; // al
  char *TESSkillByCode; // [esp+10h] [ebp-4h]

  v1 = 0;
  TESSkillByCode = 0;
  for ( i = 0xC; i <= 0x21; ++i )
  {
    ActorBaseForm = Actor_GetActorBaseForm(this, 0);
    v5 = ActorBaseForm->vtbl[1].GetSaveSize(ActorBaseForm, i);
    if ( v5 > v1 )
    {
      GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, i);
      TESSkillByCode = TESDataHandler_GetTESSkillByCode((char *)TESDataHandler, GroupOffsetFromAV);
      v1 = v5;
    }
  }
  return TESSkillByCode;
}
