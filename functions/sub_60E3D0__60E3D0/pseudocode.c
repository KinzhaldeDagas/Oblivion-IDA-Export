TESSkill_RecordView *__thiscall sub_60E3D0(Actor *this)
{
  int v1; // ebx
  int i; // esi
  TESForm *ActorBaseForm; // eax
  int v5; // edi
  UInt8 GroupOffsetFromAV; // al
  TESSkill_RecordView *TESSkillByCode; // [esp+10h] [ebp-4h]

  v1 = 0; /*0x60e3d4*/
  TESSkillByCode = 0; /*0x60e3d9*/
  for ( i = 0xC; i <= 0x21; ++i ) /*0x60e3dd*/
  {
    ActorBaseForm = Actor_GetActorBaseForm(this, 0); /*0x60e3e6*/
    v5 = ActorBaseForm->vtbl[1].GetSaveSize(ActorBaseForm, i); /*0x60e3f8*/
    if ( v5 > v1 ) /*0x60e3fc*/
    {
      GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, i); /*0x60e401*/
      TESSkillByCode = TESDataHandler_GetTESSkillByCode(g_TESDataHandler, GroupOffsetFromAV); /*0x60e415*/
      v1 = v5; /*0x60e419*/
    }
  }
  return TESSkillByCode; /*0x60e427*/
}
