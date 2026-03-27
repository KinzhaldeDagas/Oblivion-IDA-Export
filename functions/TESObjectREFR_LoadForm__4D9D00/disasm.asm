0x4D9D00: push    ebp
0x4D9D01: mov     ebp, esp
0x4D9D03: sub     esp, 28h
0x4D9D06: mov     eax, ds:0B30AACh
0x4D9D0B: xor     eax, ebp
0x4D9D0D: mov     [ebp+var_4], eax
0x4D9D10: push    ebx
0x4D9D11: push    esi
0x4D9D12: push    edi; ArgList
0x4D9D13: xor     edi, edi
0x4D9D15: push    edi; a2
0x4D9D16: mov     esi, ecx
0x4D9D18: call    TESForm_SetIsLinked
0x4D9D1D: mov     ebx, [ebp+tesFile]
0x4D9D20: push    esi
0x4D9D21: mov     ecx, ebx
0x4D9D23: mov     [ebp+var_5], 0
0x4D9D27: mov     dword ptr [ebp+ArgList], edi
0x4D9D2A: call    TESFile_InitializeFormFromRecord
0x4D9D2F: push    edi; a2
0x4D9D30: mov     ecx, esi; this
0x4D9D32: call    TESForm_SetIsLinked
0x4D9D37: mov     eax, [esi+8]
0x4D9D3A: shr     eax, 5
0x4D9D3D: test    al, 1
0x4D9D3F: jz      short loc_4D9D80
0x4D9D41: lea     edi, [esi+44h]
0x4D9D44: mov     ecx, edi
0x4D9D46: call    sub_41FF80
0x4D9D4B: push    1
0x4D9D4D: mov     ecx, edi
0x4D9D4F: mov     ebx, eax
0x4D9D51: call    BaseExtraList_Clear
0x4D9D56: test    ebx, ebx
0x4D9D58: jz      short loc_4D9D62
0x4D9D5A: push    ebx
0x4D9D5B: mov     ecx, edi
0x4D9D5D: call    sub_4247B0
0x4D9D62: mov     edx, [esi]
0x4D9D64: mov     eax, [edx+170h]
0x4D9D6A: mov     ecx, esi
0x4D9D6C: call    eax
0x4D9D6E: neg     eax
0x4D9D70: sbb     eax, eax
0x4D9D72: neg     eax
0x4D9D74: jmp     loc_4DA088
0x4D9D79: align 10h
0x4D9D80: mov     ecx, ebx
0x4D9D82: call    TESFile_GetChunkType
0x4D9D87: cmp     eax, edi
0x4D9D89: jz      loc_4DA030
0x4D9D8F: cmp     eax, 4C4F5358h
0x4D9D94: jg      loc_4D9F62
0x4D9D9A: jz      loc_4DA017
0x4D9DA0: cmp     eax, 45535558h
0x4D9DA5: jg      loc_4D9EFD
0x4D9DAB: jz      loc_4DA017
0x4D9DB1: cmp     eax, 44455358h
0x4D9DB6: jg      short loc_4D9E33
0x4D9DB8: jz      loc_4DA017
0x4D9DBE: cmp     eax, 434F4C58h
0x4D9DC3: jg      short loc_4D9E29
0x4D9DC5: jz      loc_4DA017
0x4D9DCB: cmp     eax, 41544144h
0x4D9DD0: jz      short loc_4D9DDC
0x4D9DD2: cmp     eax, 424C4758h
0x4D9DD7: jmp     loc_4DA006
0x4D9DDC: cmp     [ebp+var_5], 0
0x4D9DE0: jnz     loc_4DA021
0x4D9DE6: mov     edx, [esi]
0x4D9DE8: mov     eax, [edx+8Ch]
0x4D9DEE: push    edi
0x4D9DEF: mov     ecx, esi
0x4D9DF1: call    eax
0x4D9DF3: push    18h; a4
0x4D9DF5: lea     ecx, [ebp+Dst]
0x4D9DF8: push    ecx; Dst
0x4D9DF9: mov     ecx, ebx; a1
0x4D9DFB: call    TESFile_GetChunkData
0x4D9E00: mov     edx, dword ptr [ebp+Dst]
0x4D9E03: mov     eax, [ebp+var_24]
0x4D9E06: mov     ecx, [ebp+var_20]
0x4D9E09: mov     [esi+2Ch], edx
0x4D9E0C: mov     edx, [ebp+var_1C]
0x4D9E0F: mov     [esi+30h], eax
0x4D9E12: mov     eax, [ebp+var_18]
0x4D9E15: mov     [esi+34h], ecx
0x4D9E18: mov     ecx, [ebp+var_14]
0x4D9E1B: mov     [esi+20h], edx
0x4D9E1E: mov     [esi+24h], eax
0x4D9E21: mov     [esi+28h], ecx
0x4D9E24: jmp     loc_4DA021
0x4D9E29: cmp     eax, 43524D58h
0x4D9E2E: jmp     loc_4DA006
0x4D9E33: cmp     eax, 444F4C58h
0x4D9E38: jg      short loc_4D9E84
0x4D9E3A: jz      loc_4DA017
0x4D9E40: cmp     eax, 44475258h
0x4D9E45: jz      loc_4DA017
0x4D9E4B: cmp     eax, 44494445h
0x4D9E50: jnz     loc_4DA008
0x4D9E56: mov     eax, [ebx+254h]
0x4D9E5C: call    __alloca?
0x4D9E61: mov     edi, esp
0x4D9E63: push    200h; a4
0x4D9E68: push    edi; Dst
0x4D9E69: mov     ecx, ebx; a1
0x4D9E6B: call    TESFile_GetChunkData
0x4D9E70: mov     edx, [esi]
0x4D9E72: mov     eax, [edx+0D8h]
0x4D9E78: push    edi
0x4D9E79: mov     ecx, esi
0x4D9E7B: call    eax
0x4D9E7D: xor     edi, edi
0x4D9E7F: jmp     loc_4DA021
0x4D9E84: cmp     eax, 454D414Eh
0x4D9E89: jnz     loc_4DA008
0x4D9E8F: lea     ecx, [ebp+ArgList]
0x4D9E92: push    ecx
0x4D9E93: mov     ecx, ebx
0x4D9E95: call    TESFile_GetChunkData4
0x4D9E9A: lea     edx, [ebp+ArgList]
0x4D9E9D: push    ebx; a2
0x4D9E9E: push    edx; a1
0x4D9E9F: call    TESForm_ResolveFormID
0x4D9EA4: mov     ecx, dword ptr [ebp+ArgList]
0x4D9EA7: add     esp, 8
0x4D9EAA: lea     eax, [ebp+var_10]
0x4D9EAD: push    eax
0x4D9EAE: push    ecx
0x4D9EAF: mov     ecx, offset TESForm_FormIDMap
0x4D9EB4: mov     [ebp+var_10], edi
0x4D9EB7: call    NiTMap_GetAt
0x4D9EBC: mov     edx, [ebp+var_10]
0x4D9EBF: push    edi; int
0x4D9EC0: push    offset ??_R0?AVTESBoundObject@@@8; struct TypeDescriptor *
0x4D9EC5: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4D9ECA: push    edi; int
0x4D9ECB: push    edx; void *
0x4D9ECC: call    OblivionDynamicCast
0x4D9ED1: add     esp, 14h
0x4D9ED4: cmp     eax, edi
0x4D9ED6: mov     [esi+1Ch], eax
0x4D9ED9: jnz     loc_4DA021
0x4D9EDF: mov     eax, [esi+0Ch]
0x4D9EE2: mov     ecx, dword ptr [ebp+ArgList]
0x4D9EE5: push    eax
0x4D9EE6: push    ecx; ArgList
0x4D9EE7: push    offset aMissingObject0; "Missing object (%08X) for reference (%0"...
0x4D9EEC: call    PrintError
0x4D9EF1: add     esp, 0Ch
0x4D9EF4: mov     [ebp+var_5], 1
0x4D9EF8: jmp     loc_4DA021
0x4D9EFD: cmp     eax, 4B524D58h
0x4D9F02: jg      short loc_4D9F36
0x4D9F04: jz      loc_4DA017
0x4D9F0A: cmp     eax, 49435058h
0x4D9F0F: jg      short loc_4D9F2C
0x4D9F11: jz      loc_4DA017
0x4D9F17: cmp     eax, 47484358h
0x4D9F1C: jz      loc_4DA017
0x4D9F22: cmp     eax, 47525458h
0x4D9F27: jmp     loc_4DA006
0x4D9F2C: cmp     eax, 4B4E5258h
0x4D9F31: jmp     loc_4DA006
0x4D9F36: cmp     eax, 4C435358h
0x4D9F3B: jz      short loc_4D9F52
0x4D9F3D: cmp     eax, 4C444558h
0x4D9F42: jz      loc_4DA017
0x4D9F48: cmp     eax, 4C455458h
0x4D9F4D: jmp     loc_4DA006
0x4D9F52: lea     edx, [esi+38h]
0x4D9F55: push    edx
0x4D9F56: mov     ecx, ebx
0x4D9F58: call    TESFile_GetChunkData4
0x4D9F5D: jmp     loc_4DA021
0x4D9F62: cmp     eax, 50534558h
0x4D9F67: jg      short loc_4D9FCC
0x4D9F69: jz      loc_4DA017
0x4D9F6F: cmp     eax, 4D495458h
0x4D9F74: jg      short loc_4D9FAE
0x4D9F76: jz      loc_4DA017
0x4D9F7C: cmp     eax, 4D434358h
0x4D9F81: jg      short loc_4D9FA7
0x4D9F83: jz      loc_4DA017
0x4D9F89: cmp     eax, 4C535058h
0x4D9F8E: jz      loc_4DA017
0x4D9F94: cmp     eax, 4D414E4Fh
0x4D9F99: jnz     short loc_4DA008
0x4D9F9B: push    8
0x4D9F9D: lea     ecx, [esi+44h]
0x4D9FA0: call    sub_423DF0
0x4D9FA5: jmp     short loc_4DA021
0x4D9FA7: cmp     eax, 4D434C58h
0x4D9FAC: jmp     short loc_4DA006
0x4D9FAE: cmp     eax, 4E535058h
0x4D9FB3: jg      short loc_4D9FC5
0x4D9FB5: jz      short loc_4DA017
0x4D9FB7: cmp     eax, 4D4C4358h
0x4D9FBC: jz      short loc_4DA017
0x4D9FBE: cmp     eax, 4D545258h
0x4D9FC3: jmp     short loc_4DA006
0x4D9FC5: cmp     eax, 4E574F58h
0x4D9FCA: jmp     short loc_4DA006
0x4D9FCC: cmp     eax, 544D4358h
0x4D9FD1: jg      short loc_4D9FF3
0x4D9FD3: jz      short loc_4DA017
0x4D9FD5: cmp     eax, 54434158h
0x4D9FDA: jg      short loc_4D9FEC
0x4D9FDC: jz      short loc_4DA017
0x4D9FDE: cmp     eax, 524C4358h
0x4D9FE3: jz      short loc_4DA017
0x4D9FE5: cmp     eax, 53524858h
0x4D9FEA: jmp     short loc_4DA006
0x4D9FEC: cmp     eax, 544C4858h
0x4D9FF1: jmp     short loc_4DA006
0x4D9FF3: cmp     eax, 544E4358h
0x4D9FF8: jz      short loc_4DA017
0x4D9FFA: cmp     eax, 54574358h
0x4D9FFF: jz      short loc_4DA017
0x4DA001: cmp     eax, 574C4358h
0x4DA006: jz      short loc_4DA017
0x4DA008: push    offset aTesobjectrefrLoadAbnormallyTerm; "TESObjectREFR::Load abnormally terminat"...
0x4DA00D: call    PrintError
0x4DA012: add     esp, 4
0x4DA015: jmp     short loc_4DA021
0x4DA017: push    esi
0x4DA018: push    ebx
0x4DA019: lea     ecx, [esi+44h]
0x4DA01C: call    ExtraDataList_Load
0x4DA021: mov     ecx, ebx
0x4DA023: call    TESFile_GetNextChunk
0x4DA028: test    al, al
0x4DA02A: jnz     loc_4D9D80
0x4DA030: mov     eax, [esi]
0x4DA032: mov     edx, [eax+190h]
0x4DA038: mov     ecx, esi
0x4DA03A: call    edx
0x4DA03C: test    al, al
0x4DA03E: jz      short loc_4DA080
0x4DA040: mov     eax, [esi+8]
0x4DA043: shr     eax, 0Bh
0x4DA046: test    al, 1
0x4DA048: jz      short loc_4DA080
0x4DA04A: mov     ecx, ds:0B33B00h
0x4DA050: mov     edx, [ecx+18h]
0x4DA053: shr     edx, 2
0x4DA056: test    dl, 1
0x4DA059: jnz     short loc_4DA080
0x4DA05B: mov     ecx, esi; this
0x4DA05D: call    Actor__GetProcessLevel
0x4DA062: push    eax
0x4DA063: push    esi
0x4DA064: mov     ecx, offset ActorProcessManager_ptr
0x4DA069: call    sub_674550
0x4DA06E: mov     ecx, [esi+58h]
0x4DA071: cmp     ecx, edi
0x4DA073: jz      short loc_4DA07D
0x4DA075: mov     eax, [ecx]
0x4DA077: mov     edx, [eax]
0x4DA079: push    1
0x4DA07B: call    edx
0x4DA07D: mov     [esi+58h], edi
0x4DA080: xor     eax, eax
0x4DA082: cmp     [esi+1Ch], edi
0x4DA085: setnz   al
0x4DA088: lea     esp, [ebp-34h]
0x4DA08B: pop     edi
0x4DA08C: pop     esi
0x4DA08D: pop     ebx
0x4DA08E: mov     ecx, [ebp+var_4]
0x4DA091: xor     ecx, ebp
0x4DA093: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4DA098: mov     esp, ebp
0x4DA09A: pop     ebp
0x4DA09B: retn    4
