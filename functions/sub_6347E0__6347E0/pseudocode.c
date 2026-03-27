TESPackage *__stdcall sub_6347E0(Actor *a1)
{
  int v1; // eax
  TESPackage *result; // eax

  v1 = TESTopic::GEtTopic(1, 2);
  a1->members.unk0E4 = (Actor *)TESDataHandler_g_PlayerRef;
  if ( v1 )
    a1->members.super.process->SayTopic(a1->members.super.process, a1, (TESTopic *)v1, 0, 1, 0);
  result = (TESPackage *)a1->vtbl->super.super.GetSleepState((TESObjectREFR *)a1);
  if ( !result )
  {
    if ( !sub_5E0380(a1) )
      return (TESPackage *)((int (__thiscall *)(LowProcess_vtbl **, Actor *, int))a1->members.super.process->Unk_55)(
                             &a1->members.super.process->__vftable,
                             a1,
                             1);
    result = sub_5E0380(a1);
    if ( result->members.type != 6 )
      return (TESPackage *)((int (__thiscall *)(LowProcess_vtbl **, Actor *, int))a1->members.super.process->Unk_55)(
                             &a1->members.super.process->__vftable,
                             a1,
                             1);
  }
  return result;
}
