0x6E3E70: push    0FFFFFFFFh
0x6E3E72: push    offset SEH_8C8970
0x6E3E77: mov     eax, large fs:0
0x6E3E7D: push    eax
0x6E3E7E: push    ecx
0x6E3E7F: push    ebx
0x6E3E80: push    esi
0x6E3E81: mov     eax, ds:0B30AACh
0x6E3E86: xor     eax, esp
0x6E3E88: push    eax
0x6E3E89: lea     eax, [esp+1Ch+var_C]
0x6E3E8D: mov     large fs:0, eax
0x6E3E93: mov     ebx, ecx
0x6E3E95: push    24h ; '$'; Size
0x6E3E97: call    FormHeapAlloc
0x6E3E9C: mov     esi, eax
0x6E3E9E: add     esp, 4
0x6E3EA1: mov     [esp+1Ch+var_10], esi
0x6E3EA5: test    esi, esi
0x6E3EA7: mov     [esp+1Ch+var_4], 0
0x6E3EAF: jz      short loc_6E3EF0
0x6E3EB1: mov     ecx, esi
0x6E3EB3: call    sub_6EC220
0x6E3EB8: mov     dword ptr [esi], offset ??_7NiColorInterpolator@@6B@; const NiColorInterpolator::`vftable'
0x6E3EBE: mov     eax, ds:0B24FD4h
0x6E3EC3: mov     [esi+0Ch], eax
0x6E3EC6: mov     ecx, ds:0B24FD8h
0x6E3ECC: mov     [esi+10h], ecx
0x6E3ECF: mov     edx, ds:0B24FDCh
0x6E3ED5: mov     [esi+14h], edx
0x6E3ED8: mov     eax, ds:0B24FE0h
0x6E3EDD: mov     [esi+18h], eax
0x6E3EE0: mov     dword ptr [esi+1Ch], 0
0x6E3EE7: mov     dword ptr [esi+20h], 0
0x6E3EEE: jmp     short loc_6E3EF2
0x6E3EF0: xor     esi, esi
0x6E3EF2: mov     ecx, [esp+1Ch+arg_0]
0x6E3EF6: push    ecx
0x6E3EF7: push    esi
0x6E3EF8: mov     ecx, ebx
0x6E3EFA: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6E3F02: call    sub_6D98F0
0x6E3F07: mov     eax, esi
0x6E3F09: mov     ecx, [esp+1Ch+var_C]
0x6E3F0D: mov     large fs:0, ecx
0x6E3F14: pop     ecx
0x6E3F15: pop     esi
0x6E3F16: pop     ebx
0x6E3F17: add     esp, 10h
0x6E3F1A: retn    4
0x9CA7E0: mov     eax, [ebp-10h]
0x9CA7E3: push    eax
0x9CA7E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9CA7E9: pop     ecx
0x9CA7EA: retn
0x9CA7EB: mov     edx, [esp+arg_4]
0x9CA7EF: lea     eax, [edx-0Ch]
0x9CA7F2: mov     ecx, [edx-10h]
0x9CA7F5: xor     ecx, eax
0x9CA7F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9CA7FC: mov     eax, offset stru_AF2E8C
0x9CA801: jmp     ___CxxFrameHandler3
