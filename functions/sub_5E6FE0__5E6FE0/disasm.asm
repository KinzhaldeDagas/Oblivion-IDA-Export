0x5E6FE0: push    ebx
0x5E6FE1: xor     bl, bl
0x5E6FE3: cmp     dword ptr [ecx+58h], 0
0x5E6FE7: jz      short loc_5E7002
0x5E6FE9: mov     ecx, [ecx+58h]
0x5E6FEC: mov     eax, [ecx]
0x5E6FEE: mov     edx, [eax+184h]
0x5E6FF4: call    edx
0x5E6FF6: test    eax, eax
0x5E6FF8: jz      short loc_5E7002
0x5E6FFA: cmp     byte ptr [eax+20h], 1Ch
0x5E6FFE: mov     al, 1
0x5E7000: jz      short loc_5E7004
0x5E7002: mov     al, bl
0x5E7004: pop     ebx
0x5E7005: retn
