0x5E6BC0: push    esi
0x5E6BC1: mov     esi, ecx
0x5E6BC3: cmp     dword ptr [esi+58h], 0
0x5E6BC7: push    edi
0x5E6BC8: jz      short loc_5E6C08
0x5E6BCA: mov     ecx, [esi+58h]
0x5E6BCD: mov     eax, [ecx]
0x5E6BCF: mov     edx, [eax+184h]
0x5E6BD5: call    edx
0x5E6BD7: test    eax, eax
0x5E6BD9: jz      short loc_5E6C08
0x5E6BDB: mov     edi, [eax+18h]
0x5E6BDE: cmp     edi, 0FFFFFFFFh
0x5E6BE1: jz      short loc_5E6C08
0x5E6BE3: test    byte ptr [eax+1Eh], 1
0x5E6BE7: jnz     short loc_5E6C03
0x5E6BE9: mov     ecx, [esi+58h]
0x5E6BEC: mov     eax, [ecx]
0x5E6BEE: mov     edx, [eax+180h]
0x5E6BF4: call    edx
0x5E6BF6: mov     ecx, ds:0B152B0h[edi*4]
0x5E6BFD: cmp     dword ptr [ecx+eax*4], 0Dh
0x5E6C01: jnz     short loc_5E6C08
0x5E6C03: pop     edi
0x5E6C04: mov     al, 1
0x5E6C06: pop     esi
0x5E6C07: retn
0x5E6C08: pop     edi
0x5E6C09: xor     al, al
0x5E6C0B: pop     esi
0x5E6C0C: retn
