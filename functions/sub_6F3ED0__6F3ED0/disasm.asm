0x6F3ED0: push    0FFFFFFFFh
0x6F3ED2: push    offset SEH_6F3ED0
0x6F3ED7: mov     eax, large fs:0
0x6F3EDD: push    eax
0x6F3EDE: sub     esp, 8
0x6F3EE1: push    ebx
0x6F3EE2: push    ebp
0x6F3EE3: push    esi
0x6F3EE4: push    edi
0x6F3EE5: mov     eax, ds:0B30AACh
0x6F3EEA: xor     eax, esp
0x6F3EEC: push    eax
0x6F3EED: lea     eax, [esp+28h+var_C]
0x6F3EF1: mov     large fs:0, eax
0x6F3EF7: mov     esi, ecx
0x6F3EF9: mov     ecx, [esi+4]
0x6F3EFC: xor     ebx, ebx
0x6F3EFE: cmp     ecx, ebx
0x6F3F00: mov     [esp+28h+var_4], ebx
0x6F3F04: jnz     short loc_6F3F0A
0x6F3F06: xor     eax, eax
0x6F3F08: jmp     short loc_6F3F12
0x6F3F0A: mov     eax, [esi+8]
0x6F3F0D: sub     eax, ecx
0x6F3F0F: sar     eax, 5
0x6F3F12: mov     edi, [esp+28h+arg_0]
0x6F3F16: cmp     eax, edi
0x6F3F18: jnb     short loc_6F3F45
0x6F3F1A: cmp     ecx, ebx
0x6F3F1C: jz      short loc_6F3F26
0x6F3F1E: mov     ebx, [esi+8]
0x6F3F21: sub     ebx, ecx
0x6F3F23: sar     ebx, 5
0x6F3F26: mov     ebp, [esi+8]
0x6F3F29: cmp     ecx, ebp
0x6F3F2B: jbe     short loc_6F3F32
0x6F3F2D: call    __invalid_parameter_noinfo
0x6F3F32: lea     eax, [esp+28h+arg_4]
0x6F3F36: push    eax
0x6F3F37: sub     edi, ebx
0x6F3F39: push    edi
0x6F3F3A: push    ebp
0x6F3F3B: push    esi
0x6F3F3C: mov     ecx, esi
0x6F3F3E: call    sub_6F38A0
0x6F3F43: jmp     short loc_6F3F95
0x6F3F45: cmp     ecx, ebx
0x6F3F47: jz      short loc_6F3F95
0x6F3F49: mov     ebp, [esi+8]
0x6F3F4C: mov     eax, ebp
0x6F3F4E: sub     eax, ecx
0x6F3F50: sar     eax, 5
0x6F3F53: cmp     edi, eax
0x6F3F55: jnb     short loc_6F3F95
0x6F3F57: cmp     ecx, ebp
0x6F3F59: jbe     short loc_6F3F60
0x6F3F5B: call    __invalid_parameter_noinfo
0x6F3F60: mov     ebx, [esi+4]
0x6F3F63: cmp     ebx, [esi+8]
0x6F3F66: jbe     short loc_6F3F6D
0x6F3F68: call    __invalid_parameter_noinfo
0x6F3F6D: shl     edi, 5
0x6F3F70: add     edi, ebx
0x6F3F72: cmp     edi, [esi+8]
0x6F3F75: mov     [esp+28h+var_10], ebx
0x6F3F79: ja      short loc_6F3F80
0x6F3F7B: cmp     edi, [esi+4]
0x6F3F7E: jnb     short loc_6F3F85
0x6F3F80: call    __invalid_parameter_noinfo
0x6F3F85: push    ebp
0x6F3F86: push    esi
0x6F3F87: push    edi
0x6F3F88: push    esi
0x6F3F89: lea     ecx, [esp+38h+var_14]
0x6F3F8D: push    ecx
0x6F3F8E: mov     ecx, esi
0x6F3F90: call    sub_6F3470
0x6F3F95: cmp     [esp+28h+arg_20], 10h
0x6F3F9A: jb      short loc_6F3FA9
0x6F3F9C: mov     edx, [esp+28h+arg_C]
0x6F3FA0: push    edx
0x6F3FA1: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x6F3FA6: add     esp, 4
0x6F3FA9: mov     ecx, [esp+28h+var_C]
0x6F3FAD: mov     large fs:0, ecx
0x6F3FB4: pop     ecx
0x6F3FB5: pop     edi
0x6F3FB6: pop     esi
0x6F3FB7: pop     ebp
0x6F3FB8: pop     ebx
0x6F3FB9: add     esp, 14h
0x6F3FBC: retn    24h ; '$'
0x556D60: push    esi
0x556D61: mov     esi, ecx
0x556D63: cmp     dword ptr [esi+1Ch], 10h
0x556D67: jb      short loc_556D75
0x556D69: mov     eax, [esi+8]
0x556D6C: push    eax
0x556D6D: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x556D72: add     esp, 4
0x556D75: xor     eax, eax
0x556D77: mov     dword ptr [esi+1Ch], 0Fh
0x556D7E: mov     [esi+18h], eax
0x556D81: mov     [esi+8], al
0x556D84: pop     esi
0x556D85: retn
0x9C89F0: lea     ecx, [ebp+8]
0x9C89F3: jmp     loc_556D60
0x9C89F8: mov     edx, [esp+arg_4]
0x9C89FC: lea     eax, [edx-18h]
0x9C89FF: mov     ecx, [edx-1Ch]
0x9C8A02: xor     ecx, eax
0x9C8A04: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C8A09: mov     eax, offset stru_AF1298
0x9C8A0E: jmp     ___CxxFrameHandler3
