0x632C30: mov     eax, [esp+arg_8]
0x632C34: mov     edx, [esp+arg_0]
0x632C38: push    ebx
0x632C39: push    ebp
0x632C3A: push    esi
0x632C3B: push    edi
0x632C3C: mov     edi, ecx
0x632C3E: mov     ecx, [esp+10h+arg_4]
0x632C42: push    eax
0x632C43: push    ecx
0x632C44: push    edx
0x632C45: mov     ecx, edi
0x632C47: call    MiddleHighProc_LinkMagicData?
0x632C4C: mov     eax, [edi+218h]
0x632C52: push    0; int
0x632C54: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x632C59: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x632C5E: push    0; int
0x632C60: push    eax; a1
0x632C61: call    TESForm_LookupByFormID
0x632C66: add     esp, 4
0x632C69: push    eax; void *
0x632C6A: call    OblivionDynamicCast
0x632C6F: add     esp, 14h
0x632C72: push    0; int
0x632C74: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x632C79: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x632C7E: mov     [edi+218h], eax
0x632C84: mov     eax, [edi+1A4h]
0x632C8A: push    0; int
0x632C8C: push    eax; a1
0x632C8D: call    TESForm_LookupByFormID
0x632C92: add     esp, 4
0x632C95: push    eax; void *
0x632C96: call    OblivionDynamicCast
0x632C9B: add     esp, 14h
0x632C9E: push    0; int
0x632CA0: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x632CA5: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x632CAA: mov     [edi+1A4h], eax
0x632CB0: mov     eax, [edi+2C4h]
0x632CB6: push    0; int
0x632CB8: push    eax; a1
0x632CB9: call    TESForm_LookupByFormID
0x632CBE: add     esp, 4
0x632CC1: push    eax; void *
0x632CC2: call    OblivionDynamicCast
0x632CC7: mov     esi, [edi+18Ch]
0x632CCD: add     esp, 14h
0x632CD0: xor     ebp, ebp
0x632CD2: test    esi, esi
0x632CD4: mov     [edi+2C4h], eax
0x632CDA: jz      loc_632D7B
0x632CE0: cmp     dword ptr [esi+4], 0
0x632CE4: jnz     short loc_632CEF
0x632CE6: cmp     dword ptr [esi], 0
0x632CE9: jz      loc_632D7B
0x632CEF: mov     ebx, [esi]
0x632CF1: mov     eax, [ebx]
0x632CF3: test    eax, eax
0x632CF5: jz      short loc_632D19
0x632CF7: push    0; int
0x632CF9: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x632CFE: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x632D03: push    0; int
0x632D05: push    eax; a1
0x632D06: call    TESForm_LookupByFormID
0x632D0B: add     esp, 4
0x632D0E: push    eax; void *
0x632D0F: call    OblivionDynamicCast
0x632D14: add     esp, 14h
0x632D17: mov     [ebx], eax
0x632D19: cmp     dword ptr [ebx], 0
0x632D1C: jnz     short loc_632D6E
0x632D1E: test    ebp, ebp
0x632D20: jnz     short loc_632D58
0x632D22: mov     eax, [esi+4]
0x632D25: test    eax, eax
0x632D27: jz      short loc_632D47
0x632D29: mov     ecx, [eax+4]
0x632D2C: mov     [esi+4], ecx
0x632D2F: mov     edx, [eax]
0x632D31: push    eax
0x632D32: mov     [esi], edx
0x632D34: call    FormHeapFree
0x632D39: add     esp, 4
0x632D3C: push    ebx
0x632D3D: call    FormHeapFree
0x632D42: add     esp, 4
0x632D45: jmp     short loc_632D73
0x632D47: push    ebx
0x632D48: mov     dword ptr [esi], 0
0x632D4E: call    FormHeapFree
0x632D53: add     esp, 4
0x632D56: jmp     short loc_632D73
0x632D58: push    ebx
0x632D59: mov     ecx, ebp
0x632D5B: call    BSSimpleList_Remove
0x632D60: mov     esi, [ebp+4]
0x632D63: push    ebx
0x632D64: call    FormHeapFree
0x632D69: add     esp, 4
0x632D6C: jmp     short loc_632D73
0x632D6E: mov     ebp, esi
0x632D70: mov     esi, [esi+4]
0x632D73: test    esi, esi
0x632D75: jnz     loc_632CE0
0x632D7B: mov     eax, ds:0B33B00h
0x632D80: cmp     byte ptr [eax+7Ch], 5Ah ; 'Z'
0x632D84: jb      short loc_632DF1
0x632D86: lea     esi, [edi+2C8h]
0x632D8C: mov     ebx, 5
0x632D91: mov     eax, [esi]
0x632D93: test    eax, eax
0x632D95: jz      short loc_632DB9
0x632D97: push    0; int
0x632D99: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x632D9E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x632DA3: push    0; int
0x632DA5: push    eax; a1
0x632DA6: call    TESForm_LookupByFormID
0x632DAB: add     esp, 4
0x632DAE: push    eax; void *
0x632DAF: call    OblivionDynamicCast
0x632DB4: add     esp, 14h
0x632DB7: mov     [esi], eax
0x632DB9: add     esi, 4
0x632DBC: sub     ebx, 1
0x632DBF: jnz     short loc_632D91
0x632DC1: mov     eax, [edi+2E4h]
0x632DC7: test    eax, eax
0x632DC9: jz      short loc_632DF1
0x632DCB: push    0; int
0x632DCD: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x632DD2: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x632DD7: push    0; int
0x632DD9: push    eax; a1
0x632DDA: call    TESForm_LookupByFormID
0x632DDF: add     esp, 4
0x632DE2: push    eax; void *
0x632DE3: call    OblivionDynamicCast
0x632DE8: add     esp, 14h
0x632DEB: mov     [edi+2E4h], eax
0x632DF1: mov     ecx, ds:0B33B00h
0x632DF7: cmp     byte ptr [ecx+7Ch], 6Ah ; 'j'
0x632DFB: jb      short loc_632E2D
0x632DFD: mov     eax, [edi+258h]
0x632E03: test    eax, eax
0x632E05: jz      short loc_632E2D
0x632E07: push    0; int
0x632E09: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x632E0E: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x632E13: push    0; int
0x632E15: push    eax; a1
0x632E16: call    TESForm_LookupByFormID
0x632E1B: add     esp, 4
0x632E1E: push    eax; void *
0x632E1F: call    OblivionDynamicCast
0x632E24: add     esp, 14h
0x632E27: mov     [edi+258h], eax
0x632E2D: pop     edi
0x632E2E: pop     esi
0x632E2F: pop     ebp
0x632E30: pop     ebx
0x632E31: retn    0Ch
