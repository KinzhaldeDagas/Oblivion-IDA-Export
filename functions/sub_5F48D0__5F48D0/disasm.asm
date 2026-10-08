0x5F48D0: push    esi; Player attack-animation admission uses Oblivion behavior and preserves a compiler-specific register/FPU ABI. Bow admission requires equipped AMMO and an AttackBow group with the required Start/Attach/Hold/Release/End note contract. Rejects a new bow attack while action 5 (AttackBowArrowAttached) remains at phase <=3; an accepted bow group commits action 4 (AttackBow). This path does not automatically reload: later attack input must admit another AttackBow sequence.
0x5F48D1: push    1Ah
0x5F48D3: mov     esi, ecx
0x5F48D5: call    Actor_GetBaseCalcAVi
0x5F48DA: push    eax; skillValue
0x5F48DB: call    Calc_MasteryFromSkill; Map a base skill value to Oblivion's five mastery tiers using iSkillApprenticeMin=25, iSkillJourneymanMin=50, iSkillExpertMin=75, and iSkillMasterMin=100.
0x5F48E0: add     esp, 4
0x5F48E3: test    eax, eax
0x5F48E5: jnz     short loc_5F48F8
0x5F48E7: mov     ecx, esi
0x5F48E9: call    MobileObject_IsJumpSuppressedByFallAnimOrInAir; Returns true for swimming/falling style animation groups 0x28..0x2A, or if current character state id == 2 InAir. Player jump path uses this to suppress normal jump handling.
0x5F48EE: test    al, al
0x5F48F0: jz      short loc_5F48F8
0x5F48F2: xor     al, al
0x5F48F4: pop     esi
0x5F48F5: retn    4
0x5F48F8: cmp     dword ptr [esi+58h], 0
0x5F48FC: jz      short loc_5F48F2
0x5F48FE: mov     ecx, [esi+58h]
0x5F4901: mov     eax, [ecx]
0x5F4903: mov     edx, [eax+304h]
0x5F4909: call    edx
0x5F490B: test    al, al
0x5F490D: jz      short loc_5F48F2
0x5F490F: push    edi
0x5F4910: push    esi
0x5F4911: push    0Ch
0x5F4913: mov     ecx, (offset qword_B3BB2C+284h)
0x5F4918: call    sub_67CF50
0x5F491D: test    eax, eax
0x5F491F: mov     edi, eax
0x5F4921: jz      short loc_5F4939
0x5F4923: mov     edx, [eax+4]
0x5F4926: test    edx, edx
0x5F4928: jnz     short loc_5F492E
0x5F492A: cmp     [eax], edx
0x5F492C: jz      short loc_5F4939
0x5F492E: mov     ecx, [eax]
0x5F4930: mov     eax, edx
0x5F4932: test    eax, eax
0x5F4934: mov     [ecx+4], esi
0x5F4937: jnz     short loc_5F4923
0x5F4939: mov     ecx, edi
0x5F493B: call    BSSimpleList_Clear; Verified generic BSSimpleList_Clear frees every successor node and zeros the root data pointer. It does not invoke element destructors; ActiveEffect::~ActiveEffect first detaches hit-effect objects, then uses this helper and frees the head.
0x5F4940: push    edi
0x5F4941: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x5F4946: mov     ecx, [esi+58h]
0x5F4949: mov     eax, [ecx]
0x5F494B: mov     edx, [eax+2DCh]
0x5F4951: add     esp, 4
0x5F4954: call    edx
0x5F4956: test    al, al
0x5F4958: jz      short loc_5F49C0
0x5F495A: cmp     dword ptr [esi+58h], 0
0x5F495E: jz      short loc_5F499C
0x5F4960: mov     ecx, [esi+58h]
0x5F4963: mov     eax, [ecx]
0x5F4965: mov     edx, [eax+2D0h]
0x5F496B: call    edx
0x5F496D: cmp     eax, 5
0x5F4970: jnz     short loc_5F499C; Attack admission specially rejects only action 5 while its slot-3 phase is <= Release. Action 3 is not rejected here and may be replaced by a new accepted attack.
0x5F4972: mov     eax, [esi]
0x5F4974: mov     edx, [eax+164h]
0x5F497A: mov     ecx, esi
0x5F497C: call    edx
0x5F497E: test    eax, eax
0x5F4980: jz      short loc_5F499C
0x5F4982: mov     eax, [esi]
0x5F4984: mov     edx, [eax+164h]
0x5F498A: push    3; slot
0x5F498C: mov     ecx, esi
0x5F498E: call    edx
0x5F4990: mov     ecx, eax; this
0x5F4992: call    ActorAnimData_GetSlotActionState; Reads the per-slot action/state dword at ActorAnimData +0x48 + 4*normalizedSlot. Native aliases slot 5 to slot 0 and slot 6 to slot 3.
0x5F4997: cmp     eax, 3
0x5F499A: jle     short loc_5F49C0
0x5F499C: mov     ecx, [esi+58h]
0x5F499F: mov     eax, [ecx]
0x5F49A1: mov     edx, [eax+138h]
0x5F49A7: call    edx
0x5F49A9: test    al, al
0x5F49AB: jz      short loc_5F49C7
0x5F49AD: mov     ecx, [esi+58h]
0x5F49B0: mov     eax, [ecx]
0x5F49B2: mov     edx, [eax+0F4h]
0x5F49B8: push    1
0x5F49BA: call    edx; Bow attack startup requires GetEquippedAmmoData(process, true) to return non-null before the attack animation is allowed to proceed.
0x5F49BC: test    eax, eax
0x5F49BE: jnz     short loc_5F49C7
0x5F49C0: pop     edi
0x5F49C1: xor     al, al; A later bow-class attack is rejected when GetEquippedAmmoData(process, true) returns NULL. The final-shot setter therefore closes the next-attack admission path; this is not a reload animation transition.
0x5F49C3: pop     esi
0x5F49C4: retn    4
0x5F49C7: mov     eax, [esi]
0x5F49C9: mov     edx, [eax+164h]
0x5F49CF: push    ebp
0x5F49D0: mov     ecx, esi
0x5F49D2: call    edx
0x5F49D4: mov     ebp, eax
0x5F49D6: test    ebp, ebp
0x5F49D8: jz      loc_5F4AD2
0x5F49DE: mov     eax, [esi]
0x5F49E0: mov     edx, [eax+284h]
0x5F49E6: push    2Fh ; '/'
0x5F49E8: mov     ecx, esi
0x5F49EA: call    edx
0x5F49EC: test    eax, eax
0x5F49EE: jle     short loc_5F49FF
0x5F49F0: push    0; casterFilterOrNull
0x5F49F2: push    49564E49h; effectCode
0x5F49F7: lea     ecx, [esi+68h]; this
0x5F49FA: call    MagicTarget_RemoveActiveEffectsByCode; Ordinary attack-start path removes all 'INVI' effects before starting the attack. The bow Release tail repeats this at 0x5FD4F2, catching invisibility regained between attack start and release or unusual entry paths.
0x5F49FF: mov     ecx, [esi+58h]
0x5F4A02: mov     eax, [ecx]
0x5F4A04: mov     edx, [eax+0F0h]
0x5F4A0A: push    1
0x5F4A0C: call    edx
0x5F4A0E: test    eax, eax
0x5F4A10: jz      short loc_5F4A35
0x5F4A12: mov     ecx, [esi+58h]
0x5F4A15: mov     eax, [ecx]
0x5F4A17: mov     edx, [eax+0ECh]
0x5F4A1D: push    1
0x5F4A1F: call    edx
0x5F4A21: test    eax, eax
0x5F4A23: jnz     short loc_5F4A35
0x5F4A25: mov     edi, [esp+0Ch+groupID]
0x5F4A29: cmp     edi, 14h
0x5F4A2C: jnz     short loc_5F4A39
0x5F4A2E: mov     edi, 15h
0x5F4A33: jmp     short loc_5F4A39
0x5F4A35: mov     edi, [esp+0Ch+groupID]
0x5F4A39: mov     ecx, [esi+58h]
0x5F4A3C: mov     eax, [ecx]
0x5F4A3E: mov     edx, [eax+13Ch]
0x5F4A44: call    edx
0x5F4A46: test    al, al
0x5F4A48: jz      short loc_5F4A66
0x5F4A4A: mov     ecx, [esi+58h]
0x5F4A4D: mov     eax, [ecx]
0x5F4A4F: mov     edx, [eax+0ECh]
0x5F4A55: push    1
0x5F4A57: mov     edi, 15h
0x5F4A5C: call    edx
0x5F4A5E: push    eax
0x5F4A5F: mov     ecx, esi
0x5F4A61: call    sub_5ED5A0
0x5F4A66: push    0; forceWeaponPrefix
0x5F4A68: push    0; weaponEntryDataArg
0x5F4A6A: push    edi; groupID
0x5F4A6B: mov     ecx, esi; this
0x5F4A6D: call    Actor_LoadAnimGroup_; Load requested animation group (0x13 from normal bow input = AttackBow).
0x5F4A72: movzx   edi, ax
0x5F4A75: push    edi
0x5F4A76: call    AnimGroup_UsesAttackOrCastNoteTemplate; Returns true when the encoded key is not group 0xFF and the fixed Oblivion group record's note-template class is 4, 5, 6, or 7. Those classes cover AttackLeft/Right, power attacks, BlockAttack, AttackBow, and cast groups. This is a fixed-table classifier, not dynamic group registration.
0x5F4A7B: add     esp, 4
0x5F4A7E: test    al, al
0x5F4A80: jz      short loc_5F4AD2
0x5F4A82: push    ebx; sequence
0x5F4A83: push    0FFFFFFFFh; repeatOrAction
0x5F4A85: push    1; playImmediately
0x5F4A87: push    edi; encodedKey
0x5F4A88: mov     ecx, ebp; this
0x5F4A8A: call    ActorAnimData_PlayAnimGroup; Play accepted attack group in ActorAnimData.
0x5F4A8F: mov     ebx, [esi+58h]
0x5F4A92: push    3; slotSelector
0x5F4A94: mov     ecx, ebp; this
0x5F4A96: call    ActorAnimData_GetNormalizedSequenceSlot; ActorAnimData sequence-slot normalizer. Encoded slot 5 maps to base slot 0 and encoded slot 6 maps to base slot 3; otherwise returns animSequences[slot].
0x5F4A9B: push    eax
0x5F4A9C: mov     eax, [ebx]
0x5F4A9E: mov     edx, [eax+138h]
0x5F4AA4: mov     ecx, ebx
0x5F4AA6: call    edx
0x5F4AA8: neg     al
0x5F4AAA: mov     ecx, esi; this
0x5F4AAC: sbb     eax, eax
0x5F4AAE: and     eax, 2
0x5F4AB1: add     eax, 2
0x5F4AB4: push    eax; action
0x5F4AB5: call    Actor_SetCurrentActionWithBowVisualCleanup; Accepted attack overwrites the prior process action with 4 for bow-class slot 3; this is the observed normal re-entry from follow-through.
0x5F4ABA: mov     eax, [esi]
0x5F4ABC: mov     edx, [eax+3A4h]
0x5F4AC2: push    1
0x5F4AC4: push    edi
0x5F4AC5: mov     ecx, esi
0x5F4AC7: call    edx
0x5F4AC9: pop     ebx
0x5F4ACA: pop     ebp
0x5F4ACB: pop     edi
0x5F4ACC: mov     al, 1
0x5F4ACE: pop     esi
0x5F4ACF: retn    4
0x5F4AD2: pop     ebp
0x5F4AD3: pop     edi
0x5F4AD4: xor     al, al
0x5F4AD6: pop     esi
0x5F4AD7: retn    4
