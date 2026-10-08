0x65D790: push    ebx; Player first-person synchronization caller. For groups whose fixed 0x24-byte metadata record has allow-multiple byte +0x04 set, it obtains the third-person source sequence from metadata slot +0x08 and tries ActorAnimData_PlayFirstPersonBySource. On miss or non-multiple group it falls back to key-based first-person playback.
0x65D791: mov     ebx, [esp+4+encodedKey]
0x65D795: push    ebp
0x65D796: push    esi
0x65D797: push    edi
0x65D798: push    ebx
0x65D799: mov     edi, ecx
0x65D79B: call    AnimKey_GetGroupID; Final name: AnimKey_GetGroupID. Returns low native group byte from encoded key.
0x65D7A0: mov     ebp, [edi+5CCh]
0x65D7A6: lea     esi, [eax+eax*8]
0x65D7A9: add     esi, esi
0x65D7AB: add     esi, esi
0x65D7AD: add     esp, 4
0x65D7B0: cmp     ds:byte_B102E4[esi], 0; Fixed AnimGroupInfo +0x04 allow-multiple gate. Native basename source sync is attempted only for groups whose metadata permits multiple sequences.
0x65D7B7: jz      short loc_65D7E0
0x65D7B9: mov     ecx, edi; this
0x65D7BB: call    TESObjectREFR_GetAnimData; Return active ActorAnimData for an actor reference. For actor/creature refs with process level 0 or 1, return process+0x17C; otherwise tail-call the ExtraAnim lookup on the reference extra list. Exact return type is ActorAnimData*.
0x65D7C0: mov     ecx, ds:dword_B102E8[esi]; Fixed AnimGroupInfo +0x08 supplies the source slot used to fetch the active third-person BSAnimGroupSequence.
0x65D7C6: push    ecx; slotSelector
0x65D7C7: mov     ecx, eax; this
0x65D7C9: call    ActorAnimData_GetNormalizedSequenceSlot; ActorAnimData sequence-slot normalizer. Encoded slot 5 maps to base slot 0 and encoded slot 6 maps to base slot 3; otherwise returns animSequences[slot].
0x65D7CE: push    ebx; encodedKey
0x65D7CF: push    eax; sourceSequence
0x65D7D0: mov     ecx, ebp; this
0x65D7D2: call    ActorAnimData_PlayFirstPersonBySource; Calls first-person source sync with the active third-person source sequence and encoded key.
0x65D7D7: test    eax, eax
0x65D7D9: setnz   al
0x65D7DC: test    al, al
0x65D7DE: jnz     short loc_65D7FB
0x65D7E0: push    ebx; Fallback path: if source sync was ineligible or missed, play the encoded key through first-person ActorAnimData when that key exists.
0x65D7E1: mov     ecx, ebp; this
0x65D7E3: call    ActorAnimData_HasAnimKey; Returns whether ActorAnimData +0x9C contains an entry for the encoded animation key. Presence test only; it does not select or play a sequence.
0x65D7E8: test    al, al
0x65D7EA: jz      short loc_65D7FB
0x65D7EC: mov     edx, [esp+10h+playImmediately]
0x65D7F0: push    0FFFFFFFFh; repeatOrAction
0x65D7F2: push    edx; playImmediately
0x65D7F3: push    ebx; encodedKey
0x65D7F4: mov     ecx, ebp; this
0x65D7F6: call    ActorAnimData_PlayAnimGroup; Native group dispatcher. Reads fixed group-table slot (+0x08) and note-template class (+0x0C), normalizing slot aliases 5->0 and 6->3. For note classes 0/1, playImmediately=0 stores only the encoded key at ActorAnimData +0x70[slot] and repeat/action value at +0x7C[slot]; playImmediately=1 clears that queue and plays now. Classes 2..7 play immediately. No queued sequence pointer or path is stored.
0x65D7FB: pop     edi
0x65D7FC: pop     esi
0x65D7FD: pop     ebp
0x65D7FE: pop     ebx
0x65D7FF: retn    8
