0x50AB80: sub     esp, 8
0x50AB83: mov     edx, [esp+8+l]
0x50AB87: push    esi
0x50AB88: mov     esi, [esp+0Ch+a4]
0x50AB8C: lea     eax, [esp+0Ch+var_4]
0x50AB90: push    eax
0x50AB91: mov     eax, [esp+10h+arg_10]
0x50AB95: lea     ecx, [esp+10h+var_8]
0x50AB99: push    ecx; UInt16
0x50AB9A: mov     ecx, [esp+14h+arg_C]
0x50AB9E: push    edx; l
0x50AB9F: mov     edx, [esp+18h+a3]
0x50ABA3: push    eax; a6
0x50ABA4: mov     eax, [esp+1Ch+arg_4]
0x50ABA8: push    ecx; a5
0x50ABA9: mov     ecx, [esp+20h+a1]
0x50ABAD: push    esi; a4
0x50ABAE: push    edx; a3
0x50ABAF: push    eax; a2
0x50ABB0: push    ecx; a1
0x50ABB1: mov     dword ptr [esp+30h+var_8], 0
0x50ABB9: mov     [esp+30h+var_4], 0
0x50ABC1: call    Script_ExtractArgs
0x50ABC6: add     esp, 24h
0x50ABC9: test    al, al
0x50ABCB: jnz     short loc_50ABD2
0x50ABCD: pop     esi
0x50ABCE: add     esp, 8
0x50ABD1: retn
0x50ABD2: fldz
0x50ABD4: mov     edx, [esp+0Ch+arg_18]
0x50ABD8: push    0; int
0x50ABDA: fstp    qword ptr [edx]
0x50ABDC: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50ABE1: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50ABE6: push    0; int
0x50ABE8: push    esi; void *
0x50ABE9: call    OblivionDynamicCast
0x50ABEE: mov     esi, eax
0x50ABF0: add     esp, 14h
0x50ABF3: test    esi, esi
0x50ABF5: jz      short loc_50AC2F
0x50ABF7: push    1; a2
0x50ABF9: mov     ecx, esi; this
0x50ABFB: call    Actor_GetActorBaseForm
0x50AC00: cmp     dword ptr [eax+40h], 0
0x50AC04: jnz     short loc_50AC15
0x50AC06: cmp     dword ptr [eax+3Ch], 0
0x50AC0A: jnz     short loc_50AC15
0x50AC0C: push    0; a2
0x50AC0E: mov     ecx, esi; this
0x50AC10: call    Actor_GetActorBaseForm
0x50AC15: test    eax, eax
0x50AC17: jz      short loc_50AC2F
0x50AC19: mov     ecx, dword ptr [esp+0Ch+var_8]
0x50AC1D: test    ecx, ecx
0x50AC1F: jz      short loc_50AC2F
0x50AC21: mov     edx, [esp+0Ch+var_4]
0x50AC25: push    edx
0x50AC26: push    ecx
0x50AC27: lea     ecx, [eax+24h]
0x50AC2A: call    TESActorBaseData_SetFactionRank
0x50AC2F: mov     al, 1
0x50AC31: pop     esi
0x50AC32: add     esp, 8
0x50AC35: retn
