0x48AA10: push    0FFFFFFFFh
0x48AA12: push    offset SEH_48AA10
0x48AA17: mov     eax, large fs:0
0x48AA1D: push    eax
0x48AA1E: sub     esp, 0Ch
0x48AA21: push    ebx
0x48AA22: push    ebp
0x48AA23: push    esi
0x48AA24: push    edi
0x48AA25: mov     eax, ds:0B30AACh
0x48AA2A: xor     eax, esp
0x48AA2C: push    eax
0x48AA2D: lea     eax, [esp+2Ch+var_C]
0x48AA31: mov     large fs:0, eax
0x48AA37: mov     ebx, ecx
0x48AA39: mov     [esp+2Ch+var_14], ebx
0x48AA3D: mov     ecx, [ebx+4]
0x48AA40: fld     dword ptr ds:0A30634h
0x48AA46: xor     edi, edi
0x48AA48: fstp    dword ptr [ebx+8]
0x48AA4B: cmp     ecx, edi
0x48AA4D: jz      short loc_48AA5B
0x48AA4F: mov     eax, [ecx]
0x48AA51: mov     edx, [eax+40h]
0x48AA54: push    8000000h
0x48AA59: call    edx
0x48AA5B: mov     esi, [esp+2Ch+arg_0]
0x48AA5F: mov     eax, [esi]
0x48AA61: mov     edx, [eax+170h]
0x48AA67: mov     ecx, esi
0x48AA69: call    edx
0x48AA6B: mov     ecx, [ebx]
0x48AA6D: cmp     ecx, edi
0x48AA6F: mov     ebp, eax
0x48AA71: mov     al, 1
0x48AA73: jz      short loc_48AA93
0x48AA75: test    al, al
0x48AA77: jz      loc_48AB17
0x48AA7D: mov     edx, [ecx]
0x48AA7F: cmp     edx, edi
0x48AA81: jz      short loc_48AA8C
0x48AA83: cmp     [edx+8], ebp
0x48AA86: jnz     short loc_48AA8C
0x48AA88: xor     al, al
0x48AA8A: jmp     short loc_48AA8F
0x48AA8C: mov     ecx, [ecx+4]
0x48AA8F: cmp     ecx, edi
0x48AA91: jnz     short loc_48AA75
0x48AA93: mov     [esp+2Ch+arg_0], edi
0x48AA97: mov     ebx, edi
0x48AA99: lea     ebp, [esi+44h]
0x48AA9C: mov     ecx, ebp
0x48AA9E: call    sub_41F620
0x48AAA3: push    14h; Size
0x48AAA5: call    FormHeapAlloc
0x48AAAA: add     esp, 4
0x48AAAD: mov     [esp+2Ch+var_10], eax
0x48AAB1: cmp     eax, edi
0x48AAB3: mov     dword ptr [esp+2Ch+var_4], edi
0x48AAB7: jz      short loc_48AAC2
0x48AAB9: mov     ecx, eax
0x48AABB: call    ExtraDataList_constr
0x48AAC0: mov     edi, eax
0x48AAC2: cmp     dword ptr [esi+48h], 0
0x48AAC6: mov     dword ptr [esp+2Ch+var_4], 0FFFFFFFFh
0x48AACE: mov     [esp+2Ch+var_18], edi
0x48AAD2: jz      short loc_48AB2A
0x48AAD4: push    0
0x48AAD6: push    ebp
0x48AAD7: mov     ecx, edi
0x48AAD9: call    ExtraDataList_CopyListForContainer
0x48AADE: fld     dword ptr [esi+38h]
0x48AAE1: fstp    [esp+2Ch+var_10]
0x48AAE5: push    ecx
0x48AAE6: fld     [esp+30h+var_10]
0x48AAEA: mov     ecx, edi
0x48AAEC: fstp    [esp+30h+var_30]; float
0x48AAEF: call    sub_423A30
0x48AAF4: mov     ecx, edi
0x48AAF6: call    ExtraDataList_GetOwner
0x48AAFB: mov     ecx, ds:0B333C4h
0x48AB01: cmp     eax, ecx
0x48AB03: jnz     short loc_48AB2A
0x48AB05: mov     ebp, [esp+2Ch+var_14]
0x48AB09: cmp     [ebp+4], ecx
0x48AB0C: jnz     short loc_48AB2E
0x48AB0E: mov     ecx, edi
0x48AB10: call    ExtraDataList_RemoveOwner
0x48AB15: jmp     short loc_48AB2E
0x48AB17: cmp     ecx, edi
0x48AB19: jz      loc_48AA93
0x48AB1F: mov     ebx, [ecx]
0x48AB21: mov     [esp+2Ch+arg_0], ebx
0x48AB25: jmp     loc_48AA99
0x48AB2A: mov     ebp, [esp+2Ch+var_14]
0x48AB2E: mov     ecx, [ebp+4]
0x48AB31: mov     eax, [ecx]
0x48AB33: mov     edx, [eax+190h]
0x48AB39: call    edx
0x48AB3B: test    al, al
0x48AB3D: jz      short loc_48AB70
0x48AB3F: mov     eax, [ebp+4]
0x48AB42: test    eax, eax
0x48AB44: jz      short loc_48AB70
0x48AB46: mov     ecx, [eax+58h]
0x48AB49: test    ecx, ecx
0x48AB4B: jz      short loc_48AB70
0x48AB4D: mov     eax, [ecx]
0x48AB4F: mov     edx, [eax+0F4h]
0x48AB55: push    0
0x48AB57: call    edx
0x48AB59: test    eax, eax
0x48AB5B: jz      short loc_48AB70
0x48AB5D: mov     ebp, [eax+8]
0x48AB60: mov     eax, [esi]
0x48AB62: mov     edx, [eax+170h]
0x48AB68: mov     ecx, esi
0x48AB6A: call    edx
0x48AB6C: cmp     ebp, eax
0x48AB6E: jz      short loc_48AB77
0x48AB70: cmp     byte ptr [esp+2Ch+arg_C], 0
0x48AB75: jz      short loc_48AB82
0x48AB77: push    0
0x48AB79: push    1
0x48AB7B: mov     ecx, edi
0x48AB7D: call    SetWorn
0x48AB82: test    ebx, ebx
0x48AB84: jz      loc_48AD2A
0x48AB8A: mov     ebp, [esp+2Ch+arg_4]
0x48AB8E: add     [ebx+4], ebp
0x48AB91: mov     ecx, esi; this
0x48AB93: call    TESObjectREFR_IsPersistent?
0x48AB98: test    al, al
0x48AB9A: jz      short loc_48ABF1
0x48AB9C: push    esi
0x48AB9D: mov     ecx, edi
0x48AB9F: call    ExtraDataList_SetReferencePointer
0x48ABA4: cmp     ebp, 1
0x48ABA7: jle     short loc_48ABB1
0x48ABA9: push    ebp
0x48ABAA: mov     ecx, edi
0x48ABAC: call    ExtraDataList_SetExtraCount
0x48ABB1: cmp     dword ptr [ebx], 0
0x48ABB4: jnz     short loc_48ABE4
0x48ABB6: push    8; Size
0x48ABB8: call    FormHeapAlloc
0x48ABBD: add     esp, 4
0x48ABC0: test    eax, eax
0x48ABC2: jz      short loc_48ABE0
0x48ABC4: mov     dword ptr [eax], 0
0x48ABCA: mov     dword ptr [eax+4], 0
0x48ABD1: push    edi
0x48ABD2: mov     ecx, eax
0x48ABD4: mov     [ebx], eax
0x48ABD6: call    BSSimpleList_PushFront
0x48ABDB: jmp     loc_48ACC0
0x48ABE0: xor     eax, eax
0x48ABE2: mov     [ebx], eax
0x48ABE4: mov     ecx, [ebx]
0x48ABE6: push    edi
0x48ABE7: call    BSSimpleList_PushFront
0x48ABEC: jmp     loc_48ACC0
0x48ABF1: mov     ebp, [ebx]
0x48ABF3: test    ebp, ebp
0x48ABF5: mov     bl, 1
0x48ABF7: jz      short loc_48AC5E
0x48ABF9: lea     esp, [esp+0]
0x48AC00: mov     esi, [ebp+0]
0x48AC03: test    esi, esi
0x48AC05: jz      short loc_48AC5A
0x48AC07: test    bl, bl
0x48AC09: jz      loc_48ACA6
0x48AC0F: test    edi, edi
0x48AC11: jz      short loc_48AC1F
0x48AC13: push    esi
0x48AC14: mov     ecx, edi
0x48AC16: call    ExtraDataList_CompareListForContainer
0x48AC1B: test    al, al
0x48AC1D: jz      short loc_48AC24
0x48AC1F: mov     ebp, [ebp+4]
0x48AC22: jmp     short loc_48AC56
0x48AC24: mov     ecx, esi
0x48AC26: call    ExtraDataList_GetExtraCount
0x48AC2B: add     ax, word ptr [esp+2Ch+arg_4]
0x48AC30: mov     ecx, esi
0x48AC32: push    eax
0x48AC33: call    ExtraDataList_SetExtraCount
0x48AC38: cmp     dword ptr [esi+4], 0
0x48AC3C: jnz     short loc_48AC54
0x48AC3E: mov     eax, [esp+2Ch+arg_0]
0x48AC42: mov     ecx, [eax]
0x48AC44: push    esi
0x48AC45: call    BSSimpleList_Remove
0x48AC4A: mov     edx, [esi]
0x48AC4C: mov     eax, [edx]
0x48AC4E: push    1
0x48AC50: mov     ecx, esi
0x48AC52: call    eax
0x48AC54: xor     bl, bl
0x48AC56: test    ebp, ebp
0x48AC58: jnz     short loc_48AC00
0x48AC5A: test    bl, bl
0x48AC5C: jz      short loc_48ACA6
0x48AC5E: test    edi, edi
0x48AC60: jz      short loc_48AC68
0x48AC62: cmp     dword ptr [edi+4], 0
0x48AC66: jz      short loc_48ACAA
0x48AC68: mov     esi, [esp+2Ch+arg_0]
0x48AC6C: cmp     dword ptr [esi], 0
0x48AC6F: jnz     short loc_48AC9C
0x48AC71: push    8; Size
0x48AC73: call    FormHeapAlloc
0x48AC78: add     esp, 4
0x48AC7B: test    eax, eax
0x48AC7D: jz      short loc_48AC98
0x48AC7F: mov     dword ptr [eax], 0
0x48AC85: mov     dword ptr [eax+4], 0
0x48AC8C: push    edi
0x48AC8D: mov     ecx, eax
0x48AC8F: mov     [esi], eax
0x48AC91: call    BSSimpleList_PushFront
0x48AC96: jmp     short loc_48ACBC
0x48AC98: xor     eax, eax
0x48AC9A: mov     [esi], eax
0x48AC9C: mov     ecx, [esi]
0x48AC9E: push    edi
0x48AC9F: call    BSSimpleList_PushFront
0x48ACA4: jmp     short loc_48ACBC
0x48ACA6: test    edi, edi
0x48ACA8: jz      short loc_48ACB4
0x48ACAA: mov     edx, [edi]
0x48ACAC: mov     eax, [edx]
0x48ACAE: push    1
0x48ACB0: mov     ecx, edi
0x48ACB2: call    eax
0x48ACB4: mov     [esp+2Ch+var_18], 0
0x48ACBC: mov     ebx, [esp+2Ch+arg_0]
0x48ACC0: mov     eax, [ebx]
0x48ACC2: test    eax, eax
0x48ACC4: jz      loc_48ADFF
0x48ACCA: cmp     dword ptr [eax+4], 0
0x48ACCE: jnz     loc_48ADFF
0x48ACD4: cmp     dword ptr [eax], 0
0x48ACD7: jnz     loc_48ADFF
0x48ACDD: cmp     dword ptr [ebx+4], 0
0x48ACE1: jnz     loc_48ADFF
0x48ACE7: mov     ecx, [esp+2Ch+var_14]
0x48ACEB: mov     ecx, [ecx]
0x48ACED: push    ebx
0x48ACEE: call    BSSimpleList_Remove
0x48ACF3: mov     ecx, [esp+2Ch+var_18]
0x48ACF7: test    ecx, ecx
0x48ACF9: jz      short loc_48AD03
0x48ACFB: mov     edx, [ecx]
0x48ACFD: mov     eax, [edx]
0x48ACFF: push    1
0x48AD01: call    eax
0x48AD03: mov     ecx, [ebx]
0x48AD05: test    ecx, ecx
0x48AD07: jz      short loc_48AD0E
0x48AD09: call    BSSimpleList_Clear
0x48AD0E: mov     ecx, [ebx]
0x48AD10: push    ecx
0x48AD11: call    FormHeapFree
0x48AD16: push    ebx
0x48AD17: mov     dword ptr [ebx], 0
0x48AD1D: call    FormHeapFree
0x48AD22: add     esp, 8
0x48AD25: jmp     loc_48AE15
0x48AD2A: push    0Ch; Size
0x48AD2C: call    FormHeapAlloc
0x48AD31: mov     ebp, eax
0x48AD33: add     esp, 4
0x48AD36: mov     [esp+2Ch+arg_C], ebp
0x48AD3A: test    ebp, ebp
0x48AD3C: mov     ebx, [esp+2Ch+arg_4]
0x48AD40: mov     dword ptr [esp+2Ch+var_4], 1
0x48AD48: jz      short loc_48AD63
0x48AD4A: mov     edx, [esi]
0x48AD4C: mov     eax, [edx+170h]
0x48AD52: push    ebx
0x48AD53: mov     ecx, esi
0x48AD55: call    eax
0x48AD57: push    eax
0x48AD58: mov     ecx, ebp
0x48AD5A: call    ContainerEntryExtraData_constr
0x48AD5F: mov     ebp, eax
0x48AD61: jmp     short loc_48AD65
0x48AD63: xor     ebp, ebp
0x48AD65: cmp     ebx, 1
0x48AD68: mov     dword ptr [esp+2Ch+var_4], 0FFFFFFFFh
0x48AD70: jle     short loc_48AD7A
0x48AD72: push    ebx
0x48AD73: mov     ecx, edi
0x48AD75: call    ExtraDataList_SetExtraCount
0x48AD7A: mov     ecx, esi; this
0x48AD7C: call    TESObjectREFR_IsPersistent?
0x48AD81: test    al, al
0x48AD83: jz      short loc_48ADB0
0x48AD85: push    esi
0x48AD86: mov     ecx, edi
0x48AD88: call    ExtraDataList_SetReferencePointer
0x48AD8D: cmp     dword ptr [ebp+0], 0
0x48AD91: jnz     short loc_48ADEA
0x48AD93: push    8; Size
0x48AD95: call    FormHeapAlloc
0x48AD9A: add     esp, 4
0x48AD9D: test    eax, eax
0x48AD9F: jz      short loc_48ADE5
0x48ADA1: mov     dword ptr [eax], 0
0x48ADA7: mov     dword ptr [eax+4], 0
0x48ADAE: jmp     short loc_48ADE7
0x48ADB0: test    edi, edi
0x48ADB2: jz      short loc_48ADF3
0x48ADB4: xor     esi, esi
0x48ADB6: cmp     [edi+4], esi
0x48ADB9: jnz     short loc_48ADCB
0x48ADBB: mov     edx, [edi]
0x48ADBD: mov     eax, [edx]
0x48ADBF: push    1
0x48ADC1: mov     ecx, edi
0x48ADC3: call    eax
0x48ADC5: mov     [esp+2Ch+var_18], esi
0x48ADC9: jmp     short loc_48ADF3
0x48ADCB: cmp     [ebp+0], esi
0x48ADCE: jnz     short loc_48ADEA
0x48ADD0: push    8; Size
0x48ADD2: call    FormHeapAlloc
0x48ADD7: add     esp, 4
0x48ADDA: cmp     eax, esi
0x48ADDC: jz      short loc_48ADE5
0x48ADDE: mov     [eax], esi
0x48ADE0: mov     [eax+4], esi
0x48ADE3: jmp     short loc_48ADE7
0x48ADE5: xor     eax, eax
0x48ADE7: mov     [ebp+0], eax
0x48ADEA: mov     ecx, [ebp+0]
0x48ADED: push    edi
0x48ADEE: call    BSSimpleList_PushFront
0x48ADF3: mov     ecx, [esp+2Ch+var_14]
0x48ADF7: mov     ecx, [ecx]
0x48ADF9: push    ebp
0x48ADFA: call    BSSimpleList_PushBack
0x48ADFF: mov     ecx, [esp+2Ch+var_18]
0x48AE03: test    ecx, ecx
0x48AE05: jz      short loc_48AE15
0x48AE07: cmp     dword ptr [ecx+4], 0
0x48AE0B: jnz     short loc_48AE15
0x48AE0D: mov     edx, [ecx]
0x48AE0F: mov     eax, [edx]
0x48AE11: push    1
0x48AE13: call    eax
0x48AE15: mov     ecx, [esp+2Ch+var_C]
0x48AE19: mov     large fs:0, ecx
0x48AE20: pop     ecx
0x48AE21: pop     edi
0x48AE22: pop     esi
0x48AE23: pop     ebp
0x48AE24: pop     ebx
0x48AE25: add     esp, 18h
0x48AE28: retn    10h
