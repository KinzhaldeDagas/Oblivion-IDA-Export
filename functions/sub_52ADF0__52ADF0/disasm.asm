0x52ADF0: push    0FFFFFFFFh
0x52ADF2: push    offset SEH_8C8970
0x52ADF7: mov     eax, large fs:0
0x52ADFD: push    eax
0x52ADFE: push    ecx
0x52ADFF: push    esi
0x52AE00: push    edi
0x52AE01: mov     eax, ds:0B30AACh
0x52AE06: xor     eax, esp
0x52AE08: push    eax; ArgList
0x52AE09: lea     eax, [esp+1Ch+var_C]
0x52AE0D: mov     large fs:0, eax
0x52AE13: mov     esi, ecx
0x52AE15: cmp     dword ptr [esi+64h], 0
0x52AE19: jz      short loc_52AE47
0x52AE1B: mov     eax, [esi+68h]
0x52AE1E: test    eax, eax
0x52AE20: jz      short loc_52AE47
0x52AE22: test    byte ptr [eax+3Ch], 8
0x52AE26: jnz     short loc_52AE47
0x52AE28: push    offset aTryingToResolv; "Trying to resolve a quest stage item th"...
0x52AE2D: call    PrintError
0x52AE32: add     esp, 4
0x52AE35: mov     ecx, [esp+1Ch+var_C]
0x52AE39: mov     large fs:0, ecx
0x52AE40: pop     ecx
0x52AE41: pop     edi
0x52AE42: pop     esi
0x52AE43: add     esp, 10h
0x52AE46: retn
0x52AE47: mov     eax, ds:0B333C4h
0x52AE4C: push    0
0x52AE4E: push    eax
0x52AE4F: lea     ecx, [esi+4]
0x52AE52: call    sub_56A950
0x52AE57: test    al, al
0x52AE59: jz      loc_52AF2D
0x52AE5F: push    4; Size
0x52AE61: call    FormHeapAlloc
0x52AE66: mov     edi, eax
0x52AE68: add     esp, 4
0x52AE6B: mov     [esp+1Ch+var_10], edi
0x52AE6F: test    edi, edi
0x52AE71: mov     [esp+1Ch+var_4], 0
0x52AE79: jz      short loc_52AEA9
0x52AE7B: mov     ecx, offset TimeGlobals
0x52AE80: call    TimeGlobals_GetGameYear
0x52AE85: push    eax
0x52AE86: mov     ecx, offset TimeGlobals
0x52AE8B: call    TimeGlobals_GetGameMonth
0x52AE90: push    eax
0x52AE91: mov     ecx, offset TimeGlobals
0x52AE96: call    TimeGlobals_GetGameDay
0x52AE9B: movsx   cx, al
0x52AE9F: push    ecx
0x52AEA0: mov     ecx, edi
0x52AEA2: call    sub_47D390
0x52AEA7: jmp     short loc_52AEAB
0x52AEA9: xor     eax, eax
0x52AEAB: test    byte ptr [esi], 1
0x52AEAE: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x52AEB6: mov     [esi+64h], eax
0x52AEB9: jz      short loc_52AEE1
0x52AEBB: mov     ecx, [esi+68h]
0x52AEBE: test    ecx, ecx
0x52AEC0: jz      short loc_52AEE1
0x52AEC2: push    1
0x52AEC4: call    Quest_CompleteQuest
0x52AEC9: mov     edx, [esi+68h]
0x52AECC: mov     ecx, ds:0B333C4h
0x52AED2: cmp     edx, [ecx+5F4h]
0x52AED8: jnz     short loc_52AEE1
0x52AEDA: push    0
0x52AEDC: call    sub_660450
0x52AEE1: cmp     byte ptr [esi+61h], 0
0x52AEE5: jz      short loc_52AEF3
0x52AEE7: mov     ecx, ds:0B333C4h
0x52AEED: push    esi
0x52AEEE: call    sub_6697A0
0x52AEF3: add     esi, 0Ch
0x52AEF6: call    sub_4F9FA0
0x52AEFB: test    al, al
0x52AEFD: jz      short loc_52AF2D
0x52AEFF: test    esi, esi
0x52AF01: jz      short loc_52AF2D
0x52AF03: cmp     dword ptr [esi+20h], 0
0x52AF07: jz      short loc_52AF2D
0x52AF09: mov     byte ptr [esi+28h], 0
0x52AF0D: mov     ecx, ds:0B333C4h
0x52AF13: push    1; ArgList
0x52AF15: add     ecx, 44h ; 'D'; this
0x52AF18: push    0; int
0x52AF1A: call    ExtraDataList_GetExtraScriptEventList
0x52AF1F: push    eax; int
0x52AF20: mov     eax, ds:0B333C4h
0x52AF25: push    eax; int
0x52AF26: mov     ecx, esi; int
0x52AF28: call    Script_Run
0x52AF2D: mov     ecx, [esp+1Ch+var_C]
0x52AF31: mov     large fs:0, ecx
0x52AF38: pop     ecx
0x52AF39: pop     edi
0x52AF3A: pop     esi
0x52AF3B: add     esp, 10h
0x52AF3E: retn
