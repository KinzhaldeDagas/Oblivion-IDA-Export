0x5AA210: mov     ecx, [esp+arg_4]
0x5AA214: movzx   eax, byte ptr [ecx+4]
0x5AA218: cmp     eax, 19h
0x5AA21B: jnz     short loc_5AA228
0x5AA21D: mov     eax, [esp+arg_0]
0x5AA221: mov     dword ptr [eax], 6
0x5AA227: retn
0x5AA228: cmp     eax, 28h ; '('
0x5AA22B: jnz     short loc_5AA238
0x5AA22D: mov     ecx, [esp+arg_0]
0x5AA231: mov     dword ptr [ecx], 5
0x5AA237: retn
0x5AA238: cmp     eax, 13h
0x5AA23B: jnz     short loc_5AA248
0x5AA23D: mov     edx, [esp+arg_0]
0x5AA241: mov     dword ptr [edx], 4
0x5AA247: retn
0x5AA248: cmp     eax, 15h
0x5AA24B: jnz     short loc_5AA258
0x5AA24D: mov     eax, [esp+arg_0]
0x5AA251: mov     dword ptr [eax], 8
0x5AA257: retn
0x5AA258: cmp     eax, 27h ; '''
0x5AA25B: jnz     short loc_5AA268
0x5AA25D: mov     ecx, [esp+arg_0]
0x5AA261: mov     dword ptr [ecx], 9
0x5AA267: retn
0x5AA268: cmp     eax, 26h ; '&'
0x5AA26B: jz      short loc_5AA292
0x5AA26D: cmp     eax, 2Ah ; '*'
0x5AA270: jz      short loc_5AA292
0x5AA272: cmp     ecx, ds:0B35ED8h
0x5AA278: jz      short loc_5AA292
0x5AA27A: cmp     ecx, ds:0B35EDCh
0x5AA280: jz      short loc_5AA292
0x5AA282: mov     eax, [esp+arg_0]
0x5AA286: cmp     dword ptr [eax], 8
0x5AA289: jnz     short locret_5AA29C
0x5AA28B: mov     dword ptr [eax], 0Bh
0x5AA291: retn
0x5AA292: mov     edx, [esp+arg_0]
0x5AA296: mov     dword ptr [edx], 0Ah
0x5AA29C: retn
