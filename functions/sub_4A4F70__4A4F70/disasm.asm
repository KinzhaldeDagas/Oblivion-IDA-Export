0x4A4F70: push    0FFFFFFFFh
0x4A4F72: push    offset SEH_8C62B0
0x4A4F77: mov     eax, large fs:0
0x4A4F7D: push    eax
0x4A4F7E: push    ecx
0x4A4F7F: push    esi
0x4A4F80: mov     eax, ds:0B30AACh
0x4A4F85: xor     eax, esp
0x4A4F87: push    eax
0x4A4F88: lea     eax, [esp+18h+var_C]
0x4A4F8C: mov     large fs:0, eax
0x4A4F92: mov     esi, ecx
0x4A4F94: push    10h; Size
0x4A4F96: call    FormHeapAlloc
0x4A4F9B: add     esp, 4
0x4A4F9E: mov     [esp+18h+var_10], eax
0x4A4FA2: test    eax, eax
0x4A4FA4: mov     [esp+18h+var_4], 0
0x4A4FAC: jz      short loc_4A4FC7
0x4A4FAE: push    esi
0x4A4FAF: mov     ecx, eax
0x4A4FB1: call    sub_4A4EA0
0x4A4FB6: mov     ecx, [esp+18h+var_C]
0x4A4FBA: mov     large fs:0, ecx
0x4A4FC1: pop     ecx
0x4A4FC2: pop     esi
0x4A4FC3: add     esp, 10h
0x4A4FC6: retn
0x4A4FC7: xor     eax, eax
0x4A4FC9: mov     ecx, [esp+18h+var_C]
0x4A4FCD: mov     large fs:0, ecx
0x4A4FD4: pop     ecx
0x4A4FD5: pop     esi
0x4A4FD6: add     esp, 10h
0x4A4FD9: retn
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
