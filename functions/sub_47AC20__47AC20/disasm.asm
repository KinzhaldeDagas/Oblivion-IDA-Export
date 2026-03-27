0x47AC20: push    0FFFFFFFFh
0x47AC22: push    offset SEH_47AC20
0x47AC27: mov     eax, large fs:0
0x47AC2D: push    eax
0x47AC2E: sub     esp, 194h
0x47AC34: mov     eax, ds:0B30AACh
0x47AC39: xor     eax, esp
0x47AC3B: mov     [esp+1A0h+var_10], eax
0x47AC42: push    ebx
0x47AC43: push    ebp
0x47AC44: push    esi
0x47AC45: push    edi
0x47AC46: mov     eax, ds:0B30AACh
0x47AC4B: xor     eax, esp
0x47AC4D: push    eax
0x47AC4E: lea     eax, [esp+1B4h+var_C]
0x47AC55: mov     large fs:0, eax
0x47AC5B: mov     edi, [esp+1B4h+arg_0]
0x47AC62: xor     ebp, ebp
0x47AC64: cmp     edi, ebp
0x47AC66: mov     ebx, ecx
0x47AC68: jz      loc_47B048
0x47AC6E: mov     eax, [edi]
0x47AC70: mov     edx, [eax+0Ch]
0x47AC73: mov     ecx, edi
0x47AC75: call    edx
0x47AC77: test    eax, eax
0x47AC79: jz      loc_47B048
0x47AC7F: push    2
0x47AC81: mov     ecx, edi
0x47AC83: call    NiNode_GetNiPropertyByID
0x47AC88: push    6
0x47AC8A: mov     ecx, edi
0x47AC8C: mov     esi, eax
0x47AC8E: call    NiNode_GetNiPropertyByID
0x47AC93: cmp     esi, ebp
0x47AC95: mov     [esp+1B4h+var_198], eax
0x47AC99: jz      loc_47B048
0x47AC9F: mov     esi, [esi+8]
0x47ACA2: cmp     esi, ebp
0x47ACA4: jz      loc_47B048
0x47ACAA: push    offset aSkin; "skin"
0x47ACAF: push    esi; Str1
0x47ACB0: call    __strcmp
0x47ACB5: add     esp, 8
0x47ACB8: test    eax, eax
0x47ACBA: jnz     loc_47B048
0x47ACC0: push    offset sub_43ACE0; a5
0x47ACC5: push    offset sub_43EB30; a4
0x47ACCA: push    4; size
0x47ACCC: push    18h; a2
0x47ACCE: lea     eax, [esp+1C4h+a1]
0x47ACD2: push    eax; a1
0x47ACD3: call    ArrayConstructor
0x47ACD8: mov     ecx, [ebx+150h]
0x47ACDE: mov     edx, [ecx]
0x47ACE0: mov     eax, [edx+170h]
0x47ACE6: push    ebp; int
0x47ACE7: push    offset ??_R0?AVTESNPC@@@8; struct TypeDescriptor *
0x47ACEC: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x47ACF1: push    ebp; int
0x47ACF2: mov     [esp+1C4h+var_4], ebp
0x47ACF9: call    eax
0x47ACFB: push    eax; void *
0x47ACFC: call    OblivionDynamicCast
0x47AD01: add     esp, 14h
0x47AD04: mov     [esp+1B4h+var_190], eax
0x47AD08: mov     [esp+1B4h+var_19C], ebp
0x47AD0C: mov     [esp+1B4h+var_194], ebp
0x47AD10: mov     ebx, [edi+8]
0x47AD13: mov     byte ptr [esp+1B4h+var_4], 2
0x47AD1B: mov     [esp+1B4h+Str2], offset aUpperbody; "UpperBody"
0x47AD23: mov     [esp+1B4h+var_188], offset aLowerbody; "LowerBody"
0x47AD2B: mov     [esp+1B4h+var_184], offset aHand; "Hand"
0x47AD33: mov     [esp+1B4h+var_180], offset aFoot; "Foot"
0x47AD3B: mov     [esp+1B4h+var_17C], offset aArms; "Arms"
0x47AD43: mov     [esp+1B4h+var_178], offset aTail; "Tail"
0x47AD4B: mov     [esp+1B4h+var_1A0], 3
0x47AD53: xor     esi, esi
0x47AD55: mov     edx, [esp+esi*4+1B4h+Str2]
0x47AD59: mov     eax, edx
0x47AD5B: lea     ebp, [eax+1]
0x47AD5E: mov     edi, edi
0x47AD60: mov     cl, [eax]
0x47AD62: add     eax, 1
0x47AD65: test    cl, cl
0x47AD67: jnz     short loc_47AD60
0x47AD69: sub     eax, ebp
0x47AD6B: push    eax; MaxCount
0x47AD6C: push    edx; Str2
0x47AD6D: push    ebx; Str1
0x47AD6E: call    __strnicmp
0x47AD73: add     esp, 0Ch
0x47AD76: test    eax, eax
0x47AD78: jz      short loc_47AD82
0x47AD7A: add     esi, 1
0x47AD7D: cmp     esi, 6
0x47AD80: jl      short loc_47AD55
0x47AD82: cmp     esi, 5; switch 6 cases
0x47AD85: ja      short def_47AD87
0x47AD87: jmp     ds:jpt_47AD87[esi*4]; switch jump
0x47AD8E: mov     [esp+1B4h+var_1A0], 2; jumptable 0047AD87 cases 0,4
0x47AD96: jmp     short loc_47ADD5
0x47AD98: mov     [esp+1B4h+var_1A0], 3; jumptable 0047AD87 case 1
0x47ADA0: jmp     short loc_47ADD5
0x47ADA2: mov     [esp+1B4h+var_1A0], 4; jumptable 0047AD87 case 2
0x47ADAA: jmp     short loc_47ADD5
0x47ADAC: mov     [esp+1B4h+var_1A0], 5; jumptable 0047AD87 case 3
0x47ADB4: jmp     short loc_47ADD5
0x47ADB6: mov     [esp+1B4h+var_1A0], 0Fh; jumptable 0047AD87 case 5
0x47ADBE: jmp     short loc_47ADD5
