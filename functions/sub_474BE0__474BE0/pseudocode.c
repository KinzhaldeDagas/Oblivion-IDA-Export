// Native first-person source-sync helper. Resolves encodedKey in this ActorAnimData, rejects single map entries through vtable +0x0C, finds the first case-sensitive last-backslash suffix match in an AnimSequenceMultiple, and calls ActorAnimData_PlaySequence. Returns zero on any miss.
unsigned int __thiscall ActorAnimData_PlayFirstPersonBySource(
        ActorAnimData *this,
        BSAnimGroupSequence *sourceSequence,
        unsigned int encodedKey)
{
  unsigned int requestedKey; // edi
  AnimSequenceMultiple *multipleEntry; // ebx
  BSAnimGroupSequence *matchedSequence; // eax

  requestedKey = encodedKey; /*0x474be2*/
  if ( (_WORD)encodedKey == 0xFF || !ActorAnimData_FindAnimMapEntry((_DWORD *)this->animsMap, encodedKey, &encodedKey) )// Only the low 16 bits are the encoded animation key; native sentinel group 0x00FF is rejected before map lookup. /*0x474bfb*/
    return 0; /*0x474c40*/
  multipleEntry = (AnimSequenceMultiple *)encodedKey; /*0x474c05*/
  if ( !(*(unsigned __int8 (__thiscall **)(unsigned int))(*(_DWORD *)encodedKey + 0xC))(encodedKey) /*0x474c24*/
    && (matchedSequence = AnimSequenceMultiple_FindBySourceBasename(multipleEntry, sourceSequence)) != 0 )// Multiple-entry-only source match. Selection is first list-order candidate with exact case-sensitive final-backslash suffix equality.
  {
    return (unsigned int)ActorAnimData_PlaySequence(this, matchedSequence, requestedKey, 0xFFFFFFFF);// Matched first-person sequence is played directly, bypassing ActorAnimData_PlayEncodedGroup/random selection. /*0x474c34*/
  }
  else
  {
    return 0; /*0x474c28*/
  }
}
