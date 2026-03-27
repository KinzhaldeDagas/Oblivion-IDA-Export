0x55E810: push    ebx
0x55E811: push    esi
0x55E812: push    edi
0x55E813: mov     esi, ecx
0x55E815: xor     edi, edi
0x55E817: cmp     [esi+8], edi
0x55E81A: jbe     short loc_55E837
0x55E81C: mov     ebx, [esp+0Ch+arg_0]
0x55E820: mov     eax, [esi]
0x55E822: mov     edx, [eax+14h]
0x55E825: push    ebx
0x55E826: push    edi
0x55E827: mov     ecx, esi
0x55E829: call    edx
0x55E82B: test    al, al
0x55E82D: jnz     short loc_55E83F
0x55E82F: add     edi, 1
0x55E832: cmp     edi, [esi+8]
0x55E835: jb      short loc_55E820
0x55E837: pop     edi
0x55E838: pop     esi
0x55E839: xor     al, al
0x55E83B: pop     ebx
0x55E83C: retn    4
0x55E83F: pop     edi
0x55E840: pop     esi
0x55E841: mov     al, 1
0x55E843: pop     ebx
0x55E844: retn    4
