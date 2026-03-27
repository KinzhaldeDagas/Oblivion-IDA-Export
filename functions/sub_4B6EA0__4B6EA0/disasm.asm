0x4B6EA0: push    ebp
0x4B6EA1: mov     ebp, esp
0x4B6EA3: sub     esp, 8
0x4B6EA6: mov     eax, ds:0B30AACh
0x4B6EAB: xor     eax, ebp
0x4B6EAD: mov     [ebp+var_4], eax
0x4B6EB0: push    ebx
0x4B6EB1: push    esi
0x4B6EB2: mov     esi, [ebp+a2]
0x4B6EB5: push    edi
0x4B6EB6: mov     edi, ecx
0x4B6EB8: mov     ecx, esi
0x4B6EBA: call    TESFile_GetRecordType
0x4B6EBF: cmp     al, 18h
0x4B6EC1: jz      short loc_4B6ECA
0x4B6EC3: xor     al, al
0x4B6EC5: jmp     loc_4B710A
0x4B6ECA: push    edi
0x4B6ECB: mov     ecx, esi
0x4B6ECD: call    TESFile_InitializeFormFromRecord
0x4B6ED2: xor     ebx, ebx
0x4B6ED4: push    ebx; a2
0x4B6ED5: mov     ecx, edi; this
0x4B6ED7: call    TESForm_SetIsLinked
0x4B6EDC: mov     ecx, esi
0x4B6EDE: call    TESFile_GetChunkType
0x4B6EE3: cmp     eax, ebx
0x4B6EE5: jz      loc_4B7108
0x4B6EEB: jmp     short loc_4B6EF0
0x4B6EED: align 10h
0x4B6EF0: cmp     eax, 4D414E41h
0x4B6EF5: jg      loc_4B6FF1
0x4B6EFB: jz      loc_4B6FAD
0x4B6F01: cmp     eax, 49524353h
0x4B6F06: jg      short loc_4B6F70
0x4B6F08: jz      short loc_4B6F4E
0x4B6F0A: cmp     eax, 42444F4Dh
0x4B6F0F: jz      loc_4B70B3
0x4B6F15: cmp     eax, 44494445h
0x4B6F1A: jnz     loc_4B70EE
0x4B6F20: mov     eax, [esi+254h]
0x4B6F26: call    __alloca?
0x4B6F2B: mov     ebx, esp
0x4B6F2D: push    200h; a4
0x4B6F32: push    ebx; Dst
0x4B6F33: mov     ecx, esi; a1
0x4B6F35: call    TESFile_GetChunkData
0x4B6F3A: mov     eax, [edi]
0x4B6F3C: mov     edx, [eax+0D8h]
0x4B6F42: push    ebx
0x4B6F43: mov     ecx, edi
0x4B6F45: call    edx
0x4B6F47: xor     ebx, ebx
0x4B6F49: jmp     loc_4B70EE
0x4B6F4E: lea     eax, [ebp+a1]
0x4B6F51: push    eax
0x4B6F52: mov     ecx, esi
0x4B6F54: mov     [ebp+a1], ebx
0x4B6F57: call    TESFile_GetChunkData4
0x4B6F5C: mov     ecx, [ebp+a1]
0x4B6F5F: mov     [edi+4Ch], ecx
0x4B6F62: push    edi
0x4B6F63: lea     ecx, [edi+48h]
0x4B6F66: call    TESScriptableForm_Link
0x4B6F6B: jmp     loc_4B70EE
0x4B6F70: cmp     eax, 4C444F4Dh
0x4B6F75: jz      loc_4B70B3
0x4B6F7B: cmp     eax, 4C4C5546h
0x4B6F80: jnz     loc_4B70EE
0x4B6F86: cmp     edi, ebx
0x4B6F88: jz      short loc_4B6F9C
0x4B6F8A: lea     eax, [edi+24h]
0x4B6F8D: push    esi
0x4B6F8E: push    eax
0x4B6F8F: call    TESFullname_Load
0x4B6F94: add     esp, 8
0x4B6F97: jmp     loc_4B70EE
0x4B6F9C: xor     eax, eax
0x4B6F9E: push    esi
0x4B6F9F: push    eax
0x4B6FA0: call    TESFullname_Load
0x4B6FA5: add     esp, 8
0x4B6FA8: jmp     loc_4B70EE
0x4B6FAD: lea     edx, [ebp+a1]
0x4B6FB0: push    edx
0x4B6FB1: mov     ecx, esi
0x4B6FB3: mov     [ebp+a1], ebx
0x4B6FB6: call    TESFile_GetChunkData4
0x4B6FBB: lea     eax, [ebp+a1]
0x4B6FBE: push    esi; a2
0x4B6FBF: push    eax; a1
0x4B6FC0: call    TESForm_ResolveFormID
0x4B6FC5: mov     ecx, [ebp+a1]
0x4B6FC8: add     esp, 8
0x4B6FCB: push    ebx; int
0x4B6FCC: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x4B6FD1: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B6FD6: push    ebx; int
0x4B6FD7: push    ecx; a1
0x4B6FD8: call    TESForm_LookupByFormID
0x4B6FDD: add     esp, 4
0x4B6FE0: push    eax; void *
0x4B6FE1: call    OblivionDynamicCast
0x4B6FE6: add     esp, 14h
0x4B6FE9: mov     [edi+5Ch], eax
0x4B6FEC: jmp     loc_4B70EE
0x4B6FF1: cmp     eax, 4D414E53h
0x4B6FF6: jg      loc_4B70A5
0x4B6FFC: jz      short loc_4B7064
0x4B6FFE: sub     eax, 4D414E42h
0x4B7003: jz      short loc_4B7020
0x4B7005: sub     eax, 4
0x4B7008: jnz     loc_4B70EE
0x4B700E: push    1; a4
0x4B7010: lea     edx, [edi+64h]
0x4B7013: push    edx; Dst
0x4B7014: mov     ecx, esi; a1
0x4B7016: call    TESFile_GetChunkData
0x4B701B: jmp     loc_4B70EE
0x4B7020: lea     eax, [ebp+a1]
0x4B7023: push    eax
0x4B7024: mov     ecx, esi
0x4B7026: mov     [ebp+a1], ebx
0x4B7029: call    TESFile_GetChunkData4
0x4B702E: lea     ecx, [ebp+a1]
0x4B7031: push    esi; a2
0x4B7032: push    ecx; a1
0x4B7033: call    TESForm_ResolveFormID
0x4B7038: mov     edx, [ebp+a1]
0x4B703B: add     esp, 8
0x4B703E: push    ebx; int
0x4B703F: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x4B7044: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B7049: push    ebx; int
0x4B704A: push    edx; a1
0x4B704B: call    TESForm_LookupByFormID
0x4B7050: add     esp, 4
0x4B7053: push    eax; void *
0x4B7054: call    OblivionDynamicCast
0x4B7059: add     esp, 14h
0x4B705C: mov     [edi+60h], eax
0x4B705F: jmp     loc_4B70EE
0x4B7064: lea     eax, [ebp+a1]
0x4B7067: push    eax
0x4B7068: mov     ecx, esi
0x4B706A: mov     [ebp+a1], ebx
0x4B706D: call    TESFile_GetChunkData4
0x4B7072: lea     ecx, [ebp+a1]
0x4B7075: push    esi; a2
0x4B7076: push    ecx; a1
0x4B7077: call    TESForm_ResolveFormID
0x4B707C: mov     edx, [ebp+a1]
0x4B707F: add     esp, 8
0x4B7082: push    ebx; int
0x4B7083: push    offset ??_R0?AVTESSound@@@8; struct TypeDescriptor *
0x4B7088: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4B708D: push    ebx; int
0x4B708E: push    edx; a1
0x4B708F: call    TESForm_LookupByFormID
0x4B7094: add     esp, 4
0x4B7097: push    eax; void *
0x4B7098: call    OblivionDynamicCast
0x4B709D: add     esp, 14h
0x4B70A0: mov     [edi+58h], eax
0x4B70A3: jmp     short loc_4B70EE
0x4B70A5: cmp     eax, 4D414E54h
0x4B70AA: jz      short loc_4B70D4
0x4B70AC: cmp     eax, 54444F4Dh
0x4B70B1: jnz     short loc_4B70EE
0x4B70B3: cmp     edi, ebx
0x4B70B5: jz      short loc_4B70C6
0x4B70B7: lea     eax, [edi+30h]
0x4B70BA: push    esi
0x4B70BB: push    eax
0x4B70BC: call    TESModel_Load
0x4B70C1: add     esp, 8
0x4B70C4: jmp     short loc_4B70EE
0x4B70C6: xor     eax, eax
0x4B70C8: push    esi
0x4B70C9: push    eax
0x4B70CA: call    TESModel_Load
0x4B70CF: add     esp, 8
0x4B70D2: jmp     short loc_4B70EE
0x4B70D4: lea     eax, [ebp+a1]
0x4B70D7: push    eax
0x4B70D8: mov     ecx, esi
0x4B70DA: mov     [ebp+a1], ebx
0x4B70DD: call    TESFile_GetChunkData4
0x4B70E2: mov     ecx, [ebp+a1]
0x4B70E5: push    ecx
0x4B70E6: lea     ecx, [edi+68h]
0x4B70E9: call    BSSimpleList_PushFront
0x4B70EE: mov     ecx, esi
0x4B70F0: call    TESFile_GetNextChunk
0x4B70F5: test    al, al
0x4B70F7: jz      short loc_4B7108
0x4B70F9: mov     ecx, esi
0x4B70FB: call    TESFile_GetChunkType
0x4B7100: cmp     eax, ebx
0x4B7102: jnz     loc_4B6EF0
0x4B7108: mov     al, 1
0x4B710A: lea     esp, [ebp-14h]
0x4B710D: pop     edi
0x4B710E: pop     esi
0x4B710F: pop     ebx
0x4B7110: mov     ecx, [ebp+var_4]
0x4B7113: xor     ecx, ebp
0x4B7115: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4B711A: mov     esp, ebp
0x4B711C: pop     ebp
0x4B711D: retn    4
