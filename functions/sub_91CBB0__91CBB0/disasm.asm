0x91CBB0: mov     ecx, ds:0BA7D98h
0x91CBB6: mov     eax, [ecx]
0x91CBB8: push    32h ; '2'
0x91CBBA: push    3Ch ; '<'
0x91CBBC: call    dword ptr [eax+10h]
0x91CBBF: mov     ecx, [esp+arg_0]
0x91CBC3: push    ecx
0x91CBC4: mov     ecx, eax
0x91CBC6: mov     word ptr [eax+4], 3Ch ; '<'
0x91CBCC: call    sub_91C9D0
0x91CBD1: test    eax, eax
0x91CBD3: jz      short loc_91CBD9
0x91CBD5: add     eax, 8
0x91CBD8: retn
0x91CBD9: xor     eax, eax
0x91CBDB: retn
