0x6FB340: push    0FFFFFFFFh
0x6FB342: push    offset SEH_8C62B0
0x6FB347: mov     eax, large fs:0
0x6FB34D: push    eax
0x6FB34E: push    ecx
0x6FB34F: push    esi
0x6FB350: mov     eax, ds:0B30AACh
0x6FB355: xor     eax, esp
0x6FB357: push    eax
0x6FB358: lea     eax, [esp+18h+var_C]
0x6FB35C: mov     large fs:0, eax
0x6FB362: push    1Ch; Size
0x6FB364: call    FormHeapAlloc
0x6FB369: add     esp, 4
0x6FB36C: mov     [esp+18h+var_10], eax
0x6FB370: test    eax, eax
0x6FB372: mov     [esp+18h+var_4], 0
0x6FB37A: jz      short loc_6FB387
0x6FB37C: mov     ecx, eax
0x6FB37E: call    sub_6FB280
0x6FB383: mov     esi, eax
0x6FB385: jmp     short loc_6FB389
0x6FB387: xor     esi, esi
0x6FB389: push    0; Src
0x6FB38B: mov     ecx, esi
0x6FB38D: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6FB395: call    sub_721440
0x6FB39A: mov     eax, esi
0x6FB39C: mov     ecx, [esp+18h+var_C]
0x6FB3A0: mov     large fs:0, ecx
0x6FB3A7: pop     ecx
0x6FB3A8: pop     esi
0x6FB3A9: add     esp, 10h
0x6FB3AC: retn
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
