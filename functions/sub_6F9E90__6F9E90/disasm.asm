0x6F9E90: push    0FFFFFFFFh
0x6F9E92: push    offset SEH_6F9E90
0x6F9E97: mov     eax, large fs:0
0x6F9E9D: push    eax
0x6F9E9E: push    ecx
0x6F9E9F: push    ebx
0x6F9EA0: push    ebp
0x6F9EA1: push    esi
0x6F9EA2: push    edi
0x6F9EA3: mov     eax, ds:0B30AACh
0x6F9EA8: xor     eax, esp
0x6F9EAA: push    eax
0x6F9EAB: lea     eax, [esp+24h+var_C]
0x6F9EAF: mov     large fs:0, eax
0x6F9EB5: mov     edi, ecx
0x6F9EB7: xor     ebp, ebp
0x6F9EB9: cmp     [edi+488h], ebp
0x6F9EBF: jz      loc_6FA016
0x6F9EC5: mov     ebx, [esp+24h+a2]
0x6F9EC9: lea     eax, [esp+24h+a2]
0x6F9ECD: push    eax
0x6F9ECE: lea     ecx, [edi+244h]
0x6F9ED4: push    ebx
0x6F9ED5: mov     esi, ebx
0x6F9ED7: call    NiTMap_GetAt
0x6F9EDC: test    al, al
0x6F9EDE: jz      short loc_6F9EE7
0x6F9EE0: xor     al, al
0x6F9EE2: jmp     loc_6FA022
0x6F9EE7: mov     [esp+24h+a2], ebp
0x6F9EEB: push    ebx
0x6F9EEC: push    offset dword_B3F584
0x6F9EF1: mov     [esp+2Ch+var_4], ebp
0x6F9EF5: call    NiRTTI_Cast
0x6F9EFA: mov     ebp, eax
0x6F9EFC: add     esp, 8
0x6F9EFF: test    ebp, ebp
0x6F9F01: jz      short loc_6F9F69
0x6F9F03: mov     ecx, [edi+488h]
0x6F9F09: test    ecx, ecx
0x6F9F0B: mov     eax, [ebp+8]
0x6F9F0E: mov     [esp+24h+var_10], 0
0x6F9F16: jz      short loc_6F9F69
0x6F9F18: test    eax, eax
0x6F9F1A: jz      short loc_6F9F69
0x6F9F1C: lea     edx, [esp+24h+var_10]
0x6F9F20: push    edx
0x6F9F21: push    eax
0x6F9F22: call    NiTMap_GetAt
0x6F9F27: cmp     [esp+24h+var_10], 0
0x6F9F2C: jz      short loc_6F9F69
0x6F9F2E: push    0Ch; Size
0x6F9F30: call    FormHeapAlloc
0x6F9F35: add     esp, 4
0x6F9F38: mov     [esp+24h+var_10], eax
0x6F9F3C: test    eax, eax
0x6F9F3E: mov     byte ptr [esp+24h+var_4], 1
0x6F9F43: jz      short loc_6F9F52
0x6F9F45: mov     ebp, [ebp+8]
0x6F9F48: push    ebp
0x6F9F49: mov     ecx, eax; this
0x6F9F4B: call    ??0BSReference@@QAE@XZ; BSReference::BSReference(void)
0x6F9F50: jmp     short loc_6F9F54
0x6F9F52: xor     eax, eax
0x6F9F54: push    eax; a2
0x6F9F55: lea     ecx, [esp+28h+a2]; this
0x6F9F59: mov     byte ptr [esp+28h+var_4], 0
0x6F9F5E: call    NiSmartPointer_Set??
0x6F9F63: mov     esi, [esp+24h+a2]
0x6F9F67: jmp     short loc_6F9F76
0x6F9F69: mov     ecx, [edi+48Ch]
0x6F9F6F: push    ebx
0x6F9F70: push    edi
0x6F9F71: call    sub_6FE260
0x6F9F76: mov     eax, [edi+1F8h]
0x6F9F7C: push    eax; a3
0x6F9F7D: push    ebx; a2
0x6F9F7E: lea     ecx, [edi+244h]; this
0x6F9F84: call    NiTMap_SetAt
0x6F9F89: test    esi, esi
0x6F9F8B: mov     [esp+24h+var_10], esi
0x6F9F8F: jz      short loc_6F9F9B
0x6F9F91: lea     eax, [esi+4]
0x6F9F94: push    eax; lpAddend
0x6F9F95: call    dword ptr ds:0A28078h
0x6F9F9B: mov     ebp, [edi+1F8h]
0x6F9FA1: add     edi, 1ECh
0x6F9FA7: cmp     ebp, [edi+8]
0x6F9FAA: mov     byte ptr [esp+24h+var_4], 2
0x6F9FAF: jb      short loc_6F9FBE
0x6F9FB1: mov     ecx, [edi+14h]
0x6F9FB4: add     ecx, ebp
0x6F9FB6: push    ecx
0x6F9FB7: mov     ecx, edi
0x6F9FB9: call    sub_8BCA30
0x6F9FBE: lea     edx, [esp+24h+var_10]
0x6F9FC2: push    edx
0x6F9FC3: push    ebp
0x6F9FC4: mov     ecx, edi
0x6F9FC6: call    sub_8BCD40
0x6F9FCB: test    esi, esi
0x6F9FCD: mov     edi, ds:0A2807Ch
0x6F9FD3: mov     byte ptr [esp+24h+var_4], 0
0x6F9FD8: jz      short loc_6F9FEE
0x6F9FDA: lea     eax, [esi+4]
0x6F9FDD: push    eax; lpAddend
0x6F9FDE: call    edi ; InterlockedDecrement
0x6F9FE0: test    eax, eax
0x6F9FE2: jnz     short loc_6F9FEE
0x6F9FE4: mov     edx, [esi]
0x6F9FE6: mov     eax, [edx]
0x6F9FE8: push    1
0x6F9FEA: mov     ecx, esi
0x6F9FEC: call    eax
0x6F9FEE: mov     esi, [esp+24h+a2]
0x6F9FF2: test    esi, esi
0x6F9FF4: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6F9FFC: jz      short loc_6FA012
0x6F9FFE: lea     ecx, [esi+4]
0x6FA001: push    ecx; lpAddend
0x6FA002: call    edi ; InterlockedDecrement
0x6FA004: test    eax, eax
0x6FA006: jnz     short loc_6FA012
0x6FA008: mov     edx, [esi]
0x6FA00A: mov     eax, [edx]
0x6FA00C: push    1
0x6FA00E: mov     ecx, esi
0x6FA010: call    eax
0x6FA012: mov     al, 1
0x6FA014: jmp     short loc_6FA022
0x6FA016: mov     ecx, [esp+24h+a2]
0x6FA01A: push    ecx
0x6FA01B: mov     ecx, edi
0x6FA01D: call    sub_713F00
0x6FA022: mov     ecx, [esp+24h+var_C]
0x6FA026: mov     large fs:0, ecx
0x6FA02D: pop     ecx
0x6FA02E: pop     edi
0x6FA02F: pop     esi
0x6FA030: pop     ebp
0x6FA031: pop     ebx
0x6FA032: add     esp, 10h
0x6FA035: retn    4
