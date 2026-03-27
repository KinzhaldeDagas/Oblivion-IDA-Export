0x491CE0: push    ebp
0x491CE1: mov     ebp, esp
0x491CE3: and     esp, 0FFFFFFF8h
0x491CE6: push    0FFFFFFFFh
0x491CE8: push    offset SEH_491CE0
0x491CED: mov     eax, large fs:0
0x491CF3: push    eax
0x491CF4: sub     esp, 34h
0x491CF7: push    ebx
0x491CF8: push    ebp
0x491CF9: push    esi
0x491CFA: push    edi
0x491CFB: mov     eax, ds:0B30AACh
0x491D00: xor     eax, esp
0x491D02: push    eax
0x491D03: lea     eax, [esp+54h+var_C]
0x491D07: mov     large fs:0, eax
0x491D0D: mov     edi, ecx
0x491D0F: mov     [esp+54h+var_3C], edi
0x491D13: mov     ecx, [edi+4]; this
0x491D16: test    ecx, ecx
0x491D18: jz      short loc_491D21
0x491D1A: call    TESObjectREFR_GetContainer
0x491D1F: jmp     short loc_491D23
0x491D21: xor     eax, eax
0x491D23: add     eax, 8
0x491D26: mov     dword ptr [esp+54h+var_34+4], eax
0x491D2A: jz      loc_492564
0x491D30: jmp     short loc_491D36
0x491D32: mov     eax, dword ptr [esp+54h+var_34+4]
0x491D36: cmp     dword ptr [eax+4], 0
0x491D3A: jnz     short loc_491D45
0x491D3C: cmp     dword ptr [eax], 0
0x491D3F: jz      loc_492564
0x491D45: mov     eax, [eax]
0x491D47: mov     esi, [eax+4]
0x491D4A: push    0; int
0x491D4C: push    offset ??_R0?AVTESLevItem@@@8; struct TypeDescriptor *
0x491D51: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x491D56: mov     eax, esi
0x491D58: push    0; int
0x491D5A: push    eax; void *
0x491D5B: mov     [esp+68h+var_38], esi
0x491D5F: call    OblivionDynamicCast
0x491D64: push    esi
0x491D65: mov     edi, eax
0x491D67: call    sub_4691B0
0x491D6C: add     esp, 18h
0x491D6F: test    esi, esi
0x491D71: jz      loc_49254D
0x491D77: test    edi, edi
0x491D79: jnz     loc_49254D
0x491D7F: test    eax, eax
0x491D81: jz      short loc_491D92
0x491D83: mov     ecx, eax
0x491D85: call    TESBipedModelForm_IsPlayable
0x491D8A: test    al, al
0x491D8C: jz      loc_49254D
0x491D92: mov     ecx, [esp+54h+var_38]
0x491D96: push    0
0x491D98: push    1
0x491D9A: push    ecx
0x491D9B: mov     ecx, [esp+60h+var_3C]
0x491D9F: call    ContainerExtraData_GetEntryForForm
0x491DA4: mov     ebx, eax
0x491DA6: test    ebx, ebx
0x491DA8: mov     [esp+54h+var_40], ebx
0x491DAC: jz      loc_49202A
0x491DB2: mov     eax, [ebx+8]
0x491DB5: push    0; int
0x491DB7: push    offset ??_R0?AVTESHealthForm@@@8; struct TypeDescriptor *
0x491DBC: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x491DC1: push    0; int
0x491DC3: push    eax; void *
0x491DC4: call    OblivionDynamicCast
0x491DC9: mov     ebp, eax
0x491DCB: add     esp, 14h
0x491DCE: test    ebp, ebp
0x491DD0: jz      loc_491E7F
0x491DD6: mov     edi, [ebx]
0x491DD8: test    edi, edi
0x491DDA: jz      loc_491E7F
0x491DE0: mov     esi, [edi]
0x491DE2: test    esi, esi
0x491DE4: jz      loc_491E7F
0x491DEA: mov     ecx, esi
0x491DEC: call    ExtraDataList_GetHealthData
0x491DF1: fcomp   dword ptr ds:0A30634h
0x491DF7: fnstsw  ax
0x491DF9: test    ah, 41h
0x491DFC: jnz     short loc_491E70
0x491DFE: mov     ecx, esi
0x491E00: call    ExtraDataList_GetHealthData
0x491E05: fstp    [esp+54h+var_18]
0x491E09: mov     edx, [ebp+0]
0x491E0C: mov     eax, [edx+10h]
0x491E0F: mov     ecx, ebp
0x491E11: call    eax
0x491E13: test    eax, eax
0x491E15: mov     dword ptr [esp+54h+var_1C], eax
0x491E19: fild    dword ptr [esp+54h+var_1C]
0x491E1D: jge     short loc_491E25
0x491E1F: fadd    dword ptr ds:0A2FC78h
0x491E25: fcomp   [esp+54h+var_18]
0x491E29: fnstsw  ax
0x491E2B: test    ah, 44h
0x491E2E: jp      short loc_491E70
0x491E30: mov     ecx, esi
0x491E32: call    sub_41F610
0x491E37: mov     ecx, esi
0x491E39: call    ExtraDataList_GetExtraCount
0x491E3E: mov     ecx, esi
0x491E40: movsx   ebx, ax
0x491E43: call    sub_41F620
0x491E48: cmp     dword ptr [esi+4], 0
0x491E4C: jnz     short loc_491E68
0x491E4E: push    esi
0x491E4F: mov     ecx, edi
0x491E51: call    BSSimpleList_Remove
0x491E56: mov     edx, [esi]
0x491E58: mov     eax, [edx]
0x491E5A: push    1
0x491E5C: mov     ecx, esi
0x491E5E: call    eax
0x491E60: mov     ecx, [esp+54h+var_40]
0x491E64: mov     edi, [ecx]
0x491E66: jmp     short loc_491E73
0x491E68: push    ebx
0x491E69: mov     ecx, esi
0x491E6B: call    ExtraDataList_SetExtraCount
0x491E70: mov     edi, [edi+4]
0x491E73: test    edi, edi
0x491E75: mov     ebx, [esp+54h+var_40]
0x491E79: jnz     loc_491DE0
0x491E7F: mov     edx, [esp+54h+var_38]
0x491E83: push    edx
0x491E84: call    sub_469980
0x491E89: add     esp, 4
0x491E8C: test    al, al
0x491E8E: jz      short loc_491EDD
0x491E90: mov     eax, [esp+54h+var_3C]
0x491E94: mov     ecx, [eax+4]
0x491E97: cmp     ecx, ds:0B333C4h
0x491E9D: jnz     short loc_491EDD
0x491E9F: mov     esi, [ebx]
0x491EA1: test    esi, esi
0x491EA3: jz      short loc_491EDD
0x491EA5: mov     edi, [esi]
0x491EA7: test    edi, edi
0x491EA9: jz      short loc_491EDD
0x491EAB: mov     eax, [esi+4]
0x491EAE: test    eax, eax
0x491EB0: jz      short loc_491EC7
0x491EB2: mov     edx, [eax+4]
0x491EB5: mov     [esi+4], edx
0x491EB8: mov     ecx, [eax]
0x491EBA: push    eax
0x491EBB: mov     [esi], ecx
0x491EBD: call    FormHeapFree
0x491EC2: add     esp, 4
0x491EC5: jmp     short loc_491ECD
0x491EC7: mov     dword ptr [esi], 0
0x491ECD: test    edi, edi
0x491ECF: jz      short loc_491EA5
0x491ED1: mov     edx, [edi]
0x491ED3: mov     eax, [edx]
0x491ED5: push    1
0x491ED7: mov     ecx, edi
0x491ED9: call    eax
0x491EDB: jmp     short loc_491EA5
0x491EDD: mov     ecx, ebx
0x491EDF: call    sub_484F20
0x491EE4: test    eax, eax
0x491EE6: jz      loc_49202A
0x491EEC: mov     esi, [ebx]
0x491EEE: test    esi, esi
0x491EF0: mov     dword ptr [esp+54h+var_34], esi
0x491EF4: jz      loc_49202A
0x491EFA: lea     ebx, [ebx+0]
0x491F00: mov     ebx, [esi]
0x491F02: test    ebx, ebx
0x491F04: jz      loc_49202A
0x491F0A: mov     ecx, ebx
0x491F0C: call    ExtraDataList_GetExtraScript
0x491F11: test    eax, eax
0x491F13: jz      loc_49201B
0x491F19: mov     edi, [esi+4]
0x491F1C: test    edi, edi
0x491F1E: jz      loc_49201B
0x491F24: mov     eax, [edi]
0x491F26: test    eax, eax
0x491F28: jz      loc_49201B
0x491F2E: cmp     ebx, eax
0x491F30: jnz     loc_492010
0x491F36: mov     eax, [edi+4]
0x491F39: test    eax, eax
0x491F3B: jz      short loc_491F52
0x491F3D: mov     ecx, [eax+4]
0x491F40: mov     [edi+4], ecx
0x491F43: mov     edx, [eax]
0x491F45: push    eax
0x491F46: mov     [edi], edx
0x491F48: call    FormHeapFree
0x491F4D: add     esp, 4
0x491F50: jmp     short loc_491F58
0x491F52: mov     dword ptr [edi], 0
0x491F58: push    14h; Size
0x491F5A: call    FormHeapAlloc
0x491F5F: add     esp, 4
0x491F62: mov     dword ptr [esp+54h+var_1C], eax
0x491F66: test    eax, eax
0x491F68: mov     [esp+54h+var_4], 0
0x491F70: jz      short loc_491F7D
0x491F72: mov     ecx, eax
0x491F74: call    ExtraDataList_constr
0x491F79: mov     esi, eax
0x491F7B: jmp     short loc_491F7F
0x491F7D: xor     esi, esi
0x491F7F: mov     ecx, ebx
0x491F81: mov     [esp+54h+var_4], 0FFFFFFFFh
0x491F89: call    ExtraDataList_GetExtraScript
0x491F8E: push    eax
0x491F8F: mov     ecx, esi
0x491F91: call    ExtraDataList_AddScript
0x491F96: mov     ecx, esi
0x491F98: call    ExtraDataList_GetExtraScript
0x491F9D: mov     ecx, eax
0x491F9F: call    Script_CreateEventList
0x491FA4: push    eax
0x491FA5: mov     ecx, esi
0x491FA7: call    ExtraDataList_SetScriptEventList
0x491FAC: push    58h ; 'X'; Size
0x491FAE: call    FormHeapAlloc
0x491FB3: add     esp, 4
0x491FB6: mov     dword ptr [esp+54h+var_1C], eax
0x491FBA: test    eax, eax
0x491FBC: mov     [esp+54h+var_4], 1
0x491FC4: jz      short loc_491FD1
0x491FC6: mov     ecx, eax
0x491FC8: call    TESObjectREFR_constr
0x491FCD: mov     ebp, eax
0x491FCF: jmp     short loc_491FD3
0x491FD1: xor     ebp, ebp
0x491FD3: mov     ecx, ebp; this
0x491FD5: mov     [esp+54h+var_4], 0FFFFFFFFh
0x491FDD: call    TESForm_MakeTemporary
0x491FE2: push    0; ArgList
0x491FE4: push    0; int
0x491FE6: mov     ecx, esi; this
0x491FE8: call    ExtraDataList_GetExtraScriptEventList
0x491FED: push    eax; int
0x491FEE: push    ebp; int
0x491FEF: mov     ecx, ebx
0x491FF1: call    ExtraDataList_GetExtraScript
0x491FF6: mov     ecx, eax; int
0x491FF8: call    Script_Run
0x491FFD: push    esi
0x491FFE: mov     ecx, edi
0x492000: call    BSSimpleList_PushBack
0x492005: mov     eax, dword ptr [esp+54h+var_34]
0x492009: mov     edi, [eax+4]
0x49200C: mov     esi, eax
0x49200E: jmp     short loc_492013
0x492010: mov     edi, [edi+4]
0x492013: test    edi, edi
0x492015: jnz     loc_491F24
0x49201B: mov     esi, [esi+4]
0x49201E: test    esi, esi
0x492020: mov     dword ptr [esp+54h+var_34], esi
0x492024: jnz     loc_491F00
0x49202A: mov     ecx, [esp+54h+var_38]
0x49202E: push    0; int
0x492030: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x492035: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x49203A: push    0; int
0x49203C: push    ecx; void *
0x49203D: call    OblivionDynamicCast
0x492042: add     esp, 14h
0x492045: test    eax, eax
0x492047: jz      short loc_492052
0x492049: mov     edx, [eax+4]
0x49204C: mov     dword ptr [esp+54h+var_34], edx
0x492050: jmp     short loc_49205A
0x492052: mov     dword ptr [esp+54h+var_34], 0
0x49205A: mov     eax, [esp+54h+var_40]
0x49205E: test    eax, eax
0x492060: jnz     short loc_49207A
0x492062: cmp     dword ptr [esp+54h+var_34], eax
0x492066: jz      loc_4923D7
0x49206C: mov     ecx, [esp+54h+var_3C]
0x492070: call    ExtraContainerChanges_RunScripts
0x492075: jmp     loc_4923D7
0x49207A: mov     esi, [eax+4]
0x49207D: test    esi, esi
0x49207F: jl      loc_492242
0x492085: cmp     dword ptr [esp+54h+var_34], 0
0x49208A: jz      loc_492242
0x492090: mov     eax, [esp+54h+var_40]
0x492094: mov     ebx, [eax]
0x492096: test    ebx, ebx
0x492098: jz      loc_492239
0x49209E: mov     ecx, ebx
0x4920A0: call    BSSimpleList_IsEmpty
0x4920A5: test    al, al
0x4920A7: jnz     loc_492239
0x4920AD: mov     ecx, ebx
0x4920AF: call    BSSimpleList_Count
0x4920B4: sub     esi, eax
0x4920B6: mov     [esp+54h+var_28], esi
0x4920BA: mov     ebp, 2
0x4920BF: mov     esi, [ebx]
0x4920C1: test    esi, esi
0x4920C3: jz      loc_492163
0x4920C9: mov     ecx, esi
0x4920CB: call    ExtraDataList_GetExtraScript
0x4920D0: test    eax, eax
0x4920D2: jnz     loc_492158
0x4920D8: mov     ecx, dword ptr [esp+54h+var_34]
0x4920DC: push    ecx
0x4920DD: mov     ecx, esi
0x4920DF: call    ExtraDataList_AddScript
0x4920E4: mov     ecx, esi
0x4920E6: call    ExtraDataList_GetExtraScript
0x4920EB: mov     ecx, eax
0x4920ED: call    Script_CreateEventList
0x4920F2: push    eax
0x4920F3: mov     ecx, esi
0x4920F5: call    ExtraDataList_SetScriptEventList
0x4920FA: push    58h ; 'X'; Size
0x4920FC: call    FormHeapAlloc
0x492101: add     esp, 4
0x492104: mov     dword ptr [esp+54h+var_1C], eax
0x492108: test    eax, eax
0x49210A: mov     [esp+54h+var_4], ebp
0x49210E: jz      short loc_49211B
0x492110: mov     ecx, eax
0x492112: call    TESObjectREFR_constr
0x492117: mov     edi, eax
0x492119: jmp     short loc_49211D
0x49211B: xor     edi, edi
0x49211D: mov     ecx, edi; this
0x49211F: mov     [esp+54h+var_4], 0FFFFFFFFh
0x492127: call    TESForm_MakeTemporary
0x49212C: push    0; ArgList
0x49212E: push    0; int
0x492130: mov     ecx, esi; this
0x492132: call    ExtraDataList_GetExtraScriptEventList
0x492137: mov     ecx, [esp+5Ch+var_40]
0x49213B: push    eax; int
0x49213C: push    edi; int
0x49213D: call    sub_484F20
0x492142: mov     ecx, eax; int
0x492144: call    Script_Run
0x492149: test    edi, edi
0x49214B: jz      short loc_492158
0x49214D: mov     edx, [edi]
0x49214F: mov     eax, [edx+10h]
0x492152: push    1
0x492154: mov     ecx, edi
0x492156: call    eax
0x492158: mov     ebx, [ebx+4]
0x49215B: test    ebx, ebx
0x49215D: jnz     loc_4920BF
0x492163: mov     ebp, [esp+54h+var_28]
0x492167: test    ebp, ebp
0x492169: mov     ecx, [esp+54h+var_40]
0x49216D: mov     ebx, [ecx]
0x49216F: jle     loc_492242
0x492175: push    14h; Size
0x492177: call    FormHeapAlloc
0x49217C: add     esp, 4
0x49217F: mov     dword ptr [esp+54h+var_1C], eax
0x492183: test    eax, eax
0x492185: mov     [esp+54h+var_4], 3
0x49218D: jz      short loc_49219A
0x49218F: mov     ecx, eax
0x492191: call    ExtraDataList_constr
0x492196: mov     esi, eax
0x492198: jmp     short loc_49219C
0x49219A: xor     esi, esi
0x49219C: mov     ecx, [esp+54h+var_40]
0x4921A0: mov     [esp+54h+var_4], 0FFFFFFFFh
0x4921A8: call    sub_484F20
0x4921AD: push    eax
0x4921AE: mov     ecx, esi
0x4921B0: call    ExtraDataList_AddScript
0x4921B5: mov     ecx, esi
0x4921B7: call    ExtraDataList_GetExtraScript
0x4921BC: mov     ecx, eax
0x4921BE: call    Script_CreateEventList
0x4921C3: push    eax
0x4921C4: mov     ecx, esi
0x4921C6: call    ExtraDataList_SetScriptEventList
0x4921CB: push    58h ; 'X'; Size
0x4921CD: call    FormHeapAlloc
0x4921D2: add     esp, 4
0x4921D5: mov     dword ptr [esp+54h+var_1C], eax
0x4921D9: test    eax, eax
0x4921DB: mov     [esp+54h+var_4], 4
0x4921E3: jz      short loc_4921F0
0x4921E5: mov     ecx, eax
0x4921E7: call    TESObjectREFR_constr
0x4921EC: mov     edi, eax
0x4921EE: jmp     short loc_4921F2
0x4921F0: xor     edi, edi
0x4921F2: mov     ecx, edi; this
0x4921F4: mov     [esp+54h+var_4], 0FFFFFFFFh
0x4921FC: call    TESForm_MakeTemporary
0x492201: push    0; ArgList
0x492203: push    0; int
0x492205: mov     ecx, esi; this
0x492207: call    ExtraDataList_GetExtraScriptEventList
0x49220C: mov     ecx, dword ptr [esp+5Ch+var_34]; int
0x492210: push    eax; int
0x492211: push    edi; int
0x492212: call    Script_Run
0x492217: test    edi, edi
0x492219: jz      short loc_492226
0x49221B: mov     edx, [edi]
0x49221D: mov     eax, [edx+10h]
0x492220: push    1
0x492222: mov     ecx, edi
0x492224: call    eax
0x492226: push    esi
0x492227: mov     ecx, ebx
0x492229: call    BSSimpleList_PushFront
0x49222E: sub     ebp, 1
0x492231: jnz     loc_492175
0x492237: jmp     short loc_492242
0x492239: mov     ecx, [esp+54h+var_3C]
0x49223D: call    ExtraContainerChanges_RunScripts
0x492242: mov     ecx, [esp+54h+var_38]
0x492246: cmp     byte ptr [ecx+4], 22h ; '"'
0x49224A: jnz     loc_4923D7
0x492250: mov     edx, [esp+54h+var_3C]
0x492254: mov     eax, [edx+4]
0x492257: mov     ebp, [esp+54h+var_40]
0x49225B: xor     esi, esi
0x49225D: cmp     eax, ds:0B333C4h
0x492263: jnz     short loc_492286
0x492265: mov     edi, [ebp+0]
0x492268: test    edi, edi
0x49226A: jz      short loc_492286
0x49226C: lea     esp, [esp+0]
0x492270: mov     eax, [edi]
0x492272: test    eax, eax
0x492274: jz      short loc_492286
0x492276: mov     edi, [edi+4]
0x492279: mov     esi, eax
0x49227B: mov     ecx, esi
0x49227D: call    ExtraDataList_RemoveOwner
0x492282: test    edi, edi
0x492284: jnz     short loc_492270
0x492286: push    0
0x492288: mov     ecx, ebp
0x49228A: call    ContainerEntryExtraData_HasWorn
0x49228F: test    al, al
0x492291: jz      short loc_4922C3
0x492293: mov     ecx, ebp
0x492295: call    sub_4846D0
0x49229A: test    al, al
0x49229C: jnz     short loc_4922C3
0x49229E: mov     eax, [ebp+4]
0x4922A1: test    eax, eax
0x4922A3: jle     loc_4923D7
0x4922A9: mov     ecx, dword ptr [esp+54h+var_34+4]
0x4922AD: mov     ecx, [ecx]
0x4922AF: cmp     eax, [ecx]
0x4922B1: jl      loc_4923DB
0x4922B7: mov     dword ptr [ebp+4], 0
0x4922BE: jmp     loc_4923DB
0x4922C3: push    0
0x4922C5: mov     ecx, ebp
0x4922C7: call    ContainerEntryExtraData_HasWorn
0x4922CC: test    al, al
0x4922CE: jz      loc_49237B
0x4922D4: mov     ecx, ebp
0x4922D6: call    sub_4846D0
0x4922DB: test    al, al
0x4922DD: jz      loc_49237B
0x4922E3: cmp     dword ptr [ebp+4], 0
0x4922E7: jge     short loc_4922F6
0x4922E9: push    1
0x4922EB: push    0
0x4922ED: push    0
0x4922EF: mov     ecx, ebp
0x4922F1: call    sub_4853B0
0x4922F6: mov     ecx, ebp
0x4922F8: call    InventoryEntryData_Cleanup
0x4922FD: cmp     eax, 1
0x492300: jle     short loc_492363
0x492302: mov     ebx, [ebp+0]
0x492305: test    ebx, ebx
0x492307: jz      short loc_492363
0x492309: lea     esp, [esp+0]
0x492310: mov     edi, [ebx]
0x492312: test    edi, edi
0x492314: jz      short loc_492363
0x492316: mov     ebx, [ebx+4]
0x492319: push    0
0x49231B: mov     ecx, edi
0x49231D: call    ExtraDataList_HasWorn
0x492322: test    al, al
0x492324: jz      short loc_49232E
0x492326: test    esi, esi
0x492328: jnz     short loc_492332
0x49232A: mov     esi, edi
0x49232C: jmp     short loc_49235F
0x49232E: test    esi, esi
0x492330: jz      short loc_49235F
0x492332: push    1
0x492334: mov     ecx, esi
0x492336: call    BaseExtraList_Clear
0x49233B: push    edi
0x49233C: mov     ecx, esi
0x49233E: call    ExtraDataList_DuplicateListForContainer
0x492343: push    0
0x492345: push    1
0x492347: mov     ecx, esi
0x492349: call    SetWorn
0x49234E: mov     ecx, [ebp+0]
0x492351: call    BSSimpleList_Clear
0x492356: mov     ecx, [ebp+0]
0x492359: push    esi
0x49235A: call    BSSimpleList_PushFront
0x49235F: test    ebx, ebx
0x492361: jnz     short loc_492310
0x492363: mov     ecx, ebp
0x492365: call    sub_4845D0
0x49236A: cmp     [ebp+4], eax
0x49236D: jge     short loc_4923D7
0x49236F: mov     ecx, ebp
0x492371: call    sub_4845D0
0x492376: mov     [ebp+4], eax
0x492379: jmp     short loc_4923DB
0x49237B: push    0
0x49237D: mov     ecx, ebp
0x49237F: call    ContainerEntryExtraData_HasWorn
0x492384: test    al, al
0x492386: jz      short loc_4923D7
0x492388: mov     ecx, ebp
0x49238A: call    sub_4845D0
0x49238F: cmp     [ebp+4], eax
0x492392: mov     ecx, ebp
0x492394: jge     short loc_4923A0
0x492396: call    sub_4845D0
0x49239B: mov     [ebp+4], eax
0x49239E: jmp     short loc_4923DB
0x4923A0: call    sub_4845D0
0x4923A5: cmp     [ebp+4], eax
0x4923A8: jle     short loc_4923D7
0x4923AA: mov     edi, [ebp+0]
0x4923AD: test    edi, edi
0x4923AF: jz      short loc_4923D7
0x4923B1: mov     esi, [edi]
0x4923B3: test    esi, esi
0x4923B5: jz      short loc_4923D7
0x4923B7: mov     edi, [edi+4]
0x4923BA: push    0
0x4923BC: mov     ecx, esi
0x4923BE: call    ExtraDataList_HasWorn
0x4923C3: test    al, al
0x4923C5: jz      short loc_4923D3
0x4923C7: movzx   edx, word ptr [ebp+4]
0x4923CB: push    edx
0x4923CC: mov     ecx, esi
0x4923CE: call    ExtraDataList_SetExtraCount
0x4923D3: test    edi, edi
0x4923D5: jnz     short loc_4923B1
0x4923D7: mov     ebp, [esp+54h+var_40]
0x4923DB: mov     eax, dword ptr [esp+54h+var_34+4]
0x4923DF: mov     eax, [eax]
0x4923E1: mov     eax, [eax]
0x4923E3: test    eax, eax
0x4923E5: jge     short loc_4923E9
0x4923E7: neg     eax
0x4923E9: test    ebp, ebp
0x4923EB: jz      short loc_4923F9
0x4923ED: mov     ecx, [ebp+4]
0x4923F0: lea     esi, [ecx+eax]
0x4923F3: mov     dword ptr [esp+54h+var_34], esi
0x4923F7: jmp     short loc_4923FF
0x4923F9: mov     dword ptr [esp+54h+var_34], eax
0x4923FD: mov     esi, eax
0x4923FF: test    esi, esi
0x492401: jle     loc_49254D
0x492407: cmp     [esp+54h+var_40], 0
0x49240C: jz      loc_49254D
0x492412: mov     ecx, [esp+54h+var_40]
0x492416: mov     ebp, [ecx]
0x492418: test    ebp, ebp
0x49241A: jz      loc_49254D
0x492420: mov     ecx, ebp
0x492422: call    BSSimpleList_Count
0x492427: test    eax, eax
0x492429: jz      loc_49254D
0x49242F: mov     ecx, ebp
0x492431: call    BSSimpleList_Count
0x492436: cmp     esi, eax
0x492438: jnb     loc_4924D7
0x49243E: mov     edi, edi
0x492440: mov     eax, [ebp+4]
0x492443: test    eax, eax
0x492445: mov     edi, [ebp+0]
0x492448: jz      short loc_492460
0x49244A: mov     edx, [eax+4]
0x49244D: mov     [ebp+4], edx
0x492450: mov     ecx, [eax]
0x492452: push    eax
0x492453: mov     [ebp+0], ecx
0x492456: call    FormHeapFree
0x49245B: add     esp, 4
0x49245E: jmp     short loc_492467
0x492460: mov     dword ptr [ebp+0], 0
0x492467: test    edi, edi
0x492469: jz      short loc_4924C8
0x49246B: mov     ebx, [ebp+0]
0x49246E: test    ebx, ebx
0x492470: jz      short loc_4924BA
0x492472: mov     esi, [edi+4]
0x492475: test    esi, esi
0x492477: jz      short loc_4924BA
0x492479: lea     esp, [esp+0]
0x492480: mov     dl, [esi+4]
0x492483: mov     [esp+54h+a2], dl
0x492487: mov     eax, dword ptr [esp+54h+a2]
0x49248B: push    eax; a2
0x49248C: mov     ecx, ebx; this
0x49248E: call    BaseExtraList_GetExtraData
0x492493: test    eax, eax
0x492495: mov     ecx, edi
0x492497: jz      short loc_4924A3
0x492499: push    1
0x49249B: push    esi
0x49249C: call    BaseExtraList_RemoveExtraByPtr
0x4924A1: jmp     short loc_4924B3
0x4924A3: push    0
0x4924A5: push    esi
0x4924A6: call    BaseExtraList_RemoveExtraByPtr
0x4924AB: push    esi; BSExtraData *
0x4924AC: mov     ecx, ebx; ExtraDataList *
0x4924AE: call    BaseExtraList_AddExtra
0x4924B3: mov     esi, [edi+4]
0x4924B6: test    esi, esi
0x4924B8: jnz     short loc_492480
0x4924BA: mov     edx, [edi]
0x4924BC: mov     eax, [edx]
0x4924BE: push    1
0x4924C0: mov     ecx, edi
0x4924C2: call    eax
0x4924C4: mov     esi, dword ptr [esp+54h+var_34]
0x4924C8: mov     ecx, ebp
0x4924CA: call    BSSimpleList_Count
0x4924CF: cmp     esi, eax
0x4924D1: jb      loc_492440
0x4924D7: mov     ecx, ebp
0x4924D9: call    BSSimpleList_IsEmpty
0x4924DE: test    al, al
0x4924E0: mov     edi, [esp+54h+var_40]
0x4924E4: jz      short loc_4924F9
0x4924E6: mov     eax, [edi]
0x4924E8: push    eax
0x4924E9: call    FormHeapFree
0x4924EE: add     esp, 4
0x4924F1: mov     dword ptr [edi], 0
0x4924F7: jmp     short loc_4924FB
0x4924F9: mov     ebp, [edi]
0x4924FB: test    ebp, ebp
0x4924FD: jz      short loc_49254D
0x4924FF: cmp     dword ptr [ebp+0], 0
0x492503: jz      short loc_49254D
0x492505: mov     ecx, [ebp+0]
0x492508: test    ecx, ecx
0x49250A: jz      short loc_49254D
0x49250C: call    BaseExtraList_Count
0x492511: cmp     eax, 1
0x492514: jnb     short loc_49252E
0x492516: mov     ecx, ebp
0x492518: call    sub_67F100
0x49251D: mov     esi, [edi]
0x49251F: mov     ecx, esi
0x492521: call    BSSimpleList_IsEmpty
0x492526: test    al, al
0x492528: jnz     short loc_492537
0x49252A: mov     ebp, esi
0x49252C: jmp     short loc_492531
0x49252E: mov     ebp, [ebp+4]
0x492531: test    ebp, ebp
0x492533: jnz     short loc_492505
0x492535: jmp     short loc_49254D
0x492537: mov     ecx, ebp
0x492539: call    BSSimpleList_Clear
0x49253E: push    ebp
0x49253F: call    FormHeapFree
0x492544: add     esp, 4
0x492547: mov     dword ptr [edi], 0
0x49254D: mov     ecx, dword ptr [esp+54h+var_34+4]
0x492551: mov     eax, [ecx+4]
0x492554: test    eax, eax
0x492556: mov     edi, [esp+54h+var_3C]
0x49255A: mov     dword ptr [esp+54h+var_34+4], eax
0x49255E: jnz     loc_491D32
0x492564: mov     eax, [edi]
0x492566: test    eax, eax
0x492568: mov     dword ptr [esp+54h+a2], eax
0x49256C: jz      loc_492E52
0x492572: jmp     short loc_492578
0x492574: mov     edi, [esp+54h+var_3C]
0x492578: mov     eax, dword ptr [esp+54h+a2]
0x49257C: cmp     dword ptr [eax+4], 0
0x492580: jnz     short loc_49258B
0x492582: cmp     dword ptr [eax], 0
0x492585: jz      loc_492E52
0x49258B: mov     ecx, [edi+4]; this
0x49258E: mov     ebp, [eax]
0x492590: xor     esi, esi
0x492592: test    ecx, ecx
0x492594: mov     [esp+54h+var_40], ebp
0x492598: jz      short loc_4925C4
0x49259A: call    TESObjectREFR_GetContainer
0x49259F: test    eax, eax
0x4925A1: jz      short loc_4925C4
0x4925A3: test    ebp, ebp
0x4925A5: jz      short loc_4925C4
0x4925A7: mov     ecx, [edi+4]; this
0x4925AA: test    ecx, ecx
0x4925AC: jz      short loc_4925B5
0x4925AE: call    TESObjectREFR_GetContainer
0x4925B3: jmp     short loc_4925B7
0x4925B5: xor     eax, eax
0x4925B7: mov     edx, [ebp+8]
0x4925BA: push    edx
0x4925BB: mov     ecx, eax
0x4925BD: call    TESContainer_GetFormCount
0x4925C2: mov     esi, eax
0x4925C4: mov     eax, [ebp+4]
0x4925C7: push    0; int
0x4925C9: push    offset ??_R0?AVTESHealthForm@@@8; struct TypeDescriptor *
0x4925CE: add     eax, esi
0x4925D0: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4925D5: mov     [esp+60h+var_28], eax
0x4925D9: mov     eax, [ebp+8]
0x4925DC: push    0; int
0x4925DE: push    eax; void *
0x4925DF: call    OblivionDynamicCast
0x4925E4: mov     ebx, eax
0x4925E6: add     esp, 14h
0x4925E9: test    ebx, ebx
0x4925EB: jz      loc_49269E
0x4925F1: mov     edi, [ebp+0]
0x4925F4: test    edi, edi
0x4925F6: jz      loc_49269E
0x4925FC: lea     esp, [esp+0]
0x492600: mov     esi, [edi]
0x492602: test    esi, esi
0x492604: jz      loc_49269E
0x49260A: mov     ecx, esi
0x49260C: call    ExtraDataList_GetHealthData
0x492611: fcomp   dword ptr ds:0A30634h
0x492617: fnstsw  ax
0x492619: test    ah, 41h
0x49261C: jnz     short loc_49268F
0x49261E: mov     ecx, esi
0x492620: call    ExtraDataList_GetHealthData
0x492625: fstp    [esp+54h+var_18]
0x492629: mov     eax, [ebx]
0x49262B: mov     edx, [eax+10h]
0x49262E: mov     ecx, ebx
0x492630: call    edx
0x492632: test    eax, eax
0x492634: mov     dword ptr [esp+54h+var_24+4], eax
0x492638: fild    dword ptr [esp+54h+var_24+4]
0x49263C: jge     short loc_492644
0x49263E: fadd    dword ptr ds:0A2FC78h
0x492644: fcomp   [esp+54h+var_18]
0x492648: fnstsw  ax
0x49264A: test    ah, 44h
0x49264D: jp      short loc_49268F
0x49264F: mov     ecx, esi
0x492651: call    sub_41F610
0x492656: mov     ecx, esi
0x492658: call    ExtraDataList_GetExtraCount
0x49265D: mov     ecx, esi
0x49265F: movsx   ebp, ax
0x492662: call    sub_41F620
0x492667: cmp     dword ptr [esi+4], 0
0x49266B: jnz     short loc_492687
0x49266D: push    esi
0x49266E: mov     ecx, edi
0x492670: call    BSSimpleList_Remove
0x492675: mov     eax, [esi]
0x492677: mov     edx, [eax]
0x492679: push    1
0x49267B: mov     ecx, esi
0x49267D: call    edx
0x49267F: mov     eax, [esp+54h+var_40]
0x492683: mov     edi, [eax]
0x492685: jmp     short loc_492692
0x492687: push    ebp
0x492688: mov     ecx, esi
0x49268A: call    ExtraDataList_SetExtraCount
0x49268F: mov     edi, [edi+4]
0x492692: test    edi, edi
0x492694: mov     ebp, [esp+54h+var_40]
0x492698: jnz     loc_492600
0x49269E: mov     ecx, ebp
0x4926A0: call    sub_4845D0
0x4926A5: mov     esi, [ebp+0]
0x4926A8: test    esi, esi
0x4926AA: mov     ecx, [ebp+8]
0x4926AD: mov     dword ptr [esp+54h+var_24+4], eax
0x4926B1: mov     [esp+54h+var_38], ecx
0x4926B5: jz      loc_492890
0x4926BB: jmp     short loc_4926C0
0x4926BD: align 10h
0x4926C0: mov     edi, [esi]
0x4926C2: test    edi, edi
0x4926C4: jz      loc_492890
0x4926CA: mov     ecx, edi
0x4926CC: call    ExtraDataList_GetExtraScript
0x4926D1: test    eax, eax
0x4926D3: jnz     short loc_4926E1
0x4926D5: mov     esi, [esi+4]
0x4926D8: test    esi, esi
0x4926DA: jnz     short loc_4926C0
0x4926DC: jmp     loc_492890
0x4926E1: mov     ecx, edi
0x4926E3: call    ExtraDataList_GetExtraScript
0x4926E8: test    eax, eax
0x4926EA: jz      loc_492890
0x4926F0: mov     edx, [esp+54h+var_40]
0x4926F4: mov     eax, [edx]
0x4926F6: test    eax, eax
0x4926F8: mov     dword ptr [esp+54h+var_34+4], eax
0x4926FC: jz      loc_492890
0x492702: mov     eax, dword ptr [esp+54h+var_34+4]
0x492706: mov     eax, [eax]
0x492708: test    eax, eax
0x49270A: mov     dword ptr [esp+54h+var_34], eax
0x49270E: jz      loc_492890
0x492714: test    eax, eax
0x492716: jz      loc_49287D
0x49271C: mov     ecx, eax
0x49271E: call    ExtraDataList_GetExtraScript
0x492723: test    eax, eax
0x492725: jz      loc_49287D
0x49272B: mov     ecx, dword ptr [esp+54h+var_34+4]
0x49272F: mov     edi, [ecx+4]
0x492732: test    edi, edi
0x492734: jz      loc_49287D
0x49273A: mov     eax, [edi]
0x49273C: test    eax, eax
0x49273E: jz      loc_49287D
0x492744: mov     ebp, dword ptr [esp+54h+var_34]
0x492748: cmp     ebp, eax
0x49274A: jnz     loc_492872
0x492750: mov     eax, [edi+4]
0x492753: test    eax, eax
0x492755: lea     ebx, [edi+4]
0x492758: jz      short loc_49276E
0x49275A: mov     edx, [eax+4]
0x49275D: mov     [ebx], edx
0x49275F: mov     ecx, [eax]
0x492761: push    eax
0x492762: mov     [edi], ecx
0x492764: call    FormHeapFree
0x492769: add     esp, 4
0x49276C: jmp     short loc_492774
0x49276E: mov     dword ptr [edi], 0
0x492774: push    14h; Size
0x492776: call    FormHeapAlloc
0x49277B: add     esp, 4
0x49277E: mov     dword ptr [esp+54h+var_24], eax
0x492782: test    eax, eax
0x492784: mov     [esp+54h+var_4], 5
0x49278C: jz      short loc_492799
0x49278E: mov     ecx, eax
0x492790: call    ExtraDataList_constr
0x492795: mov     esi, eax
0x492797: jmp     short loc_49279B
0x492799: xor     esi, esi
0x49279B: mov     ecx, ebp
0x49279D: mov     [esp+54h+var_4], 0FFFFFFFFh
0x4927A5: call    ExtraDataList_GetExtraScript
0x4927AA: push    eax
0x4927AB: mov     ecx, esi
0x4927AD: call    ExtraDataList_AddScript
0x4927B2: mov     ecx, esi
0x4927B4: call    ExtraDataList_GetExtraScript
0x4927B9: mov     ecx, eax
0x4927BB: call    Script_CreateEventList
0x4927C0: push    eax
0x4927C1: mov     ecx, esi
0x4927C3: call    ExtraDataList_SetScriptEventList
0x4927C8: push    58h ; 'X'; Size
0x4927CA: call    FormHeapAlloc
0x4927CF: add     esp, 4
0x4927D2: mov     dword ptr [esp+54h+var_24], eax
0x4927D6: test    eax, eax
0x4927D8: mov     [esp+54h+var_4], 6
0x4927E0: jz      short loc_4927ED
0x4927E2: mov     ecx, eax
0x4927E4: call    TESObjectREFR_constr
0x4927E9: mov     ebp, eax
0x4927EB: jmp     short loc_4927EF
0x4927ED: xor     ebp, ebp
0x4927EF: mov     ecx, ebp; this
0x4927F1: mov     [esp+54h+var_4], 0FFFFFFFFh
0x4927F9: call    TESForm_MakeTemporary
0x4927FE: push    0; ArgList
0x492800: push    0; int
0x492802: mov     ecx, esi; this
0x492804: call    ExtraDataList_GetExtraScriptEventList
0x492809: mov     ecx, dword ptr [esp+5Ch+var_34]
0x49280D: push    eax; int
0x49280E: push    ebp; int
0x49280F: call    ExtraDataList_GetExtraScript
0x492814: mov     ecx, eax; int
0x492816: call    Script_Run
0x49281B: test    esi, esi
0x49281D: jz      short loc_492869
0x49281F: cmp     dword ptr [ebx], 0
0x492822: jz      short loc_492831
0x492824: mov     eax, ebx
0x492826: mov     edi, [eax]
0x492828: cmp     dword ptr [edi+4], 0
0x49282C: lea     eax, [edi+4]
0x49282F: jnz     short loc_492826
0x492831: cmp     dword ptr [edi], 0
0x492834: jz      short loc_492867
0x492836: push    8; Size
0x492838: call    FormHeapAlloc
0x49283D: add     esp, 4
0x492840: test    eax, eax
0x492842: jz      short loc_492859
0x492844: mov     edx, dword ptr [esp+54h+var_34+4]
0x492848: mov     [eax], esi
0x49284A: mov     dword ptr [eax+4], 0
0x492851: mov     [edi+4], eax
0x492854: mov     edi, [edx+4]
0x492857: jmp     short loc_492875
0x492859: mov     edx, dword ptr [esp+54h+var_34+4]
0x49285D: xor     eax, eax
0x49285F: mov     [edi+4], eax
0x492862: mov     edi, [edx+4]
0x492865: jmp     short loc_492875
0x492867: mov     [edi], esi
0x492869: mov     edx, dword ptr [esp+54h+var_34+4]
0x49286D: mov     edi, [edx+4]
0x492870: jmp     short loc_492875
0x492872: mov     edi, [edi+4]
0x492875: test    edi, edi
0x492877: jnz     loc_49273A
0x49287D: mov     eax, dword ptr [esp+54h+var_34+4]
0x492881: mov     eax, [eax+4]
0x492884: test    eax, eax
0x492886: mov     dword ptr [esp+54h+var_34+4], eax
0x49288A: jnz     loc_492702
0x492890: mov     edi, [esp+54h+var_40]
0x492894: cmp     dword ptr [edi+4], 0
0x492898: jl      loc_492B07
0x49289E: mov     eax, [edi+8]
0x4928A1: push    0; int
0x4928A3: push    offset ??_R0?AVTESScriptableForm@@@8; struct TypeDescriptor *
0x4928A8: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4928AD: push    0; int
0x4928AF: push    eax; void *
0x4928B0: call    OblivionDynamicCast
0x4928B5: add     esp, 14h
0x4928B8: test    eax, eax
0x4928BA: jz      short loc_4928C1
0x4928BC: mov     ebx, [eax+4]
0x4928BF: jmp     short loc_4928C3
0x4928C1: xor     ebx, ebx
0x4928C3: test    ebx, ebx
0x4928C5: mov     dword ptr [esp+54h+var_34+4], ebx
0x4928C9: jz      loc_492B07
0x4928CF: mov     esi, [edi]
0x4928D1: test    esi, esi
0x4928D3: mov     dword ptr [esp+54h+var_34], esi
0x4928D7: jz      loc_492AFE
0x4928DD: cmp     dword ptr [esi+4], 0
0x4928E1: jnz     short loc_4928EC
0x4928E3: cmp     dword ptr [esi], 0
0x4928E6: jz      loc_492AFE
0x4928EC: mov     edx, [edi+4]
0x4928EF: xor     ecx, ecx
0x4928F1: mov     eax, esi
0x4928F3: cmp     dword ptr [eax], 0
0x4928F6: jz      short loc_4928FB
0x4928F8: add     ecx, 1
0x4928FB: mov     eax, [eax+4]
0x4928FE: test    eax, eax
0x492900: jnz     short loc_4928F3
0x492902: sub     edx, ecx
0x492904: mov     dword ptr [esp+54h+var_24], edx
0x492908: mov     ebp, [esi]
0x49290A: test    ebp, ebp
0x49290C: jz      loc_4929C9
0x492912: mov     ecx, ebp
0x492914: call    ExtraDataList_GetExtraScript
0x492919: test    eax, eax
0x49291B: jnz     loc_4929BA
0x492921: push    ebx
0x492922: mov     ecx, ebp
0x492924: call    ExtraDataList_AddScript
0x492929: mov     ecx, ebp
0x49292B: call    ExtraDataList_GetExtraScript
0x492930: mov     ecx, eax
0x492932: call    Script_CreateEventList
0x492937: push    eax
0x492938: mov     ecx, ebp
0x49293A: call    ExtraDataList_SetScriptEventList
0x49293F: push    58h ; 'X'; Size
0x492941: call    FormHeapAlloc
0x492946: add     esp, 4
0x492949: mov     dword ptr [esp+54h+var_18], eax
0x49294D: test    eax, eax
0x49294F: mov     [esp+54h+var_4], 7
0x492957: jz      short loc_492964
0x492959: mov     ecx, eax
0x49295B: call    TESObjectREFR_constr
0x492960: mov     ebx, eax
0x492962: jmp     short loc_492966
0x492964: xor     ebx, ebx
0x492966: mov     ecx, ebx; this
0x492968: mov     [esp+54h+var_4], 0FFFFFFFFh
0x492970: call    TESForm_MakeTemporary
0x492975: mov     esi, [edi]
0x492977: test    esi, esi
0x492979: jz      short loc_492998
0x49297B: jmp     short loc_492980
0x49297D: align 10h
0x492980: mov     edi, [esi]
0x492982: test    edi, edi
0x492984: jz      short loc_492998
0x492986: mov     ecx, edi
0x492988: call    ExtraDataList_GetExtraScript
0x49298D: test    eax, eax
0x49298F: jnz     short loc_492A00
0x492991: mov     esi, [esi+4]
0x492994: test    esi, esi
0x492996: jnz     short loc_492980
0x492998: xor     esi, esi
0x49299A: push    0; ArgList
0x49299C: push    0; int
0x49299E: mov     ecx, ebp; this
0x4929A0: call    ExtraDataList_GetExtraScriptEventList
0x4929A5: push    eax; int
0x4929A6: push    ebx; int
0x4929A7: mov     ecx, esi; int
0x4929A9: call    Script_Run
0x4929AE: mov     edi, [esp+54h+var_40]
0x4929B2: mov     esi, dword ptr [esp+54h+var_34]
0x4929B6: mov     ebx, dword ptr [esp+54h+var_34+4]
0x4929BA: mov     esi, [esi+4]
0x4929BD: test    esi, esi
0x4929BF: mov     dword ptr [esp+54h+var_34], esi
0x4929C3: jnz     loc_492908
0x4929C9: mov     eax, dword ptr [esp+54h+var_24]
0x4929CD: test    eax, eax
0x4929CF: mov     ebx, [edi]
0x4929D1: jle     loc_492B07
0x4929D7: mov     dword ptr [esp+54h+var_34], eax
0x4929DB: push    14h; Size
0x4929DD: call    FormHeapAlloc
0x4929E2: add     esp, 4
0x4929E5: mov     dword ptr [esp+54h+var_18], eax
0x4929E9: test    eax, eax
0x4929EB: mov     [esp+54h+var_4], 8
0x4929F3: jz      short loc_492A0B
0x4929F5: mov     ecx, eax
0x4929F7: call    ExtraDataList_constr
0x4929FC: mov     ebp, eax
0x4929FE: jmp     short loc_492A0D
0x492A00: mov     ecx, edi
0x492A02: call    ExtraDataList_GetExtraScript
0x492A07: mov     esi, eax
0x492A09: jmp     short loc_49299A
0x492A0B: xor     ebp, ebp
0x492A0D: mov     ecx, [esp+54h+var_40]
0x492A11: mov     esi, [ecx]
0x492A13: test    esi, esi
0x492A15: mov     [esp+54h+var_4], 0FFFFFFFFh
0x492A1D: jz      short loc_492A38
0x492A1F: nop
0x492A20: mov     edi, [esi]
0x492A22: test    edi, edi
0x492A24: jz      short loc_492A38
0x492A26: mov     ecx, edi
0x492A28: call    ExtraDataList_GetExtraScript
0x492A2D: test    eax, eax
0x492A2F: jnz     short loc_492A7D
0x492A31: mov     esi, [esi+4]
0x492A34: test    esi, esi
0x492A36: jnz     short loc_492A20
0x492A38: xor     eax, eax
0x492A3A: push    eax
0x492A3B: mov     ecx, ebp
0x492A3D: call    ExtraDataList_AddScript
0x492A42: mov     ecx, ebp
0x492A44: call    ExtraDataList_GetExtraScript
0x492A49: mov     ecx, eax
0x492A4B: call    Script_CreateEventList
0x492A50: push    eax
0x492A51: mov     ecx, ebp
0x492A53: call    ExtraDataList_SetScriptEventList
0x492A58: push    58h ; 'X'; Size
0x492A5A: call    FormHeapAlloc
0x492A5F: add     esp, 4
0x492A62: mov     dword ptr [esp+54h+var_18], eax
0x492A66: test    eax, eax
0x492A68: mov     [esp+54h+var_4], 9
0x492A70: jz      short loc_492A86
0x492A72: mov     ecx, eax
0x492A74: call    TESObjectREFR_constr
0x492A79: mov     esi, eax
0x492A7B: jmp     short loc_492A88
0x492A7D: mov     ecx, edi
0x492A7F: call    ExtraDataList_GetExtraScript
0x492A84: jmp     short loc_492A3A
0x492A86: xor     esi, esi
0x492A88: mov     ecx, esi; this
0x492A8A: mov     [esp+54h+var_4], 0FFFFFFFFh
0x492A92: call    TESForm_MakeTemporary
0x492A97: push    0; ArgList
0x492A99: push    0; int
0x492A9B: mov     ecx, ebp; this
0x492A9D: call    ExtraDataList_GetExtraScriptEventList
0x492AA2: mov     ecx, dword ptr [esp+5Ch+var_34+4]; int
0x492AA6: push    eax; int
0x492AA7: push    esi; int
0x492AA8: call    Script_Run
0x492AAD: test    esi, esi
0x492AAF: jz      short loc_492ABC
0x492AB1: mov     edx, [esi]
0x492AB3: mov     eax, [edx+10h]
0x492AB6: push    1
0x492AB8: mov     ecx, esi
0x492ABA: call    eax
0x492ABC: test    ebp, ebp
0x492ABE: jz      short loc_492AED
0x492AC0: cmp     dword ptr [ebx], 0
0x492AC3: jz      short loc_492AEB
0x492AC5: push    8; Size
0x492AC7: call    FormHeapAlloc
0x492ACC: add     esp, 4
0x492ACF: test    eax, eax
0x492AD1: jz      short loc_492AE0
0x492AD3: mov     ecx, [ebx]
0x492AD5: mov     [eax], ecx
0x492AD7: mov     dword ptr [eax+4], 0
0x492ADE: jmp     short loc_492AE2
0x492AE0: xor     eax, eax
0x492AE2: mov     edx, [ebx+4]
0x492AE5: mov     [eax+4], edx
0x492AE8: mov     [ebx+4], eax
0x492AEB: mov     [ebx], ebp
0x492AED: sub     dword ptr [esp+54h+var_34], 1
0x492AF2: jnz     loc_4929DB
0x492AF8: mov     edi, [esp+54h+var_40]
0x492AFC: jmp     short loc_492B07
0x492AFE: mov     ecx, [esp+54h+var_3C]
0x492B02: call    ExtraContainerChanges_RunScripts
0x492B07: mov     eax, [esp+54h+var_38]
0x492B0B: cmp     byte ptr [eax+4], 22h ; '"'
0x492B0F: jnz     loc_492C0A
0x492B15: mov     esi, [esp+54h+var_3C]
0x492B19: mov     ecx, [esi+4]; this
0x492B1C: xor     ebp, ebp
0x492B1E: test    ecx, ecx
0x492B20: jz      short loc_492B48
0x492B22: call    TESObjectREFR_GetContainer
0x492B27: test    eax, eax
0x492B29: jz      short loc_492B48
0x492B2B: mov     ecx, [esi+4]; this
0x492B2E: test    ecx, ecx
0x492B30: jz      short loc_492B39
0x492B32: call    TESObjectREFR_GetContainer
0x492B37: jmp     short loc_492B3B
0x492B39: xor     eax, eax
0x492B3B: mov     ecx, [edi+8]
0x492B3E: push    ecx
0x492B3F: mov     ecx, eax
0x492B41: call    TESContainer_GetFormCount
0x492B46: mov     ebp, eax
0x492B48: mov     edx, [esi+4]
0x492B4B: cmp     edx, ds:0B333C4h
0x492B51: jnz     short loc_492B72
0x492B53: mov     esi, [edi]
0x492B55: test    esi, esi
0x492B57: jz      short loc_492B72
0x492B59: lea     esp, [esp+0]
0x492B60: mov     ecx, [esi]
0x492B62: test    ecx, ecx
0x492B64: jz      short loc_492B72
0x492B66: mov     esi, [esi+4]
0x492B69: call    ExtraDataList_RemoveOwner
0x492B6E: test    esi, esi
0x492B70: jnz     short loc_492B60
0x492B72: mov     esi, [edi]
0x492B74: test    esi, esi
0x492B76: jz      loc_492C0A
0x492B7C: lea     esp, [esp+0]
0x492B80: mov     ecx, [esi]
0x492B82: test    ecx, ecx
0x492B84: jz      loc_492C0A
0x492B8A: push    0
0x492B8C: call    ExtraDataList_HasWorn
0x492B91: test    al, al
0x492B93: jnz     short loc_492B9E
0x492B95: mov     esi, [esi+4]
0x492B98: test    esi, esi
0x492B9A: jnz     short loc_492B80
0x492B9C: jmp     short loc_492C0A
0x492B9E: mov     ebx, [esp+54h+var_40]
0x492BA2: mov     esi, [ebx]
0x492BA4: xor     edi, edi
0x492BA6: test    esi, esi
0x492BA8: jz      short loc_492BC1
0x492BAA: mov     ecx, [esi]
0x492BAC: test    ecx, ecx
0x492BAE: jz      short loc_492BC1
0x492BB0: call    ExtraDataList_GetExtraCount
0x492BB5: mov     esi, [esi+4]
0x492BB8: movsx   eax, ax
0x492BBB: add     edi, eax
0x492BBD: test    esi, esi
0x492BBF: jnz     short loc_492BAA
0x492BC1: mov     eax, [ebx+4]
0x492BC4: lea     ecx, [eax+ebp]
0x492BC7: cmp     ecx, edi
0x492BC9: jge     short loc_492BD4
0x492BCB: sub     edi, eax
0x492BCD: sub     edi, ebp
0x492BCF: mov     [ebx+4], edi
0x492BD2: jmp     short loc_492C0A
0x492BD4: jle     short loc_492C0A
0x492BD6: mov     ecx, [esp+54h+var_40]
0x492BDA: mov     edi, [ecx]
0x492BDC: test    edi, edi
0x492BDE: jz      short loc_492C0A
0x492BE0: mov     esi, [edi]
0x492BE2: test    esi, esi
0x492BE4: jz      short loc_492C0A
0x492BE6: mov     edi, [edi+4]
0x492BE9: push    0
0x492BEB: mov     ecx, esi
0x492BED: call    ExtraDataList_HasWorn
0x492BF2: test    al, al
0x492BF4: jz      short loc_492C06
0x492BF6: mov     edx, [esp+54h+var_40]
0x492BFA: movzx   eax, word ptr [edx+4]
0x492BFE: push    eax
0x492BFF: mov     ecx, esi
0x492C01: call    ExtraDataList_SetExtraCount
0x492C06: test    edi, edi
0x492C08: jnz     short loc_492BE0
0x492C0A: mov     ecx, [esp+54h+var_40]
0x492C0E: mov     esi, [ecx]
0x492C10: test    esi, esi
0x492C12: jz      short loc_492C33
0x492C14: mov     edi, [esi]
0x492C16: test    edi, edi
0x492C18: jz      short loc_492C33
0x492C1A: mov     ecx, edi
0x492C1C: call    ExtraDataList_GetExtraScript
0x492C21: test    eax, eax
0x492C23: jz      short loc_492C2C
0x492C25: mov     ecx, edi
0x492C27: call    sub_41F620
0x492C2C: mov     esi, [esi+4]
0x492C2F: test    esi, esi
0x492C31: jnz     short loc_492C14
0x492C33: mov     edx, [esp+54h+var_38]
0x492C37: push    edx
0x492C38: call    sub_469980
0x492C3D: add     esp, 4
0x492C40: test    al, al
0x492C42: jz      short loc_492C98
0x492C44: mov     eax, [esp+54h+var_3C]
0x492C48: mov     ecx, [eax+4]
0x492C4B: cmp     ecx, ds:0B333C4h
0x492C51: jnz     short loc_492C98
0x492C53: mov     ebp, [esp+54h+var_40]
0x492C57: mov     esi, [ebp+0]
0x492C5A: test    esi, esi
0x492C5C: jz      short loc_492C9C
0x492C5E: mov     edi, edi
0x492C60: mov     edi, [esi]
0x492C62: test    edi, edi
0x492C64: jz      short loc_492C9C
0x492C66: mov     eax, [esi+4]
0x492C69: test    eax, eax
0x492C6B: jz      short loc_492C82
0x492C6D: mov     edx, [eax+4]
0x492C70: mov     [esi+4], edx
0x492C73: mov     ecx, [eax]
0x492C75: push    eax
0x492C76: mov     [esi], ecx
0x492C78: call    FormHeapFree
0x492C7D: add     esp, 4
0x492C80: jmp     short loc_492C88
0x492C82: mov     dword ptr [esi], 0
0x492C88: test    edi, edi
0x492C8A: jz      short loc_492C60
0x492C8C: mov     edx, [edi]
0x492C8E: mov     eax, [edx]
0x492C90: push    1
0x492C92: mov     ecx, edi
0x492C94: call    eax
0x492C96: jmp     short loc_492C60
0x492C98: mov     ebp, [esp+54h+var_40]
0x492C9C: mov     ebx, [esp+54h+var_28]
0x492CA0: cmp     ebx, 0FFFFFFFFh
0x492CA3: jle     short loc_492CCE
0x492CA5: cmp     ebx, dword ptr [esp+54h+var_24+4]
0x492CA9: jge     short loc_492CCE
0x492CAB: mov     esi, [ebp+0]
0x492CAE: test    esi, esi
0x492CB0: jz      short loc_492CCE
0x492CB2: xor     edi, edi
0x492CB4: mov     ecx, [esi]
0x492CB6: test    ecx, ecx
0x492CB8: jz      short loc_492CCB
0x492CBA: call    ExtraDataList_GetExtraCount
0x492CBF: mov     esi, [esi+4]
0x492CC2: movsx   ecx, ax
0x492CC5: add     edi, ecx
0x492CC7: test    esi, esi
0x492CC9: jnz     short loc_492CB4
0x492CCB: mov     [ebp+4], edi
0x492CCE: test    ebx, ebx
0x492CD0: jle     loc_492E3F
0x492CD6: mov     edi, [ebp+0]
0x492CD9: test    edi, edi
0x492CDB: jz      loc_492E3F
0x492CE1: cmp     dword ptr [edi], 0
0x492CE4: jz      loc_492E3F
0x492CEA: mov     ecx, edi
0x492CEC: call    BSSimpleList_Count
0x492CF1: cmp     ebx, eax
0x492CF3: jnb     loc_492D91
0x492CF9: lea     esp, [esp+0]
0x492D00: mov     eax, [edi+4]
0x492D03: test    eax, eax
0x492D05: mov     ebp, [edi]
0x492D07: jz      short loc_492D1E
0x492D09: mov     edx, [eax+4]
0x492D0C: mov     [edi+4], edx
0x492D0F: mov     ecx, [eax]
0x492D11: push    eax
0x492D12: mov     [edi], ecx
0x492D14: call    FormHeapFree
0x492D19: add     esp, 4
0x492D1C: jmp     short loc_492D24
0x492D1E: mov     dword ptr [edi], 0
0x492D24: test    ebp, ebp
0x492D26: jz      short loc_492D7E
0x492D28: mov     ebx, [edi]
0x492D2A: test    ebx, ebx
0x492D2C: jz      short loc_492D6F
0x492D2E: mov     esi, [ebp+4]
0x492D31: test    esi, esi
0x492D33: jz      short loc_492D6F
0x492D35: mov     dl, [esi+4]
0x492D38: mov     [esp+54h+var_1C], dl
0x492D3C: mov     eax, dword ptr [esp+54h+var_1C]
0x492D40: push    eax; a2
0x492D41: mov     ecx, ebx; this
0x492D43: call    BaseExtraList_GetExtraData
0x492D48: test    eax, eax
0x492D4A: mov     ecx, ebp
0x492D4C: jz      short loc_492D58
0x492D4E: push    1
0x492D50: push    esi
0x492D51: call    BaseExtraList_RemoveExtraByPtr
0x492D56: jmp     short loc_492D68
0x492D58: push    0
0x492D5A: push    esi
0x492D5B: call    BaseExtraList_RemoveExtraByPtr
0x492D60: push    esi; BSExtraData *
0x492D61: mov     ecx, ebx; ExtraDataList *
0x492D63: call    BaseExtraList_AddExtra
0x492D68: mov     esi, [ebp+4]
0x492D6B: test    esi, esi
0x492D6D: jnz     short loc_492D35
0x492D6F: mov     edx, [ebp+0]
0x492D72: mov     eax, [edx]
0x492D74: push    1
0x492D76: mov     ecx, ebp
0x492D78: call    eax
0x492D7A: mov     ebx, [esp+54h+var_28]
0x492D7E: mov     ecx, edi
0x492D80: call    BSSimpleList_Count
0x492D85: cmp     ebx, eax
0x492D87: jb      loc_492D00
0x492D8D: mov     ebp, [esp+54h+var_40]
0x492D91: cmp     dword ptr [edi+4], 0
0x492D95: jnz     short loc_492DB1
0x492D97: cmp     dword ptr [edi], 0
0x492D9A: jnz     short loc_492DB1
0x492D9C: mov     ecx, [ebp+0]
0x492D9F: push    ecx
0x492DA0: call    FormHeapFree
0x492DA5: add     esp, 4
0x492DA8: mov     dword ptr [ebp+0], 0
0x492DAF: jmp     short loc_492DB4
0x492DB1: mov     edi, [ebp+0]
0x492DB4: test    edi, edi
0x492DB6: jz      loc_492E3F
0x492DBC: lea     esp, [esp+0]
0x492DC0: mov     ecx, [edi]
0x492DC2: test    ecx, ecx
0x492DC4: jz      short loc_492E3F
0x492DC6: call    BaseExtraList_Count
0x492DCB: cmp     eax, 1
0x492DCE: jnb     short loc_492E04
0x492DD0: mov     eax, [edi+4]
0x492DD3: test    eax, eax
0x492DD5: jz      short loc_492DEC
0x492DD7: mov     edx, [eax+4]
0x492DDA: mov     [edi+4], edx
0x492DDD: mov     ecx, [eax]
0x492DDF: push    eax
0x492DE0: mov     [edi], ecx
0x492DE2: call    FormHeapFree
0x492DE7: add     esp, 4
0x492DEA: jmp     short loc_492DF2
0x492DEC: mov     dword ptr [edi], 0
0x492DF2: mov     eax, [ebp+0]
0x492DF5: cmp     dword ptr [eax+4], 0
0x492DF9: jnz     short loc_492E00
0x492DFB: cmp     dword ptr [eax], 0
0x492DFE: jz      short loc_492E0D
0x492E00: mov     edi, eax
0x492E02: jmp     short loc_492E07
0x492E04: mov     edi, [edi+4]
0x492E07: test    edi, edi
0x492E09: jnz     short loc_492DC0
0x492E0B: jmp     short loc_492E3F
0x492E0D: cmp     dword ptr [edi+4], 0
0x492E11: jz      short loc_492E29
0x492E13: mov     eax, [edi+4]
0x492E16: mov     esi, [eax+4]
0x492E19: push    eax
0x492E1A: call    FormHeapFree
0x492E1F: add     esp, 4
0x492E22: test    esi, esi
0x492E24: mov     [edi+4], esi
0x492E27: jnz     short loc_492E13
0x492E29: push    edi
0x492E2A: mov     dword ptr [edi], 0
0x492E30: call    FormHeapFree
0x492E35: add     esp, 4
0x492E38: mov     dword ptr [ebp+0], 0
0x492E3F: mov     edx, dword ptr [esp+54h+a2]
0x492E43: mov     eax, [edx+4]
0x492E46: test    eax, eax
0x492E48: mov     dword ptr [esp+54h+a2], eax
0x492E4C: jnz     loc_492574
0x492E52: mov     ecx, dword ptr [esp+54h+var_C]
0x492E56: mov     large fs:0, ecx
0x492E5D: pop     ecx
0x492E5E: pop     edi
0x492E5F: pop     esi
0x492E60: pop     ebp
0x492E61: pop     ebx
0x492E62: mov     esp, ebp
0x492E64: pop     ebp
0x492E65: retn
