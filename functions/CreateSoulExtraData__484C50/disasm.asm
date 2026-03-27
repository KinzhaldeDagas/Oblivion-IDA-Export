0x484C50: push    0FFFFFFFFh
0x484C52: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x484C57: mov     eax, large fs:0
0x484C5D: push    eax
0x484C5E: push    ecx
0x484C5F: push    ebp
0x484C60: push    esi
0x484C61: push    edi
0x484C62: mov     eax, ds:0B30AACh
0x484C67: xor     eax, esp
0x484C69: push    eax
0x484C6A: lea     eax, [esp+20h+var_C]
0x484C6E: mov     large fs:0, eax
0x484C74: mov     ebp, ecx
0x484C76: mov     eax, [ebp+8]
0x484C79: push    0; int
0x484C7B: push    offset ??_R0?AVTESSoulGem@@@8; struct TypeDescriptor *
0x484C80: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x484C85: push    0; int
0x484C87: push    eax; void *
0x484C88: call    OblivionDynamicCast
0x484C8D: add     esp, 14h
0x484C90: test    eax, eax
0x484C92: jz      short loc_484C9E
0x484C94: cmp     byte ptr [eax+70h], 0
0x484C98: jnz     loc_484D4D
0x484C9E: cmp     dword ptr [ebp+0], 0
0x484CA2: jnz     short loc_484CC6
0x484CA4: push    8; Size
0x484CA6: call    FormHeapAlloc
0x484CAB: add     esp, 4
0x484CAE: test    eax, eax
0x484CB0: jz      short loc_484CC1
0x484CB2: mov     dword ptr [eax], 0
0x484CB8: mov     dword ptr [eax+4], 0
0x484CBF: jmp     short loc_484CC3
0x484CC1: xor     eax, eax
0x484CC3: mov     [ebp+0], eax
0x484CC6: mov     esi, [ebp+0]
0x484CC9: test    esi, esi
0x484CCB: jz      short loc_484CE8
0x484CCD: lea     ecx, [ecx+0]
0x484CD0: mov     edi, [esi]
0x484CD2: test    edi, edi
0x484CD4: jz      short loc_484CE8
0x484CD6: mov     ecx, edi
0x484CD8: call    ExtraDataList_GetExtraSoul
0x484CDD: test    eax, eax
0x484CDF: jz      short loc_484D0D
0x484CE1: mov     esi, [esi+4]
0x484CE4: test    esi, esi
0x484CE6: jnz     short loc_484CD0
0x484CE8: push    14h; Size
0x484CEA: call    FormHeapAlloc
0x484CEF: add     esp, 4
0x484CF2: mov     [esp+20h+var_10], eax
0x484CF6: test    eax, eax
0x484CF8: mov     [esp+20h+var_4], 0
0x484D00: jz      short loc_484D2E
0x484D02: mov     ecx, eax
0x484D04: call    ExtraDataList_constr
0x484D09: mov     esi, eax
0x484D0B: jmp     short loc_484D30
0x484D0D: mov     ecx, [esp+20h+soulLevel]
0x484D11: push    ecx
0x484D12: mov     ecx, edi
0x484D14: call    BaseExtraList_SetSoulLevel
0x484D19: mov     ecx, [esp+20h+var_C]
0x484D1D: mov     large fs:0, ecx
0x484D24: pop     ecx
0x484D25: pop     edi
0x484D26: pop     esi
0x484D27: pop     ebp
0x484D28: add     esp, 10h
0x484D2B: retn    4
0x484D2E: xor     esi, esi
0x484D30: mov     edx, [esp+20h+soulLevel]
0x484D34: push    edx
0x484D35: mov     ecx, esi
0x484D37: mov     [esp+24h+var_4], 0FFFFFFFFh
0x484D3F: call    BaseExtraList_SetSoulLevel
0x484D44: mov     ecx, [ebp+0]
0x484D47: push    esi
0x484D48: call    BSSimpleList_PushFront
0x484D4D: mov     ecx, [esp+20h+var_C]
0x484D51: mov     large fs:0, ecx
0x484D58: pop     ecx
0x484D59: pop     edi
0x484D5A: pop     esi
0x484D5B: pop     ebp
0x484D5C: add     esp, 10h
0x484D5F: retn    4
