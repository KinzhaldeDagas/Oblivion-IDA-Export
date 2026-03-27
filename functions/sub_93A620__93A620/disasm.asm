0x93A620: push    ecx
0x93A621: mov     eax, [esp+4+arg_0]
0x93A625: mov     edx, [esp+4+arg_4]
0x93A629: push    ebx
0x93A62A: push    ebp
0x93A62B: push    esi
0x93A62C: push    edi
0x93A62D: movzx   edi, byte ptr [eax+2]
0x93A631: test    edi, edi
0x93A633: mov     [esp+14h+var_4], 0
0x93A63B: jle     loc_93A6E1
0x93A641: lea     ecx, [eax+8]
0x93A644: movzx   esi, byte ptr [ecx-4]
0x93A648: movsx   ebx, byte ptr [edx+8]
0x93A64C: cmp     ebx, esi
0x93A64E: jnz     short loc_93A6CD
0x93A650: movsx   esi, byte ptr [edx+9]
0x93A654: movzx   ebp, byte ptr [ecx-3]
0x93A658: cmp     esi, ebp
0x93A65A: jnz     short loc_93A6CD
0x93A65C: mov     bp, [edx]
0x93A65F: add     esi, ebx
0x93A661: movzx   ebx, byte ptr [ecx]
0x93A664: mov     [esp+14h+arg_0], esi
0x93A668: shr     ebx, 3
0x93A66B: lea     esi, ds:0[edi*8]
0x93A672: add     ebx, esi
0x93A674: cmp     bp, [ebx+eax+4]
0x93A679: jnz     short loc_93A6CD
0x93A67B: movzx   ebx, byte ptr [ecx+1]
0x93A67F: mov     bp, [edx+2]
0x93A683: shr     ebx, 3
0x93A686: add     ebx, esi
0x93A688: cmp     bp, [ebx+eax+4]
0x93A68D: jnz     short loc_93A6CD
0x93A68F: cmp     [esp+14h+arg_0], 2
0x93A694: jle     short loc_93A6AA
0x93A696: movzx   ebx, byte ptr [ecx+2]
0x93A69A: mov     bp, [edx+4]
0x93A69E: shr     ebx, 3
0x93A6A1: add     ebx, esi
0x93A6A3: cmp     bp, [ebx+eax+4]
0x93A6A8: jnz     short loc_93A6CD
0x93A6AA: cmp     [esp+14h+arg_0], 3
0x93A6AF: jle     loc_93A760
0x93A6B5: movzx   ebx, byte ptr [ecx+3]
0x93A6B9: shr     ebx, 3
0x93A6BC: add     ebx, esi
0x93A6BE: mov     si, [edx+6]
0x93A6C2: cmp     si, [ebx+eax+4]
0x93A6C7: jz      loc_93A760
0x93A6CD: mov     esi, [esp+14h+var_4]
0x93A6D1: inc     esi
0x93A6D2: add     ecx, 8
0x93A6D5: cmp     esi, edi
0x93A6D7: mov     [esp+14h+var_4], esi
0x93A6DB: jl      loc_93A644
0x93A6E1: mov     cl, [edx+8]
0x93A6E4: mov     bl, 1
0x93A6E6: cmp     cl, bl
0x93A6E8: jz      short loc_93A6F3
0x93A6EA: cmp     [edx+9], bl
0x93A6ED: jnz     loc_93A793
0x93A6F3: test    edi, edi
0x93A6F5: mov     [esp+14h+var_4], 0
0x93A6FD: jle     loc_93A793
0x93A703: lea     esi, [eax+4]
0x93A706: cmp     cl, bl
0x93A708: jnz     short loc_93A721
0x93A70A: cmp     [esi], bl
0x93A70C: jnz     short loc_93A721
0x93A70E: movzx   ebp, byte ptr [esi+4]
0x93A712: shr     ebp, 3
0x93A715: add     ebp, eax
0x93A717: mov     bp, [ebp+edi*8+4]
0x93A71C: cmp     bp, [edx]
0x93A71F: jz      short loc_93A78C
0x93A721: cmp     [edx+9], bl
0x93A724: jnz     short loc_93A748
0x93A726: cmp     [esi+1], bl
0x93A729: jnz     short loc_93A748
0x93A72B: movzx   ebx, byte ptr [esi]
0x93A72E: movzx   ebx, byte ptr [ebx+esi+4]
0x93A733: shr     ebx, 3
0x93A736: add     ebx, eax
0x93A738: mov     bx, [ebx+edi*8+4]
0x93A73D: movsx   ebp, cl
0x93A740: cmp     bx, [edx+ebp*2]
0x93A744: jz      short loc_93A78C
0x93A746: mov     bl, 1
0x93A748: mov     ebp, [esp+14h+var_4]
0x93A74C: inc     ebp
0x93A74D: add     esi, 8
0x93A750: cmp     ebp, edi
0x93A752: mov     [esp+14h+var_4], ebp
0x93A756: jl      short loc_93A706
0x93A758: pop     edi
0x93A759: pop     esi
0x93A75A: pop     ebp
0x93A75B: xor     al, al
0x93A75D: pop     ebx
0x93A75E: pop     ecx
0x93A75F: retn
0x93A760: mov     ecx, [esp+14h+var_4]
0x93A764: test    ecx, ecx
0x93A766: jle     short loc_93A784
0x93A768: mov     edi, [eax+4]
0x93A76B: mov     edx, [eax+ecx*8+4]
0x93A76F: mov     esi, [eax+ecx*8+8]
0x93A773: mov     [eax+ecx*8+4], edi
0x93A777: mov     edi, [eax+8]
0x93A77A: mov     [eax+ecx*8+8], edi
0x93A77E: mov     [eax+4], edx
0x93A781: mov     [eax+8], esi
0x93A784: pop     edi
0x93A785: pop     esi
0x93A786: pop     ebp
0x93A787: mov     al, 1
0x93A789: pop     ebx
0x93A78A: pop     ecx
0x93A78B: retn
0x93A78C: mov     byte ptr [esi], 0
0x93A78F: mov     byte ptr [esi+1], 0
0x93A793: pop     edi
0x93A794: pop     esi
0x93A795: pop     ebp
0x93A796: xor     al, al
0x93A798: pop     ebx
0x93A799: pop     ecx
0x93A79A: retn
