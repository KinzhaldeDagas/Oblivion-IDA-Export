0x50CBC0: push    ecx
0x50CBC1: push    esi
0x50CBC2: push    edi
0x50CBC3: mov     edi, [esp+0Ch+a4]
0x50CBC7: push    0; int
0x50CBC9: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50CBCE: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50CBD3: push    0; int
0x50CBD5: push    edi; void *
0x50CBD6: mov     dword ptr [esp+20h+var_4], 0
0x50CBDE: call    OblivionDynamicCast
0x50CBE3: add     esp, 14h
0x50CBE6: test    eax, eax
0x50CBE8: jz      loc_50CC73
0x50CBEE: mov     edx, [eax]
0x50CBF0: push    0; int
0x50CBF2: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x50CBF7: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x50CBFC: mov     ecx, eax
0x50CBFE: mov     eax, [edx+170h]
0x50CC04: push    0; int
0x50CC06: call    eax
0x50CC08: push    eax; void *
0x50CC09: call    OblivionDynamicCast
0x50CC0E: mov     esi, eax
0x50CC10: add     esp, 14h
0x50CC13: test    esi, esi
0x50CC15: jz      short loc_50CC58
0x50CC17: mov     edx, [esp+0Ch+l]
0x50CC1B: mov     eax, [esp+0Ch+arg_10]
0x50CC1F: lea     ecx, [esp+0Ch+var_4]
0x50CC23: push    ecx; UInt16
0x50CC24: mov     ecx, [esp+10h+arg_C]
0x50CC28: push    edx; l
0x50CC29: mov     edx, [esp+14h+a3]
0x50CC2D: push    eax; a6
0x50CC2E: mov     eax, [esp+18h+arg_4]
0x50CC32: push    ecx; a5
0x50CC33: mov     ecx, [esp+1Ch+a1]
0x50CC37: push    edi; a4
0x50CC38: push    edx; a3
0x50CC39: push    eax; a2
0x50CC3A: push    ecx; a1
0x50CC3B: call    Script_ExtractArgs
0x50CC40: add     esp, 20h
0x50CC43: test    al, al
0x50CC45: jnz     short loc_50CC4B
0x50CC47: pop     edi
0x50CC48: pop     esi
0x50CC49: pop     ecx
0x50CC4A: retn
0x50CC4B: mov     edx, dword ptr [esp+0Ch+var_4]
0x50CC4F: push    edx
0x50CC50: lea     ecx, [esi+24h]
0x50CC53: call    TESActorBaseData_SetBarterGold
0x50CC58: cmp     byte ptr ds:0B361ACh, 0
0x50CC5F: jz      short loc_50CC73
0x50CC61: movzx   eax, word ptr [esi+30h]
0x50CC65: push    eax
0x50CC66: push    offset aActorSBaseBart; " Actor's base barter gold is  %d "
0x50CC6B: call    Interface_ConsolePrint
0x50CC70: add     esp, 8
0x50CC73: pop     edi
0x50CC74: mov     al, 1
0x50CC76: pop     esi
0x50CC77: pop     ecx
0x50CC78: retn
