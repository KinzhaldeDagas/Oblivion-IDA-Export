TESPackage *__stdcall sub_6347E0(Actor *a1)
{
  TESTopic *Topic; // eax
  TESPackage *result; // eax

  Topic = TESTopic::GetTopic(DialogueType_Conversation, 2); /*0x6347e5*/
  a1->members.unk0E4 = (Actor *)reference; /*0x6347f9*/
  if ( Topic ) /*0x6347ff*/
    a1->members.super.process->SayTopic(a1->members.super.process, a1, Topic, 0, 1, 0); /*0x634814*/
  result = (TESPackage *)a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1); /*0x634820*/
  if ( !result ) /*0x634824*/
  {
    if ( !Actor::GetCurrentPackage(a1) ) /*0x634828*/
      return ((TESPackage *(__thiscall *)(LowProcess *, Actor *, int))a1->members.super.process->Unk_55)( /*0x634828*/
               a1->members.super.process,
               a1,
               1);
    result = Actor::GetCurrentPackage(a1); /*0x634833*/
    if ( result->members.type != kPackageType_Travel ) /*0x63483c*/
      return ((TESPackage *(__thiscall *)(LowProcess *, Actor *, int))a1->members.super.process->Unk_55)( /*0x63484c*/
               a1->members.super.process,
               a1,
               1);
  }
  return result; /*0x63484e*/
}
