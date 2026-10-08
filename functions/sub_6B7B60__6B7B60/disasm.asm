0x6B7B60: push    esi; Modern post-load fixup walks loaded DialogueItems and resolves only each saved speaker FormID.
0x6B7B61: mov     esi, ecx
0x6B7B63: test    esi, esi
0x6B7B65: jz      short loc_6B7B80
0x6B7B67: cmp     dword ptr [esi+4], 0
0x6B7B6B: jnz     short loc_6B7B72
0x6B7B6D: cmp     dword ptr [esi], 0
0x6B7B70: jz      short loc_6B7B80
0x6B7B72: mov     ecx, [esi]; this
0x6B7B74: call    DialogueItem__InitLoadGame; Resolve the DialogueItem.speaker value, temporarily holding a saved FormID, back to TESObjectREFR*. No INFO condition, selection, response, or result work occurs.
0x6B7B79: mov     esi, [esi+4]
0x6B7B7C: test    esi, esi
0x6B7B7E: jnz     short loc_6B7B67
0x6B7B80: pop     esi
0x6B7B81: retn
