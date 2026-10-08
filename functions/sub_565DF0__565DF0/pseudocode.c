// RadiantAI: package flag helper used by chooser skip logic; tests TESPackage flag 0x0400.
bool __thiscall sub_565DF0(_DWORD *this)
{
  return (*(this + 7) & 0x400) != 0; /*0x565df8*/
}
