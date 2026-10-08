0x6D7320: push    0FFFFFFFFh
0x6D7322: push    offset SEH_8C8900
0x6D7327: mov     eax, large fs:0
0x6D732D: push    eax
0x6D732E: push    ecx
0x6D732F: mov     eax, ds:0B30AACh
0x6D7334: xor     eax, esp
0x6D7336: push    eax
0x6D7337: lea     eax, [esp+14h+var_C]
0x6D733B: mov     large fs:0, eax
0x6D7341: push    58h ; 'X'; Size
0x6D7343: call    FormHeapAlloc
0x6D7348: add     esp, 4
0x6D734B: mov     [esp+14h+var_10], eax
0x6D734F: test    eax, eax
0x6D7351: mov     [esp+14h+var_4], 0
0x6D7359: jz      short loc_6D7378
0x6D735B: push    0
0x6D735D: push    0
0x6D735F: push    0
0x6D7361: mov     ecx, eax
0x6D7363: call    sub_6D7120
0x6D7368: mov     ecx, [esp+14h+var_C]
0x6D736C: mov     large fs:0, ecx
0x6D7373: pop     ecx
0x6D7374: add     esp, 10h
0x6D7377: retn
0x6D7378: xor     eax, eax
0x6D737A: mov     ecx, [esp+14h+var_C]
0x6D737E: mov     large fs:0, ecx
0x6D7385: pop     ecx
0x6D7386: add     esp, 10h
0x6D7389: retn
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
