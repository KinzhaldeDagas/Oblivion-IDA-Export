// Verified body and call path: sets/clears flags0 bit 0x40; TESObjectREFR_PropagateLockStateToLinkedDoorCells invokes it for linked-door owner cells on lock/unlock. Probable semantic identity: TempPublic, directly corroborated by Fallout's named SetTempPublic and Oblivion's access/load behavior; active-file retention controls whether cell load clears this bit.
int __thiscall TESObjectCELL_SetTempPublic(TESObjectCELL *this, bool unlocked)
{
  if ( unlocked ) /*0x4c9865*/
    this->members.flags0 |= 0x40u; /*0x4c9867*/
  else
    this->members.flags0 &= ~0x40u; /*0x4c986d*/
  return ((int (__thiscall *)(TESObjectCELL *, int))this->vtbl->MarkAsModified)(this, 8);
}
