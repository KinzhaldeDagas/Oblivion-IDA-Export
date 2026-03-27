0x463A90: mov     eax, ds:0B33A98h
0x463A95: sub     esp, 1Ch
0x463A98: cmp     byte ptr [eax+0CD4h], 0
0x463A9F: push    ebx
0x463AA0: push    ebp
0x463AA1: push    esi
0x463AA2: push    edi
0x463AA3: mov     esi, ecx
0x463AA5: jnz     loc_463B2D
0x463AAB: mov     ecx, ds:0B33398h
0x463AB1: mov     edi, [ecx+10h]
0x463AB4: call    dword ptr ds:0A2808Ch
0x463ABA: cmp     eax, edi
0x463ABC: jnz     short loc_463AC3
0x463ABE: mov     al, [esi+18h]
0x463AC1: jmp     short loc_463AC9
0x463AC3: mov     eax, [esi+18h]
0x463AC6: shr     eax, 12h
0x463AC9: and     al, 1
0x463ACB: test    al, al
0x463ACD: jnz     short loc_463B2D
0x463ACF: mov     edx, ds:0BA9DE4h
0x463AD5: mov     eax, large fs:2Ch
0x463ADB: mov     ecx, [eax+edx*4]
0x463ADE: cmp     byte ptr [ecx+185h], 0
0x463AE5: jz      short loc_463B2D
0x463AE7: mov     edi, [esp+2Ch+arg_0]
0x463AEB: cmp     edi, ds:0B333C4h
0x463AF1: jz      short loc_463B2D
0x463AF3: mov     ecx, [esi]
0x463AF5: push    edi
0x463AF6: call    sub_452D30
0x463AFB: mov     ebp, eax
0x463AFD: test    ebp, ebp
0x463AFF: mov     [esp+2Ch+var_18], ebp
0x463B03: jz      short loc_463B2D
0x463B05: push    0; int
0x463B07: push    offset ??_R0?AVMagicProjectile@@@8; struct TypeDescriptor *
0x463B0C: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x463B11: push    0; int
0x463B13: push    edi; void *
0x463B14: call    OblivionDynamicCast
0x463B19: add     esp, 14h
0x463B1C: test    eax, eax
0x463B1E: jz      short loc_463B39
0x463B20: mov     edx, [edi+0Ch]
0x463B23: mov     ecx, [esi]
0x463B25: push    1
0x463B27: push    edx
0x463B28: call    sub_452DF0
0x463B2D: xor     al, al
0x463B2F: pop     edi
0x463B30: pop     esi
0x463B31: pop     ebp
0x463B32: pop     ebx
0x463B33: add     esp, 1Ch
0x463B36: retn    4
0x463B39: mov     al, 7Dh ; '}'
0x463B3B: mov     byte ptr [esi+70h], 0
0x463B3F: mov     [esi+71h], al
0x463B42: mov     [esi+7Ch], al
0x463B45: cmp     dword ptr [ebp+4], 0
0x463B49: jz      short loc_463B5C
0x463B4B: mov     eax, [edi+0Ch]
0x463B4E: push    eax; ArgList
0x463B4F: push    offset aForm08xIsUnloa; "Form %08X is unloading, but it already "...
0x463B54: call    PrintError
0x463B59: add     esp, 8
0x463B5C: push    offset aTessaveloadgam; "TESSaveLoadGame::UnloadForm"
0x463B61: mov     ecx, offset stru_B33B80
0x463B66: call    NiEnterCriticalSection
0x463B6B: mov     eax, [ebp+0]
0x463B6E: push    eax
0x463B6F: push    edi
0x463B70: mov     ecx, esi
0x463B72: call    sub_4535A0
0x463B77: mov     edx, [edi+0Ch]
0x463B7A: mov     cl, [esi+7Ch]
0x463B7D: mov     ebx, eax
0x463B7F: mov     al, [edi+4]
0x463B82: mov     byte ptr [esp+2Ch+Src+2], al
0x463B86: mov     byte ptr [esp+2Ch+var_B+3], al
0x463B8A: lea     eax, [esp+2Ch+var_C]
0x463B8E: mov     [esi+84h], eax
0x463B94: mov     dword ptr [esp+2Ch+var_C], edx
0x463B98: mov     edx, [edi]
0x463B9A: mov     eax, [edx+4Ch]
0x463B9D: mov     byte ptr [esp+2Ch+Src+3], cl
0x463BA1: mov     [esp+2Ch+anonymous_0], cl
0x463BA5: push    ebx
0x463BA6: mov     ecx, edi
0x463BA8: mov     [esp+30h+var_7], ebx
0x463BAC: call    eax
0x463BAE: movzx   ecx, ax
0x463BB1: push    ebx
0x463BB2: mov     [esp+30h+arg_0], ecx
0x463BB6: push    edi
0x463BB7: mov     ecx, esi
0x463BB9: call    sub_452250
0x463BBE: mov     cx, word ptr [esp+2Ch+arg_0]
0x463BC3: add     cx, ax
0x463BC6: test    ebx, 80000002h
0x463BCC: mov     word ptr [esp+2Ch+arg_0], cx
0x463BD1: mov     word ptr [esp+2Ch+Src], cx
0x463BD6: jz      loc_463CE3
0x463BDC: push    0; int
0x463BDE: push    offset ??_R0?AVTESObjectREFR@@@8; struct TypeDescriptor *
0x463BE3: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x463BE8: push    0; int
0x463BEA: push    edi; void *
0x463BEB: call    OblivionDynamicCast
0x463BF0: mov     ebp, eax
0x463BF2: add     esp, 14h
0x463BF5: test    ebp, ebp
0x463BF7: jz      loc_463C86
0x463BFD: mov     ecx, ebp; this
0x463BFF: call    TESObjectREFR_GetParentCell
0x463C04: test    eax, eax
0x463C06: mov     [esp+2Ch+var_14], eax
0x463C0A: jz      short loc_463C2D
0x463C0C: mov     ecx, eax; this
0x463C0E: call    TESObjectCELL_IsInterior
0x463C13: test    al, al
0x463C15: jz      short loc_463C2D
0x463C17: mov     edx, [ebp+0Ch]
0x463C1A: mov     eax, [esp+2Ch+var_14]
0x463C1E: mov     ecx, [eax+0Ch]
0x463C21: push    edx
0x463C22: push    ecx
0x463C23: mov     ecx, [esi+8]
0x463C26: call    sub_452E70
0x463C2B: jmp     short loc_463C76
0x463C2D: mov     edx, [ebp+0Ch]
0x463C30: mov     ecx, ebp; this
0x463C32: mov     [esp+2Ch+var_14], edx
0x463C36: call    TESObjectREFR_GetWorldSpace
0x463C3B: mov     eax, [eax+0Ch]
0x463C3E: mov     edx, [ebp+0]
0x463C41: mov     [esp+2Ch+var_10], eax
0x463C45: mov     eax, [edx+174h]
0x463C4B: mov     ecx, ebp
0x463C4D: call    eax
0x463C4F: mov     edx, [eax]
0x463C51: sub     esp, 0Ch
0x463C54: mov     ecx, esp
0x463C56: mov     [ecx], edx
0x463C58: mov     edx, [eax+4]
0x463C5B: mov     eax, [eax+8]
0x463C5E: mov     [ecx+4], edx
0x463C61: mov     edx, [esp+38h+var_10]
0x463C65: mov     [ecx+8], eax
0x463C68: mov     ecx, [esp+38h+var_14]
0x463C6C: push    ecx; int
0x463C6D: mov     ecx, [esi+0Ch]
0x463C70: push    edx; int
0x463C71: call    sub_452F10
0x463C76: test    ebx, ebx
0x463C78: jns     short loc_463C86
0x463C7A: mov     eax, [ebp+0Ch]
0x463C7D: push    eax
0x463C7E: lea     ecx, [esi+20h]
0x463C81: call    BSSimpleList_PushFront
0x463C86: push    0; int
0x463C88: push    offset ??_R0?AVTESObjectCELL@@@8; struct TypeDescriptor *
0x463C8D: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x463C92: push    0; int
0x463C94: push    edi; void *
0x463C95: call    OblivionDynamicCast
0x463C9A: mov     ebp, eax
0x463C9C: add     esp, 14h
0x463C9F: test    ebp, ebp
0x463CA1: jz      short loc_463CDF
0x463CA3: test    bl, 4
0x463CA6: jz      short loc_463CDF
0x463CA8: mov     ecx, [ebp+0Ch]
0x463CAB: mov     [esp+2Ch+var_10], ecx
0x463CAF: mov     ecx, ebp; this
0x463CB1: call    TESObjectCELL_GetWorldSpace
0x463CB6: mov     edx, [eax+0Ch]
0x463CB9: mov     ecx, ebp; this
0x463CBB: mov     [esp+2Ch+var_14], edx
0x463CBF: call    TESObjectCELL_GetYCoordinate
0x463CC4: push    eax
0x463CC5: mov     ecx, ebp; this
0x463CC7: call    TESObjectCELL_GetXCoordinate
0x463CCC: mov     ecx, [esp+30h+var_14]
0x463CD0: push    eax
0x463CD1: mov     eax, [esp+34h+var_10]
0x463CD5: push    eax
0x463CD6: push    ecx
0x463CD7: mov     ecx, [esi+10h]
0x463CDA: call    sub_452FE0
0x463CDF: mov     ebp, [esp+2Ch+var_18]
0x463CE3: movzx   eax, word ptr [esp+2Ch+arg_0]
0x463CE8: mov     [esp+2Ch+arg_0], eax
0x463CEC: add     eax, 4
0x463CEF: push    eax
0x463CF0: mov     ecx, esi
0x463CF2: call    sub_453500
0x463CF7: mov     ecx, ds:0B33B00h
0x463CFD: push    4; Size
0x463CFF: lea     edx, [esp+30h+Src]
0x463D03: push    edx; Src
0x463D04: mov     [esp+34h+var_10], eax
0x463D08: call    SaveLoad_SaveData
0x463D0D: push    ebx
0x463D0E: push    edi
0x463D0F: mov     ecx, esi
0x463D11: call    SaveLoad_SaveFormModifiedFlags??
0x463D16: mov     eax, [edi]
0x463D18: mov     edx, [eax+50h]
0x463D1B: push    ebx; lpCriticalSection
0x463D1C: mov     ecx, edi
0x463D1E: call    edx
0x463D20: mov     eax, [esp+2Ch+arg_0]
0x463D24: mov     edi, [esp+2Ch+var_10]
0x463D28: lea     ecx, [eax+edi+4]
0x463D2C: cmp     ecx, [esi+14h]
0x463D2F: jz      short loc_463D43
0x463D31: mov     ecx, ds:0B34D90h
0x463D37: mov     edx, [ecx]
0x463D39: mov     eax, [edx+18h]
0x463D3C: push    offset aSavegameCallDi; "SaveGame() call did not properly fill b"...
0x463D41: call    eax
0x463D43: xor     eax, eax
0x463D45: mov     [ebp+4], edi
0x463D48: mov     [ebp+0], ebx
0x463D4B: mov     ecx, offset stru_B33B80; lpCriticalSection
0x463D50: mov     [esi+84h], eax
0x463D56: mov     [esi+14h], eax
0x463D59: call    NiLeaveCriticalSection_0
0x463D5E: pop     edi
0x463D5F: pop     esi
0x463D60: pop     ebp
0x463D61: mov     al, 1
0x463D63: pop     ebx
0x463D64: add     esp, 1Ch
0x463D67: retn    4
