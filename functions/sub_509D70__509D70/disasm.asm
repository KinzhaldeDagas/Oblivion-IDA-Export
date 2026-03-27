0x509D70: push    ebx
0x509D71: mov     ebx, [esp+4+arg_8]
0x509D75: test    ebx, ebx
0x509D77: jz      loc_50A04C
0x509D7D: mov     eax, [ebx]
0x509D7F: mov     edx, [eax+164h]
0x509D85: mov     ecx, ebx
0x509D87: call    edx
0x509D89: test    eax, eax
0x509D8B: jz      loc_50A04C
0x509D91: mov     eax, [ebx]
0x509D93: mov     edx, [eax+190h]
0x509D99: mov     ecx, ebx
0x509D9B: call    edx
0x509D9D: test    al, al
0x509D9F: jz      loc_50A04C
0x509DA5: push    esi
0x509DA6: push    edi
0x509DA7: push    0; int
0x509DA9: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x509DAE: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x509DB3: push    0; int
0x509DB5: push    ebx; void *
0x509DB6: call    OblivionDynamicCast
0x509DBB: mov     esi, eax
0x509DBD: add     esp, 14h
0x509DC0: test    esi, esi
0x509DC2: jz      loc_509F52
0x509DC8: push    offset aActorVariables; "--- Actor Variables -------------------"...
0x509DCD: call    Interface_ConsolePrint
0x509DD2: add     esp, 4
0x509DD5: mov     ecx, esi; this
0x509DD7: call    Actor__GetProcessLevel
0x509DDC: cmp     eax, 0FFFFFFFFh
0x509DDF: jz      short loc_509DFD
0x509DE1: mov     ecx, esi; this
0x509DE3: call    Actor__GetProcessLevel
0x509DE8: mov     eax, ds:0B14998h[eax*4]
0x509DEF: push    eax
0x509DF0: push    offset aProcessLevelS; "Process Level: %s"
0x509DF5: call    Interface_ConsolePrint
0x509DFA: add     esp, 8
0x509DFD: mov     edi, [esi+58h]
0x509E00: mov     edx, [edi]
0x509E02: mov     eax, [edx+304h]
0x509E08: mov     ecx, edi
0x509E0A: call    eax
0x509E0C: mov     edx, [edi]
0x509E0E: movzx   ecx, al
0x509E11: mov     eax, [edx+2FCh]
0x509E17: push    ecx
0x509E18: mov     ecx, edi
0x509E1A: call    eax
0x509E1C: movzx   ecx, al
0x509E1F: push    ecx
0x509E20: push    offset aWantsWeaponDra; "Wants Weapon Drawn %d, Weapon Drawn %d"
0x509E25: call    Interface_ConsolePrint
0x509E2A: add     esp, 0Ch
0x509E2D: mov     ecx, esi
0x509E2F: call    Actor_GetCurrentAction
0x509E34: cmp     eax, 0FFFFFFFFh
0x509E37: jz      short loc_509E55
0x509E39: mov     ecx, esi
0x509E3B: call    Actor_GetCurrentAction
0x509E40: mov     edx, ds:0B14C80h[eax*4]
0x509E47: push    edx
0x509E48: push    offset aAnimationActio; "Animation Action: %s"
0x509E4D: call    Interface_ConsolePrint
0x509E52: add     esp, 8
0x509E55: mov     ecx, esi; this
0x509E57: call    ?GetAnonymousScheduleGroup@SchedulerBase@details@Concurrency@@QAEPAVScheduleGroupBase@23@XZ; Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup(void)
0x509E5C: mov     eax, ds:0B09EF8h[eax*4]
0x509E63: push    eax
0x509E64: push    offset aLifeStateS; "Life State: %s"
0x509E69: call    Interface_ConsolePrint
0x509E6E: mov     ecx, [esi+58h]
0x509E71: mov     edx, [ecx]
0x509E73: mov     eax, [edx+36Ch]
0x509E79: add     esp, 8
0x509E7C: call    eax
0x509E7E: mov     ecx, ds:0B09F10h[eax*4]
0x509E85: push    ecx
0x509E86: push    offset aSitSleepStateS; "Sit/Sleep State: %s"
0x509E8B: call    Interface_ConsolePrint
0x509E90: mov     ecx, [esi+58h]
0x509E93: mov     edx, [ecx]
0x509E95: mov     eax, [edx+2E4h]
0x509E9B: add     esp, 8
0x509E9E: call    eax
0x509EA0: mov     ecx, ds:0B09F3Ch[eax*4]
0x509EA7: push    ecx
0x509EA8: push    offset aKnockStateS; "Knock State: %s"
0x509EAD: call    Interface_ConsolePrint
0x509EB2: mov     edx, [esi]
0x509EB4: mov     eax, [edx+278h]
0x509EBA: add     esp, 8
0x509EBD: mov     ecx, esi
0x509EBF: call    eax
0x509EC1: test    al, al
0x509EC3: mov     eax, offset off_A3DAE8
0x509EC8: jnz     short loc_509ECF
0x509ECA: mov     eax, offset aNo_1; "No"
0x509ECF: push    eax
0x509ED0: push    offset aHasRagdollS; "Has RagDoll: %s"
0x509ED5: call    Interface_ConsolePrint
0x509EDA: mov     edx, [esi]
0x509EDC: mov     eax, [edx+334h]
0x509EE2: add     esp, 8
0x509EE5: push    1
0x509EE7: mov     ecx, esi
0x509EE9: call    eax
0x509EEB: test    al, al
0x509EED: jz      short loc_509F20
0x509EEF: mov     edx, [esi]
0x509EF1: mov     eax, [edx+338h]
0x509EF7: mov     ecx, esi
0x509EF9: call    eax
0x509EFB: mov     eax, [eax+0Ch]
0x509EFE: mov     edx, [esi]
0x509F00: push    eax
0x509F01: mov     eax, [edx+338h]
0x509F07: mov     ecx, esi
0x509F09: call    eax
0x509F0B: mov     ecx, eax; this
0x509F0D: call    TESObjectREFR_GetName
0x509F12: push    eax
0x509F13: push    offset aInCombatWithS0; "In Combat with \"%s\" (%08x)"
0x509F18: call    Interface_ConsolePrint
0x509F1D: add     esp, 0Ch
0x509F20: mov     ecx, esi
0x509F22: call    sub_5E2E00
0x509F27: test    eax, eax
0x509F29: jz      short loc_509F52
0x509F2B: mov     ecx, esi
0x509F2D: call    sub_5E2E00
0x509F32: mov     eax, [eax+0Ch]
0x509F35: push    eax
0x509F36: mov     ecx, esi
0x509F38: call    sub_5E2E00
0x509F3D: mov     ecx, eax; this
0x509F3F: call    TESObjectREFR_GetName
0x509F44: push    eax
0x509F45: push    offset aCurrentPackage; "Current package target \"%s\" (%08x)"
0x509F4A: call    Interface_ConsolePrint
0x509F4F: add     esp, 0Ch
0x509F52: mov     edx, [ebx]
0x509F54: mov     eax, [edx+164h]
0x509F5A: mov     ecx, ebx
0x509F5C: call    eax
0x509F5E: mov     ebx, eax
0x509F60: test    ebx, ebx
0x509F62: jz      loc_50A046
0x509F68: push    offset aAnimation; "--- Animation -------------------------"...
0x509F6D: call    Interface_ConsolePrint
0x509F72: add     esp, 4
0x509F75: mov     ecx, ebx
0x509F77: call    sub_4712B0
0x509F7C: push    eax
0x509F7D: push    offset aAnimsLoadingD; "Anims Loading: %d"
0x509F82: call    Interface_ConsolePrint
0x509F87: add     esp, 8
0x509F8A: xor     edi, edi
0x509F8C: lea     esp, [esp+0]
0x509F90: push    edi
0x509F91: mov     ecx, ebx
0x509F93: call    sub_4706E0
0x509F98: test    eax, eax
0x509F9A: jz      short loc_509FF2
0x509F9C: push    edi
0x509F9D: mov     ecx, ebx
0x509F9F: call    ActorAnimData_GetAnimGroupFromField8Value
0x509FA4: movzx   esi, ax
0x509FA7: push    esi
0x509FA8: call    sub_51AA00
0x509FAD: lea     ecx, [eax+eax*8]
0x509FB0: mov     edx, ds:0B102E0h[ecx*4]
0x509FB7: add     esp, 4
0x509FBA: push    edx
0x509FBB: push    esi
0x509FBC: call    sub_51A9E0
0x509FC1: mov     eax, ds:0B102C8h[eax*4]
0x509FC8: add     esp, 4
0x509FCB: push    eax
0x509FCC: push    esi
0x509FCD: call    sub_51A9D0
0x509FD2: mov     ecx, ds:0B102B8h[eax*4]
0x509FD9: mov     edx, ds:0B108ECh[edi*4]
0x509FE0: add     esp, 4
0x509FE3: push    ecx
0x509FE4: push    edx
0x509FE5: push    offset aSSSS; "%s -> %s/%s/%s"
0x509FEA: call    Interface_ConsolePrint
0x509FEF: add     esp, 14h
0x509FF2: add     edi, 1
0x509FF5: cmp     edi, 5
0x509FF8: jl      short loc_509F90
0x509FFA: mov     eax, [ebx+0CCh]
0x50A000: test    eax, eax
0x50A002: jz      short loc_50A021
0x50A004: mov     eax, [eax+24h]
0x50A007: mov     edx, [eax]
0x50A009: mov     ecx, eax
0x50A00B: mov     eax, [edx+0D4h]
0x50A011: call    eax
0x50A013: push    eax
0x50A014: push    offset aIdleanimS; "IdleAnim: %s"
0x50A019: call    Interface_ConsolePrint
0x50A01E: add     esp, 8
0x50A021: mov     ebx, [ebx+0D0h]
0x50A027: test    ebx, ebx
0x50A029: jz      short loc_50A046
0x50A02B: mov     ecx, [ebx+24h]
0x50A02E: mov     edx, [ecx]
0x50A030: mov     eax, [edx+0D4h]
0x50A036: call    eax
0x50A038: push    eax
0x50A039: push    offset aIdleanimQueued; "IdleAnim Queued: %s"
0x50A03E: call    Interface_ConsolePrint
0x50A043: add     esp, 8
0x50A046: pop     edi
0x50A047: pop     esi
0x50A048: mov     al, 1
0x50A04A: pop     ebx
0x50A04B: retn
0x50A04C: mov     al, 1
0x50A04E: pop     ebx
0x50A04F: retn
