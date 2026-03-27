0x4DF820: push    ebp
0x4DF821: mov     ebp, esp
0x4DF823: and     esp, 0FFFFFFC0h
0x4DF826: sub     esp, 30h
0x4DF829: push    ebx
0x4DF82A: push    ebp
0x4DF82B: push    esi
0x4DF82C: mov     esi, ecx
0x4DF82E: mov     eax, [esi+8]
0x4DF831: shr     eax, 3
0x4DF834: test    al, 1
0x4DF836: push    edi; ArgList
0x4DF837: jnz     loc_4DFD01
0x4DF83D: mov     ecx, ds:0B34D88h
0x4DF843: mov     bl, ds:0B06B18h
0x4DF849: mov     byte ptr ds:0B06B18h, 1
0x4DF850: mov     dword ptr ds:0B34D88h, 0
0x4DF85A: mov     eax, [esi+1Ch]
0x4DF85D: test    eax, eax
0x4DF85F: mov     [esp+40h+var_8], ecx
0x4DF863: jz      short loc_4DF87E
0x4DF865: mov     edx, [eax+8]
0x4DF868: shr     edx, 5
0x4DF86B: test    dl, 1
0x4DF86E: jz      short loc_4DF87E
0x4DF870: mov     eax, [esi]
0x4DF872: mov     edx, [eax+8Ch]
0x4DF878: push    1
0x4DF87A: mov     ecx, esi
0x4DF87C: call    edx
0x4DF87E: fld     dword ptr [esi+2Ch]
0x4DF881: sub     esp, 8
0x4DF884: fstp    [esp+48h+X+4]; X
0x4DF887: call    __finite
0x4DF88C: add     esp, 8
0x4DF88F: test    eax, eax
0x4DF891: jz      short loc_4DF8FC
0x4DF893: fld     dword ptr [esi+30h]
0x4DF896: sub     esp, 8
0x4DF899: fstp    [esp+48h+X+4]; X
0x4DF89C: call    __finite
0x4DF8A1: add     esp, 8
0x4DF8A4: test    eax, eax
0x4DF8A6: jz      short loc_4DF8FC
0x4DF8A8: fld     dword ptr [esi+34h]
0x4DF8AB: sub     esp, 8
0x4DF8AE: fstp    [esp+48h+X+4]; X
0x4DF8B1: call    __finite
0x4DF8B6: add     esp, 8
0x4DF8B9: test    eax, eax
0x4DF8BB: jz      short loc_4DF8FC
0x4DF8BD: fld     dword ptr [esi+2Ch]
0x4DF8C0: sub     esp, 8
0x4DF8C3: fstp    [esp+48h+X+4]; X
0x4DF8C6: call    __isnan
0x4DF8CB: add     esp, 8
0x4DF8CE: test    eax, eax
0x4DF8D0: jnz     short loc_4DF8FC
0x4DF8D2: fld     dword ptr [esi+30h]
0x4DF8D5: sub     esp, 8
0x4DF8D8: fstp    [esp+48h+X+4]; X
0x4DF8DB: call    __isnan
0x4DF8E0: add     esp, 8
0x4DF8E3: test    eax, eax
0x4DF8E5: jnz     short loc_4DF8FC
0x4DF8E7: fld     dword ptr [esi+34h]
0x4DF8EA: sub     esp, 8
0x4DF8ED: fstp    [esp+48h+X+4]; X
0x4DF8F0: call    __isnan
0x4DF8F5: add     esp, 8
0x4DF8F8: test    eax, eax
0x4DF8FA: jz      short loc_4DF923
0x4DF8FC: push    offset aCorruptLocat_0; "Corrupt location found on reference, se"...
0x4DF901: call    PrintError
0x4DF906: mov     eax, ds:0B3F9A8h
0x4DF90B: mov     [esi+2Ch], eax
0x4DF90E: mov     ecx, ds:0B3F9ACh
0x4DF914: mov     [esi+30h], ecx
0x4DF917: mov     edx, ds:0B3F9B0h
0x4DF91D: add     esp, 4
0x4DF920: mov     [esi+34h], edx
0x4DF923: fld     dword ptr [esi+20h]
0x4DF926: sub     esp, 8
0x4DF929: fstp    [esp+48h+X+4]; X
0x4DF92C: call    __finite
0x4DF931: add     esp, 8
0x4DF934: test    eax, eax
0x4DF936: jz      short loc_4DF9A1
0x4DF938: fld     dword ptr [esi+24h]
0x4DF93B: sub     esp, 8
0x4DF93E: fstp    [esp+48h+X+4]; X
0x4DF941: call    __finite
0x4DF946: add     esp, 8
0x4DF949: test    eax, eax
0x4DF94B: jz      short loc_4DF9A1
0x4DF94D: fld     dword ptr [esi+28h]
0x4DF950: sub     esp, 8
0x4DF953: fstp    [esp+48h+X+4]; X
0x4DF956: call    __finite
0x4DF95B: add     esp, 8
0x4DF95E: test    eax, eax
0x4DF960: jz      short loc_4DF9A1
0x4DF962: fld     dword ptr [esi+20h]
0x4DF965: sub     esp, 8
0x4DF968: fstp    [esp+48h+X+4]; X
0x4DF96B: call    __isnan
0x4DF970: add     esp, 8
0x4DF973: test    eax, eax
0x4DF975: jnz     short loc_4DF9A1
0x4DF977: fld     dword ptr [esi+24h]
0x4DF97A: sub     esp, 8
0x4DF97D: fstp    [esp+48h+X+4]; X
0x4DF980: call    __isnan
0x4DF985: add     esp, 8
0x4DF988: test    eax, eax
0x4DF98A: jnz     short loc_4DF9A1
0x4DF98C: fld     dword ptr [esi+28h]
0x4DF98F: sub     esp, 8
0x4DF992: fstp    [esp+48h+X+4]; X
0x4DF995: call    __isnan
0x4DF99A: add     esp, 8
0x4DF99D: test    eax, eax
0x4DF99F: jz      short loc_4DF9C8
0x4DF9A1: push    offset aCorruptAngle_0; "Corrupt angle found on reference, setti"...
0x4DF9A6: call    PrintError
0x4DF9AB: mov     eax, ds:0B3F9A8h
0x4DF9B0: mov     [esi+20h], eax
0x4DF9B3: mov     ecx, ds:0B3F9ACh
0x4DF9B9: mov     [esi+24h], ecx
0x4DF9BC: mov     edx, ds:0B3F9B0h
0x4DF9C2: add     esp, 4
0x4DF9C5: mov     [esi+28h], edx
0x4DF9C8: lea     ebp, [esi+44h]
0x4DF9CB: push    esi
0x4DF9CC: mov     ecx, ebp
0x4DF9CE: call    ExtraDataList_Link?
0x4DF9D3: mov     eax, [esi]
0x4DF9D5: mov     edx, [eax+170h]
0x4DF9DB: mov     ecx, esi
0x4DF9DD: call    edx
0x4DF9DF: test    eax, eax
0x4DF9E1: jz      short loc_4DFA1E
0x4DF9E3: mov     eax, [esi]
0x4DF9E5: mov     edx, [eax+170h]
0x4DF9EB: mov     ecx, esi
0x4DF9ED: call    edx
0x4DF9EF: cmp     byte ptr [eax+4], 18h
0x4DF9F3: jnz     short loc_4DFA1E
0x4DF9F5: push    esi
0x4DF9F6: call    TESObjectREFR__AddToLowPathWorld
0x4DF9FB: mov     eax, [esi]
0x4DF9FD: mov     edx, [eax+170h]
0x4DFA03: add     esp, 4
0x4DFA06: mov     ecx, esi
0x4DFA08: call    edx
0x4DFA0A: cmp     eax, ds:0B35EBCh
0x4DFA10: jnz     short loc_4DFA1E
0x4DFA12: mov     ecx, ds:0B333C4h
0x4DFA18: push    esi
0x4DFA19: call    sub_65FD20
0x4DFA1E: mov     eax, [esi]
0x4DFA20: mov     edx, [eax+190h]
0x4DFA26: mov     ecx, esi
0x4DFA28: call    edx
0x4DFA2A: test    al, al
0x4DFA2C: mov     ecx, esi
0x4DFA2E: jz      short loc_4DFA75
0x4DFA30: call    sub_5E0260
0x4DFA35: test    al, al
0x4DFA37: jnz     short loc_4DFA45
0x4DFA39: mov     eax, [esi]
0x4DFA3B: mov     edx, [eax+37Ch]
0x4DFA41: mov     ecx, esi
0x4DFA43: call    edx
0x4DFA45: mov     ecx, esi
0x4DFA47: call    Actor_IsPlayer
0x4DFA4C: test    al, al
0x4DFA4E: jnz     short loc_4DFABD
0x4DFA50: push    0; unk
0x4DFA52: mov     ecx, esi; this
0x4DFA54: call    TESObjectREFR_IsDead
0x4DFA59: test    al, al
0x4DFA5B: jz      short loc_4DFABD
0x4DFA5D: push    2; newDeadState
0x4DFA5F: mov     ecx, esi; this
0x4DFA61: call    Actor_HandleDeathSTate????
0x4DFA66: push    3
0x4DFA68: push    esi
0x4DFA69: mov     ecx, offset ActorProcessManager_ptr
0x4DFA6E: call    sub_674550
0x4DFA73: jmp     short loc_4DFABD
0x4DFA75: mov     eax, [esi]
0x4DFA77: mov     edx, [eax+170h]
0x4DFA7D: call    edx
0x4DFA7F: movzx   eax, byte ptr [eax+4]
0x4DFA83: cmp     eax, 1Ch
0x4DFA86: jz      short loc_4DFABD
0x4DFA88: cmp     eax, 1Dh
0x4DFA8B: jle     short loc_4DFA92
0x4DFA8D: cmp     eax, 20h ; ' '
0x4DFA90: jle     short loc_4DFABD
0x4DFA92: mov     ecx, ds:0B3F9A8h
0x4DFA98: mov     edx, [esi]
0x4DFA9A: mov     edx, [edx+0F8h]
0x4DFAA0: sub     esp, 0Ch
0x4DFAA3: mov     eax, esp
0x4DFAA5: mov     [eax], ecx
0x4DFAA7: mov     ecx, ds:0B3F9ACh
0x4DFAAD: mov     [eax+4], ecx
0x4DFAB0: mov     ecx, ds:0B3F9B0h
0x4DFAB6: mov     [eax+8], ecx
0x4DFAB9: mov     ecx, esi
0x4DFABB: call    edx
0x4DFABD: mov     eax, ds:0B33B00h
0x4DFAC2: mov     eax, [eax+18h]
0x4DFAC5: mov     ecx, eax
0x4DFAC7: shr     ecx, 0Bh
0x4DFACA: test    cl, 1
0x4DFACD: jz      short loc_4DFAD6
0x4DFACF: shr     eax, 6
0x4DFAD2: test    al, 1
0x4DFAD4: jz      short loc_4DFB49
0x4DFAD6: mov     ecx, ebp
0x4DFAD8: call    sub_420260
0x4DFADD: mov     edi, eax
0x4DFADF: test    edi, edi
0x4DFAE1: jz      short loc_4DFB49
0x4DFAE3: mov     ecx, ds:0B33B00h
0x4DFAE9: call    sub_45A500
0x4DFAEE: mov     ecx, ds:0B33B00h
0x4DFAF4: mov     edx, [ecx+18h]
0x4DFAF7: shr     edx, 6
0x4DFAFA: test    dl, 1
0x4DFAFD: mov     byte ptr [esp+40h+var_C], al
0x4DFB01: jnz     short loc_4DFB0A
0x4DFB03: push    0
0x4DFB05: call    sub_45A530
0x4DFB0A: mov     ecx, ebp
0x4DFB0C: call    sub_420340
0x4DFB11: test    al, al
0x4DFB13: jz      short loc_4DFB25
0x4DFB15: mov     eax, [edi+8]
0x4DFB18: shr     eax, 0Bh
0x4DFB1B: not     al
0x4DFB1D: and     eax, 0FFFFFF01h
0x4DFB22: push    eax
0x4DFB23: jmp     short loc_4DFB32
0x4DFB25: mov     ecx, [edi+8]
0x4DFB28: shr     ecx, 0Bh
0x4DFB2B: and     ecx, 0FFFFFF01h
0x4DFB31: push    ecx; a2
0x4DFB32: mov     ecx, esi; this
0x4DFB34: call    TESForm_SetEnabled?
0x4DFB39: mov     edx, [esp+40h+var_C]
0x4DFB3D: mov     ecx, ds:0B33B00h
0x4DFB43: push    edx
0x4DFB44: call    sub_45A530
0x4DFB49: mov     ecx, esi
0x4DFB4B: call    sub_4DBF90
0x4DFB50: push    1; a2
0x4DFB52: mov     ecx, esi; this
0x4DFB54: call    TESForm_SetIsLinked
0x4DFB59: mov     eax, ds:0B34D88h
0x4DFB5E: test    eax, eax
0x4DFB60: mov     ecx, [esp+40h+var_8]
0x4DFB64: mov     ds:0B06B18h, bl
0x4DFB6A: mov     ds:0B34D88h, ecx
0x4DFB70: jz      loc_4DFCB9
0x4DFB76: mov     ecx, [esi+40h]; this
0x4DFB79: test    ecx, ecx
0x4DFB7B: jz      short loc_4DFBF3
0x4DFB7D: call    TESObjectCELL_IsInterior
0x4DFB82: test    al, al
0x4DFB84: jz      short loc_4DFBF3
0x4DFB86: mov     edx, [esi]
0x4DFB88: mov     eax, [edx+170h]
0x4DFB8E: mov     edi, [esi+40h]
0x4DFB91: mov     ecx, esi
0x4DFB93: call    eax
0x4DFB95: mov     ecx, [esi+40h]
0x4DFB98: mov     edx, [esi+0Ch]
0x4DFB9B: mov     ebp, [ecx+0Ch]
0x4DFB9E: mov     ebx, eax
0x4DFBA0: mov     eax, [esi]
0x4DFBA2: mov     [esp+40h+var_8], edx
0x4DFBA6: mov     edx, [eax+170h]
0x4DFBAC: mov     ecx, esi
0x4DFBAE: call    edx
0x4DFBB0: mov     eax, [eax+0Ch]
0x4DFBB3: mov     edx, [edi]
0x4DFBB5: mov     [esp+40h+var_C], eax
0x4DFBB9: mov     eax, [edx+0D4h]
0x4DFBBF: push    ebp
0x4DFBC0: mov     ecx, edi
0x4DFBC2: call    eax
0x4DFBC4: mov     ecx, [esp+44h+var_8]
0x4DFBC8: mov     edx, [esp+44h+var_C]
0x4DFBCC: push    eax
0x4DFBCD: mov     eax, [ebx]
0x4DFBCF: push    ecx
0x4DFBD0: push    offset EmptyString
0x4DFBD5: push    edx
0x4DFBD6: mov     edx, [eax+0D4h]
0x4DFBDC: mov     ecx, ebx
0x4DFBDE: call    edx
0x4DFBE0: push    eax; ArgList
0x4DFBE1: push    offset aErrorsWereEnco; "Errors were encountered during InitItem"...
0x4DFBE6: call    PrintError
0x4DFBEB: add     esp, 1Ch
0x4DFBEE: jmp     loc_4DFCB9
0x4DFBF3: mov     ebx, [esi+40h]
0x4DFBF6: test    ebx, ebx
0x4DFBF8: mov     ecx, esi
0x4DFBFA: jz      short loc_4DFC7A
0x4DFBFC: mov     eax, [esi]
0x4DFBFE: mov     edx, [eax+170h]
0x4DFC04: call    edx
0x4DFC06: mov     edi, [esi+40h]
0x4DFC09: mov     ecx, [esi+0Ch]
0x4DFC0C: mov     edx, [esi]
0x4DFC0E: mov     ebp, eax
0x4DFC10: mov     eax, [edi+0Ch]
0x4DFC13: mov     [esp+40h+var_8], eax
0x4DFC17: mov     eax, [edx+170h]
0x4DFC1D: mov     [esp+40h+var_C], ecx
0x4DFC21: mov     ecx, esi
0x4DFC23: call    eax
0x4DFC25: mov     ecx, [eax+0Ch]
0x4DFC28: mov     edx, [esp+40h+var_8]
0x4DFC2C: mov     [esp+40h+var_4], ecx
0x4DFC30: push    edx
0x4DFC31: mov     ecx, edi; this
0x4DFC33: call    TESObjectCELL_GetYCoordinate
0x4DFC38: push    eax
0x4DFC39: mov     ecx, edi; this
0x4DFC3B: call    TESObjectCELL_GetXCoordinate
0x4DFC40: push    eax
0x4DFC41: mov     eax, [ebx]
0x4DFC43: mov     edx, [eax+0D4h]
0x4DFC49: mov     ecx, ebx
0x4DFC4B: call    edx
0x4DFC4D: mov     ecx, [esp+4Ch+var_4]
0x4DFC51: mov     edx, [ebp+0]
0x4DFC54: push    eax
0x4DFC55: mov     eax, [esp+50h+var_C]
0x4DFC59: push    eax
0x4DFC5A: mov     eax, [edx+0D4h]
0x4DFC60: push    offset EmptyString
0x4DFC65: push    ecx
0x4DFC66: mov     ecx, ebp
0x4DFC68: call    eax
0x4DFC6A: push    eax; ArgList
0x4DFC6B: push    offset aErrorsWereEn_0; "Errors were encountered during InitItem"...
0x4DFC70: call    PrintError
0x4DFC75: add     esp, 24h
0x4DFC78: jmp     short loc_4DFCB9
0x4DFC7A: mov     edx, [esi]
0x4DFC7C: mov     eax, [edx+170h]
0x4DFC82: call    eax
0x4DFC84: mov     edx, [esi]
0x4DFC86: mov     ebx, [esi+0Ch]
0x4DFC89: mov     edi, eax
0x4DFC8B: mov     eax, [edx+170h]
0x4DFC91: mov     ecx, esi
0x4DFC93: call    eax
0x4DFC95: mov     eax, [eax+0Ch]
0x4DFC98: mov     edx, [edi]
0x4DFC9A: push    ebx
0x4DFC9B: push    offset EmptyString
0x4DFCA0: push    eax
0x4DFCA1: mov     eax, [edx+0D4h]
0x4DFCA7: mov     ecx, edi
0x4DFCA9: call    eax
0x4DFCAB: push    eax; ArgList
0x4DFCAC: push    offset aErrorsWereEn_1; "Errors were encountered during InitItem"...
0x4DFCB1: call    PrintError
0x4DFCB6: add     esp, 14h
0x4DFCB9: mov     ecx, esi
0x4DFCBB: call    sub_4D70E0
0x4DFCC0: mov     ecx, esi; this
0x4DFCC2: call    TESObjectREFR_GetContainer
0x4DFCC7: test    eax, eax
0x4DFCC9: jz      short loc_4DFCFA
0x4DFCCB: push    eax
0x4DFCCC: push    esi; a1
0x4DFCCD: call    ContainerExtraData_GetContainerExtraDataForRef
0x4DFCD2: mov     edi, eax
0x4DFCD4: add     esp, 8
0x4DFCD7: mov     ecx, edi
0x4DFCD9: call    ContainerExtraData_EvaluateOwnerLeveledItems
0x4DFCDE: mov     ecx, edi
0x4DFCE0: call    ExtraContainerChanges_RunScripts
0x4DFCE5: mov     edi, [edi]
0x4DFCE7: cmp     dword ptr [edi+4], 0
0x4DFCEB: jnz     short loc_4DFCFA
0x4DFCED: cmp     dword ptr [edi], 0
0x4DFCF0: jnz     short loc_4DFCFA
0x4DFCF2: lea     ecx, [esi+44h]
0x4DFCF5: call    ExtraDataList_RemoveContainerExtraData
0x4DFCFA: and     dword ptr [esi+8], 0FFDFFFFFh
0x4DFD01: pop     edi
0x4DFD02: pop     esi
0x4DFD03: pop     ebp
0x4DFD04: pop     ebx
0x4DFD05: mov     esp, ebp
0x4DFD07: pop     ebp
0x4DFD08: retn
