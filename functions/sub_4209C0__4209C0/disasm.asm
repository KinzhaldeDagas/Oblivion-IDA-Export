0x4209C0: push    5Ah ; 'Z'; Remove only ExtraHasNoRumors (0x5A), restoring fallback to the NPC base NoRumors flag. ExtraInfoGeneralTopic (0x59) is untouched, so an old cached rumor can become visible again.
0x4209C2: call    BaseExtraList_RemoveExtraByType
0x4209C7: retn
