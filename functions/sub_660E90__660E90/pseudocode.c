char __stdcall sub_660E90(Actor *a1)
{
  char v1; // bl
  int v2; // eax
  char v3; // al

  v1 = 0; /*0x660ea2*/
  if ( !a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 0) /*0x660ece*/
    && (a1->members.super.super.super.flags & 0x800) == 0
    && !a1->vtbl->super.super.HasFatigue((TESObjectREFR *)a1)
    && Actor::GetDeadState(a1) != 5 )
  {
    v2 = sub_5E03A0(a1); /*0x660ed2*/
    if ( v2 ) /*0x660ed9*/
    {
      v3 = *(_BYTE *)(v2 + 0x20); /*0x660edb*/
      if ( (v3 == 1 || v3 == 7) /*0x660efd*/
        && (PlayerCharacter *)a1->members.super.process->GetUnk02C(a1->members.super.process) == reference
        && !sub_5E6BC0(a1) )
      {
        return 1; /*0x660f06*/
      }
    }
  }
  return v1; /*0x660f08*/
}
