// RadiantAI: package flag helper used by chooser skip logic; tests TESPackage flag 0x8000.
bool __thiscall sub_5660E0(_DWORD *this)
{
  return (*(this + 7) & 0x8000) != 0; /*0x5660e8*/
}
