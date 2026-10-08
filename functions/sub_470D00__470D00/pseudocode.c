// Returns whether ActorAnimData +0x9C contains an entry for the encoded animation key. Presence test only; it does not select or play a sequence.
char __thiscall ActorAnimData_HasAnimKey(ActorAnimData *this, unsigned int encodedKey)
{
  return ActorAnimData_FindAnimMapEntry((_DWORD *)this->animsMap, encodedKey, &encodedKey); /*0x470d15*/
}
