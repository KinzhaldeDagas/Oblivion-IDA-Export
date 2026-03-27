0x569CF0: push    ecx
0x569CF1: push    esi
0x569CF2: mov     esi, ecx
0x569CF4: mov     ecx, ds:0B33B00h
0x569CFA: push    1; Size
0x569CFC: push    esi; Src
0x569CFD: call    SaveLoad_SaveData
0x569D02: mov     ecx, ds:0B33B00h
0x569D08: push    4; Size
0x569D0A: lea     eax, [esi+4]
0x569D0D: push    eax; Src
0x569D0E: call    SaveLoad_SaveData
0x569D13: mov     al, [esi]
0x569D15: test    al, al
0x569D17: jl      short loc_569D5D
0x569D19: cmp     al, 4
0x569D1B: jle     short loc_569D35
0x569D1D: cmp     al, 5
0x569D1F: jnz     short loc_569D5D
0x569D21: mov     ecx, ds:0B33B00h
0x569D27: push    4; Size
0x569D29: add     esi, 8
0x569D2C: push    esi; Src
0x569D2D: call    SaveLoad_SaveData
0x569D32: pop     esi
0x569D33: pop     ecx
0x569D34: retn
0x569D35: mov     esi, [esi+8]
0x569D38: test    esi, esi
0x569D3A: mov     [esp+8+var_4], 0
0x569D42: jz      short loc_569D4B
0x569D44: mov     ecx, [esi+0Ch]
0x569D47: mov     [esp+8+var_4], ecx
0x569D4B: mov     ecx, ds:0B33B00h
0x569D51: push    4
0x569D53: lea     edx, [esp+0Ch+var_4]
0x569D57: push    edx
0x569D58: call    SaveLoad_SaveFormID
0x569D5D: pop     esi
0x569D5E: pop     ecx
0x569D5F: retn
