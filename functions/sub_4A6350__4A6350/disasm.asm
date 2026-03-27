0x4A6350: mov     edx, [esp+arg_0]
0x4A6354: test    edx, edx
0x4A6356: jnz     short loc_4A635D
0x4A6358: xor     al, al
0x4A635A: retn    4
0x4A635D: add     ecx, 4
0x4A6360: mov     eax, ecx
0x4A6362: jz      short loc_4A636F
0x4A6364: cmp     [eax], edx
0x4A6366: jz      short loc_4A6375
0x4A6368: mov     eax, [eax+4]
0x4A636B: test    eax, eax
0x4A636D: jnz     short loc_4A6364
0x4A636F: push    edx
0x4A6370: call    BSSimpleList_PushFront
0x4A6375: mov     al, 1
0x4A6377: retn    4
