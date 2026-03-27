0x911D50: push    0FFFFFFFFh
0x911D52: push    offset SEH_911D50
0x911D57: mov     eax, large fs:0
0x911D5D: push    eax
0x911D5E: push    esi
0x911D5F: mov     eax, ds:0B30AACh
0x911D64: xor     eax, esp
0x911D66: push    eax
0x911D67: lea     eax, [esp+14h+var_C]
0x911D6B: mov     large fs:0, eax
0x911D71: mov     esi, ecx
0x911D73: mov     eax, [esp+14h+arg_0]
0x911D77: test    eax, eax
0x911D79: jnz     short loc_911DAD
0x911D7B: mov     ecx, ds:0BA7D98h
0x911D81: mov     eax, [ecx]
0x911D83: mov     edx, [eax+10h]
0x911D86: push    29h ; ')'
0x911D88: push    4Ch ; 'L'
0x911D8A: call    edx
0x911D8C: mov     word ptr [eax+4], 4Ch ; 'L'
0x911D92: mov     [esp+14h+arg_0], eax
0x911D96: mov     ecx, eax
0x911D98: mov     [esp+14h+var_4], 0
0x911DA0: call    sub_913180
0x911DA5: mov     [esp+14h+var_4], 0FFFFFFFFh
0x911DAD: mov     ecx, [esp+14h+arg_4]
0x911DB1: push    ecx
0x911DB2: push    eax
0x911DB3: mov     ecx, esi
0x911DB5: call    sub_8A07B0
0x911DBA: mov     ecx, [esp+14h+var_C]
0x911DBE: mov     large fs:0, ecx
0x911DC5: pop     ecx
0x911DC6: pop     esi
0x911DC7: add     esp, 0Ch
0x911DCA: retn    8
