0x6FE0F0: push    0FFFFFFFFh
0x6FE0F2: push    offset SEH_8C8900
0x6FE0F7: mov     eax, large fs:0
0x6FE0FD: push    eax
0x6FE0FE: push    ecx
0x6FE0FF: mov     eax, ds:0B30AACh
0x6FE104: xor     eax, esp
0x6FE106: push    eax
0x6FE107: lea     eax, [esp+14h+var_C]
0x6FE10B: mov     large fs:0, eax
0x6FE111: push    18h; Size
0x6FE113: call    FormHeapAlloc
0x6FE118: add     esp, 4
0x6FE11B: mov     [esp+14h+var_10], eax
0x6FE11F: test    eax, eax
0x6FE121: mov     [esp+14h+var_4], 0
0x6FE129: jz      short loc_6FE142
0x6FE12B: mov     ecx, eax; this
0x6FE12D: call    ??0BSNodeReferences@@QAE@XZ; BSNodeReferences::BSNodeReferences(void)
0x6FE132: mov     ecx, [esp+14h+var_C]
0x6FE136: mov     large fs:0, ecx
0x6FE13D: pop     ecx
0x6FE13E: add     esp, 10h
0x6FE141: retn
0x6FE142: xor     eax, eax
0x6FE144: mov     ecx, [esp+14h+var_C]
0x6FE148: mov     large fs:0, ecx
0x6FE14F: pop     ecx
0x6FE150: add     esp, 10h
0x6FE153: retn
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
