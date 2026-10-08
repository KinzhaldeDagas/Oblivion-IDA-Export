0x530410: push    esi; Clears TESTopicInfo runtime spoken state when kTopicInfoModified_Spoken is being reverted/cleared.
0x530411: push    edi
0x530412: mov     edi, [esp+8+modifiedFlags]
0x530416: push    edi
0x530417: mov     esi, ecx
0x530419: call    nullsub_returnvVoid_1arg; nullsub_returnvVoid_1arg; used by Low/MiddleLow current package getter slots and other default no-op vfuncs.
0x53041E: test    edi, 10000000h
0x530424: jz      short loc_53042A; Only modified flag 0x10000000 affects the TESTopicInfo-specific runtime state in this clear hook.
0x530426: mov     byte ptr [esi+22h], 0; Clear OblivionTopicInfo.spoken at +0x22, making a SayOnce INFO eligible again if all other conditions pass.
0x53042A: pop     edi
0x53042B: pop     esi
0x53042C: retn    4
