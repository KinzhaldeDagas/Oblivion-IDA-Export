0x946520: mov     ecx, ds:0BA7D98h
0x946526: mov     eax, [ecx]
0x946528: push    32h ; '2'
0x94652A: push    30h ; '0'
0x94652C: call    dword ptr [eax+10h]
0x94652F: mov     ecx, [esp+arg_0]
0x946533: push    ecx
0x946534: mov     ecx, eax
0x946536: mov     word ptr [eax+4], 30h ; '0'
0x94653C: call    sub_9463E0
0x946541: test    eax, eax
0x946543: jz      short loc_946549
0x946545: add     eax, 8
0x946548: retn
0x946549: xor     eax, eax
0x94654B: retn
