0x4BDCD0: push    0FFFFFFFFh
0x4BDCD2: push    offset SEH_8C62B0
0x4BDCD7: mov     eax, large fs:0
0x4BDCDD: push    eax
0x4BDCDE: push    ecx
0x4BDCDF: push    esi
0x4BDCE0: mov     eax, ds:0B30AACh
0x4BDCE5: xor     eax, esp
0x4BDCE7: push    eax
0x4BDCE8: lea     eax, [esp+18h+var_C]
0x4BDCEC: mov     large fs:0, eax
0x4BDCF2: cmp     dword ptr ds:0B35B8Ch, 0
0x4BDCF9: jnz     short loc_4BDD2E
0x4BDCFB: push    1Ch; Size
0x4BDCFD: call    FormHeapAlloc
0x4BDD02: mov     esi, eax
0x4BDD04: add     esp, 4
0x4BDD07: mov     [esp+18h+var_10], esi
0x4BDD0B: test    esi, esi
0x4BDD0D: mov     [esp+18h+var_4], 0
0x4BDD15: jz      short loc_4BDD26
0x4BDD17: push    0Ch
0x4BDD19: push    25h ; '%'
0x4BDD1B: push    2
0x4BDD1D: mov     ecx, esi
0x4BDD1F: call    sub_4BD050
0x4BDD24: jmp     short loc_4BDD28
0x4BDD26: xor     esi, esi
0x4BDD28: mov     ds:0B35B8Ch, esi
0x4BDD2E: mov     ecx, [esp+18h+var_C]
0x4BDD32: mov     large fs:0, ecx
0x4BDD39: pop     ecx
0x4BDD3A: pop     esi
0x4BDD3B: add     esp, 10h
0x4BDD3E: retn
