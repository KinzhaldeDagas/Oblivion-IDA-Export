0x6E4B60: push    0FFFFFFFFh
0x6E4B62: push    offset SEH_8C8900
0x6E4B67: mov     eax, large fs:0
0x6E4B6D: push    eax
0x6E4B6E: push    ecx
0x6E4B6F: mov     eax, ds:0B30AACh
0x6E4B74: xor     eax, esp
0x6E4B76: push    eax
0x6E4B77: lea     eax, [esp+14h+var_C]
0x6E4B7B: mov     large fs:0, eax
0x6E4B81: push    48h ; 'H'; Size
0x6E4B83: call    FormHeapAlloc
0x6E4B88: add     esp, 4
0x6E4B8B: mov     [esp+14h+var_10], eax
0x6E4B8F: test    eax, eax
0x6E4B91: mov     [esp+14h+var_4], 0
0x6E4B99: jz      short loc_6E4BC5
0x6E4B9B: push    0; int
0x6E4B9D: push    0FFFFh; int
0x6E4BA2: push    0FFFFh; int
0x6E4BA7: push    0FFFFh; int
0x6E4BAC: push    0; int
0x6E4BAE: mov     ecx, eax; this
0x6E4BB0: call    sub_6E4930
0x6E4BB5: mov     ecx, [esp+14h+var_C]
0x6E4BB9: mov     large fs:0, ecx
0x6E4BC0: pop     ecx
0x6E4BC1: add     esp, 10h
0x6E4BC4: retn
0x6E4BC5: xor     eax, eax
0x6E4BC7: mov     ecx, [esp+14h+var_C]
0x6E4BCB: mov     large fs:0, ecx
0x6E4BD2: pop     ecx
0x6E4BD3: add     esp, 10h
0x6E4BD6: retn
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
