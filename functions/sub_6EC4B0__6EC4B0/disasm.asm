0x6EC4B0: push    0FFFFFFFFh
0x6EC4B2: push    offset SEH_8C62B0
0x6EC4B7: mov     eax, large fs:0
0x6EC4BD: push    eax
0x6EC4BE: sub     esp, 8
0x6EC4C1: mov     eax, ds:0B30AACh
0x6EC4C6: xor     eax, esp
0x6EC4C8: push    eax
0x6EC4C9: lea     eax, [esp+18h+var_C]
0x6EC4CD: mov     large fs:0, eax
0x6EC4D3: mov     eax, [ecx]
0x6EC4D5: mov     eax, [eax+0A8h]
0x6EC4DB: lea     edx, [esp+18h+var_14]
0x6EC4DF: push    edx
0x6EC4E0: call    eax
0x6EC4E2: push    18h; Size
0x6EC4E4: call    FormHeapAlloc
0x6EC4E9: add     esp, 4
0x6EC4EC: mov     [esp+18h+var_10], eax
0x6EC4F0: test    eax, eax
0x6EC4F2: mov     [esp+18h+var_4], 0
0x6EC4FA: jz      short loc_6EC51A
0x6EC4FC: mov     ecx, [esp+18h+var_14]
0x6EC500: push    ecx
0x6EC501: mov     ecx, eax
0x6EC503: call    sub_6E7FA0
0x6EC508: mov     ecx, dword ptr [esp+18h+var_C]
0x6EC50C: mov     large fs:0, ecx
0x6EC513: pop     ecx
0x6EC514: add     esp, 14h
0x6EC517: retn    4
0x6EC51A: xor     eax, eax
0x6EC51C: mov     ecx, dword ptr [esp+18h+var_C]
0x6EC520: mov     large fs:0, ecx
0x6EC527: pop     ecx
0x6EC528: add     esp, 14h
0x6EC52B: retn    4
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
