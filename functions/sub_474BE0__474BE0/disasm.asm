0x474BE0: push    esi; Native first-person source-sync helper. Resolves encodedKey in this ActorAnimData, rejects single map entries through vtable +0x0C, finds the first case-sensitive last-backslash suffix match in an AnimSequenceMultiple, and calls ActorAnimData_PlaySequence. Returns zero on any miss.
0x474BE1: push    edi
0x474BE2: mov     edi, [esp+8+encodedKey]
0x474BE6: cmp     di, 0FFh; Only the low 16 bits are the encoded animation key; native sentinel group 0x00FF is rejected before map lookup.
0x474BEB: mov     esi, ecx
0x474BED: jz      short loc_474C3F
0x474BEF: mov     ecx, [esi+9Ch]
0x474BF5: lea     eax, [esp+8+encodedKey]
0x474BF9: push    eax
0x474BFA: push    edi
0x474BFB: call    ActorAnimData_FindAnimMapEntry; CustomAnimSupport decode: anim-map lookup helper used by playback, validators, and save/load restore to test an encoded group key.
0x474C00: test    al, al
0x474C02: jz      short loc_474C3F
0x474C04: push    ebx
0x474C05: mov     ebx, [esp+0Ch+encodedKey]
0x474C09: mov     edx, [ebx]
0x474C0B: mov     eax, [edx+0Ch]
0x474C0E: mov     ecx, ebx
0x474C10: call    eax; Virtual +0x0C entry-kind predicate: AnimSequenceSingle returns true and is rejected; AnimSequenceMultiple returns false and is eligible for basename sync.
0x474C12: test    al, al
0x474C14: jnz     short loc_474C26
0x474C16: mov     ecx, [esp+0Ch+sourceSequence]
0x474C1A: push    ecx; sourceSequence
0x474C1B: mov     ecx, ebx; this
0x474C1D: call    AnimSequenceMultiple_FindBySourceBasename; Multiple-entry-only source match. Selection is first list-order candidate with exact case-sensitive final-backslash suffix equality.
0x474C22: test    eax, eax
0x474C24: jnz     short loc_474C2E
0x474C26: pop     ebx
0x474C27: pop     edi
0x474C28: xor     eax, eax
0x474C2A: pop     esi
0x474C2B: retn    8
0x474C2E: push    0FFFFFFFFh; slotSelector
0x474C30: push    edi; encodedKey
0x474C31: push    eax; sequence
0x474C32: mov     ecx, esi; this
0x474C34: call    ActorAnimData_PlaySequence; Matched first-person sequence is played directly, bypassing ActorAnimData_PlayEncodedGroup/random selection.
0x474C39: pop     ebx
0x474C3A: pop     edi
0x474C3B: pop     esi
0x474C3C: retn    8
0x474C3F: pop     edi
0x474C40: xor     eax, eax
0x474C42: pop     esi
0x474C43: retn    8
