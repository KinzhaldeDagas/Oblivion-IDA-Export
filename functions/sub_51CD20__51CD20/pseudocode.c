// Verified: shared bit-0x8000 predicate installed in different component vslots (TESCreature +0x20, TESNPC +0x10). Candidate class-specific meanings NoHead / NoPersuasion; do not assign one class-specific global function name to shared machine code without consumer evidence.
bool __thiscall sub_51CD20(_DWORD *this)
{
  return (*(this + 1) & 0x8000) != 0; /*0x51cd28*/
}
