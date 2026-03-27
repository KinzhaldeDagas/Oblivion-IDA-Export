0x507320: push    0FFFFFFFFh
0x507322: push    offset Cmd_AddItem_SEH
0x507327: mov     eax, large fs:0
0x50732D: push    eax
0x50732E: sub     esp, 18h
0x507331: push    ebx
0x507332: push    ebp
0x507333: push    esi
0x507334: mov     eax, ds:0B30AACh
0x507339: xor     eax, esp
0x50733B: push    eax
0x50733C: lea     eax, [esp+34h+var_C]
0x507340: mov     large fs:0, eax
0x507346: mov     edx, [esp+34h+l]
0x50734A: mov     ebx, [esp+34h+a5]
0x50734E: mov     ebp, [esp+34h+a4]
0x507352: lea     eax, [esp+34h+a3]
0x507356: push    eax
0x507357: mov     eax, [esp+38h+argC]
0x50735B: lea     ecx, [esp+38h+var_24]
0x50735F: push    ecx; UInt16
0x507360: mov     ecx, [esp+3Ch+opcodeOffsetPtr]
0x507364: push    edx; l
0x507365: mov     edx, [esp+40h+a2]
0x507369: push    ebx; a6
0x50736A: push    eax; a5
0x50736B: mov     eax, [esp+48h+a1]
0x50736F: push    ebp; a4
0x507370: push    ecx; a3
0x507371: push    edx; a2
0x507372: push    eax; a1
0x507373: mov     [esp+58h+var_24], 0
0x50737B: mov     [esp+58h+a3], 0
0x507383: call    Script_ExtractArgs
0x507388: add     esp, 24h
0x50738B: test    al, al
0x50738D: jnz     short loc_5073A2
0x50738F: mov     ecx, [esp+34h+var_C]
0x507393: mov     large fs:0, ecx
0x50739A: pop     ecx
0x50739B: pop     esi
0x50739C: pop     ebp
0x50739D: pop     ebx
0x50739E: add     esp, 24h
0x5073A1: retn
0x5073A2: test    ebp, ebp
0x5073A4: jz      loc_507450
0x5073AA: lea     ecx, [esp+34h+var_1C]
0x5073AE: call    TESContainer_constr
0x5073B3: mov     ecx, [esp+34h+var_24]
0x5073B7: push    0; int
0x5073B9: push    offset ??_R0?AVTESLevItem@@@8; struct TypeDescriptor *
0x5073BE: push    offset ??_R0?AVTESObject@@@8; struct _s_RTTICompleteObjectLocator *
0x5073C3: push    0; int
0x5073C5: push    ecx; void *
0x5073C6: mov     [esp+48h+unk], 0; unk
0x5073CE: call    OblivionDynamicCast
0x5073D3: mov     esi, eax
0x5073D5: add     esp, 14h
0x5073D8: test    esi, esi
0x5073DA: jz      short loc_5073FC
0x5073DC: mov     eax, [esp+34h+a3]
0x5073E0: mov     ecx, ds:0B333C4h
0x5073E6: lea     edx, [esp+34h+var_1C]
0x5073EA: push    edx; int
0x5073EB: push    eax
0x5073EC: call    Actor_GetLevel
0x5073F1: lea     ecx, [esi+24h]; this
0x5073F4: push    eax; int
0x5073F5: call    TESLeveledList_CalcLeveledForm
0x5073FA: jmp     short loc_507435
0x5073FC: mov     ecx, [esp+34h+var_24]
0x507400: test    ecx, ecx
0x507402: jz      short loc_50741B
0x507404: mov     eax, [esp+34h+a3]
0x507408: test    eax, eax
0x50740A: jz      short loc_50741B
0x50740C: push    0; a4
0x50740E: push    eax; a3
0x50740F: push    ecx; a2
0x507410: lea     ecx, [esp+40h+var_1C]; this
0x507414: call    TESContainer_AddValidatedForm
0x507419: jmp     short loc_507435
0x50741B: mov     edx, [ebx]
0x50741D: mov     eax, [edx+0D4h]
0x507423: mov     ecx, ebx
0x507425: call    eax
0x507427: push    eax; ArgList
0x507428: push    offset aAdditemInScrip; "AddItem in script '%s' failed to genera"...
0x50742D: call    PrintError
0x507432: add     esp, 8
0x507435: push    ebp; ntint
0x507436: lea     ecx, [esp+38h+var_1C]; this
0x50743A: call    TESContainer_CopyContentsToRef
0x50743F: lea     ecx, [esp+34h+var_1C]
0x507443: mov     [esp+34h+unk], 0FFFFFFFFh
0x50744B: call    TESContainer_destr
0x507450: mov     al, 1
0x507452: mov     ecx, [esp+34h+var_C]
0x507456: mov     large fs:0, ecx
0x50745D: pop     ecx
0x50745E: pop     esi
0x50745F: pop     ebp
0x507460: pop     ebx
0x507461: add     esp, 24h
0x507464: retn
