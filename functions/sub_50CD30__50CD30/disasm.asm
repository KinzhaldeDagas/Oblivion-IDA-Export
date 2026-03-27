0x50CD30: sub     esp, 20
0x50CD33: push    ebx
0x50CD34: mov     ebx, [esp+18h+a4]
0x50CD38: push    esi
0x50CD39: push    edi
0x50CD3A: xor     esi, esi
0x50CD3C: push    esi; int
0x50CD3D: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x50CD42: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x50CD47: or      eax, 0FFFFFFFFh
0x50CD4A: push    esi; int
0x50CD4B: push    ebx; void *
0x50CD4C: mov     dword ptr [esp+34h+var_14], esi
0x50CD50: mov     [esp+34h+var_10], esi
0x50CD54: mov     [esp+34h+var_C], eax
0x50CD58: mov     [esp+34h+var_8], eax
0x50CD5C: call    OblivionDynamicCast
0x50CD61: mov     edi, eax
0x50CD63: add     esp, 14h
0x50CD66: cmp     edi, esi
0x50CD68: jz      loc_50CFA2
0x50CD6E: push    esi; a2
0x50CD6F: mov     ecx, edi; this
0x50CD71: call    Actor_GetActorBaseForm
0x50CD76: mov     [esp+20h+var_4], eax
0x50CD7A: lea     eax, [esp+20h+var_8]
0x50CD7E: push    eax
0x50CD7F: lea     ecx, [esp+24h+var_C]
0x50CD83: push    ecx
0x50CD84: mov     ecx, [esp+28h+l]
0x50CD88: lea     edx, [esp+28h+var_10]
0x50CD8C: push    edx
0x50CD8D: mov     edx, [esp+2Ch+arg_10]
0x50CD91: lea     eax, [esp+2Ch+var_14]
0x50CD95: push    eax; UInt16
0x50CD96: mov     eax, [esp+30h+arg_C]
0x50CD9A: push    ecx; l
0x50CD9B: mov     ecx, [esp+34h+a3]
0x50CD9F: push    edx; a6
0x50CDA0: mov     edx, [esp+38h+arg_4]
0x50CDA4: push    eax; a5
0x50CDA5: mov     eax, [esp+3Ch+a1]
0x50CDA9: push    ebx; a4
0x50CDAA: push    ecx; a3
0x50CDAB: push    edx; a2
0x50CDAC: push    eax; a1
0x50CDAD: call    Script_ExtractArgs
0x50CDB2: add     esp, 2Ch
0x50CDB5: test    al, al
0x50CDB7: jnz     short loc_50CDC0
0x50CDB9: pop     edi
0x50CDBA: pop     esi
0x50CDBB: pop     ebx
0x50CDBC: add     esp, 14h
0x50CDBF: retn
0x50CDC0: mov     ecx, ds:0B333C4h
0x50CDC6: push    ebp
0x50CDC7: xor     ebx, ebx
0x50CDC9: xor     ebp, ebp
0x50CDCB: cmp     edi, ecx
0x50CDCD: jnz     short loc_50CDFB
0x50CDCF: call    Player_GetCurrentMagicItem
0x50CDD4: mov     ecx, ds:0B333C4h
0x50CDDA: mov     ebx, eax
0x50CDDC: call    sub_65D4C0
0x50CDE1: mov     ecx, ds:0B333C4h
0x50CDE7: push    esi
0x50CDE8: mov     ebp, eax
0x50CDEA: call    PlayerCharacter_SetCurrentMagicItem
0x50CDEF: mov     ecx, ds:0B333C4h
0x50CDF5: push    esi
0x50CDF6: call    sub_664850
0x50CDFB: mov     ecx, dword ptr [esp+24h+var_14]
0x50CDFF: mov     esi, [esp+24h+var_4]
0x50CE03: add     esi, 24h ; '$'
0x50CE06: push    ecx
0x50CE07: mov     ecx, esi
0x50CE09: call    TESActorBaseData_SetLevel
0x50CE0E: mov     ecx, ds:0B333C4h
0x50CE14: cmp     edi, ecx
0x50CE16: jnz     short loc_50CE32
0x50CE18: test    ebx, ebx
0x50CE1A: jz      short loc_50CE22
0x50CE1C: push    ebx
0x50CE1D: call    PlayerCharacter_SetCurrentMagicItem
0x50CE22: test    ebp, ebp
0x50CE24: jz      short loc_50CE32
0x50CE26: mov     ecx, ds:0B333C4h
0x50CE2C: push    ebp
0x50CE2D: call    sub_664850
0x50CE32: cmp     [esp+24h+var_10], 0
0x50CE37: mov     ebx, 80h ; '€'
0x50CE3C: pop     ebp
0x50CE3D: jz      short loc_50CE58
0x50CE3F: mov     edx, [esi]
0x50CE41: mov     eax, [edx+50h]
0x50CE44: or      [esi+4], ebx
0x50CE47: push    10h
0x50CE49: mov     ecx, esi
0x50CE4B: call    eax
0x50CE4D: mov     edx, [esi]
0x50CE4F: mov     eax, [edx+50h]
0x50CE52: push    10h
0x50CE54: mov     ecx, esi
0x50CE56: call    eax
0x50CE58: cmp     edi, ds:0B333C4h
0x50CE5E: jz      loc_50CFA2
0x50CE64: mov     eax, [esp+20h+var_C]
0x50CE68: cmp     eax, 0FFFFFFFFh
0x50CE6B: jz      short loc_50CE95
0x50CE6D: mov     edx, [esi]
0x50CE6F: mov     [esi+10h], ax
0x50CE73: mov     eax, [edx+50h]
0x50CE76: push    10h
0x50CE78: mov     ecx, esi
0x50CE7A: call    eax
0x50CE7C: mov     edx, [esi]
0x50CE7E: mov     eax, [edx+50h]
0x50CE81: or      [esi+4], ebx
0x50CE84: push    10h
0x50CE86: mov     ecx, esi
0x50CE88: call    eax
0x50CE8A: mov     edx, [esi]
0x50CE8C: mov     eax, [edx+50h]
0x50CE8F: push    10h
0x50CE91: mov     ecx, esi
0x50CE93: call    eax
0x50CE95: mov     eax, [esp+20h+var_8]
0x50CE99: cmp     eax, 0FFFFFFFFh
0x50CE9C: jz      short loc_50CEC6
0x50CE9E: mov     edx, [esi]
0x50CEA0: mov     [esi+12h], ax
0x50CEA4: mov     eax, [edx+50h]
0x50CEA7: push    10h
0x50CEA9: mov     ecx, esi
0x50CEAB: call    eax
0x50CEAD: mov     edx, [esi]
0x50CEAF: mov     eax, [edx+50h]
0x50CEB2: or      [esi+4], ebx
0x50CEB5: push    10h
0x50CEB7: mov     ecx, esi
0x50CEB9: call    eax
0x50CEBB: mov     edx, [esi]
0x50CEBD: mov     eax, [edx+50h]
0x50CEC0: push    10h
0x50CEC2: mov     ecx, esi
0x50CEC4: call    eax
0x50CEC6: mov     ecx, edi; this
0x50CEC8: call    TESObjectREFR_GetContainer
0x50CECD: push    0; a2
0x50CECF: mov     ecx, edi; this
0x50CED1: mov     ebx, eax
0x50CED3: call    Actor_GetActorBaseForm
0x50CED8: test    eax, eax
0x50CEDA: jz      short loc_50CEE1
0x50CEDC: add     eax, 44h ; 'D'
0x50CEDF: jmp     short loc_50CEE3
0x50CEE1: xor     eax, eax
0x50CEE3: push    eax
0x50CEE4: push    edi; a1
0x50CEE5: call    ContainerExtraData_GetContainerExtraDataForRef
0x50CEEA: add     esp, 8
0x50CEED: test    ebx, ebx
0x50CEEF: mov     esi, eax
0x50CEF1: jz      short loc_50CF67
0x50CEF3: test    esi, esi
0x50CEF5: jz      short loc_50CF67
0x50CEF7: push    0
0x50CEF9: mov     ecx, esi
0x50CEFB: call    ContainerExtraData_UnequipAll
0x50CF00: mov     ecx, esi
0x50CF02: call    sub_48DF80
0x50CF07: mov     ecx, esi
0x50CF09: call    ContainerExtraData_EvaluateOwnerLeveledItems
0x50CF0E: mov     ebx, [esp+20h+var_4]
0x50CF12: push    0; int
0x50CF14: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x50CF19: push    offset ??_R0?AVTESActorBase@@@8; struct _s_RTTICompleteObjectLocator *
0x50CF1E: push    0; int
0x50CF20: push    ebx; void *
0x50CF21: call    OblivionDynamicCast
0x50CF26: push    0; int
0x50CF28: push    offset ??_R0?AVTESCreature@@@8; struct TypeDescriptor *
0x50CF2D: push    offset ??_R0?AVTESActorBase@@@8; struct _s_RTTICompleteObjectLocator *
0x50CF32: push    0; int
0x50CF34: push    ebx; void *
0x50CF35: mov     esi, eax
0x50CF37: call    OblivionDynamicCast
0x50CF3C: add     esp, 28h
0x50CF3F: test    esi, esi
0x50CF41: jz      short loc_50CF55
0x50CF43: push    1; char
0x50CF45: push    0; int
0x50CF47: push    1; int
0x50CF49: push    1; int
0x50CF4B: push    edi; int
0x50CF4C: mov     ecx, esi; int
0x50CF4E: call    sub_5227A0
0x50CF53: jmp     short loc_50CF67
0x50CF55: test    eax, eax
0x50CF57: jz      short loc_50CF67
0x50CF59: push    1
0x50CF5B: push    1
0x50CF5D: push    1
0x50CF5F: push    edi
0x50CF60: mov     ecx, eax
0x50CF62: call    sub_51E240
0x50CF67: mov     ecx, edi; this
0x50CF69: call    Actor_IsNPC
0x50CF6E: test    al, al
0x50CF70: jz      short loc_50CFA2
0x50CF72: mov     edx, [edi]
0x50CF74: mov     eax, [edx+170h]
0x50CF7A: push    0; int
0x50CF7C: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x50CF81: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x50CF86: push    0; int
0x50CF88: mov     ecx, edi
0x50CF8A: call    eax
0x50CF8C: push    eax; void *
0x50CF8D: call    OblivionDynamicCast
0x50CF92: add     esp, 14h
0x50CF95: test    eax, eax
0x50CF97: jz      short loc_50CFA2
0x50CF99: push    0
0x50CF9B: mov     ecx, eax
0x50CF9D: call    sub_5222D0
0x50CFA2: pop     edi
0x50CFA3: pop     esi
0x50CFA4: mov     al, 1
0x50CFA6: pop     ebx
0x50CFA7: add     esp, 14h
0x50CFAA: retn
