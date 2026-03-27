0x6C4810: add     dword ptr [ecx+8], 0FFFFFFFFh
0x6C4814: push    ebx
0x6C4815: mov     ebx, [ecx+8]
0x6C4818: push    ebp
0x6C4819: mov     ebp, [esp+8+arg_0]
0x6C481D: push    esi
0x6C481E: mov     esi, [ecx]
0x6C4820: push    edi
0x6C4821: mov     edi, [esi+ebp*4]
0x6C4824: cmp     edi, [esi+ebx*4]
0x6C4827: jz      short loc_6C4864
0x6C4829: test    edi, edi
0x6C482B: jz      short loc_6C4849
0x6C482D: lea     eax, [edi+4]
0x6C4830: push    eax; lpAddend
0x6C4831: call    dword ptr ds:0A2807Ch
0x6C4837: test    eax, eax
0x6C4839: jnz     short loc_6C4849
0x6C483B: test    edi, edi
0x6C483D: jz      short loc_6C4849
0x6C483F: mov     edx, [edi]
0x6C4841: mov     eax, [edx]
0x6C4843: push    1
0x6C4845: mov     ecx, edi
0x6C4847: call    eax
0x6C4849: mov     eax, [esi+ebx*4]
0x6C484C: test    eax, eax
0x6C484E: mov     [esi+ebp*4], eax
0x6C4851: jz      short loc_6C4864
0x6C4853: pop     edi
0x6C4854: pop     esi
0x6C4855: pop     ebp
0x6C4856: add     eax, 4
0x6C4859: pop     ebx
0x6C485A: mov     [esp+arg_0], eax
0x6C485E: jmp     dword ptr ds:0A28078h
0x6C4864: pop     edi
0x6C4865: pop     esi
0x6C4866: pop     ebp
0x6C4867: pop     ebx
0x6C4868: retn    4
