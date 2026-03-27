0x98DED5: push    0Ch
0x98DED7: push    offset stru_AFFEC8
0x98DEDC: call    __SEH_prolog4
0x98DEE1: push    0Eh
0x98DEE3: call    __lock
0x98DEE8: pop     ecx
0x98DEE9: and     [ebp+ms_exc.registration.TryLevel], 0
0x98DEED: mov     esi, [ebp+arg_0]
0x98DEF0: mov     ecx, [esi+4]
0x98DEF3: test    ecx, ecx
0x98DEF5: jz      short loc_98DF26
0x98DEF7: mov     eax, Memory
0x98DEFC: mov     edx, offset unk_BAA5F4
0x98DF01: mov     [ebp+var_1C], eax
0x98DF04: test    eax, eax
0x98DF06: jz      short loc_98DF19
0x98DF08: cmp     [eax], ecx
0x98DF0A: jnz     short loc_98DF38
0x98DF0C: mov     ecx, [eax+4]
0x98DF0F: mov     [edx+4], ecx
0x98DF12: push    eax; Memory
0x98DF13: call    _free
0x98DF18: pop     ecx
0x98DF19: push    dword ptr [esi+4]; Memory
0x98DF1C: call    _free
0x98DF21: pop     ecx
0x98DF22: and     dword ptr [esi+4], 0
0x98DF26: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98DF2D: call    loc_98DF3C
0x98DF32: call    __SEH_epilog4
0x98DF37: retn
0x98DF38: mov     edx, eax
0x98DF3A: jmp     short loc_98DF01
0x98DF3C: push    0Eh
0x98DF3E: call    __unlock
0x98DF43: pop     ecx
0x98DF44: retn
