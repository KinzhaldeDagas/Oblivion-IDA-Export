0x4055E0: push    0FFFFFFFFh
0x4055E2: push    offset SEH_404850
0x4055E7: mov     eax, large fs:0
0x4055ED: push    eax
0x4055EE: push    ecx
0x4055EF: push    esi
0x4055F0: mov     eax, ___security_cookie
0x4055F5: xor     eax, esp
0x4055F7: push    eax
0x4055F8: lea     eax, [esp+18h+var_C]
0x4055FC: mov     large fs:0, eax
0x405602: mov     esi, ecx
0x405604: mov     [esp+18h+var_10], esi
0x405608: test    esi, esi
0x40560A: mov     [esp+18h+var_4], 0
0x405612: jz      short loc_405626
0x405614: mov     eax, [esi+4]
0x405617: test    eax, eax
0x405619: jz      short loc_405626
0x40561B: push    eax
0x40561C: mov     ecx, offset g_GameSettingsByName
0x405621: call    NiTMap_RemoveAt
0x405626: mov     esi, [esi+4]
0x405629: test    esi, esi
0x40562B: jz      short loc_40563B
0x40562D: cmp     byte ptr [esi], 53h ; 'S'
0x405630: jnz     short loc_40563B
0x405632: push    esi
0x405633: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x405638: add     esp, 4
0x40563B: mov     ecx, [esp+18h+var_C]
0x40563F: mov     large fs:0, ecx
0x405646: pop     ecx
0x405647: pop     esi
0x405648: add     esp, 10h
0x40564B: retn
0x9AB570: mov     ecx, [ebp-10h]
0x9AB573: jmp     loc_403BC0
0x9AB578: mov     edx, [esp+arg_4]
0x9AB57C: lea     eax, [edx-8]
0x9AB57F: mov     ecx, [edx-0Ch]
0x9AB582: xor     ecx, eax
0x9AB584: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AB589: mov     eax, offset stru_AD8444
0x9AB58E: jmp     ___CxxFrameHandler3
