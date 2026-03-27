0x4EC810: push    esi
0x4EC811: mov     esi, ecx
0x4EC813: mov     eax, [esi+8]
0x4EC816: cmp     eax, 5
0x4EC819: jz      short loc_4EC86E
0x4EC81B: cmp     eax, 4
0x4EC81E: jz      short loc_4EC827
0x4EC820: mov     dword ptr [esi+8], 4
0x4EC827: push    edi
0x4EC828: push    3
0x4EC82A: call    nullsub_returnTrue_0arg
0x4EC82F: mov     edi, [esi+2Ch]
0x4EC832: add     esp, 4
0x4EC835: test    edi, edi
0x4EC837: jz      short loc_4EC85C
0x4EC839: lea     eax, [edi+4]
0x4EC83C: push    eax; lpAddend
0x4EC83D: call    dword ptr ds:0A2807Ch
0x4EC843: test    eax, eax
0x4EC845: jnz     short loc_4EC855
0x4EC847: test    edi, edi
0x4EC849: jz      short loc_4EC855
0x4EC84B: mov     edx, [edi]
0x4EC84D: mov     eax, [edx]
0x4EC84F: push    1
0x4EC851: mov     ecx, edi
0x4EC853: call    eax
0x4EC855: mov     dword ptr [esi+2Ch], 0
0x4EC85C: push    2
0x4EC85E: call    nullsub_returnTrue_0arg
0x4EC863: add     esp, 4
0x4EC866: mov     dword ptr [esi+8], 5
0x4EC86D: pop     edi
0x4EC86E: pop     esi
0x4EC86F: retn
