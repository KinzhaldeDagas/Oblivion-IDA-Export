0x54F100: push    0FFFFFFFFh
0x54F102: push    offset SEH_8C62B0
0x54F107: mov     eax, large fs:0
0x54F10D: push    eax
0x54F10E: push    ecx
0x54F10F: push    esi
0x54F110: mov     eax, ds:0B30AACh
0x54F115: xor     eax, esp
0x54F117: push    eax
0x54F118: lea     eax, [esp+18h+var_C]
0x54F11C: mov     large fs:0, eax
0x54F122: mov     esi, ecx
0x54F124: push    14h; Size
0x54F126: call    FormHeapAlloc
0x54F12B: add     esp, 4
0x54F12E: mov     [esp+18h+var_10], eax
0x54F132: test    eax, eax
0x54F134: mov     [esp+18h+var_4], 0
0x54F13C: jz      short loc_54F157
0x54F13E: push    esi
0x54F13F: mov     ecx, eax
0x54F141: call    sub_54EAA0
0x54F146: mov     ecx, [esp+18h+var_C]
0x54F14A: mov     large fs:0, ecx
0x54F151: pop     ecx
0x54F152: pop     esi
0x54F153: add     esp, 10h
0x54F156: retn
0x54F157: xor     eax, eax
0x54F159: mov     ecx, [esp+18h+var_C]
0x54F15D: mov     large fs:0, ecx
0x54F164: pop     ecx
0x54F165: pop     esi
0x54F166: add     esp, 10h
0x54F169: retn
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
