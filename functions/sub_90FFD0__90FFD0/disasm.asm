0x90FFD0: push    esi
0x90FFD1: push    edi
0x90FFD2: mov     edi, [esp+8+arg_0]
0x90FFD6: cmp     dword ptr [edi+4], 2
0x90FFDA: mov     esi, ecx
0x90FFDC: jnz     short loc_90FFE9
0x90FFDE: mov     eax, [esp+8+arg_4]
0x90FFE2: mov     ecx, [eax+4]
0x90FFE5: test    ecx, ecx
0x90FFE7: jz      short loc_90FFF0
0x90FFE9: pop     edi
0x90FFEA: xor     eax, eax
0x90FFEC: pop     esi
0x90FFED: retn    8
0x90FFF0: mov     ecx, ds:0BA7D98h
0x90FFF6: mov     edx, [ecx]
0x90FFF8: push    26h ; '&'
0x90FFFA: push    40h ; '@'
0x90FFFC: call    dword ptr [edx+10h]
0x90FFFF: mov     word ptr [eax+4], 40h ; '@'
0x910005: mov     edx, [esi+10h]
0x910008: mov     ecx, [edi]
0x91000A: push    edx
0x91000B: mov     edx, [ecx+4]
0x91000E: mov     ecx, [ecx]
0x910010: push    edx
0x910011: push    ecx
0x910012: mov     ecx, eax
0x910014: call    sub_90FDF0
0x910019: movaps  xmm0, xmmword ptr [esi+20h]
0x91001D: movaps  xmmword ptr [eax+20h], xmm0
0x910021: mov     edx, [esi+30h]
0x910024: mov     [eax+30h], edx
0x910027: mov     ecx, [esi+34h]
0x91002A: pop     edi
0x91002B: mov     [eax+34h], ecx
0x91002E: pop     esi
0x91002F: retn    8
