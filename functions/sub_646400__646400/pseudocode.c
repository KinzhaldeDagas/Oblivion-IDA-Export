char __cdecl sub_646400(TESObjectREFR *a1, TESObjectREFR *a2)
{
  TESForm::FormFlags flags; // eax

  if ( !a1 )
    return 0;
  flags = a1->member.super.flags;
  if ( (flags & 0x20) != 0 || (flags & 0x4000) != 0 || (flags & 0x800) != 0 )
    return 0;
  if ( !a2
    || !sub_4D74D0(a1)
    || a1->vtbl->IsDead(a1, 0)
    || ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0E)(a1)
    || !TESOBjectREFR_IsOwnedBy(a1, a2, 1) )
  {
    return 0;
  }
  ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *))a2->vtbl[1].super.Unk_21)(a2, a1);
  return 1;
}
