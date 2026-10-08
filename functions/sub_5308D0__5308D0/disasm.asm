0x5308D0: add     ecx, 28h ; '('; Adds TESTopicInfo.addedTopics to PlayerCharacter. Pointer-duplicate topics are ignored, each genuinely new topic may show the sTopicAddedText notification outside DialogMenu, and the player's known-topic list is sorted once afterward.
0x5308D3: push    ecx; topics
0x5308D4: mov     ecx, ds:0B333C4h; this
0x5308DA: call    PlayerCharacter__AddKnownTopics; INFO.addedTopics always routes to PlayerCharacter::AddKnownTopics. This call still occurs before the INFOGENERAL RunForRumors gate in LoadNextTopicList, so D7 can teach known topics even when its normal result and Goodbye handling are suppressed.
0x5308DF: retn
