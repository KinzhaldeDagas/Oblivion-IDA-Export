0x8C97F0: push    ebx
0x8C97F1: mov     ebx, [esp+4+arg_0]
0x8C97F5: test    bl, bl
0x8C97F7: push    edi
0x8C97F8: mov     edi, ecx
0x8C97FA: jz      short loc_8C9830
0x8C97FC: test    edi, edi
0x8C97FE: jz      short loc_8C9813
0x8C9800: mov     eax, [edi+8]
0x8C9803: test    eax, eax
0x8C9805: jz      short loc_8C9813
0x8C9807: mov     eax, [eax+10h]
0x8C980A: test    eax, eax
0x8C980C: jz      short loc_8C9813
0x8C980E: mov     eax, [eax+8]
0x8C9811: jmp     short loc_8C9815
0x8C9813: xor     eax, eax
0x8C9815: test    eax, eax
0x8C9817: jz      short loc_8C9867
0x8C9819: add     eax, 4
0x8C981C: push    eax; lpAddend
0x8C981D: call    dword ptr ds:0A28078h
0x8C9823: push    ebx
0x8C9824: mov     ecx, edi
0x8C9826: call    sub_8A26C0
0x8C982B: pop     edi
0x8C982C: pop     ebx
0x8C982D: retn    4
0x8C9830: test    edi, edi
0x8C9832: push    esi
0x8C9833: jz      short loc_8C9848
0x8C9835: mov     eax, [edi+8]
0x8C9838: test    eax, eax
0x8C983A: jz      short loc_8C9848
0x8C983C: mov     eax, [eax+10h]
0x8C983F: test    eax, eax
0x8C9841: jz      short loc_8C9848
0x8C9843: mov     esi, [eax+8]
0x8C9846: jmp     short loc_8C984A
0x8C9848: xor     esi, esi
0x8C984A: test    esi, esi
0x8C984C: jz      short loc_8C9866
0x8C984E: lea     eax, [esi+4]
0x8C9851: push    eax; lpAddend
0x8C9852: call    dword ptr ds:0A2807Ch
0x8C9858: test    eax, eax
0x8C985A: jnz     short loc_8C9866
0x8C985C: mov     edx, [esi]
0x8C985E: mov     eax, [edx]
0x8C9860: push    1
0x8C9862: mov     ecx, esi
0x8C9864: call    eax
0x8C9866: pop     esi
0x8C9867: push    ebx
0x8C9868: mov     ecx, edi
0x8C986A: call    sub_8A26C0
0x8C986F: pop     edi
0x8C9870: pop     ebx
0x8C9871: retn    4
