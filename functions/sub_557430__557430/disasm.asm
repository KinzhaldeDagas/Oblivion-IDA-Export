0x557430: push    ebp
0x557431: mov     ebp, [esp+4+arg_4]
0x557435: push    edi
0x557436: mov     edi, [esp+8+arg_0]
0x55743A: cmp     edi, ebp
0x55743C: jz      short loc_557468
0x55743E: push    ebx
0x55743F: push    esi
0x557440: lea     esi, [edi+8]
0x557443: xor     ebx, ebx
0x557445: mov     eax, [esi]
0x557447: cmp     eax, ebx
0x557449: jz      short loc_557454
0x55744B: push    eax
0x55744C: call    FormHeapFree
0x557451: add     esp, 4
0x557454: mov     [esi], ebx
0x557456: mov     [esi+4], ebx
0x557459: mov     [esi+8], ebx
0x55745C: add     edi, 14h
0x55745F: add     esi, 14h
0x557462: cmp     edi, ebp
0x557464: jnz     short loc_557445
0x557466: pop     esi
0x557467: pop     ebx
0x557468: pop     edi
0x557469: pop     ebp
0x55746A: retn
