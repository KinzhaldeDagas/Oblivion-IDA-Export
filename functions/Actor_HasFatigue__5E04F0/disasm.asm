0x5E04F0: cmp     dword ptr [ecx+58h], 0
0x5E04F4: jz      short loc_5E050A
0x5E04F6: mov     ecx, [ecx+58h]
0x5E04F9: mov     eax, [ecx]
0x5E04FB: mov     edx, [eax+2E4h]
0x5E0501: call    edx
0x5E0503: test    eax, eax
0x5E0505: jz      short loc_5E050A
0x5E0507: mov     al, 1
0x5E0509: retn
0x5E050A: xor     al, al
0x5E050C: retn
