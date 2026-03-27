0x5E6FA0: mov     eax, [ecx+58h]
0x5E6FA3: push    ebx
0x5E6FA4: xor     bl, bl
0x5E6FA6: test    eax, eax
0x5E6FA8: jz      short loc_5E6FD8
0x5E6FAA: mov     eax, [eax+8]
0x5E6FAD: test    eax, eax
0x5E6FAF: jz      short loc_5E6FD8
0x5E6FB1: cmp     byte ptr [eax+20h], 3
0x5E6FB5: jnz     short loc_5E6FD8
0x5E6FB7: mov     ecx, [ecx+58h]
0x5E6FBA: push    esi
0x5E6FBB: mov     esi, [eax+18h]
0x5E6FBE: mov     eax, [ecx]
0x5E6FC0: mov     edx, [eax+180h]
0x5E6FC6: call    edx
0x5E6FC8: mov     ecx, ds:0B152B0h[esi*4]
0x5E6FCF: cmp     dword ptr [ecx+eax*4], 5
0x5E6FD3: pop     esi
0x5E6FD4: mov     al, 1
0x5E6FD6: jz      short loc_5E6FDA
0x5E6FD8: mov     al, bl
0x5E6FDA: pop     ebx
0x5E6FDB: retn
