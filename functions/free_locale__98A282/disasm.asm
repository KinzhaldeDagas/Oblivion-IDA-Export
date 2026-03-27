0x98A282: push    8
0x98A284: push    offset stru_AFFC28
0x98A289: call    __SEH_prolog4
0x98A28E: mov     esi, [ebp+arg_0]
0x98A291: xor     edi, edi
0x98A293: cmp     esi, edi
0x98A295: jz      short loc_98A306
0x98A297: mov     eax, [esi+4]
0x98A29A: cmp     eax, edi
0x98A29C: jz      short loc_98A2BA
0x98A29E: push    eax; lpAddend
0x98A29F: call    ds:InterlockedDecrement
0x98A2A5: test    eax, eax
0x98A2A7: jnz     short loc_98A2BA
0x98A2A9: mov     eax, [esi+4]
0x98A2AC: cmp     eax, offset dword_B31390
0x98A2B1: jz      short loc_98A2BA
0x98A2B3: push    eax; Memory
0x98A2B4: call    _free
0x98A2B9: pop     ecx
0x98A2BA: cmp     [esi], edi
0x98A2BC: jz      short __free_locale___$LN12_4
0x98A2BE: push    0Ch
0x98A2C0: call    __lock
0x98A2C5: pop     ecx
0x98A2C6: mov     [ebp+ms_exc.registration.TryLevel], edi
0x98A2C9: push    dword ptr [esi]; lpAddend
0x98A2CB: call    ___removelocaleref
0x98A2D0: pop     ecx
0x98A2D1: mov     eax, [esi]
0x98A2D3: cmp     eax, edi
0x98A2D5: jz      short loc_98A2E9
0x98A2D7: cmp     [eax], edi
0x98A2D9: jnz     short loc_98A2E9
0x98A2DB: cmp     eax, offset unk_B318C0
0x98A2E0: jz      short loc_98A2E9
0x98A2E2: push    eax; Memory
0x98A2E3: call    ___freetlocinfo
0x98A2E8: pop     ecx
0x98A2E9: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98A2F0: call    __free_locale___$LN11_6
