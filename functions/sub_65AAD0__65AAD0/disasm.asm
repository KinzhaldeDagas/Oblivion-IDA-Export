0x65AAD0: push    ebx
0x65AAD1: push    esi
0x65AAD2: xor     bl, bl
0x65AAD4: call    MobileObject_GetCharProxy
0x65AAD9: mov     esi, eax
0x65AADB: test    esi, esi
0x65AADD: jz      short loc_65AB17
0x65AADF: mov     eax, [esi+1ECh]
0x65AAE5: mov     ecx, [esi+1E8h]
0x65AAEB: push    eax
0x65AAEC: call    sub_8BA170
0x65AAF1: test    eax, eax
0x65AAF3: jz      short loc_65AB17
0x65AAF5: mov     ecx, [esi+1ECh]
0x65AAFB: push    ecx
0x65AAFC: mov     ecx, [esi+1E8h]
0x65AB02: call    sub_8BA170
0x65AB07: mov     edx, [eax]
0x65AB09: mov     ecx, eax
0x65AB0B: mov     eax, [edx+8]
0x65AB0E: call    eax
0x65AB10: cmp     eax, 2
0x65AB13: mov     al, 1
0x65AB15: jz      short loc_65AB19
0x65AB17: mov     al, bl
0x65AB19: pop     esi
0x65AB1A: pop     ebx
0x65AB1B: retn
