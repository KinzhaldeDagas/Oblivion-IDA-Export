0x4A3740: push    0FFFFFFFFh
0x4A3742: push    offset SEH_8C62B0
0x4A3747: mov     eax, large fs:0
0x4A374D: push    eax
0x4A374E: push    ecx
0x4A374F: push    esi
0x4A3750: mov     eax, ds:0B30AACh
0x4A3755: xor     eax, esp
0x4A3757: push    eax
0x4A3758: lea     eax, [esp+18h+var_C]
0x4A375C: mov     large fs:0, eax
0x4A3762: mov     esi, ecx
0x4A3764: push    0Ch; Size
0x4A3766: call    FormHeapAlloc
0x4A376B: add     esp, 4
0x4A376E: mov     [esp+18h+var_10], eax
0x4A3772: test    eax, eax
0x4A3774: mov     [esp+18h+var_4], 0
0x4A377C: jz      short loc_4A3797
0x4A377E: push    esi
0x4A377F: mov     ecx, eax
0x4A3781: call    sub_4A3660
0x4A3786: mov     ecx, [esp+18h+var_C]
0x4A378A: mov     large fs:0, ecx
0x4A3791: pop     ecx
0x4A3792: pop     esi
0x4A3793: add     esp, 10h
0x4A3796: retn
0x4A3797: xor     eax, eax
0x4A3799: mov     ecx, [esp+18h+var_C]
0x4A379D: mov     large fs:0, ecx
0x4A37A4: pop     ecx
0x4A37A5: pop     esi
0x4A37A6: add     esp, 10h
0x4A37A9: retn
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
