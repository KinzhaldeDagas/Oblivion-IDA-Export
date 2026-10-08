0x6F8FC0: push    0FFFFFFFFh
0x6F8FC2: push    offset SEH_6F8920
0x6F8FC7: mov     eax, large fs:0
0x6F8FCD: push    eax
0x6F8FCE: push    esi
0x6F8FCF: mov     eax, ds:0B30AACh
0x6F8FD4: xor     eax, esp
0x6F8FD6: push    eax
0x6F8FD7: lea     eax, [esp+14h+var_C]
0x6F8FDB: mov     large fs:0, eax
0x6F8FE1: mov     esi, [esp+14h+arg_0]
0x6F8FE5: test    esi, esi
0x6F8FE7: jz      short loc_6F9017
0x6F8FE9: cmp     dword ptr [esi], 0
0x6F8FEC: jnz     short loc_6F9017
0x6F8FEE: push    8; Size
0x6F8FF0: call    FormHeapAlloc
0x6F8FF5: add     esp, 4
0x6F8FF8: mov     [esp+14h+arg_0], eax
0x6F8FFC: test    eax, eax
0x6F8FFE: mov     [esp+14h+var_4], 0
0x6F9006: jz      short loc_6F9013
0x6F9008: push    0
0x6F900A: mov     ecx, eax
0x6F900C: call    sub_6F8DF0
0x6F9011: jmp     short loc_6F9015
0x6F9013: xor     eax, eax
0x6F9015: mov     [esi], eax
0x6F9017: mov     eax, 2
0x6F901C: mov     ecx, [esp+14h+var_C]
0x6F9020: mov     large fs:0, ecx
0x6F9027: pop     ecx
0x6F9028: pop     esi
0x6F9029: add     esp, 0Ch
0x6F902C: retn
0x9AFAD0: mov     eax, [ebp+4]
0x9AFAD3: push    eax
0x9AFAD4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9AFAD9: pop     ecx
0x9AFADA: retn
0x9AFADB: mov     edx, [esp+arg_4]
0x9AFADF: lea     eax, [edx-4]
0x9AFAE2: mov     ecx, [edx-8]
0x9AFAE5: xor     ecx, eax
0x9AFAE7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AFAEC: mov     eax, offset stru_ADBFDC
0x9AFAF1: jmp     ___CxxFrameHandler3
