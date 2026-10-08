0x6847B0: push    0FFFFFFFFh
0x6847B2: push    offset SEH_8C62B0
0x6847B7: mov     eax, large fs:0
0x6847BD: push    eax
0x6847BE: push    ecx
0x6847BF: push    esi
0x6847C0: mov     eax, ds:0B30AACh
0x6847C5: xor     eax, esp
0x6847C7: push    eax
0x6847C8: lea     eax, [esp+18h+var_C]
0x6847CC: mov     large fs:0, eax
0x6847D2: mov     esi, ecx
0x6847D4: mov     eax, [esi+30h]
0x6847D7: test    eax, eax
0x6847D9: jnz     short loc_684816
0x6847DB: push    34h ; '4'; Size
0x6847DD: call    FormHeapAlloc
0x6847E2: add     esp, 4
0x6847E5: mov     [esp+18h+var_10], eax
0x6847E9: test    eax, eax
0x6847EB: mov     [esp+18h+var_4], 0
0x6847F3: jz      short loc_6847FE
0x6847F5: mov     ecx, eax
0x6847F7: call    sub_680DC0
0x6847FC: jmp     short loc_684800
0x6847FE: xor     eax, eax
0x684800: mov     ecx, [esi+28h]
0x684803: push    ecx
0x684804: mov     ecx, eax
0x684806: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x68480E: mov     [esi+30h], eax
0x684811: call    sub_680E20
0x684816: mov     ecx, [esp+18h+var_C]
0x68481A: mov     large fs:0, ecx
0x684821: pop     ecx
0x684822: pop     esi
0x684823: add     esp, 10h
0x684826: retn
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
