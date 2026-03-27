void __thiscall TESSpellList_RemoveSpell(_DWORD *this, int a2)
{
  BSSimpleList_Remove(this + 1, a2);
}
