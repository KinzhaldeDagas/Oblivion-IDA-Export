// Verified: TESCreature component +0x14 predicate returns NOT(flags & 0x100000); TESNPC implementation 0x526C50 tests that bit without inversion. Unknown: common virtual-method semantic contract; do not infer equal flag meaning across classes.
BOOL __thiscall sub_51EB30(_DWORD *this)
{
  return (*(this + 1) & 0x100000) == 0; /*0x51eb3b*/
}
