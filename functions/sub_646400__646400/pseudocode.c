char __cdecl sub_646400(TESObjectREFR *reference, TESObjectREFR *actorReference)
{
  TESForm::FormFlags flags; // eax

  if ( !reference ) /*0x646407*/
    return 0; /*0x646407*/
  flags = reference->member.super.flags; /*0x646409*/
  if ( (flags & 0x20) != 0 || (flags & 0x4000) != 0 || (flags & 0x800) != 0 ) /*0x646425*/
    return 0; /*0x646482*/
  if ( !actorReference /*0x646462*/
    || !TESObjectREFR_HasHorseCreatureBase(reference)
    || reference->vtbl->IsDead(reference, 0)
    || ((int (__thiscall *)(TESObjectREFR *))reference->vtbl[2].super.Unk_0E)(reference)
    || !TESObjectREFR_IsOwnedBy(reference, actorReference, 1) )
  {
    return 0; /*0x64647e*/
  }
  ((void (__thiscall *)(TESObjectREFR *, TESObjectREFR *))actorReference->vtbl[1].super.Unk_21)( /*0x646476*/
    actorReference,
    reference);
  return 1; /*0x64647b*/
}
