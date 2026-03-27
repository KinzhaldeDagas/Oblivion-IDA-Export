0x644DE0: push    0FFFFFFFFh
0x644DE2: push    offset SEH_8C62B0
0x644DE7: mov     eax, large fs:0
0x644DED: push    eax
0x644DEE: push    ecx
0x644DEF: push    esi
0x644DF0: mov     eax, ds:0B30AACh
0x644DF5: xor     eax, esp
0x644DF7: push    eax
0x644DF8: lea     eax, [esp+18h+var_C]
0x644DFC: mov     large fs:0, eax
0x644E02: mov     esi, ecx
0x644E04: cmp     dword ptr [esi+34h], 0
0x644E08: jnz     short loc_644E36
0x644E0A: push    14h; Size
0x644E0C: call    FormHeapAlloc
0x644E11: add     esp, 4
0x644E14: mov     [esp+18h+var_10], eax
0x644E18: test    eax, eax
0x644E1A: mov     [esp+18h+var_4], 0
0x644E22: jz      short loc_644E2D
0x644E24: mov     ecx, eax
0x644E26: call    sub_68A9F0
0x644E2B: jmp     short loc_644E2F
0x644E2D: xor     eax, eax
0x644E2F: mov     [esi+34h], eax
0x644E32: mov     byte ptr [eax+10h], 0
0x644E36: mov     ecx, [esp+18h+var_C]
0x644E3A: mov     large fs:0, ecx
0x644E41: pop     ecx
0x644E42: pop     esi
0x644E43: add     esp, 10h
0x644E46: retn
