0x585540: push    0FFFFFFFFh
0x585542: push    offset SEH_8C62B0
0x585547: mov     eax, large fs:0
0x58554D: push    eax
0x58554E: push    ecx
0x58554F: push    esi
0x585550: mov     eax, ds:0B30AACh
0x585555: xor     eax, esp
0x585557: push    eax
0x585558: lea     eax, [esp+18h+var_C]
0x58555C: mov     large fs:0, eax
0x585562: mov     esi, ecx
0x585564: push    1; Size
0x585566: call    FormHeapAlloc
0x58556B: add     esp, 4
0x58556E: mov     [esp+18h+var_10], eax
0x585572: test    eax, eax
0x585574: mov     [esp+18h+var_4], 0
0x58557C: jz      short loc_585598
0x58557E: mov     ecx, eax
0x585580: call    sub_4FCCE0
0x585585: mov     [esi], eax
0x585587: mov     ecx, [esp+18h+var_C]
0x58558B: mov     large fs:0, ecx
0x585592: pop     ecx
0x585593: pop     esi
0x585594: add     esp, 10h
0x585597: retn
0x585598: xor     eax, eax
0x58559A: mov     [esi], eax
0x58559C: mov     ecx, [esp+18h+var_C]
0x5855A0: mov     large fs:0, ecx
0x5855A7: pop     ecx
0x5855A8: pop     esi
0x5855A9: add     esp, 10h
0x5855AC: retn
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
