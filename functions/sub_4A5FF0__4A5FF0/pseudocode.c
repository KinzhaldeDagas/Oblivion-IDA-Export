// Verified: appends one TESRegionGrassObject pointer to TESRegionGrassObjectList and increments its count at +0x10.
void __thiscall sub_4A5FF0(_DWORD *this, int a2)
{
  BSSimpleList_PushBack(this + 1, a2); /*0x4a5ffb*/
  ++*(this + 4); /*0x4a6000*/
}
