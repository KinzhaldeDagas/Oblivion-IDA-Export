0x4D6640: push    esi
0x4D6641: mov     esi, ecx
0x4D6643: mov     eax, [esi]
0x4D6645: mov     edx, [eax+8Ch]
0x4D664B: push    1
0x4D664D: call    edx
0x4D664F: mov     eax, [esi]
0x4D6651: mov     edx, [eax+90h]
0x4D6657: push    1
0x4D6659: mov     ecx, esi
0x4D665B: call    edx
0x4D665D: mov     eax, [esi]
0x4D665F: mov     edx, [eax+150h]
0x4D6665: push    0
0x4D6667: mov     ecx, esi
0x4D6669: call    edx
0x4D666B: pop     esi
0x4D666C: retn
