0x474AB0: push    ebx; Restores one saved active slot by resolving the encoded key in +0x9C, selecting its sequence entry, replaying it, and restoring the saved slot clock/state.
0x474AB1: push    ebp
0x474AB2: push    esi
0x474AB3: push    edi
0x474AB4: mov     edi, [esp+10h+slotSelector]
0x474AB8: mov     eax, edi
0x474ABA: sub     eax, 5
0x474ABD: mov     esi, ecx
0x474ABF: mov     ebx, edi
0x474AC1: jz      short loc_474ACF
0x474AC3: sub     eax, 1
0x474AC6: jnz     short loc_474AD1
0x474AC8: mov     ebx, 3
0x474ACD: jmp     short loc_474AD1
0x474ACF: xor     ebx, ebx
0x474AD1: cmp     [esp+10h+arg_8], 0FFFFFFFFh
0x474AD6: jnz     loc_474B5E
0x474ADC: fldz
0x474ADE: push    ecx
0x474ADF: fstp    [esp+14h+easeOutTime]; easeOutTime
0x474AE2: push    ebx; slot
0x474AE3: call    ActorAnimData_ClearSlot; Stops and clears an ActorAnimData slot with the supplied ease-out time. Alias semantics are expansive: argument 5 recursively clears slots 4,0,1,2 then 3 (all five); argument 6 clears slots 1,2 then 3. For the final slot it deactivates attached/base sequences, deactivates manager transition-source sequences when state is 5, nulls +0xA0, sets active key +0x3C and queued key +0x70 to 0x00FF, and action state +0x48 to -1.
0x474AE8: mov     ebp, [esp+10h+encodedKey]
0x474AEC: cmp     bp, 0FFh
0x474AF1: jz      loc_474BAE
0x474AF7: mov     ecx, [esi+9Ch]
0x474AFD: lea     eax, [esp+10h+encodedKey]
0x474B01: push    eax
0x474B02: push    ebp
0x474B03: call    ActorAnimData_FindAnimMapEntry; CustomAnimSupport decode: anim-map lookup helper used by playback, validators, and save/load restore to test an encoded group key.
0x474B08: test    al, al
0x474B0A: jz      loc_474BAE
0x474B10: mov     edi, [esp+10h+encodedKey]
0x474B14: mov     edx, [edi]
0x474B16: mov     eax, [esp+10h+arg_10]
0x474B1A: mov     edx, [edx+10h]
0x474B1D: push    eax
0x474B1E: mov     ecx, edi
0x474B20: call    edx; Restore resolves the encoded key to an AnimSequenceBase and calls vtable +0x10 with the saved selector. Multiple selector 0xFF/out-of-range (including sign-extended 0x80..0xFE) chooses randomly; single ignores it.
0x474B22: test    eax, eax
0x474B24: jz      loc_474BAE
0x474B2A: mov     ecx, [esp+10h+arg_10]
0x474B2E: mov     eax, [edi]
0x474B30: mov     edx, [eax+10h]
0x474B33: push    ecx
0x474B34: mov     ecx, edi
0x474B36: call    edx
0x474B38: fldz
0x474B3A: push    0; transition
0x474B3C: push    0; timeSyncSequence
0x474B3E: sub     esp, 8
0x474B41: fstp    [esp+20h+easeInTime]; easeInTime
0x474B45: mov     ecx, eax; this
0x474B47: fld1
0x474B49: mov     [esi+ebx*4+0A0h], eax
0x474B50: fstp    [esp+20h+weight]; weight
0x474B53: push    0; startOver
0x474B55: push    0; priority
0x474B57: call    NiControllerSequence_Activate; Native controller-sequence activation state machine. Rejects an already-active sequence, validates optional time-sync compatibility, records activation parameters, and queues the active sequence with its manager.
0x474B5C: jmp     short loc_474BAE
0x474B5E: mov     ebp, [esp+10h+encodedKey]
0x474B62: mov     ecx, [esi+9Ch]
0x474B68: lea     eax, [esp+10h+encodedKey]
0x474B6C: push    eax
0x474B6D: push    ebp
0x474B6E: call    ActorAnimData_FindAnimMapEntry; CustomAnimSupport decode: anim-map lookup helper used by playback, validators, and save/load restore to test an encoded group key.
0x474B73: test    al, al
0x474B75: jz      short loc_474BAE
0x474B77: lea     ecx, [esp+10h+encodedKey]
0x474B7B: push    ecx
0x474B7C: mov     ecx, [esi+9Ch]
0x474B82: push    ebp
0x474B83: call    ActorAnimData_FindAnimMapEntry; CustomAnimSupport decode: anim-map lookup helper used by playback, validators, and save/load restore to test an encoded group key.
0x474B88: test    al, al
0x474B8A: jz      short loc_474BA6
0x474B8C: mov     ecx, [esp+10h+encodedKey]
0x474B90: mov     edx, [ecx]
0x474B92: mov     eax, [esp+10h+arg_10]
0x474B96: mov     edx, [edx+10h]
0x474B99: push    eax
0x474B9A: call    edx
0x474B9C: push    edi; slotSelector
0x474B9D: push    ebp; encodedKey
0x474B9E: push    eax; sequence
0x474B9F: mov     ecx, esi; this
0x474BA1: call    ActorAnimData_PlaySequence; Plays a selected BSAnimGroupSequence. Resolves default slot from fixed group metadata, maps physical slot 5->0 and 6->3 while retaining the requested alias for clear semantics, handles menu/full reset conditions, records active key +0x3C and sequence +0xA0, chooses morph only for matching nonzero morph keys and equal controller counts, otherwise cross-fades or blends from a temporary pose, applies the maximum old/new Blend byte as transition time, and initializes slot action state.
0x474BA6: mov     eax, [esp+10h+arg_8]
0x474BAA: mov     [esi+ebx*4+48h], eax
0x474BAE: fld     [esp+10h+arg_C]
0x474BB2: mov     [esi+ebx*2+3Ch], bp; ModernWindowsCompatible/TragicEngineFix merge decode: RestorePlaySavedSlot writes the saved ActorAnimData+0x94 clock; pre-sample rebase handles large restored clocks before sampling.
0x474BB7: pop     edi
0x474BB8: fstp    dword ptr [esi+94h]; TragicEngineFix decode: ActorAnimData_RestorePlaySavedSlot restores saved actor animation clock into [ESI+0x94]. Pre-sample hook at 0x476E86 handles already-large restored clocks before first active-slot sample.
0x474BBE: pop     esi
0x474BBF: pop     ebp
0x474BC0: pop     ebx
0x474BC1: retn    14h
