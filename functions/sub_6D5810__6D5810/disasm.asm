0x6D5810: push    ebx
0x6D5811: mov     ebx, [esp+4+arg_0]
0x6D5815: push    ebp
0x6D5816: push    esi
0x6D5817: mov     esi, ecx
0x6D5819: push    edi
0x6D581A: mov     edi, [esi+50h]
0x6D581D: xor     ebp, ebp
0x6D581F: cmp     edi, ebx
0x6D5821: jz      short loc_6D5854
0x6D5823: cmp     edi, ebp
0x6D5825: jz      short loc_6D5843
0x6D5827: lea     eax, [edi+4]
0x6D582A: push    eax; lpAddend
0x6D582B: call    dword ptr ds:0A2807Ch
0x6D5831: test    eax, eax
0x6D5833: jnz     short loc_6D5843
0x6D5835: cmp     edi, ebp
0x6D5837: jz      short loc_6D5843
0x6D5839: mov     edx, [edi]
0x6D583B: mov     eax, [edx]
0x6D583D: push    1
0x6D583F: mov     ecx, edi
0x6D5841: call    eax
0x6D5843: cmp     ebx, ebp
0x6D5845: mov     [esi+50h], ebx
0x6D5848: jz      short loc_6D5854
0x6D584A: add     ebx, 4
0x6D584D: push    ebx; lpAddend
0x6D584E: call    dword ptr ds:0A28078h
0x6D5854: mov     ecx, esi
0x6D5856: mov     [esi+3Ch], ebp
0x6D5859: mov     [esi+44h], ebp
0x6D585C: mov     [esi+40h], ebp
0x6D585F: mov     [esi+48h], ebp
0x6D5862: call    sub_6D5300
0x6D5867: pop     edi
0x6D5868: pop     esi
0x6D5869: pop     ebp
0x6D586A: pop     ebx
0x6D586B: retn    4
