0x7282F0: mov     eax, [ecx+28h]
0x7282F3: test    eax, eax
0x7282F5: push    esi
0x7282F6: jz      short loc_72831A
0x7282F8: movzx   edx, byte ptr [ecx+2Ch]
0x7282FC: mov     si, [esp+4+arg_0]
0x728301: and     edx, 3Fh
0x728304: cmp     si, dx
0x728307: jnb     short loc_72831A
0x728309: movzx   ecx, word ptr [ecx+8]
0x72830D: movzx   edx, si
0x728310: imul    ecx, edx
0x728313: lea     eax, [eax+ecx*8]
0x728316: pop     esi
0x728317: retn    4
0x72831A: xor     eax, eax
0x72831C: pop     esi
0x72831D: retn    4
