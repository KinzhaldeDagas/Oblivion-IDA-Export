0x675BF0: mov     eax, [esp+arg_8]
0x675BF4: cmp     eax, 6
0x675BF7: ja      short loc_675C32
0x675BF9: mov     ecx, [ecx+eax*4+28h]
0x675BFD: xor     eax, eax
0x675BFF: test    ecx, ecx
0x675C01: jz      short locret_675C34
0x675C03: push    esi
0x675C04: mov     esi, [esp+4+arg_0]
0x675C08: push    edi
0x675C09: mov     edi, [esp+8+arg_4]
0x675C0D: lea     ecx, [ecx+0]
0x675C10: mov     edx, [ecx]
0x675C12: test    edx, edx
0x675C14: jz      short loc_675C2D
0x675C16: test    eax, eax
0x675C18: jnz     short loc_675C2D
0x675C1A: cmp     [edx+0Ch], esi
0x675C1D: mov     ecx, [ecx+4]
0x675C20: jnz     short loc_675C29
0x675C22: cmp     [edx+8], edi
0x675C25: jnz     short loc_675C29
0x675C27: mov     eax, edx
0x675C29: test    ecx, ecx
0x675C2B: jnz     short loc_675C10
0x675C2D: pop     edi
0x675C2E: pop     esi
0x675C2F: retn    0Ch
0x675C32: xor     eax, eax
0x675C34: retn    0Ch
