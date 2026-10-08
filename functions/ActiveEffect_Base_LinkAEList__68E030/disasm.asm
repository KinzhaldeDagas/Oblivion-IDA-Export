0x68E030: push    esi; Verified this helper takes EffectNode* and explicit TESObjectREFR* linkContext, while preserving incoming EBX and forwarding it as the second stack argument to each hit-effect vtable +0x80 callback. That callback's third argument is directly typed TESChildCELL* and updates parentCell. The hidden EBX value is the owner reference in the modified-extra load path; Player_LinkModifiedForm reaches this helper with EBX as a saved-reference-list cursor, so a universal owner-reference interpretation remains Candidate.
0x68E031: mov     esi, [esp+4+activeEffectList]
0x68E035: test    esi, esi
0x68E037: jz      short loc_68E05D
0x68E039: push    edi
0x68E03A: mov     edi, [esp+8+loadContext]
0x68E03E: mov     edi, edi
0x68E040: cmp     dword ptr [esi+4], 0
0x68E044: jnz     short loc_68E04B
0x68E046: cmp     dword ptr [esi], 0
0x68E049: jz      short loc_68E05C
0x68E04B: mov     ecx, [esi]
0x68E04D: mov     eax, [ecx]
0x68E04F: mov     edx, [eax+18h]
0x68E052: push    edi
0x68E053: call    edx
0x68E055: mov     esi, [esi+4]
0x68E058: test    esi, esi
0x68E05A: jnz     short loc_68E040
0x68E05C: pop     edi
0x68E05D: pop     esi
0x68E05E: retn
