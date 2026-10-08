0x476D10: push    ebp; Oblivion ActorAnimData scheduler with exact native ABI: this in ECX plus three 4-byte stack arguments, retn 0x0C. ownerActor is at [EBP+8]; all surveyed callers pass the owning Actor/Player, but the native body never dereferences it, so an interior hook's use of that value is a caller-derived contract. deltaTime at [EBP+0x0C] advances ActorAnimData time +0x94 and sequence offsets. explicitTimeOrMinusOne at [EBP+0x10] uses -1.0 for normal ticking; any other value drives an explicit-time scene update/early return. The function drains deferred KF models, maintains power/idle state, samples five slots, and advances required-note templates (class 4 terminal index 3; class 7 terminal index 4).
0x476D11: mov     ebp, esp
0x476D13: and     esp, 0FFFFFFF8h
0x476D16: sub     esp, 7Ch
0x476D19: push    ebx
0x476D1A: push    esi
0x476D1B: mov     esi, ecx
0x476D1D: cmp     dword ptr [esi+0B8h], 0
0x476D24: push    edi
0x476D25: jnz     short loc_476D30
0x476D27: cmp     dword ptr [esi+0B4h], 0
0x476D2E: jz      short loc_476D95
0x476D30: mov     eax, ds:0B33C28h
0x476D35: cmp     eax, ds:0B06548h
0x476D3B: jnb     loc_476DDF
0x476D41: mov     ecx, [esi+0B4h]
0x476D47: push    0
0x476D49: push    ecx
0x476D4A: mov     ecx, esi; this
0x476D4C: call    ActorAnimData_InstallKFModel; CustomAnimSupport decode: installs a parsed KFModel into ActorAnimData as AnimSequenceSingle/Multiple or defers it. Historical constructor-style name is not canonical.
0x476D51: mov     eax, [esi+0B8h]
0x476D57: test    eax, eax
0x476D59: jz      short loc_476D77
0x476D5B: mov     edx, [eax+4]
0x476D5E: mov     [esi+0B8h], edx
0x476D64: mov     ecx, [eax]
0x476D66: push    eax
0x476D67: mov     [esi+0B4h], ecx
0x476D6D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x476D72: add     esp, 4
0x476D75: jmp     short loc_476D81
0x476D77: mov     dword ptr [esi+0B4h], 0
0x476D81: mov     ecx, esi
0x476D83: call    ActorAnimData_HasPendingKFModels; Returns whether ActorAnimData has any deferred KFModel install state: first model at +0xB4 or linked-list head at +0xB8. ActorAnimData_Update uses this after each budgeted install.
0x476D88: test    al, al
0x476D8A: jz      short loc_476DDF
0x476D8C: add     dword ptr ds:0B33C28h, 1
0x476D93: jmp     short loc_476D30
0x476D95: mov     eax, [esi+0C8h]
0x476D9B: test    eax, eax
0x476D9D: jz      short loc_476DDF
0x476D9F: mov     ecx, [eax+58h]
0x476DA2: test    ecx, ecx
0x476DA4: jz      short loc_476DDF
0x476DA6: mov     edx, [ecx]
0x476DA8: mov     eax, [edx+2D0h]
0x476DAE: call    eax
0x476DB0: cmp     eax, 0FFFFFFFFh
0x476DB3: jnz     short loc_476DDF
0x476DB5: cmp     dword ptr [esi+0ACh], 0
0x476DBC: jnz     short loc_476DDF
0x476DBE: mov     ebx, [esi+0C8h]
0x476DC4: mov     ecx, esi
0x476DC6: mov     dword ptr [esi+0C8h], 0
0x476DD0: call    ActorAnimData_RemovePowerAttackGroups; Remove all power-attack animation groups (0x16-0x1A) across movement 0-3 and weapon 0-5 from ActorAnimData before rebuilding the dynamic power-attack list.
0x476DD5: push    1
0x476DD7: push    ebx
0x476DD8: mov     ecx, esi
0x476DDA: call    ActorAnimData_RebuildPowerAttackKFList; Native Oblivion power-attack rebuild: clears groups 0x16..0x1A, generates movement/weapon/mastery filename candidates, probes the model loader, and installs parsed native power groups. No dynamic weapon type or override registry is consulted.
0x476DDF: lea     ebx, [esi+0D4h]
0x476DE5: mov     edi, 2
0x476DEA: lea     ebx, [ebx+0]
0x476DF0: mov     eax, [ebx]
0x476DF2: test    eax, eax
0x476DF4: jz      short loc_476E12
0x476DF6: mov     ecx, [eax+10h]
0x476DF9: test    ecx, ecx
0x476DFB: jz      short loc_476E05
0x476DFD: cmp     dword ptr [ecx+44h], 0
0x476E01: jnz     short loc_476E12
0x476E03: jmp     short loc_476E0A
0x476E05: cmp     dword ptr [eax], 0
0x476E08: jz      short loc_476E12
0x476E0A: push    ebx
0x476E0B: mov     ecx, esi
0x476E0D: call    AnimIdle_DestroyAndRelease; Destroys one ActorAnimData-owned AnimIdle slot. Resolves the idle KF encoded key from KFModel +0x08, removes the matching sequence from the controller manager/map entry where appropriate, runs AnimIdle_CleanupLoadedResources, frees the 0x2C-byte holder, nulls the caller slot, and balances native references.
0x476E12: add     ebx, 4
0x476E15: sub     edi, 1
0x476E18: jnz     short loc_476DF0
0x476E1A: mov     ecx, [esi+4]; this
0x476E1D: test    ecx, ecx
0x476E1F: jz      loc_477B2E
0x476E25: cmp     byte ptr [esi+90h], 5
0x476E2C: mov     dword ptr [esi], 1
0x476E32: mov     edx, ds:0B3F9A8h
0x476E38: mov     [esi+0Ch], edx
0x476E3B: mov     eax, ds:0B3F9ACh
0x476E40: mov     [esi+10h], eax
0x476E43: mov     edx, ds:0B3F9B0h
0x476E49: mov     [esi+14h], edx
0x476E4C: jnz     short loc_476E86
0x476E4E: fld     dword ptr ds:0A30634h
0x476E54: fld     [ebp+explicitTimeOrMinusOne]
0x476E57: fucom   st(1)
0x476E59: fnstsw  ax
0x476E5B: fstp    st(1)
0x476E5D: test    ah, 44h
0x476E60: jp      short loc_476E6A
0x476E62: fstp    st
0x476E64: fld     dword ptr [esi+94h]
0x476E6A: fstp    [esp+88h+var_70]
0x476E6E: push    1; a3
0x476E70: fld     [esp+8Ch+var_70]
0x476E74: push    ecx
0x476E75: fstp    [esp+90h+a2]; a2
0x476E78: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x476E7D: pop     edi
0x476E7E: pop     esi
0x476E7F: pop     ebx
0x476E80: mov     esp, ebp
0x476E82: pop     ebp
0x476E83: retn    0Ch
0x476E86: xor     edi, edi; ModernWindowsCompatible/TragicEngineFix merge: pre-sample hook site. ESI is ActorAnimData*; rebase ActorAnimData+0x94 and active BSAnimGroupSequence+0x48 offsets before active-slot sampling.
0x476E88: jmp     short loc_476E90
0x476E90: movzx   eax, word ptr [esi+edi*2+3Ch]
0x476E95: push    eax
0x476E96: call    AnimKey_GetGroupID; Final name: AnimKey_GetGroupID. Returns low native group byte from encoded key.
0x476E9B: movzx   ecx, word ptr [esi+edi*2+70h]
0x476EA0: push    ecx
0x476EA1: mov     ebx, eax
0x476EA3: call    AnimKey_GetGroupID; Final name: AnimKey_GetGroupID. Returns low native group byte from encoded key.
0x476EA8: add     esp, 8
0x476EAB: cmp     ebx, 0FFh
0x476EB1: jnz     short loc_476F0F
0x476EB3: cmp     eax, ebx
0x476EB5: jz      short loc_476F0F
0x476EB7: mov     edx, [esi+edi*4+7Ch]
0x476EBB: mov     [esi+edi*4+5Ch], edx
0x476EBF: movzx   ebx, word ptr [esi+edi*2+70h]
0x476EC4: cmp     bx, 0FFh
0x476EC9: jz      short loc_476EF8
0x476ECB: mov     ecx, [esi+9Ch]
0x476ED1: lea     eax, [esp+88h+var_6C+4]
0x476ED5: push    eax
0x476ED6: push    ebx
0x476ED7: call    ActorAnimData_FindAnimMapEntry; CustomAnimSupport decode: anim-map lookup helper used by playback, validators, and save/load restore to test an encoded group key.
0x476EDC: test    al, al
0x476EDE: jz      short loc_476EF8
0x476EE0: mov     ecx, dword ptr [esp+88h+var_6C+4]
0x476EE4: mov     edx, [ecx]
0x476EE6: mov     eax, [edx+10h]
0x476EE9: push    0FFFFFFFFh
0x476EEB: call    eax
0x476EED: push    0FFFFFFFFh; slotSelector
0x476EEF: push    ebx; encodedKey
0x476EF0: push    eax; sequence
0x476EF1: mov     ecx, esi; this
0x476EF3: call    ActorAnimData_PlaySequence; Plays a selected BSAnimGroupSequence. Resolves default slot from fixed group metadata, maps physical slot 5->0 and 6->3 while retaining the requested alias for clear semantics, handles menu/full reset conditions, records active key +0x3C and sequence +0xA0, chooses morph only for matching nonzero morph keys and equal controller counts, otherwise cross-fades or blends from a temporary pose, applies the maximum old/new Blend byte as transition time, and initializes slot action state.
0x476EF8: movzx   ecx, word ptr [esi+edi*2+3Ch]
0x476EFD: push    ecx
0x476EFE: mov     word ptr [esi+edi*2+70h], 0FFh
0x476F05: call    AnimKey_GetGroupID; Final name: AnimKey_GetGroupID. Returns low native group byte from encoded key.
0x476F0A: add     esp, 4
0x476F0D: mov     ebx, eax
0x476F0F: mov     ecx, edi
0x476F11: sub     ecx, 5
0x476F14: mov     eax, edi
0x476F16: jz      short loc_476F24
0x476F18: sub     ecx, 1
0x476F1B: jnz     short loc_476F26
0x476F1D: mov     eax, 3
0x476F22: jmp     short loc_476F26
0x476F24: xor     eax, eax
0x476F26: cmp     ebx, 0FFh
0x476F2C: fldz
0x476F2E: mov     ecx, [esi+eax*4+0A0h]
0x476F35: fstp    [esp+edi*4+8Ch+var_2C]
0x476F39: mov     [esp+edi*4+8Ch+var_18], ecx
0x476F3D: jz      short loc_476F56
0x476F3F: test    ecx, ecx
0x476F41: jz      short loc_476F56
0x476F43: fld     dword ptr [esi+94h]
0x476F49: push    ecx
0x476F4A: fstp    [esp+90h+a2]; float
0x476F4D: call    BSAnimGroupSequence_SampleUpdate; Samples a BSAnimGroupSequence only while native controller state +0x44 is 1, 2, or 3. Passes sequence +0x48 plus ActorAnimData scheduler time +0x94 to NiControllerSequence_AdvanceTime with commit enabled.
0x476F52: fstp    [esp+edi*4+8Ch+var_2C]
0x476F56: add     edi, 1
0x476F59: cmp     edi, 5
0x476F5C: jl      loc_476E90
0x476F62: fld     dword ptr ds:0A30634h
0x476F68: fld     [ebp+explicitTimeOrMinusOne]
0x476F6B: fucom   st(1)
0x476F6D: fnstsw  ax
0x476F6F: fstp    st(1)
0x476F71: test    ah, 44h
0x476F74: jnp     short loc_476F93
0x476F76: push    1; a3
0x476F78: fst     dword ptr [esi+94h]
0x476F7E: push    ecx
0x476F7F: mov     ecx, [esi+4]; this
0x476F82: fstp    [esp+94h+var_94]; a2
0x476F85: call    NiAVObject_UpdateNiAVObject; NiAVObject update entry used by ActorAnimData_Update. Dispatches virtual slot +0x60 (UpdateDownwardPass) with time and the property/controller-update flag, then asks the parent through virtual +0x94 to recompute bounds upward. For a NiNode root these resolve to NiNode_UpdateDownwardPass and NiNode_UpdateParentWorldBounds.
0x476F8A: pop     edi
0x476F8B: pop     esi
0x476F8C: pop     ebx
0x476F8D: mov     esp, ebp
0x476F8F: pop     ebp
0x476F90: retn    0Ch
0x476F93: fstp    st
0x476F95: xor     ebx, ebx
0x476F97: fld     dword ptr [esi+94h]; ModernWindowsCompatible/TragicEngineFix merge decode: ActorAnimData+0x94 is incremented by the frame delta here before the post-increment rebase hook.
0x476F9D: fadd    [ebp+deltaTime]
0x476FA0: fstp    dword ptr [esi+94h]
0x476FA6: mov     ecx, ebx; ModernWindowsCompatible/TragicEngineFix merge: post-increment hook site replaces mov ecx, ebx; sub ecx, 5, rebases ActorAnimData+0x94, then restores the same ECX/flags for following branches.
0x476FA8: sub     ecx, 5
0x476FAB: mov     eax, ebx
0x476FAD: jz      short loc_476FBB
0x476FAF: sub     ecx, 1
0x476FB2: jnz     short loc_476FBD
0x476FB4: mov     eax, 3
0x476FB9: jmp     short loc_476FBD
0x476FBB: xor     eax, eax
0x476FBD: movzx   edx, word ptr [esi+ebx*2+3Ch]
0x476FC2: mov     edi, [esi+eax*4+0A0h]
0x476FC9: push    edx
0x476FCA: call    AnimKey_GetGroupID; Final name: AnimKey_GetGroupID. Returns low native group byte from encoded key.
0x476FCF: mov     [esp+90h+var_74], eax
0x476FD3: movzx   eax, word ptr [esi+ebx*2+70h]
0x476FD8: push    eax
0x476FD9: call    AnimKey_GetGroupID; Final name: AnimKey_GetGroupID. Returns low native group byte from encoded key.
0x476FDE: add     esp, 8
0x476FE1: cmp     [esp+8Ch+var_74], 0FFh
0x476FE9: mov     [esp+8Ch+var_78], eax
0x476FED: jz      def_4770CD
0x476FF3: test    edi, edi
0x476FF5: jz      def_4770CD
0x476FFB: movsx   ecx, byte ptr [esi+90h]
0x477002: mov     eax, ecx
0x477004: sub     eax, 5
0x477007: jz      short loc_47705A
0x477009: sub     eax, 1
0x47700C: jz      short loc_477051
0x47700E: cmp     ebx, ecx
0x477010: jz      short loc_47705A
0x477012: mov     eax, [edi+44h]
0x477015: cmp     eax, 1
0x477018: mov     ecx, [esp+8Ch+var_74]
0x47701C: jnz     def_4770CD
0x477022: lea     edx, [ecx-3]
0x477025: cmp     edx, 0Dh
0x477028: ja      short loc_47707E
0x47702A: fld     dword ptr [esi+0BCh]; ActorAnimData update tick reads +0xBC as active movement animation playback multiplier before adjusting NiControllerSequence +0x48 offset.
0x477030: fld     [ebp+deltaTime]
0x477033: fld     st
0x477035: fmulp   st(2), st
0x477037: fsubp   st(1), st
0x477039: fld     dword ptr [edi+48h]
0x47703C: fsub    dword ptr [edi+2Ch]
0x47703F: fstp    dword ptr [esp+8Ch+var_6C]
0x477043: fadd    dword ptr [esp+8Ch+var_6C]
0x477047: fstp    dword ptr [esp+8Ch+var_6C]; Active movement animation path stores offset delta after applying ActorAnimData +0xBC multiplier to frame delta; final offset is written to NiControllerSequence +0x48 at 0x4770AE.
0x47704B: fld     dword ptr [esp+8Ch+var_6C]
0x47704F: jmp     short loc_4770AB
0x477051: test    ebx, ebx
0x477053: jle     short loc_477012
0x477055: cmp     ebx, 3
0x477058: jg      short loc_477012
0x47705A: fld     dword ptr [edi+48h]
0x47705D: fsub    dword ptr [edi+2Ch]
0x477060: fstp    dword ptr [esp+8Ch+var_6C]
0x477064: fld     dword ptr [esp+8Ch+var_6C]
0x477068: fsub    [ebp+deltaTime]
0x47706B: fstp    dword ptr [esp+8Ch+var_6C]
0x47706F: fld     dword ptr [esp+8Ch+var_6C]
0x477073: fadd    dword ptr [edi+2Ch]
0x477076: fstp    dword ptr [edi+48h]
0x477079: jmp     def_4770CD
0x47707E: lea     edx, [ecx-11h]
0x477081: cmp     edx, 9
0x477084: ja      short loc_4770B1
0x477086: fld     dword ptr [esi+0C0h]; ActorAnimData update tick reads +0xC0 as blended/secondary movement animation playback multiplier before adjusting NiControllerSequence +0x48 offset.
0x47708C: fld     [ebp+deltaTime]
0x47708F: fld     st
0x477091: fmulp   st(2), st
0x477093: fsubp   st(1), st
0x477095: fld     dword ptr [edi+48h]
0x477098: fsub    dword ptr [edi+2Ch]
0x47709B: fstp    dword ptr [esp+8Ch+var_6C]
0x47709F: fadd    dword ptr [esp+8Ch+var_6C]
0x4770A3: fstp    dword ptr [esp+8Ch+var_6C]; Blended/secondary movement animation path stores offset delta after applying ActorAnimData +0xC0 multiplier to frame delta; final offset is written to NiControllerSequence +0x48 at 0x4770AE.
0x4770A7: fld     dword ptr [esp+8Ch+var_6C]
0x4770AB: fadd    dword ptr [edi+2Ch]
0x4770AE: fstp    dword ptr [edi+48h]
0x4770B1: cmp     eax, 1
0x4770B4: jnz     def_4770CD
0x4770BA: lea     eax, [ecx+ecx*8]
0x4770BD: mov     eax, ds:0B102ECh[eax*4]
0x4770C4: cmp     eax, 7; switch 8 cases
0x4770C7: ja      def_4770CD
0x4770CD: jmp     ds:jpt_4770CD[eax*4]; switch jump
0x4770D4: mov     eax, [esi+ebx*4+48h]; jumptable 004770CD case 4
0x4770D8: cmp     eax, 3
0x4770DB: jge     short loc_47710E
0x4770DD: fld     dword ptr [edi+48h]
0x4770E0: mov     ecx, [edi+68h]; this
0x4770E3: fadd    dword ptr [esi+94h]
0x4770E9: add     eax, 1
0x4770EC: push    eax; noteIndex
0x4770ED: fstp    dword ptr [esp+90h+var_6C]
0x4770F1: fld     dword ptr [esp+90h+var_6C]
0x4770F5: fstp    [esp+90h+var_6C]
0x4770F9: call    TESAnimGroup_GetRequiredNoteTime; Returns a 32-bit required-note time from TESAnimGroup +0x10 by zero-based note index after validating count, storage, and QNaN. Invalid entries report an error and return 0.0f.
0x4770FE: fcomp   [esp+8Ch+var_6C]
0x477102: fnstsw  ax
0x477104: test    ah, 5
0x477107: jp      short loc_47710E
0x477109: add     dword ptr [esi+ebx*4+48h], 1; Class-4 required-note scheduler post-increment. For native AttackLeft/AttackRight in normalized slot 3, state progresses -1/0/1/2/3 as before Start / after Start / after Hit / after a: / after End; post-increment state 1 therefore identifies the authored Hit boundary. ESI is ActorAnimData and EBX is the normalized slot. External StarShooting contrast after the native decode: its hybrids map TES3 Shoot Release to Hit. Current authored Hit times are TP Left 0.200000286102, TP Right 0.333333253860, FP Left 0.199999928474, FP Right 0.333333343267. These are asset values, not engine constants, and this is not class-7 AttackBow Release/state 3.
0x47710E: cmp     [esp+8Ch+var_78], 0FFh
0x477116: fld     dword ptr [edi+48h]
0x477119: fadd    dword ptr [esi+94h]
0x47711F: mov     ecx, [edi+68h]; this
0x477122: push    3; noteIndex
0x477124: fstp    dword ptr [esp+90h+var_6C]
0x477128: fld     dword ptr [esp+90h+var_6C]
0x47712C: jz      short loc_477169
0x47712E: fstp    [esp+90h+var_6C]
0x477132: call    TESAnimGroup_GetRequiredNoteTime; Returns a 32-bit required-note time from TESAnimGroup +0x10 by zero-based note index after validating count, storage, and QNaN. Invalid entries report an error and return 0.0f.
0x477137: fcomp   [esp+8Ch+var_6C]
0x47713B: fnstsw  ax
0x47713D: test    ah, 41h
0x477140: jp      def_4770CD
0x477146: mov     ecx, [esi+ebx*4+7Ch]
0x47714A: mov     [esi+ebx*4+5Ch], ecx
0x47714E: movzx   edx, word ptr [esi+ebx*2+70h]
0x477153: push    0FFFFFFFFh
0x477155: push    edx
0x477156: mov     ecx, esi
0x477158: call    ActorAnimData_PlayEncodedGroup; CustomAnimSupport hook target: ActorAnimData_PlayEncodedGroup. Resolves encoded key in animsMap, selects single/multiple sequence, then forwards to ActorAnimData_PlaySequence.
0x47715D: mov     word ptr [esi+ebx*2+70h], 0FFh
0x477164: jmp     def_4770CD
0x477169: fstp    [esp+90h+var_6C]
0x47716D: call    TESAnimGroup_GetRequiredNoteTime; Returns a 32-bit required-note time from TESAnimGroup +0x10 by zero-based note index after validating count, storage, and QNaN. Invalid entries report an error and return 0.0f.
0x477172: fcomp   [esp+8Ch+var_6C]
0x477176: jmp     loc_4774AE
0x47717B: mov     eax, [esi+ebx*4+48h]; ActorAnimData_Update class-7 scheduler used by AttackBow. effectiveTime = sequence+0x48 + ActorAnimData+0x94. Per update it advances at most one phase, and only when effectiveTime is strictly greater than requiredNote[state+1]; equality or unordered comparison does not advance. Slot-3 states -1/0/1/2/3/4 map before Start / Start / Attach / Hold / Release / End.
0x47717F: cmp     eax, 4
0x477182: jge     short loc_4771DB
0x477184: fld     dword ptr [edi+48h]
0x477187: mov     ecx, [edi+68h]; this
0x47718A: fadd    dword ptr [esi+94h]
0x477190: add     eax, 1
0x477193: push    eax; noteIndex
0x477194: fstp    dword ptr [esp+90h+var_6C]
0x477198: fld     dword ptr [esp+90h+var_6C]
0x47719C: fstp    [esp+90h+var_6C]
0x4771A0: call    TESAnimGroup_GetRequiredNoteTime; Returns a 32-bit required-note time from TESAnimGroup +0x10 by zero-based note index after validating count, storage, and QNaN. Invalid entries report an error and return 0.0f.
0x4771A5: fcomp   [esp+8Ch+var_6C]
0x4771A9: fnstsw  ax
0x4771AB: test    ah, 5
0x4771AE: jp      short loc_4771DB
0x4771B0: add     dword ptr [esi+ebx*4+48h], 1; Advance per-slot action phase after crossing its next required note. AttackBow slot 3 maps -1/0/1/2/3/4 to before Start / Start / Attach / Hold / Release / End crossed.
0x4771B5: cmp     ebx, 3; AttackBow class-7 phase scheduler special case: on the single update that increments normalized slot 3 to state 2 (Hold), discard that update's overshoot and anchor the sequence to the Hold note.
0x4771B8: jnz     short loc_4771DB
0x4771BA: cmp     dword ptr [esi+54h], 2
0x4771BE: jnz     short loc_4771DB
0x4771C0: fld     dword ptr [esi+94h]
0x4771C6: mov     ecx, [edi+68h]; this
0x4771C9: push    2; noteIndex
0x4771CB: fstp    dword ptr [esp+90h+var_6C]
0x4771CF: call    TESAnimGroup_GetRequiredNoteTime; Returns a 32-bit required-note time from TESAnimGroup +0x10 by zero-based note index after validating count, storage, and QNaN. Invalid entries report an error and return 0.0f.
0x4771D4: fsub    dword ptr [esp+8Ch+var_6C]
0x4771D8: fstp    dword ptr [edi+48h]; Writes sequence+0x48 = requiredNote[2](Hold) - ActorAnimData+0x94, making effective time exactly Hold for this update. This is a one-update overshoot correction, not a persistent pause; later ActorAnimData+0x94 advance moves past Hold normally.
0x4771DB: cmp     [esp+8Ch+var_78], 0FFh; AttackBow End handling. Once requiredNote[4] is reached, native code either starts a queued encoded group or routes to slot stop/blend handling. End does not construct/register a projectile, reload/nock, or change process current action.
0x4771E3: fld     dword ptr [edi+48h]
0x4771E6: fadd    dword ptr [esi+94h]
0x4771EC: mov     ecx, [edi+68h]; this
0x4771EF: push    4; noteIndex
0x4771F1: fstp    dword ptr [esp+90h+var_6C]
0x4771F5: fld     dword ptr [esp+90h+var_6C]
0x4771F9: jz      short loc_477236
0x4771FB: fstp    [esp+90h+var_6C]
0x4771FF: call    TESAnimGroup_GetRequiredNoteTime; Returns a 32-bit required-note time from TESAnimGroup +0x10 by zero-based note index after validating count, storage, and QNaN. Invalid entries report an error and return 0.0f.
0x477204: fcomp   [esp+8Ch+var_6C]
0x477208: fnstsw  ax
0x47720A: test    ah, 41h
0x47720D: jp      def_4770CD
0x477213: mov     eax, [esi+ebx*4+7Ch]
0x477217: mov     [esi+ebx*4+5Ch], eax
0x47721B: movzx   ecx, word ptr [esi+ebx*2+70h]
0x477220: push    0FFFFFFFFh
0x477222: push    ecx
0x477223: mov     ecx, esi
0x477225: call    ActorAnimData_PlayEncodedGroup; CustomAnimSupport hook target: ActorAnimData_PlayEncodedGroup. Resolves encoded key in animsMap, selects single/multiple sequence, then forwards to ActorAnimData_PlaySequence.
0x47722A: mov     word ptr [esi+ebx*2+70h], 0FFh
0x477231: jmp     def_4770CD
0x477236: fstp    [esp+90h+var_6C]
0x47723A: call    TESAnimGroup_GetRequiredNoteTime; Returns a 32-bit required-note time from TESAnimGroup +0x10 by zero-based note index after validating count, storage, and QNaN. Invalid entries report an error and return 0.0f.
0x47723F: fcomp   [esp+8Ch+var_6C]
0x477243: jmp     loc_4774AE
0x477248: mov     eax, [esi+ebx*4+48h]; jumptable 004770CD cases 2,3,5,6
0x47724C: cmp     eax, 2
0x47724F: jge     short loc_477282
0x477251: fld     dword ptr [edi+48h]
0x477254: mov     ecx, [edi+68h]; this
0x477257: fadd    dword ptr [esi+94h]
0x47725D: add     eax, 1
0x477260: push    eax; noteIndex
0x477261: fstp    dword ptr [esp+90h+var_6C]
0x477265: fld     dword ptr [esp+90h+var_6C]
0x477269: fstp    [esp+90h+var_6C]
0x47726D: call    TESAnimGroup_GetRequiredNoteTime; Returns a 32-bit required-note time from TESAnimGroup +0x10 by zero-based note index after validating count, storage, and QNaN. Invalid entries report an error and return 0.0f.
0x477272: fcomp   [esp+8Ch+var_6C]
0x477276: fnstsw  ax
0x477278: test    ah, 5
0x47727B: jp      short loc_477282
0x47727D: add     dword ptr [esi+ebx*4+48h], 1
0x477282: cmp     [esp+8Ch+var_78], 0FFh
0x47728A: fld     dword ptr [edi+48h]
0x47728D: fadd    dword ptr [esi+94h]
0x477293: mov     ecx, [edi+68h]; this
0x477296: push    2; noteIndex
0x477298: fstp    dword ptr [esp+90h+var_6C]
0x47729C: fld     dword ptr [esp+90h+var_6C]
0x4772A0: jz      short loc_4772B4
0x4772A2: fstp    [esp+90h+var_6C]
0x4772A6: call    TESAnimGroup_GetRequiredNoteTime; Returns a 32-bit required-note time from TESAnimGroup +0x10 by zero-based note index after validating count, storage, and QNaN. Invalid entries report an error and return 0.0f.
0x4772AB: fcomp   [esp+8Ch+var_6C]
0x4772AF: jmp     loc_47747A
0x4772B4: fstp    [esp+90h+var_6C]
0x4772B8: call    TESAnimGroup_GetRequiredNoteTime; Returns a 32-bit required-note time from TESAnimGroup +0x10 by zero-based note index after validating count, storage, and QNaN. Invalid entries report an error and return 0.0f.
0x4772BD: fcomp   [esp+8Ch+var_6C]
0x4772C1: jmp     loc_4774AE
0x4772C6: cmp     dword ptr [edi+24h], 0; jumptable 004770CD cases 0,1
0x4772CA: jnz     loc_477414
0x4772D0: cmp     dword ptr [esi+ebx*4+48h], 1
0x4772D5: jge     short loc_477329
0x4772D7: jmp     short loc_4772E0
0x4772E0: fld     dword ptr [edi+48h]
0x4772E3: mov     edx, [esi+ebx*4+48h]
0x4772E7: fadd    dword ptr [esi+94h]
0x4772ED: mov     ecx, [edi+68h]; this
0x4772F0: push    edx; noteIndex
0x4772F1: fstp    dword ptr [esp+90h+var_6C]
0x4772F5: fld     dword ptr [esp+90h+var_6C]
0x4772F9: fstp    [esp+90h+var_6C]
0x4772FD: call    TESAnimGroup_GetRequiredNoteTime; Returns a 32-bit required-note time from TESAnimGroup +0x10 by zero-based note index after validating count, storage, and QNaN. Invalid entries report an error and return 0.0f.
0x477302: fcomp   [esp+8Ch+var_6C]
0x477306: fnstsw  ax
0x477308: test    ah, 5
0x47730B: jp      short loc_477329
0x47730D: mov     eax, [esi+ebx*4+48h]
0x477311: sub     eax, 0
0x477314: mov     ecx, 1
0x477319: jz      short loc_47731F
0x47731B: sub     eax, ecx
0x47731D: jnz     short loc_477323
0x47731F: mov     [esi+ebx*4+48h], ecx
0x477323: cmp     [esi+ebx*4+48h], ecx
0x477327: jl      short loc_4772E0
0x477329: cmp     [esp+8Ch+var_78], 0FFh
0x477331: fld     dword ptr [edi+48h]
0x477334: fadd    dword ptr [esi+94h]
0x47733A: mov     ecx, [edi+68h]; this
0x47733D: push    1; noteIndex
0x47733F: fstp    dword ptr [esp+90h+var_6C]
0x477343: fld     dword ptr [esp+90h+var_6C]
0x477347: jz      short loc_477384
0x477349: fstp    [esp+90h+var_6C]
0x47734D: call    TESAnimGroup_GetRequiredNoteTime; Returns a 32-bit required-note time from TESAnimGroup +0x10 by zero-based note index after validating count, storage, and QNaN. Invalid entries report an error and return 0.0f.
0x477352: fcomp   [esp+8Ch+var_6C]
0x477356: fnstsw  ax
0x477358: test    ah, 41h
0x47735B: jp      def_4770CD
0x477361: mov     eax, [esi+ebx*4+7Ch]
0x477365: mov     [esi+ebx*4+5Ch], eax
0x477369: movzx   ecx, word ptr [esi+ebx*2+70h]
0x47736E: push    0FFFFFFFFh
0x477370: push    ecx
0x477371: mov     ecx, esi
0x477373: call    ActorAnimData_PlayEncodedGroup; CustomAnimSupport hook target: ActorAnimData_PlayEncodedGroup. Resolves encoded key in animsMap, selects single/multiple sequence, then forwards to ActorAnimData_PlaySequence.
0x477378: mov     word ptr [esi+ebx*2+70h], 0FFh
0x47737F: jmp     def_4770CD
0x477384: fstp    [esp+90h+var_6C]
0x477388: call    TESAnimGroup_GetRequiredNoteTime; Returns a 32-bit required-note time from TESAnimGroup +0x10 by zero-based note index after validating count, storage, and QNaN. Invalid entries report an error and return 0.0f.
0x47738D: fcomp   [esp+8Ch+var_6C]
0x477391: fnstsw  ax
0x477393: test    ah, 41h
0x477396: jp      short loc_4773EC
0x477398: cmp     dword ptr [esi+ebx*4+5Ch], 0
0x47739D: jz      short loc_4773EC
0x47739F: mov     dword ptr [esi+ebx*4+48h], 0
0x4773A7: fld     dword ptr [edi+30h]
0x4773AA: fsub    dword ptr [edi+2Ch]
0x4773AD: fchs
0x4773AF: fstp    dword ptr [esp+8Ch+var_6C]
0x4773B3: fld     dword ptr [esp+8Ch+var_6C]
0x4773B7: fld     dword ptr [edi+48h]
0x4773BA: fsub    dword ptr [edi+2Ch]
0x4773BD: fstp    dword ptr [esp+8Ch+var_6C]
0x4773C1: fadd    dword ptr [esp+8Ch+var_6C]
0x4773C5: fstp    dword ptr [esp+8Ch+var_6C]
0x4773C9: fld     dword ptr [esp+8Ch+var_6C]
0x4773CD: fadd    dword ptr [edi+2Ch]
0x4773D0: fstp    dword ptr [edi+48h]
0x4773D3: mov     eax, [esi+ebx*4+5Ch]
0x4773D7: cmp     eax, 0FFFFFFFFh
0x4773DA: jz      def_4770CD
0x4773E0: add     eax, 0FFFFFFFFh
0x4773E3: mov     [esi+ebx*4+5Ch], eax
0x4773E7: jmp     def_4770CD
0x4773EC: fld     dword ptr [edi+48h]
0x4773EF: mov     ecx, [edi+68h]; this
0x4773F2: fadd    dword ptr [esi+94h]
0x4773F8: push    1; noteIndex
0x4773FA: fstp    dword ptr [esp+90h+var_6C]
0x4773FE: fld     dword ptr [esp+90h+var_6C]
0x477402: fstp    [esp+90h+var_6C]
0x477406: call    TESAnimGroup_GetRequiredNoteTime; Returns a 32-bit required-note time from TESAnimGroup +0x10 by zero-based note index after validating count, storage, and QNaN. Invalid entries report an error and return 0.0f.
0x47740B: fcomp   [esp+8Ch+var_6C]
0x47740F: jmp     loc_4774AE
0x477414: cmp     dword ptr [esi+ebx*4+48h], 0
0x477419: jnz     short loc_47744D
0x47741B: fld     dword ptr [edi+48h]
0x47741E: mov     ecx, [edi+68h]; this
0x477421: fadd    dword ptr [esi+94h]
0x477427: push    0; noteIndex
0x477429: fstp    dword ptr [esp+90h+var_6C]
0x47742D: fld     dword ptr [esp+90h+var_6C]
0x477431: fstp    [esp+90h+var_6C]
0x477435: call    TESAnimGroup_GetRequiredNoteTime; Returns a 32-bit required-note time from TESAnimGroup +0x10 by zero-based note index after validating count, storage, and QNaN. Invalid entries report an error and return 0.0f.
0x47743A: fcomp   [esp+8Ch+var_6C]
0x47743E: fnstsw  ax
0x477440: test    ah, 5
0x477443: jp      short loc_47744D
0x477445: mov     dword ptr [esi+ebx*4+48h], 1
0x47744D: cmp     [esp+8Ch+var_78], 0FFh
0x477455: fld     dword ptr [edi+48h]
0x477458: fadd    dword ptr [esi+94h]
0x47745E: mov     ecx, [edi+68h]; this
0x477461: push    1; noteIndex
0x477463: fstp    dword ptr [esp+90h+var_6C]
0x477467: fld     dword ptr [esp+90h+var_6C]
0x47746B: jz      short loc_4774A1
0x47746D: fstp    [esp+90h+var_6C]
0x477471: call    TESAnimGroup_GetRequiredNoteTime; Returns a 32-bit required-note time from TESAnimGroup +0x10 by zero-based note index after validating count, storage, and QNaN. Invalid entries report an error and return 0.0f.
0x477476: fcomp   [esp+8Ch+var_6C]
0x47747A: fnstsw  ax
0x47747C: test    ah, 41h
0x47747F: jp      short def_4770CD
0x477481: mov     edx, [esi+ebx*4+7Ch]
0x477485: mov     [esi+ebx*4+5Ch], edx
0x477489: movzx   eax, word ptr [esi+ebx*2+70h]
0x47748E: push    0FFFFFFFFh
0x477490: push    eax
0x477491: mov     ecx, esi
0x477493: call    ActorAnimData_PlayEncodedGroup; CustomAnimSupport hook target: ActorAnimData_PlayEncodedGroup. Resolves encoded key in animsMap, selects single/multiple sequence, then forwards to ActorAnimData_PlaySequence.
0x477498: mov     word ptr [esi+ebx*2+70h], 0FFh
0x47749F: jmp     short def_4770CD
0x4774A1: fstp    [esp+90h+var_6C]
0x4774A5: call    TESAnimGroup_GetRequiredNoteTime; Returns a 32-bit required-note time from TESAnimGroup +0x10 by zero-based note index after validating count, storage, and QNaN. Invalid entries report an error and return 0.0f.
0x4774AA: fcomp   [esp+8Ch+var_6C]
0x4774AE: fnstsw  ax
0x4774B0: test    ah, 41h
0x4774B3: jp      short def_4770CD
0x4774B5: push    ebx
0x4774B6: mov     ecx, esi
0x4774B8: call    ActorAnimData_StopSlotWithBlendNote; Calculates native stop ease-out from the current physical slot's TESAnimGroup Blend byte at +0x21 unless ActorAnimData +0xC4 forces zero, then passes the original slot argument to ActorAnimData_ClearSlot. Thus aliases 5/6 retain ClearSlot's multi-slot expansion.
