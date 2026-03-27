0x699508: mov     eax, [esi]
0x69950A: mov     edx, [eax+20h]
0x69950D: call    edx
0x69950F: test    eax, eax
0x699511: jz      short loc_69954E
0x699513: mov     edx, [eax]
0x699515: mov     ecx, eax
0x699517: mov     eax, [edx+190h]
0x69951D: call    eax
0x69951F: test    al, al
0x699521: jz      short loc_69954E
0x699523: lea     ebp, [esi-5Ch]
0x699526: test    ebp, ebp
0x699528: jz      short loc_699550
