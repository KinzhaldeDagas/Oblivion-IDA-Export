char __thiscall TESAttributes_GetAVi(_BYTE *this, char a2)
{
  return *(this + ActorValue_GetGroupOffsetFromAV(0, a2) + 4);
}
