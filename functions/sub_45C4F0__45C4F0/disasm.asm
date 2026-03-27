0x45C4F0: sub     esp, 20h
0x45C4F3: mov     ecx, [esp+20h+arg_4]
0x45C4F7: mov     eax, [ecx]
0x45C4F9: push    ebx
0x45C4FA: push    ebp
0x45C4FB: push    esi
0x45C4FC: xor     esi, esi
0x45C4FE: cmp     eax, esi
0x45C500: push    edi; ArgList
0x45C501: mov     [esp+30h+var_1C], eax
0x45C505: jnz     short loc_45C50E
0x45C507: mov     eax, [ecx+10h]
0x45C50A: mov     [esp+30h+var_1C], eax
0x45C50E: push    eax; a1
0x45C50F: call    TESForm_LookupByFormID
0x45C514: push    esi; int
0x45C515: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x45C51A: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45C51F: mov     edi, eax
0x45C521: push    esi; int
0x45C522: push    edi; void *
0x45C523: call    OblivionDynamicCast
0x45C528: push    esi; int
0x45C529: push    offset ??_R0?AVTESWorldSpace@@@8; struct TypeDescriptor *
0x45C52E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x45C533: mov     ebx, eax
0x45C535: push    esi; int
0x45C536: push    edi; void *
0x45C537: mov     [esp+5Ch+var_18], ebx
0x45C53B: call    OblivionDynamicCast
0x45C540: add     esp, 2Ch
0x45C543: mov     ecx, eax
0x45C545: xor     ebp, ebp
0x45C547: cmp     ebx, esi
0x45C549: mov     [esp+30h+var_14], ecx
0x45C54D: mov     [esp+30h+var_20], esi
0x45C551: jz      loc_45C60A
0x45C557: xor     ecx, ecx
0x45C559: lea     eax, [ebx+10h]
0x45C55C: cmp     eax, esi
0x45C55E: mov     [esp+30h+arg_4], ecx
0x45C562: jz      short loc_45C576
0x45C564: cmp     [eax], esi
0x45C566: jz      short loc_45C56B
0x45C568: add     ecx, 1
0x45C56B: mov     eax, [eax+4]
0x45C56E: cmp     eax, esi
0x45C570: jnz     short loc_45C564
0x45C572: mov     [esp+30h+arg_4], ecx
0x45C576: xor     ebx, ebx
0x45C578: test    ecx, ecx
0x45C57A: jle     short loc_45C5E1
0x45C57C: lea     esp, [esp+0]
0x45C580: mov     ecx, [esp+30h+var_18]; this
0x45C584: push    ebx; a2
0x45C585: call    TESForm_GetOverrideFile
0x45C58A: mov     ecx, eax
0x45C58C: call    sub_4520F0
0x45C591: mov     ecx, [esp+30h+var_18]
0x45C595: mov     edi, eax
0x45C597: push    ecx
0x45C598: mov     ecx, edi
0x45C59A: call    TESFile__FindForm
0x45C59F: test    al, al
0x45C5A1: jz      short loc_45C5D0
0x45C5A3: mov     edx, [esp+30h+ArgList]
0x45C5A7: push    edx
0x45C5A8: push    edi
0x45C5A9: call    sub_4CC850
0x45C5AE: add     esp, 8
0x45C5B1: test    al, al
0x45C5B3: jz      short loc_45C5D0
0x45C5B5: mov     ecx, edi
0x45C5B7: call    TESFile_GetRecordType
0x45C5BC: push    1
0x45C5BE: push    eax
0x45C5BF: call    sub_4DB260
0x45C5C4: mov     esi, eax
0x45C5C6: push    edi
0x45C5C7: push    esi
0x45C5C8: call    TESDataHandler_LoadForm
0x45C5CD: add     esp, 10h
0x45C5D0: add     ebx, 1
0x45C5D3: cmp     ebx, [esp+30h+arg_4]
0x45C5D7: jl      short loc_45C580
0x45C5D9: test    esi, esi
0x45C5DB: jnz     loc_45C6E6
0x45C5E1: mov     edx, [esp+30h+var_20]
0x45C5E5: mov     eax, [esp+30h+var_1C]
0x45C5E9: mov     ecx, [esp+30h+ArgList]
0x45C5ED: push    edx
0x45C5EE: push    ebp
0x45C5EF: push    eax
0x45C5F0: push    ecx; ArgList
0x45C5F1: push    offset aReference08xCo; "Reference %08X could not be loaded into"...
0x45C5F6: call    PrintError
0x45C5FB: add     esp, 14h
0x45C5FE: xor     eax, eax
0x45C600: pop     edi
0x45C601: pop     esi
0x45C602: pop     ebp
0x45C603: pop     ebx
0x45C604: add     esp, 20h
0x45C607: retn    8
0x45C60A: cmp     ecx, esi
0x45C60C: jz      loc_45C6D4
0x45C612: xor     edx, edx
0x45C614: lea     eax, [ecx+10h]
0x45C617: cmp     eax, esi
0x45C619: mov     [esp+30h+var_10], edx
0x45C61D: jz      short loc_45C632
0x45C61F: nop
0x45C620: cmp     [eax], esi
0x45C622: jz      short loc_45C627
0x45C624: add     edx, 1
0x45C627: mov     eax, [eax+4]
0x45C62A: cmp     eax, esi
0x45C62C: jnz     short loc_45C620
0x45C62E: mov     [esp+30h+var_10], edx
0x45C632: mov     eax, [esp+30h+arg_4]
0x45C636: fld     dword ptr [eax+4]
0x45C639: fstp    [esp+30h+var_20]
0x45C63D: fld     [esp+30h+var_20]
0x45C641: fistp   [esp+30h+arg_4]
0x45C645: mov     ebp, [esp+30h+arg_4]
0x45C649: fld     dword ptr [eax+8]
0x45C64C: fstp    [esp+30h+var_20]
0x45C650: sar     ebp, 0Ch
0x45C653: fld     [esp+30h+var_20]
0x45C657: fistp   [esp+30h+arg_4]
0x45C65B: mov     eax, [esp+30h+arg_4]
0x45C65F: sar     eax, 0Ch
0x45C662: xor     ebx, ebx
0x45C664: test    edx, edx
0x45C666: mov     [esp+30h+var_20], eax
0x45C66A: jle     loc_45C5E1
0x45C670: jmp     short loc_45C676
0x45C672: mov     ecx, [esp+30h+var_14]; this
0x45C676: push    ebx; a2
0x45C677: call    TESForm_GetOverrideFile
0x45C67C: mov     ecx, eax
0x45C67E: call    sub_4520F0
0x45C683: mov     ecx, [esp+30h+var_14]
0x45C687: mov     edi, eax
0x45C689: mov     eax, [esp+30h+var_20]
0x45C68D: push    eax
0x45C68E: push    ebp
0x45C68F: push    edi
0x45C690: call    TESWorldSpace__FindCellInFile
0x45C695: test    al, al
0x45C697: jz      short loc_45C6C6
0x45C699: mov     ecx, [esp+30h+ArgList]
0x45C69D: push    ecx
0x45C69E: push    edi
0x45C69F: call    sub_4CC850
0x45C6A4: add     esp, 8
0x45C6A7: test    al, al
0x45C6A9: jz      short loc_45C6C6
0x45C6AB: mov     ecx, edi
0x45C6AD: call    TESFile_GetRecordType
0x45C6B2: push    1
0x45C6B4: push    eax
0x45C6B5: call    sub_4DB260
0x45C6BA: mov     esi, eax
0x45C6BC: push    edi
0x45C6BD: push    esi
0x45C6BE: call    TESDataHandler_LoadForm
0x45C6C3: add     esp, 10h
0x45C6C6: add     ebx, 1
0x45C6C9: cmp     ebx, [esp+30h+var_10]
0x45C6CD: jl      short loc_45C672
0x45C6CF: jmp     loc_45C5D9
0x45C6D4: push    offset aReferenceToBeL; "Reference to be loaded does not have a "...
0x45C6D9: call    PrintError
0x45C6DE: add     esp, 4
0x45C6E1: jmp     loc_45C5E1
0x45C6E6: mov     edx, [esi]
0x45C6E8: mov     eax, [edx+6Ch]
0x45C6EB: mov     ecx, esi
0x45C6ED: call    eax
0x45C6EF: push    0; int
0x45C6F1: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x45C6F6: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x45C6FB: push    0; int
0x45C6FD: push    esi; void *
0x45C6FE: call    OblivionDynamicCast
0x45C703: mov     edi, eax
0x45C705: add     esp, 14h
0x45C708: test    edi, edi
0x45C70A: jz      short loc_45C73D
0x45C70C: mov     edx, [esi]
0x45C70E: fld     dword ptr [esi+28h]
0x45C711: mov     eax, [edx+174h]
0x45C717: push    ecx
0x45C718: mov     ecx, esi
0x45C71A: fstp    [esp+34h+var_34]; float
0x45C71D: call    eax
0x45C71F: mov     ecx, [esp+34h+var_18]
0x45C723: mov     edx, [esp+34h+var_14]
0x45C727: push    eax; int
0x45C728: push    ecx; int
0x45C729: push    edx; int
0x45C72A: mov     ecx, edi
0x45C72C: call    sub_5E0200
0x45C731: mov     eax, esi
0x45C733: pop     edi
0x45C734: pop     esi
0x45C735: pop     ebp
0x45C736: pop     ebx
0x45C737: add     esp, 20h
0x45C73A: retn    8
0x45C73D: mov     eax, [esi]
0x45C73F: mov     edx, [eax+174h]
0x45C745: mov     ecx, esi
0x45C747: call    edx
0x45C749: mov     edx, [eax]
0x45C74B: sub     esp, 0Ch
0x45C74E: mov     ecx, esp
0x45C750: mov     [ecx], edx
0x45C752: mov     edx, [eax+4]
0x45C755: mov     eax, [eax+8]
0x45C758: mov     [ecx+4], edx
0x45C75B: mov     [ecx+8], eax
0x45C75E: push    esi
0x45C75F: lea     ecx, [esp+40h+var_C]
0x45C763: lea     edi, [esi+44h]
0x45C766: push    ecx
0x45C767: mov     ecx, edi
0x45C769: call    ExtraDataList_SetStartingPosition
0x45C76E: mov     edx, [esi+20h]
0x45C771: mov     ecx, [esi+24h]
0x45C774: sub     esp, 0Ch
0x45C777: mov     eax, esp
0x45C779: mov     [eax], edx
0x45C77B: mov     edx, [esi+28h]
0x45C77E: mov     [eax+4], ecx
0x45C781: mov     [eax+8], edx
0x45C784: push    esi
0x45C785: lea     eax, [esp+40h+var_C]
0x45C789: push    eax
0x45C78A: mov     ecx, edi
0x45C78C: call    ExtraDataList_SetStartingRotation
0x45C791: pop     edi
0x45C792: mov     eax, esi
0x45C794: pop     esi
0x45C795: pop     ebp
0x45C796: pop     ebx
0x45C797: add     esp, 20h
0x45C79A: retn    8
