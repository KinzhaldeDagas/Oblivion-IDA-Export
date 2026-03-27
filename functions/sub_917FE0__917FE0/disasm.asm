0x917FE0: mov     ecx, ds:0BA7D98h
0x917FE6: mov     eax, [ecx]
0x917FE8: push    12h
0x917FEA: push    24h ; '$'
0x917FEC: call    dword ptr [eax+10h]
0x917FEF: push    0FFFFFFFFh
0x917FF1: mov     ecx, eax
0x917FF3: mov     word ptr [eax+4], 24h ; '$'
0x917FF9: call    sub_945F70
0x917FFE: retn
