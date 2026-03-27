0x942D70: push    ecx
0x942D71: push    esi
0x942D72: mov     esi, ecx
0x942D74: push    edi
0x942D75: mov     word ptr [esi+6], 1
0x942D7B: mov     dword ptr [esi], offset off_AA2444
0x942D81: mov     ecx, ds:0BA7D98h
0x942D87: mov     eax, [ecx]
0x942D89: push    12h
0x942D8B: push    14h
0x942D8D: call    dword ptr [eax+10h]
0x942D90: mov     edi, eax
0x942D92: push    offset dword_B2FDE4
0x942D97: lea     ecx, [esp+10h+var_4]
0x942D9B: mov     word ptr [edi+4], 14h
0x942DA1: call    sub_90BBA0
0x942DA6: mov     ecx, [esp+0Ch+arg_0]
0x942DAA: push    ecx
0x942DAB: lea     edx, [esp+10h+var_4]
0x942DAF: push    edx
0x942DB0: mov     ecx, edi
0x942DB2: call    sub_953530
0x942DB7: mov     [esi+8], eax
0x942DBA: mov     ecx, ds:0B2FDE4h
0x942DC0: cmp     [eax+0Ch], cl
0x942DC3: jnz     short loc_942DDB
0x942DC5: cmp     [eax+0Dh], ch
0x942DC8: jnz     short loc_942DDB
0x942DCA: mov     cx, ds:0B2FDE6h
0x942DD1: cmp     [eax+0Eh], cl
0x942DD4: jnz     short loc_942DDB
0x942DD6: cmp     [eax+0Fh], ch
0x942DD9: jz      short loc_942E02
0x942DDB: mov     ecx, ds:0BA7D98h
0x942DE1: mov     eax, [ecx]
0x942DE3: push    5
0x942DE5: push    0Ch
0x942DE7: call    dword ptr [eax+10h]
0x942DEA: mov     edi, eax
0x942DEC: test    edi, edi
0x942DEE: jz      short loc_942E02
0x942DF0: mov     ecx, edi
0x942DF2: call    sub_8B0E10
0x942DF7: mov     [esi+0Ch], edi
0x942DFA: pop     edi
0x942DFB: mov     eax, esi
0x942DFD: pop     esi
0x942DFE: pop     ecx
0x942DFF: retn    4
0x942E02: xor     eax, eax
0x942E04: mov     [esi+0Ch], eax
0x942E07: pop     edi
0x942E08: mov     eax, esi
0x942E0A: pop     esi
0x942E0B: pop     ecx
0x942E0C: retn    4
