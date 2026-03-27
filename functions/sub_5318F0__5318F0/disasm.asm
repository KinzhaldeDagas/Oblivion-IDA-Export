0x5318F0: push    0FFFFFFFFh
0x5318F2: push    offset SEH_5318F0
0x5318F7: mov     eax, large fs:0
0x5318FD: push    eax
0x5318FE: sub     esp, 124h
0x531904: mov     eax, ds:0B30AACh
0x531909: xor     eax, esp
0x53190B: mov     [esp+130h+var_10], eax
0x531912: push    ebx
0x531913: push    ebp
0x531914: push    esi
0x531915: push    edi
0x531916: mov     eax, ds:0B30AACh
0x53191B: xor     eax, esp
0x53191D: push    eax
0x53191E: lea     eax, [esp+144h+var_C]
0x531925: mov     large fs:0, eax
0x53192B: mov     ebx, ecx
0x53192D: mov     eax, [ebx+8]
0x531930: shr     eax, 3
0x531933: test    al, 1
0x531935: jnz     loc_531B09
0x53193B: push    0FFFFFFFFh; a2
0x53193D: call    TESForm_GetOverrideFile
0x531942: xor     esi, esi
0x531944: lea     ebp, [ebx+28h]
0x531947: test    ebp, ebp
0x531949: mov     [esp+144h+a2], eax
0x53194D: mov     [esp+144h+var_124], esi
0x531951: jz      loc_531AE6
0x531957: jmp     short loc_531964
0x531959: align 10h
0x531960: mov     esi, [esp+144h+var_124]
0x531964: mov     eax, [ebp+0]
0x531967: test    eax, eax
0x531969: jz      loc_531AE6
0x53196F: mov     ecx, [esp+144h+a2]
0x531973: push    ecx; a2
0x531974: lea     edx, [esp+148h+ArgList]
0x531978: push    edx; a1
0x531979: mov     dword ptr [esp+14Ch+ArgList], eax
0x53197D: call    TESForm_ResolveFormID
0x531982: mov     eax, dword ptr [esp+14Ch+ArgList]
0x531986: add     esp, 8
0x531989: push    0; int
0x53198B: push    offset ??_R0?AVTESTopic@@@8; struct TypeDescriptor *
0x531990: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x531995: push    0; int
0x531997: push    eax; a1
0x531998: call    TESForm_LookupByFormID
0x53199D: add     esp, 4
0x5319A0: push    eax; void *
0x5319A1: call    OblivionDynamicCast
0x5319A6: add     esp, 14h
0x5319A9: test    eax, eax
0x5319AB: jnz     loc_531AD4
0x5319B1: mov     eax, [ebp+4]
0x5319B4: test    eax, eax
0x5319B6: jnz     short loc_5319D1
0x5319B8: test    esi, esi
0x5319BA: jz      short loc_5319CD
0x5319BC: mov     ecx, dword ptr [esp+144h+ArgList]
0x5319C0: push    ecx
0x5319C1: mov     ecx, esi
0x5319C3: call    BSSimpleList_Remove
0x5319C8: mov     ebp, [esi+4]
0x5319CB: jmp     short loc_5319EE
0x5319CD: test    eax, eax
0x5319CF: jz      short loc_5319E7
0x5319D1: mov     edx, [eax+4]
0x5319D4: mov     [ebp+4], edx
0x5319D7: mov     ecx, [eax]
0x5319D9: push    eax
0x5319DA: mov     [ebp+0], ecx
0x5319DD: call    FormHeapFree
0x5319E2: add     esp, 4
0x5319E5: jmp     short loc_5319EE
0x5319E7: mov     dword ptr [ebp+0], 0
0x5319EE: push    ebx
0x5319EF: call    TESTopic_static_GetTopicInfoParent?
0x5319F4: add     esp, 4
0x5319F7: mov     esi, eax
0x5319F9: push    ebx
0x5319FA: mov     ecx, esi
0x5319FC: call    sub_52F570
0x531A01: mov     edi, eax
0x531A03: xor     eax, eax
0x531A05: mov     [esp+144h+var_12C], eax
0x531A09: mov     word ptr [esp+144h+var_128], ax
0x531A0E: mov     word ptr [esp+144h+var_128+2], ax
0x531A13: push    1
0x531A15: lea     edx, [esp+148h+var_12C]
0x531A19: push    edx
0x531A1A: mov     ecx, ebx
0x531A1C: mov     [esp+14Ch+var_4], eax
0x531A23: call    sub_531200
0x531A28: test    esi, esi
0x531A2A: jz      short loc_531A7F
0x531A2C: test    edi, edi
0x531A2E: jz      short loc_531A7F
0x531A30: mov     eax, [esi+0Ch]
0x531A33: mov     ecx, [edi+0Ch]
0x531A36: mov     edx, [ebx+0Ch]
0x531A39: push    eax
0x531A3A: mov     eax, [esi]
0x531A3C: mov     [esp+148h+var_120], ecx
0x531A40: mov     [esp+148h+var_118], edx
0x531A44: mov     edx, [eax+0D4h]
0x531A4A: mov     ecx, esi
0x531A4C: call    edx
0x531A4E: mov     edx, [edi]
0x531A50: push    eax
0x531A51: mov     eax, [esp+14Ch+var_120]
0x531A55: push    eax
0x531A56: mov     eax, [edx+0D4h]
0x531A5C: mov     ecx, edi
0x531A5E: call    eax
0x531A60: mov     esi, [esp+150h+var_12C]
0x531A64: mov     ecx, [esp+150h+var_118]
0x531A68: push    eax
0x531A69: push    esi
0x531A6A: push    ecx
0x531A6B: lea     edx, [esp+15Ch+var_114]
0x531A6F: push    offset aTopicinfo08xSI; "TopicInfo %08X \"%s\" in Quest %s (%08x"...
0x531A74: push    edx
0x531A75: call    __sprintf
0x531A7A: add     esp, 20h
0x531A7D: jmp     short loc_531A9A
0x531A7F: mov     eax, [ebx+0Ch]
0x531A82: mov     esi, [esp+144h+var_12C]
0x531A86: push    esi
0x531A87: push    eax
0x531A88: lea     eax, [esp+14Ch+var_114]
0x531A8C: push    offset aTopicinfo08xS; "TopicInfo %08X \"%s\""
0x531A91: push    eax
0x531A92: call    __sprintf
0x531A97: add     esp, 10h
0x531A9A: mov     edx, dword ptr [esp+144h+ArgList]
0x531A9E: lea     ecx, [esp+144h+var_114]
0x531AA2: push    ecx
0x531AA3: push    edx; ArgList
0x531AA4: push    offset aUnableToFin_27; "Unable to find topic (%08X) for %s"
0x531AA9: call    PrintError
0x531AAE: push    esi
0x531AAF: mov     [esp+154h+var_4], 0FFFFFFFFh
0x531ABA: call    FormHeapFree
0x531ABF: add     esp, 10h
0x531AC2: xor     eax, eax
0x531AC4: mov     [esp+144h+var_12C], eax
0x531AC8: mov     word ptr [esp+144h+var_128+2], ax
0x531ACD: mov     word ptr [esp+144h+var_128], ax
0x531AD2: jmp     short loc_531ADE
0x531AD4: mov     [ebp+0], eax
0x531AD7: mov     [esp+144h+var_124], ebp
0x531ADB: mov     ebp, [ebp+4]
0x531ADE: test    ebp, ebp
0x531AE0: jnz     loc_531960
0x531AE6: lea     ecx, [ebx+18h]
0x531AE9: test    ecx, ecx
0x531AEB: jz      short loc_531AF3
0x531AED: push    ebx
0x531AEE: call    sub_56A480
0x531AF3: mov     ecx, [ebx+30h]
0x531AF6: test    ecx, ecx
0x531AF8: jz      short loc_531B00
0x531AFA: push    ebx
0x531AFB: call    sub_5314D0
0x531B00: push    1; a2
0x531B02: mov     ecx, ebx; this
0x531B04: call    TESForm_SetIsLinked
0x531B09: mov     ecx, dword ptr [esp+144h+var_C]
0x531B10: mov     large fs:0, ecx
0x531B17: pop     ecx
0x531B18: pop     edi
0x531B19: pop     esi
0x531B1A: pop     ebp
0x531B1B: pop     ebx
0x531B1C: mov     ecx, [esp+130h+var_10]
0x531B23: xor     ecx, esp
0x531B25: call    @__security_check_cookie@4; __security_check_cookie(x)
0x531B2A: add     esp, 130h
0x531B30: retn
