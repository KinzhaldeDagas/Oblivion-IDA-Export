// ActorAnimData sequence-slot normalizer. Encoded slot 5 maps to base slot 0 and encoded slot 6 maps to base slot 3; otherwise returns animSequences[slot].
BSAnimGroupSequence *__thiscall ActorAnimData_GetNormalizedSequenceSlot(ActorAnimData *this, unsigned int slotSelector)
{
  if ( slotSelector == 5 ) /*0x4706e9*/
    return this->animSequences[0]; /*0x470701*/
  if ( slotSelector == 6 ) /*0x4706ee*/
    return this->animSequences[3]; /*0x4706f5*/
  return this->animSequences[slotSelector]; /*0x4706fc*/
}
