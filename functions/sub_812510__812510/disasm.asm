0x812510: movzx   eax, word ptr [ecx+0Eh]
0x812514: cmp     ax, [ecx+0Ch]
0x812518: jz      short loc_81255D
0x81251A: mov     edx, [esp+arg_0]
0x81251E: test    edx, edx
0x812520: jz      short loc_81255D
0x812522: movzx   eax, ax
0x812525: shl     eax, 4
0x812528: add     eax, [ecx+10h]
0x81252B: push    esi
0x81252C: mov     esi, [edx]
0x81252E: mov     [eax], esi
0x812530: mov     esi, [edx+4]
0x812533: mov     [eax+4], esi
0x812536: mov     esi, [edx+8]
0x812539: mov     [eax+8], esi
0x81253C: mov     edx, [edx+0Ch]
0x81253F: mov     esi, [esp+4+arg_4]
0x812543: mov     [eax+0Ch], edx
0x812546: movzx   eax, word ptr [ecx+0Eh]
0x81254A: mov     edx, [ecx+14h]
0x81254D: mov     [edx+eax*4], esi
0x812550: mov     eax, 1
0x812555: add     [ecx+0Eh], ax
0x812559: pop     esi
0x81255A: retn    8
0x81255D: xor     al, al
0x81255F: retn    8
