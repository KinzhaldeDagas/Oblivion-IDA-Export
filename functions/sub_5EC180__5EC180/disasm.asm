0x5EC180: push    esi; Returns true for swimming/falling style animation groups 0x28..0x2A, or if current character state id == 2 InAir. Player jump path uses this to suppress normal jump handling.
0x5EC181: push    edi
0x5EC182: mov     edi, ecx
0x5EC184: mov     eax, [edi]
0x5EC186: mov     edx, [eax+164h]
0x5EC18C: call    edx
0x5EC18E: mov     esi, eax
0x5EC190: test    esi, esi
0x5EC192: jz      short loc_5EC1BF
0x5EC194: push    0; slotSelector
0x5EC196: mov     ecx, esi; this
0x5EC198: call    ActorAnimData_GetNormalizedSequenceSlot; ActorAnimData sequence-slot normalizer. Encoded slot 5 maps to base slot 0 and encoded slot 6 maps to base slot 3; otherwise returns animSequences[slot].
0x5EC19D: test    eax, eax
0x5EC19F: jz      short loc_5EC1BF
0x5EC1A1: push    0; slotSelector
0x5EC1A3: mov     ecx, esi; this
0x5EC1A5: call    ActorAnimData_GetNormalizedSequenceSlot; ActorAnimData sequence-slot normalizer. Encoded slot 5 maps to base slot 0 and encoded slot 6 maps to base slot 3; otherwise returns animSequences[slot].
0x5EC1AA: mov     ecx, [eax+68h]
0x5EC1AD: call    TESAnimGroup_GetAnimationGroup; TESAnimGroup native group id accessor: byte at TESAnimGroup +0x08.
0x5EC1B2: add     eax, 0FFFFFFD8h
0x5EC1B5: cmp     eax, 2
0x5EC1B8: ja      short loc_5EC1BF
0x5EC1BA: pop     edi
0x5EC1BB: mov     al, 1
0x5EC1BD: pop     esi
0x5EC1BE: retn
0x5EC1BF: mov     ecx, edi; this
0x5EC1C1: call    MobileObject_GetCharProxy; TES4 authoritative: MobileObject_GetCharProxy uses process vfunc GetCharProxy and releases the smart pointer wrapper. Use to confirm recovered owner maps back to the same proxy.
0x5EC1C6: test    eax, eax
0x5EC1C8: jz      short loc_5EC1E1
0x5EC1CA: mov     ecx, edi; this
0x5EC1CC: call    MobileObject_GetCharProxy; TES4 authoritative: MobileObject_GetCharProxy uses process vfunc GetCharProxy and releases the smart pointer wrapper. Use to confirm recovered owner maps back to the same proxy.
0x5EC1D1: lea     ecx, [eax+1E0h]
0x5EC1D7: call    hkCharacterContext_GetStateId; hkCharacterContext state id accessor used by controller update; proxy+0x1E0 context stores current state id at +0x0C.
0x5EC1DC: cmp     eax, 2
0x5EC1DF: jz      short loc_5EC1BA
0x5EC1E1: pop     edi
0x5EC1E2: xor     al, al
0x5EC1E4: pop     esi
0x5EC1E5: retn
