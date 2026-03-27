0x91AC10: mov     ecx, ds:0BA7D98h
0x91AC16: mov     eax, [ecx]
0x91AC18: push    32h ; '2'
0x91AC1A: push    3Ch ; '<'
0x91AC1C: call    dword ptr [eax+10h]
0x91AC1F: mov     ecx, [esp+arg_0]
0x91AC23: push    ecx
0x91AC24: mov     ecx, eax
0x91AC26: mov     word ptr [eax+4], 3Ch ; '<'
0x91AC2C: call    sub_91AA10
0x91AC31: test    eax, eax
0x91AC33: jz      short loc_91AC39
0x91AC35: add     eax, 8
0x91AC38: retn
0x91AC39: xor     eax, eax
0x91AC3B: retn
