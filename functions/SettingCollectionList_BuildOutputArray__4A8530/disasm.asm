0x4A8530: push    esi
0x4A8531: push    edi
0x4A8532: lea     esi, [ecx+10Ch]
0x4A8538: xor     edi, edi
0x4A853A: test    esi, esi
0x4A853C: jz      short loc_4A8556
0x4A853E: push    ebx
0x4A853F: mov     ebx, [esp+0Ch+arg_0]
0x4A8543: mov     ecx, [esi]
0x4A8545: push    ebx
0x4A8546: call    Setting_BuildOutputArray
0x4A854B: mov     esi, [esi+4]
0x4A854E: add     edi, 1
0x4A8551: test    esi, esi
0x4A8553: jnz     short loc_4A8543
0x4A8555: pop     ebx
0x4A8556: mov     eax, edi
0x4A8558: pop     edi
0x4A8559: pop     esi
0x4A855A: retn    4
