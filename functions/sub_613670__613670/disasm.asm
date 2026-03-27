0x613670: mov     ecx, [ecx+40h]
0x613673: xor     al, al
0x613675: test    ecx, ecx
0x613677: jz      short locret_61369E
0x613679: push    esi
0x61367A: mov     esi, [esp+4+arg_0]
0x61367E: mov     edi, edi
0x613680: mov     edx, [ecx+4]
0x613683: test    edx, edx
0x613685: jnz     short loc_61368B
0x613687: cmp     [ecx], edx
0x613689: jz      short loc_61369D
0x61368B: mov     ecx, [ecx]
0x61368D: cmp     [ecx], esi
0x61368F: jz      short loc_61369B
0x613691: mov     ecx, edx
0x613693: test    ecx, ecx
0x613695: jnz     short loc_613680
0x613697: pop     esi
0x613698: retn    4
0x61369B: mov     al, 1
0x61369D: pop     esi
0x61369E: retn    4
