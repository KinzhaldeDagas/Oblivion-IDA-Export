0x569A40: push    ecx
0x569A41: push    esi
0x569A42: mov     esi, ecx
0x569A44: mov     ecx, ds:0B33B00h
0x569A4A: push    1; Size
0x569A4C: push    esi; Dst
0x569A4D: call    SaveLoad_LoadData
0x569A52: mov     ecx, ds:0B33B00h
0x569A58: push    4; Size
0x569A5A: lea     eax, [esi+4]
0x569A5D: push    eax; Dst
0x569A5E: call    SaveLoad_LoadData
0x569A63: mov     al, [esi]
0x569A65: test    al, al
0x569A67: jl      short loc_569A9E
0x569A69: cmp     al, 4
0x569A6B: jle     short loc_569A85
0x569A6D: cmp     al, 5
0x569A6F: jnz     short loc_569A9E
0x569A71: mov     ecx, ds:0B33B00h
0x569A77: push    4; Size
0x569A79: add     esi, 8
0x569A7C: push    esi; Dst
0x569A7D: call    SaveLoad_LoadData
0x569A82: pop     esi
0x569A83: pop     ecx
0x569A84: retn
0x569A85: push    4; Size
0x569A87: lea     ecx, [esp+0Ch+Dst]
0x569A8B: push    ecx; Dst
0x569A8C: mov     ecx, ds:0B33B00h
0x569A92: call    SaveLoad_LoadFormID
0x569A97: mov     edx, [esp+10h+var_C]
0x569A9B: mov     [esi+8], edx
0x569A9E: pop     esi
0x569A9F: pop     ecx
0x569AA0: retn
