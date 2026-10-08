0x724650: push    0FFFFFFFFh
0x724652: push    offset SEH_8C8900
0x724657: mov     eax, large fs:0
0x72465D: push    eax
0x72465E: push    ecx
0x72465F: mov     eax, ds:0B30AACh
0x724664: xor     eax, esp
0x724666: push    eax
0x724667: lea     eax, [esp+14h+var_C]
0x72466B: mov     large fs:0, eax
0x724671: push    0FCh ; 'ü'; Size
0x724676: call    FormHeapAlloc
0x72467B: add     esp, 4
0x72467E: mov     [esp+14h+var_10], eax
0x724682: test    eax, eax
0x724684: mov     [esp+14h+var_4], 0
0x72468C: jz      short loc_7246A5
0x72468E: mov     ecx, eax
0x724690: call    sub_723F70
0x724695: mov     ecx, [esp+14h+var_C]
0x724699: mov     large fs:0, ecx
0x7246A0: pop     ecx
0x7246A1: add     esp, 10h
0x7246A4: retn
0x7246A5: xor     eax, eax
0x7246A7: mov     ecx, [esp+14h+var_C]
0x7246AB: mov     large fs:0, ecx
0x7246B2: pop     ecx
0x7246B3: add     esp, 10h
0x7246B6: retn
0x9C74D0: mov     eax, [ebp-10h]
0x9C74D3: push    eax
0x9C74D4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C74D9: pop     ecx
0x9C74DA: retn
0x9C74DB: mov     edx, [esp+arg_4]
0x9C74DF: lea     eax, [edx-4]
0x9C74E2: mov     ecx, [edx-8]
0x9C74E5: xor     ecx, eax
0x9C74E7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C74EC: mov     eax, offset stru_AEF928
0x9C74F1: jmp     ___CxxFrameHandler3
