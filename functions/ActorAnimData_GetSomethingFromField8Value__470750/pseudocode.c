// Reads the per-slot action/state dword at ActorAnimData +0x48 + 4*normalizedSlot. Native aliases slot 5 to slot 0 and slot 6 to slot 3.
int __thiscall ActorAnimData_GetSlotActionState(ActorAnimData *this, int slot)
{
  if ( slot == 5 ) /*0x470759*/
    return this->unk48State[0]; /*0x47076e*/
  if ( slot == 6 ) /*0x47075e*/
    return this->unk48State[3]; /*0x470765*/
  return this->unk48State[slot]; /*0x470769*/
}
