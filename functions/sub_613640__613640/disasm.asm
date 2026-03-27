0x613640: mov     ecx, [ecx+40h]
0x613643: xor     eax, eax
0x613645: test    ecx, ecx
0x613647: jz      short locret_61366A
0x613649: push    esi
0x61364A: mov     esi, [esp+4+arg_0]
0x61364E: mov     edi, edi
0x613650: mov     edx, [ecx+4]
0x613653: test    edx, edx
0x613655: jnz     short loc_61365B
0x613657: cmp     [ecx], edx
0x613659: jz      short loc_613669
0x61365B: mov     eax, [ecx]
0x61365D: cmp     [eax], esi
0x61365F: jz      short loc_613669
0x613661: mov     ecx, edx
0x613663: xor     eax, eax
0x613665: test    ecx, ecx
0x613667: jnz     short loc_613650
0x613669: pop     esi
0x61366A: retn    4
