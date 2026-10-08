// Player first-person synchronization caller. For groups whose fixed 0x24-byte metadata record has allow-multiple byte +0x04 set, it obtains the third-person source sequence from metadata slot +0x08 and tries ActorAnimData_PlayFirstPersonBySource. On miss or non-multiple group it falls back to key-based first-person playback.
void __thiscall Player_SyncFirstPersonAnimFromSource(
        Actor *this,
        unsigned int encodedKey,
        unsigned int playImmediately)
{
  int groupID; // eax
  ActorAnimData *firstPersonAnimData; // ebp
  int groupRecordDwordIndex; // esi
  ActorAnimData *thirdPersonAnimData; // eax
  BSAnimGroupSequence *sourceSequence; // eax

  groupID = AnimKey_GetGroupID(encodedKey); /*0x65d79b*/
  firstPersonAnimData = *((ActorAnimData **)this + 0x173); /*0x65d7a0*/
  groupRecordDwordIndex = 9 * groupID; /*0x65d7ab*/
  if ( !byte_B102E4[0x24 * groupID] /*0x65d7d2*/
    || (thirdPersonAnimData = TESObjectREFR_GetAnimData((TESObjectREFR *)this),
        sourceSequence = ActorAnimData_GetNormalizedSequenceSlot(
                           thirdPersonAnimData,
                           dword_B102E8[groupRecordDwordIndex]),
        !ActorAnimData_PlayFirstPersonBySource(firstPersonAnimData, sourceSequence, encodedKey)) )// Calls first-person source sync with the active third-person source sequence and encoded key.
  {                                             // Fallback path: if source sync was ineligible or missed, play the encoded key through first-person ActorAnimData when that key exists.
    if ( ActorAnimData_HasAnimKey(firstPersonAnimData, encodedKey) ) /*0x65d7e3*/
      ActorAnimData_PlayAnimGroup(firstPersonAnimData, encodedKey, playImmediately, 0xFFFFFFFF); /*0x65d7f6*/
  }
}
