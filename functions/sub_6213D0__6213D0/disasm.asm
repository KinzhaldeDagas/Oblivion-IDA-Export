0x6213D0: push    esi; Dispatches CombatController behavior by current mode +0x74. Mode 3 conditionally runs close-combat handling and then the ranged weapon evaluator for modes 2/4 or the magic alternative.
0x6213D1: mov     esi, ecx
0x6213D3: mov     eax, [esi+74h]
0x6213D6: cmp     eax, 3; switch 4 cases
0x6213D9: ja      def_6213DF
0x6213DF: jmp     ds:jpt_6213DF[eax*4]; switch jump
0x6213E6: pop     esi; jumptable 006213DF case 0
0x6213E7: jmp     loc_620C30
0x6213EC: pop     esi; jumptable 006213DF case 1
0x6213ED: jmp     loc_61C550
0x6213F2: pop     esi; jumptable 006213DF case 2
0x6213F3: jmp     loc_612C30
0x6213F8: call    CombatController_GetCurrentTarget; jumptable 006213DF case 3
0x6213FD: test    eax, eax
0x6213FF: jz      short loc_621424
0x621401: mov     ecx, esi
0x621403: call    CombatController_GetCurrentTarget
0x621408: cmp     dword ptr [eax+58h], 0
0x62140C: jz      short loc_621424
0x62140E: mov     ecx, esi
0x621410: call    CombatController_GetCurrentTarget
0x621415: mov     ecx, [eax+58h]
0x621418: mov     eax, [ecx]
0x62141A: mov     edx, [eax+47Ch]
0x621420: call    edx
0x621422: jmp     short loc_621426
0x621424: xor     eax, eax
0x621426: mov     ecx, [esi+1A8h]
0x62142C: cmp     ecx, ds:0B372F0h
0x621432: jl      short def_6213DF
0x621434: test    eax, eax
0x621436: jnz     short def_6213DF
0x621438: mov     edx, [esi+70h]
0x62143B: push    edx; mode
0x62143C: call    CombatMode_IsNonRangedMode; Returns true for native combat modes 0, 1, or 3; returns false for ranged weapon modes 2 and 4 and for values above 3.
0x621441: add     esp, 4
0x621444: test    al, al
0x621446: jz      short loc_62144C
0x621448: push    0
0x62144A: jmp     short loc_621454
0x62144C: cmp     dword ptr [esi+7Ch], 0
0x621450: jz      short loc_62145B
0x621452: push    1; unusedModeFlag
0x621454: mov     ecx, esi; this
0x621456: call    CombatController_EvaluateCloseCombatOptions; Evaluates close-combat alternatives while mode +0x74 is 3: caches target surface distance, checks desired range and animation/action state, scores equipped-weapon, magic, and unarmed choices, then starts an action or changes combat mode. Its caller supplies one stack flag that is unused in this build; apparent EBX/EBP/EDI/x87 parameters were decompiler artifacts.
0x62145B: cmp     dword ptr [esi+6Ch], 4
0x62145F: jz      short loc_62147A
0x621461: mov     eax, [esi+70h]
0x621464: push    eax; mode
0x621465: call    CombatMode_IsRangedWeaponMode; Returns true only for native combat modes 2 and 4, the two ranged-weapon modes used by the distance and attack-option logic.
0x62146A: add     esp, 4
0x62146D: test    al, al
0x62146F: jz      short loc_62147A
0x621471: push    0; unusedModeFlag
0x621473: mov     ecx, esi; this
0x621475: call    CombatController_EvaluateRangedAttackOptions; Central ranged combat-option evaluator. Runs while combat mode +0x74 is 3, obtains target distance bounds, independently classifies Staff type 4 and Bow type 5, scores physical ranged attack versus magic, and transitions to attack, spell, or repositioning modes. The sole stack flag is caller-clean semantic padding/unused in this build.
0x62147A: cmp     dword ptr [esi+80h], 0
0x621481: jz      short def_6213DF
0x621483: mov     ecx, [esi+70h]
0x621486: push    ecx; mode
0x621487: call    CombatMode_IsRangedWeaponMode; Returns true only for native combat modes 2 and 4, the two ranged-weapon modes used by the distance and attack-option logic.
0x62148C: add     esp, 4
0x62148F: test    al, al
0x621491: jnz     short def_6213DF
0x621493: push    1; unusedModeFlag
0x621495: mov     ecx, esi; this
0x621497: call    CombatController_EvaluateRangedAttackOptions; Central ranged combat-option evaluator. Runs while combat mode +0x74 is 3, obtains target distance bounds, independently classifies Staff type 4 and Bow type 5, scores physical ranged attack versus magic, and transitions to attack, spell, or repositioning modes. The sole stack flag is caller-clean semantic padding/unused in this build.
0x612C30: mov     edx, 2
0x612C35: cmp     [ecx+74h], edx
0x612C38: jnz     short locret_612C5C
0x612C3A: fld     dword ptr [ecx+44h]
0x612C3D: fsub    dword ptr [ecx+0E0h]
0x612C43: fld     dword ptr [ecx+0E4h]
0x612C49: fcompp
0x612C4B: fnstsw  ax
0x612C4D: test    ah, 5
0x612C50: jp      short locret_612C5C
0x612C52: mov     [ecx+78h], edx
0x612C55: mov     dword ptr [ecx+74h], 3
0x612C5C: retn
0x61C550: push    esi
0x61C551: mov     esi, ecx
0x61C553: cmp     dword ptr [esi+74h], 1
0x61C557: jnz     loc_61C624
0x61C55D: mov     ecx, [esi+3Ch]
0x61C560: call    Actor_IsBlocking; Actor_IsBlocking: process current-action vfunc +0x2D0 equals 6. Player jump path treats this specially; climb activation should reject or require explicit design override while blocking.
0x61C565: test    al, al
0x61C567: jnz     short loc_61C576
0x61C569: mov     eax, [esi+74h]
0x61C56C: mov     [esi+78h], eax
0x61C56F: mov     dword ptr [esi+74h], 3
0x61C576: mov     ecx, [esi+3Ch]
0x61C579: mov     ecx, [ecx+58h]
0x61C57C: mov     edx, [ecx]
0x61C57E: mov     eax, [edx+0F8h]
0x61C584: push    edi
0x61C585: push    1
0x61C587: call    eax
0x61C589: test    eax, eax
0x61C58B: jnz     short loc_61C59F
0x61C58D: mov     ecx, [esi+3Ch]
0x61C590: mov     ecx, [ecx+58h]
0x61C593: mov     edx, [ecx]
0x61C595: mov     eax, [edx+0ECh]
0x61C59B: push    1
0x61C59D: call    eax
0x61C59F: mov     edi, eax
0x61C5A1: test    edi, edi
0x61C5A3: jz      short loc_61C623
0x61C5A5: mov     ecx, [esi+3Ch]
0x61C5A8: mov     edx, [ecx]
0x61C5AA: mov     eax, [edx+164h]
0x61C5B0: push    ebx
0x61C5B1: xor     bl, bl
0x61C5B3: call    eax
0x61C5B5: test    eax, eax
0x61C5B7: jz      short loc_61C5F1
0x61C5B9: mov     ecx, [esi+3Ch]
0x61C5BC: mov     edx, [ecx]
0x61C5BE: mov     eax, [edx+164h]
0x61C5C4: push    1; slotSelector
0x61C5C6: call    eax
0x61C5C8: mov     ecx, eax; this
0x61C5CA: call    ActorAnimData_GetNormalizedSequenceSlot; ActorAnimData sequence-slot normalizer. Encoded slot 5 maps to base slot 0 and encoded slot 6 maps to base slot 3; otherwise returns animSequences[slot].
0x61C5CF: test    eax, eax
0x61C5D1: jz      short loc_61C5F1
0x61C5D3: mov     ecx, [esi+3Ch]
0x61C5D6: mov     edx, [ecx]
0x61C5D8: mov     eax, [edx+164h]
0x61C5DE: push    1; slotSelector
0x61C5E0: call    eax
0x61C5E2: mov     ecx, eax; this
0x61C5E4: call    ActorAnimData_GetNormalizedSequenceSlot; ActorAnimData sequence-slot normalizer. Encoded slot 5 maps to base slot 0 and encoded slot 6 maps to base slot 3; otherwise returns animSequences[slot].
0x61C5E9: cmp     dword ptr [eax+44h], 1
0x61C5ED: jz      short loc_61C5F1
0x61C5EF: mov     bl, 1
0x61C5F1: push    0
0x61C5F3: mov     ecx, edi
0x61C5F5: call    ContainerEntryExtraData_GetHealth
0x61C5FA: fcomp   dword ptr ds:0A2FAA8h
0x61C600: fnstsw  ax
0x61C602: test    ah, 41h
0x61C605: jp      short loc_61C626
0x61C607: test    bl, bl
0x61C609: jnz     short loc_61C626
0x61C60B: mov     ecx, [esi+3Ch]; this
0x61C60E: push    0; shouldBlock
0x61C610: call    Actor_UpdateBlockingState; Starts or stops the actor blocking animation/current-action state and mirrors the result to CombatController byte +0x49. Native ABI is Actor in ECX plus one shouldBlock byte.
0x61C615: mov     ecx, [esi+74h]
0x61C618: mov     [esi+78h], ecx
0x61C61B: mov     dword ptr [esi+74h], 3
0x61C622: pop     ebx
0x61C623: pop     edi
0x61C624: pop     esi
0x61C625: retn
0x61C626: mov     ecx, esi
0x61C628: call    CombatController_GetCurrentTarget
0x61C62D: test    eax, eax
0x61C62F: jz      short loc_61C66E
0x61C631: mov     ecx, esi
0x61C633: call    CombatController_GetCurrentTarget
0x61C638: mov     ecx, eax
0x61C63A: call    Actor_GetCurrentAction; Actor_GetCurrentAction: returns process vfunc +0x2D0, or -1 when no process. Useful conservative gate for climb/slowfall activation.
0x61C63F: cmp     eax, 7
0x61C642: setz    al
0x61C645: test    al, al
0x61C647: jz      short loc_61C66E
0x61C649: test    bl, bl
0x61C64B: jnz     short loc_61C622
0x61C64D: mov     ecx, [esi+3Ch]; this
0x61C650: push    0; shouldBlock
0x61C652: call    Actor_UpdateBlockingState; Starts or stops the actor blocking animation/current-action state and mirrors the result to CombatController byte +0x49. Native ABI is Actor in ECX plus one shouldBlock byte.
0x61C657: mov     edx, [esi+74h]
0x61C65A: pop     ebx
0x61C65B: pop     edi
0x61C65C: mov     [esi+78h], edx
0x61C65F: mov     dword ptr [esi+74h], 3
0x61C666: mov     ecx, esi; this
0x61C668: pop     esi
0x61C669: jmp     CombatController_UpdateCombatModeState
0x61C66E: test    bl, bl
0x61C670: jnz     short loc_61C622
0x61C672: pop     ebx
0x61C673: pop     edi
0x61C674: mov     ecx, esi
0x61C676: pop     esi
0x61C677: jmp     sub_6191B0
0x620C30: push    ecx
0x620C31: push    esi
0x620C32: mov     esi, ecx
0x620C34: cmp     dword ptr [esi+74h], 0
0x620C38: jnz     loc_620E45
0x620C3E: mov     eax, [esi+70h]
0x620C41: cmp     eax, 4
0x620C44: push    ebx
0x620C45: mov     ebx, 3
0x620C4A: jz      short loc_620C5A
0x620C4C: cmp     eax, ebx
0x620C4E: jz      short loc_620C5A
0x620C50: cmp     eax, 8
0x620C53: jz      short loc_620C5A
0x620C55: cmp     eax, 9
0x620C58: jnz     short loc_620C6E
0x620C5A: mov     eax, [esi+3Ch]
0x620C5D: lea     ecx, [eax+5Ch]
0x620C60: mov     eax, [ecx]
0x620C62: mov     edx, [eax+30h]
0x620C65: call    edx
0x620C67: test    eax, eax
0x620C69: setnz   al
0x620C6C: jmp     short loc_620C8C
0x620C6E: mov     ecx, [esi+3Ch]
0x620C71: mov     eax, [ecx]
0x620C73: mov     edx, [eax+164h]
0x620C79: push    ebx; slot
0x620C7A: call    edx
0x620C7C: mov     ecx, eax; this
0x620C7E: call    ActorAnimData_GetAnimGroupFromField8Value; ActorAnimData key-field reader. Normalizes encoded slot values and returns the active animation key/group stored for that slot.
0x620C83: push    eax
0x620C84: call    AnimGroup_UsesAttackOrCastNoteTemplate; Returns true when the encoded key is not group 0xFF and the fixed Oblivion group record's note-template class is 4, 5, 6, or 7. Those classes cover AttackLeft/Right, power attacks, BlockAttack, AttackBow, and cast groups. This is a fixed-table classifier, not dynamic group registration.
0x620C89: add     esp, 4
0x620C8C: mov     ecx, [esi+70h]
0x620C8F: cmp     ecx, 4
0x620C92: jz      short loc_620CA2
0x620C94: cmp     ecx, ebx
0x620C96: jz      short loc_620CA2
0x620C98: cmp     ecx, 8
0x620C9B: jz      short loc_620CA2
0x620C9D: cmp     ecx, 9
0x620CA0: jnz     short loc_620CC1
0x620CA2: cmp     ecx, 2
0x620CA5: jz      short loc_620CC1
0x620CA7: cmp     ecx, 4
0x620CAA: jz      short loc_620CC1
0x620CAC: test    al, al
0x620CAE: jnz     loc_620E44
0x620CB4: mov     eax, [esi+74h]
0x620CB7: mov     [esi+74h], ebx
0x620CBA: pop     ebx
0x620CBB: mov     [esi+78h], eax
0x620CBE: pop     esi
0x620CBF: pop     ecx
0x620CC0: retn
0x620CC1: test    ecx, ecx
0x620CC3: jz      short loc_620CCE
0x620CC5: cmp     ecx, 1
0x620CC8: jz      short loc_620CCE
0x620CCA: cmp     ecx, ebx
0x620CCC: jnz     short loc_620D13
0x620CCE: test    al, al
0x620CD0: jz      short loc_620D06
0x620CD2: mov     ecx, [esi+3Ch]
0x620CD5: mov     edx, [ecx]
0x620CD7: mov     eax, [edx+164h]
0x620CDD: push    ebx; slot
0x620CDE: call    eax
0x620CE0: mov     ecx, eax; this
0x620CE2: call    ActorAnimData_GetSlotActionState; Reads the per-slot action/state dword at ActorAnimData +0x48 + 4*normalizedSlot. Native aliases slot 5 to slot 0 and slot 6 to slot 3.
0x620CE7: cmp     eax, 2
0x620CEA: jnz     loc_620E44
0x620CF0: mov     ecx, [esi+74h]
0x620CF3: mov     [esi+78h], ecx
0x620CF6: push    0; unusedModeFlag
0x620CF8: mov     ecx, esi; this
0x620CFA: mov     [esi+74h], ebx
0x620CFD: call    CombatController_EvaluateCloseCombatOptions; Evaluates close-combat alternatives while mode +0x74 is 3: caches target surface distance, checks desired range and animation/action state, scores equipped-weapon, magic, and unarmed choices, then starts an action or changes combat mode. Its caller supplies one stack flag that is unused in this build; apparent EBX/EBP/EDI/x87 parameters were decompiler artifacts.
0x620D02: pop     ebx
0x620D03: pop     esi
0x620D04: pop     ecx
0x620D05: retn
0x620D06: mov     edx, [esi+74h]
0x620D09: mov     [esi+74h], ebx
0x620D0C: pop     ebx
0x620D0D: mov     [esi+78h], edx
0x620D10: pop     esi
0x620D11: pop     ecx
0x620D12: retn
0x620D13: cmp     ecx, 2
0x620D16: jz      short loc_620D21
0x620D18: cmp     ecx, 4
0x620D1B: jnz     loc_620E44
0x620D21: test    al, al
0x620D23: jz      short loc_620CB4
0x620D25: mov     eax, [esi+3Ch]
0x620D28: mov     ecx, [eax+58h]
0x620D2B: mov     edx, [ecx]
0x620D2D: mov     eax, [edx+138h]
0x620D33: push    edi
0x620D34: call    eax
0x620D36: test    al, al
0x620D38: jz      loc_620DFA
0x620D3E: mov     ecx, [esi+3Ch]
0x620D41: mov     edx, [ecx]
0x620D43: mov     eax, [edx+164h]
0x620D49: push    ebx; slot
0x620D4A: call    eax
0x620D4C: mov     ecx, eax; this
0x620D4E: call    ActorAnimData_GetSlotActionState; Reads the per-slot action/state dword at ActorAnimData +0x48 + 4*normalizedSlot. Native aliases slot 5 to slot 0 and slot 6 to slot 3.
0x620D53: cmp     eax, 2
0x620D56: jnz     loc_620E43
0x620D5C: mov     ecx, [esi+3Ch]
0x620D5F: mov     edx, [ecx]
0x620D61: mov     eax, [edx+25Ch]
0x620D67: call    eax
0x620D69: test    al, al
0x620D6B: jnz     loc_620E43
0x620D71: mov     ecx, esi
0x620D73: call    CombatController_GetCurrentTarget
0x620D78: test    eax, eax
0x620D7A: jz      short loc_620D98
0x620D7C: mov     ecx, esi
0x620D7E: call    CombatController_GetCurrentTarget
0x620D83: mov     ecx, eax
0x620D85: call    sub_5E05B0; Checks process movement flags low nibble via vfunc +0x2C0. Player input uses this alongside swimming/sneaking skill progression; useful as a broad movement-mode guard.
0x620D8A: neg     al
0x620D8C: sbb     eax, eax
0x620D8E: and     eax, 0FFFFFFD3h
0x620D91: add     eax, 32h ; '2'
0x620D94: mov     edi, eax
0x620D96: jmp     short loc_620D9A
0x620D98: xor     edi, edi
0x620D9A: cmp     byte ptr [esi+17Eh], 0
0x620DA1: jz      short loc_620DB1
0x620DA3: cmp     byte ptr [esi+159h], 0
0x620DAA: setz    al
0x620DAD: test    al, al
0x620DAF: jnz     short loc_620DF3
0x620DB1: push    0; Seed
0x620DB3: call    Game_RandomLargeInteger; Engine RNG: optional explicit seed, otherwise lazy time seed once, then return MSVC rand() in [0,32767]. FaceGen consumes three separate endpoint-inclusive draws for age, relative sex morph, and hair length.
0x620DB8: cdq
0x620DB9: mov     ecx, 64h ; 'd'
0x620DBE: idiv    ecx
0x620DC0: add     esp, 4
0x620DC3: cmp     edx, edi
0x620DC5: jge     short loc_620DD9
0x620DC7: cmp     byte ptr [esi+159h], 0
0x620DCE: jnz     short loc_620DD9
0x620DD0: cmp     byte ptr [esi+158h], 0
0x620DD7: jnz     short loc_620DF3
0x620DD9: mov     ecx, [esi+3Ch]
0x620DDC: mov     edx, [ecx]
0x620DDE: mov     eax, [edx+164h]
0x620DE4: push    ebx; state
0x620DE5: call    eax
0x620DE7: mov     ecx, eax; this
0x620DE9: call    ActorAnimData_SetUpdateState; Oblivion ActorAnimData update-control setter: stores one byte at +0x90. Observed callers write state 3 for attack/action synchronization and state 5 from Cmd_SkipAnim. Do not infer KF unloading or map mutation from this setter.
0x620DEE: pop     edi
0x620DEF: pop     ebx
0x620DF0: pop     esi
0x620DF1: pop     ecx
0x620DF2: retn
0x620DF3: mov     byte ptr [esi+17Eh], 0
0x620DFA: mov     ecx, [esi+180h]
0x620E00: fldz
0x620E02: mov     edi, [esi+3Ch]
0x620E05: fstp    [esp+10h+var_4]
0x620E09: push    ecx
0x620E0A: lea     edx, [esp+14h+var_4]
0x620E0E: push    edx
0x620E0F: mov     ecx, esi
0x620E11: call    CombatController_GetCurrentTarget
0x620E16: push    eax
0x620E17: push    edi
0x620E18: call    Actor_CalculateAimAnglesToTarget; Computes aim pitch/yaw to target. In ranged weapon/spell modes uses projectile speed/gravity and motion lead; writes pitch through out pointer and returns yaw normalized to roughly [-pi,pi].
0x620E1D: fstp    st
0x620E1F: mov     esi, [esi+3Ch]
0x620E22: add     esp, 10h
0x620E25: mov     ecx, esi; this
0x620E27: call    Actor_GetAimPitch; Returns Actor rotation X as the native aim-pitch value used by projectile launch, impact, input, dialogue-camera, and magic-projectile paths.
0x620E2C: fadd    [esp+10h+var_4]
0x620E30: push    ecx
0x620E31: mov     ecx, esi; int
0x620E33: fstp    [esp+14h+var_4]
0x620E37: fld     [esp+14h+var_4]
0x620E3B: fstp    [esp+14h+var_14]; float
0x620E3E: call    sub_65A650
0x620E43: pop     edi
0x620E44: pop     ebx
0x620E45: pop     esi
0x620E46: pop     ecx
0x620E47: retn
