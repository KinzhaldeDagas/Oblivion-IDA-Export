0x40C180: mov     eax, [esp+arg_0]
0x40C184: push    esi
0x40C185: push    1
0x40C187: push    eax
0x40C188: mov     esi, ecx
0x40C18A: call    sub_4040A0
0x40C18F: test    al, al
0x40C191: jz      short loc_40C1AB
0x40C193: mov     edx, [esi]
0x40C195: mov     eax, [edx+1Ch]
0x40C198: push    ebx
0x40C199: mov     ecx, esi
0x40C19B: call    eax
0x40C19D: mov     edx, [esi]
0x40C19F: mov     bl, al
0x40C1A1: mov     eax, [edx+18h]
0x40C1A4: mov     ecx, esi
0x40C1A6: call    eax
0x40C1A8: mov     al, bl
0x40C1AA: pop     ebx
0x40C1AB: pop     esi
0x40C1AC: retn    4
