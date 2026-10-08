0x4A3EE0: push    0FFFFFFFFh
0x4A3EE2: push    offset SEH_8C62B0
0x4A3EE7: mov     eax, large fs:0
0x4A3EED: push    eax
0x4A3EEE: push    ecx
0x4A3EEF: push    esi
0x4A3EF0: mov     eax, ds:0B30AACh
0x4A3EF5: xor     eax, esp
0x4A3EF7: push    eax
0x4A3EF8: lea     eax, [esp+18h+var_C]
0x4A3EFC: mov     large fs:0, eax
0x4A3F02: mov     esi, ecx
0x4A3F04: push    0Ch; Size
0x4A3F06: call    FormHeapAlloc
0x4A3F0B: add     esp, 4
0x4A3F0E: mov     [esp+18h+var_10], eax
0x4A3F12: test    eax, eax
0x4A3F14: mov     [esp+18h+var_4], 0
0x4A3F1C: jz      short loc_4A3F37
0x4A3F1E: push    esi
0x4A3F1F: mov     ecx, eax
0x4A3F21: call    sub_4A3D80
0x4A3F26: mov     ecx, [esp+18h+var_C]
0x4A3F2A: mov     large fs:0, ecx
0x4A3F31: pop     ecx
0x4A3F32: pop     esi
0x4A3F33: add     esp, 10h
0x4A3F36: retn
0x4A3F37: xor     eax, eax
0x4A3F39: mov     ecx, [esp+18h+var_C]
0x4A3F3D: mov     large fs:0, ecx
0x4A3F44: pop     ecx
0x4A3F45: pop     esi
0x4A3F46: add     esp, 10h
0x4A3F49: retn
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
